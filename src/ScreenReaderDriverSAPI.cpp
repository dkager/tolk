/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSAPI.cpp
 *  Description:    Driver for the Microsoft Speech API (SAPI).
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverSAPI.h"

ScreenReaderDriverSAPI::ScreenReaderDriverSAPI() :
  ScreenReaderDriver(L"SAPI", true, false),
  controller(NULL)
{
  Initialize();
}

ScreenReaderDriverSAPI::~ScreenReaderDriverSAPI() {
  Finalize();
}

bool ScreenReaderDriverSAPI::Speak(const wchar_t *str, bool interrupt) {
  if (IsActive()) {
    DWORD flags = SPF_ASYNC | SPF_IS_NOT_XML;
    if (interrupt) {
      flags |= SPF_PURGEBEFORESPEAK;
    }
    return SUCCEEDED(controller->Speak(str, flags, NULL));
  }
  return false;
}

bool ScreenReaderDriverSAPI::IsSpeaking() {
  if (IsActive()) {
    SPVOICESTATUS status;
    if (FAILED(controller->GetStatus(&status, NULL))) {
      return false;
    }
    return status.dwRunningState == SPRS_IS_SPEAKING;
  }
  return false;
}

bool ScreenReaderDriverSAPI::Silence() {
  if (IsActive()) {
    const DWORD flags = SPF_ASYNC | SPF_PURGEBEFORESPEAK | SPF_IS_NOT_XML;
    return SUCCEEDED(controller->Speak(NULL, flags, NULL));
  }
  return false;
}

void ScreenReaderDriverSAPI::Initialize() {
  if (FAILED(CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_INPROC_SERVER, IID_ISpVoice, (void **)&controller))) {
    // This is here for symmetry with other drivers
    // and so compiling /analyze won't throw a warning.
    return;
  }
}

void ScreenReaderDriverSAPI::Finalize() {
  if (controller) {
    controller->Release();
    controller = NULL;
  }
}
