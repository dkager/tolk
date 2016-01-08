/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverNVDA.cpp
 *  Description:    Driver for the NVDA screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

// The NVDA Project provides a header and libraries,
// but we don't use these in order to support running even if the DLL is missing.

#include "ScreenReaderDriverNVDA.h"

ScreenReaderDriverNVDA::ScreenReaderDriverNVDA() :
  ScreenReaderDriver(L"NVDA", true, true),
  #ifdef _WIN64
  controller(LoadLibrary(L"nvdaControllerClient64.dll")),
  #else
  controller(LoadLibrary(L"nvdaControllerClient32.dll")),
  #endif
  nvdaController_speakText(NULL),
  nvdaController_brailleMessage(NULL),
  nvdaController_cancelSpeech(NULL),
  nvdaController_testIfRunning(NULL)
{
  if (controller) {
    nvdaController_speakText = (NVDAController_speakText)GetProcAddress(controller, "nvdaController_speakText");
    nvdaController_brailleMessage = (NVDAController_brailleMessage)GetProcAddress(controller, "nvdaController_brailleMessage");
    nvdaController_cancelSpeech = (NVDAController_cancelSpeech)GetProcAddress(controller, "nvdaController_cancelSpeech");
    nvdaController_testIfRunning = (NVDAController_testIfRunning)GetProcAddress(controller, "nvdaController_testIfRunning");
  }
}

ScreenReaderDriverNVDA::~ScreenReaderDriverNVDA() {
  if (controller) FreeLibrary(controller);
}

bool ScreenReaderDriverNVDA::Speak(const wchar_t *str, bool interrupt) {
  if (interrupt && !Silence()) return false;
  if (nvdaController_speakText) return (nvdaController_speakText(str) == 0);
  return false;
}

bool ScreenReaderDriverNVDA::Braille(const wchar_t *str) {
  if (nvdaController_brailleMessage) return (nvdaController_brailleMessage(str) == 0);
  return false;
}

bool ScreenReaderDriverNVDA::Silence() {
  if (nvdaController_cancelSpeech) return (nvdaController_cancelSpeech() == 0);
  return false;
}

bool ScreenReaderDriverNVDA::IsActive() {
  // This needs an extra check because System Access pretends to be NVDA.
  if (nvdaController_testIfRunning) return  (!!FindWindow(L"wxWindowClassNR", L"NVDA") && nvdaController_testIfRunning() == 0);
  return false;
}

bool ScreenReaderDriverNVDA::Output(const wchar_t *str, bool interrupt) {
  // Beware short-circuiting.
  const bool speak = Speak(str, interrupt);
  const bool braille = Braille(str);
  return (speak || braille);
}
