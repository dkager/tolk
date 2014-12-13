/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverJAWS.cpp
 *  Description:    Driver for the JAWS screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverJAWS.h"
#include <string>

ScreenReaderDriverJAWS::ScreenReaderDriverJAWS() :
  ScreenReaderDriver(L"JAWS", true, true),
  controller(NULL)
{
  if (IsRunning()) Initialize();
}

ScreenReaderDriverJAWS::~ScreenReaderDriverJAWS() {
  Finalize();
}

bool ScreenReaderDriverJAWS::Speak(const wchar_t *str, bool interrupt) {
  const BSTR bstr = SysAllocString(str);
  VARIANT_BOOL result = VARIANT_FALSE;
  const VARIANT_BOOL flush = interrupt ? VARIANT_TRUE : VARIANT_FALSE;
  const bool succeeded = SUCCEEDED(controller->SayString(bstr, flush, &result));
  SysFreeString(bstr);
  return (succeeded && result == VARIANT_TRUE);
}

bool ScreenReaderDriverJAWS::Braille(const wchar_t *str) {
  std::wstring wstr(str);
  std::wstring::size_type i = wstr.find_first_of(L"\"");
  while (i != std::wstring::npos) {
    wstr[i] = L'\'';
    i = wstr.find_first_of(L"\"", i + 1);
  }
  wstr.insert(0, L"BrailleString(\"");
  wstr.append(L"\")");
  const BSTR bstr = SysAllocString(wstr.c_str());
  VARIANT_BOOL result = VARIANT_FALSE;
  const bool succeeded = SUCCEEDED(controller->RunFunction(bstr, &result));
  SysFreeString(bstr);
  return (succeeded && result == VARIANT_TRUE);
}

bool ScreenReaderDriverJAWS::Silence() {
  return SUCCEEDED(controller->StopSpeech());
}

bool ScreenReaderDriverJAWS::IsActive() {
  if (!IsRunning()) {
    Finalize();
    return false;
  }
  if (!controller) Initialize();
  return (!!controller);
}

bool ScreenReaderDriverJAWS::Output(const wchar_t *str, bool interrupt) {
  // Beware short-circuiting.
  const bool speak = Speak(str, interrupt);
  const bool braille = Braille(str);
  return (speak || braille);
}

void ScreenReaderDriverJAWS::Initialize() {
  if (FAILED(CoCreateInstance(CLSID_JawsApi, NULL, CLSCTX_INPROC_SERVER, IID_IJawsApi, (void **)&controller))) {
    // This is here for symmetry with other drivers
    // and so compiling /analyze won't throw a warning.
    return;
  }
}

void ScreenReaderDriverJAWS::Finalize() {
  if (controller) {
    controller->Release();
    controller = NULL;
  }
}
