/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverZT.cpp
 *  Description:    Driver for the ZoomText screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverZT.h"

ScreenReaderDriverZT::ScreenReaderDriverZT() :
  ScreenReaderDriver(L"ZoomText", true, false),
  controller(NULL),
  speech(NULL)
{
  if (IsRunning()) Initialize();
}

ScreenReaderDriverZT::~ScreenReaderDriverZT() {
  Finalize();
}

bool ScreenReaderDriverZT::Speak(const wchar_t *str, bool interrupt) {
  const BSTR bstr = SysAllocString(str);
  IVoice *voice;
  if (FAILED(speech->get_CurrentVoice(&voice))) return false;
  if (interrupt && FAILED(voice->put_AllowInterrupt(VARIANT_TRUE))) {
    voice->Release();
    return false;
  }
  const bool succeeded = SUCCEEDED(voice->Speak(bstr));
  SysFreeString(bstr);
  if (interrupt && FAILED(voice->put_AllowInterrupt(VARIANT_FALSE))) {
    voice->Release();
    return false;
  }
  voice->Release();
  return succeeded;
}

bool ScreenReaderDriverZT::IsSpeaking() {
  IVoice *voice;
  if (FAILED(speech->get_CurrentVoice(&voice))) return false;
  VARIANT_BOOL result = VARIANT_FALSE;
  const bool succeeded = SUCCEEDED(voice->get_Speaking(&result));
  voice->Release();
  return (succeeded && result == VARIANT_TRUE);
}

bool ScreenReaderDriverZT::Silence() {
  IVoice *voice;
  if (FAILED(speech->get_CurrentVoice(&voice))) return false;
  const bool succeeded = SUCCEEDED(voice->Stop());
  voice->Release();
  return succeeded;
}

bool ScreenReaderDriverZT::IsActive() {
  if (!IsRunning()) {
    Finalize();
    return false;
  }
  if (!controller) Initialize();
  return (!!controller); 
}

void ScreenReaderDriverZT::Initialize() {
  if (FAILED(CoCreateInstance(CLSID_ZoomText, NULL, CLSCTX_LOCAL_SERVER, IID_IZoomText2, (void **)&controller)))
    return;
  if (FAILED(controller->get_Speech(&speech))) Finalize();
}

void ScreenReaderDriverZT::Finalize() {
  if (speech) {
    speech->Release();
    speech = NULL;
  }
  if (controller) {
    controller->Release();
    controller = NULL;
  }
}

bool ScreenReaderDriverZT::IsRunning() {
  return (!!FindWindow(L"ZXSPEECHWNDCLASS", L"ZoomText Speech Processor"));
}
