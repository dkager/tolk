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
  if (IsActive()) {
    const BSTR bstr = SysAllocString(str);
    IVoice *voice;
    if (FAILED(speech->get_CurrentVoice(&voice))) {
      Finalize();
      return false;
    }
    if (interrupt && FAILED(voice->put_AllowInterrupt(VARIANT_TRUE))) {
      voice->Release();
      Finalize();
      return false;
    }
    const bool succeeded = SUCCEEDED(voice->Speak(bstr));
    voice->Release();
    SysFreeString(bstr);
    if (interrupt && FAILED(voice->put_AllowInterrupt(VARIANT_FALSE))) {
      Finalize();
      return false;
    }
    return succeeded;
  }
  return false;
}

bool ScreenReaderDriverZT::IsSpeaking() {
  if (IsActive()) {
    IVoice *voice;
    if (FAILED(speech->get_CurrentVoice(&voice))) {
      Finalize();
      return false;
    }
    VARIANT_BOOL result = VARIANT_FALSE;
    const bool succeeded = SUCCEEDED(voice->get_Speaking(&result));
    voice->Release();
    return (succeeded && result == VARIANT_TRUE);
  }
  return false;
}

bool ScreenReaderDriverZT::Silence() {
  if (IsActive()) {
    IVoice *voice;
    if (FAILED(speech->get_CurrentVoice(&voice))) {
      Finalize();
      return false;
    }
    const bool succeeded = SUCCEEDED(voice->Stop());
    voice->Release();
    return succeeded;
  }
  return false;
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
