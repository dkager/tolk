/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverWE.cpp
 *  Description:    Driver for the Window-Eyes screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverWE.h"

ScreenReaderDriverWE::ScreenReaderDriverWE() :
  ScreenReaderDriver(L"Window-Eyes", true, true),
  controller(NULL),
  speech(NULL),
  braille(NULL)
{
  if (IsRunning()) Initialize();
  varOpt.vt = VT_ERROR;
  varOpt.scode = DISP_E_PARAMNOTFOUND; 
}

ScreenReaderDriverWE::~ScreenReaderDriverWE() {
  Finalize();
}

bool ScreenReaderDriverWE::Speak(const wchar_t *str, bool interrupt) {
  if (!controller) return false;
  if (interrupt && !Silence()) return false;
  const BSTR bstr = SysAllocString(str);
  const bool succeeded = SUCCEEDED(speech->Speak(bstr, varOpt));
  SysFreeString(bstr);
  return succeeded;
}

bool ScreenReaderDriverWE::Braille(const wchar_t *str) {
  if (!controller) return false;
  const BSTR bstr = SysAllocString(str);
  const bool succeeded = SUCCEEDED(braille->Display(bstr, varOpt, varOpt));
  SysFreeString(bstr);
  return succeeded;
}

bool ScreenReaderDriverWE::Silence() {
  if (!controller) return false;
  return SUCCEEDED(speech->Silence());
}

bool ScreenReaderDriverWE::IsActive() {
  if (!IsRunning()) {
    Finalize();
    return false;
  }
  if (!controller) Initialize();
  return (!!controller);
}

bool ScreenReaderDriverWE::Output(const wchar_t *str, bool interrupt) {
  if (interrupt && !Silence()) return false;
  const BSTR bstr = SysAllocString(str);
  // Beware short-circuiting.
  const bool speakSucceeded = SUCCEEDED(speech->Speak(bstr, varOpt));
  const bool brailleSucceeded = SUCCEEDED(braille->Display(bstr, varOpt, varOpt));
  SysFreeString(bstr);
  return (speakSucceeded || brailleSucceeded);
}

void ScreenReaderDriverWE::Initialize() {
  if (controller || FAILED(CoCreateInstance(CLSID_Application, NULL, CLSCTX_INPROC_SERVER, IID__Application, (void **)&controller)))
    return;
  if (FAILED(controller->get_Speech(&speech)) || FAILED(controller->get_Braille(&braille))) {
    Finalize();
    return;
  }
}

void ScreenReaderDriverWE::Finalize() {
  if (braille) {
    braille->Release();
    braille = NULL;
  }
  if (speech) {
    speech->Release();
    speech = NULL;
  }
  if (controller) {
    controller->Release();
    controller = NULL;
  }
}
