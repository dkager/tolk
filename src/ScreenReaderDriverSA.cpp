/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSA.cpp
 *  Description:    Driver for the System Access screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverSA.h"

ScreenReaderDriverSA::ScreenReaderDriverSA() :
  ScreenReaderDriver(L"System Access", true, true),
  #ifdef _WIN64
  controller(LoadLibrary(L"SAAPI64.dll")),
  #else
  controller(LoadLibrary(L"SAAPI32.dll")),
  #endif
  sa_SayW(NULL),
  sa_BrlShowTextW(NULL),
  sa_StopAudio(NULL),
  sa_IsRunning(NULL)
{
  if (controller) {
    sa_SayW = (SA_SayW)GetProcAddress(controller, "SA_SayW");
    sa_BrlShowTextW = (SA_BrlShowTextW)GetProcAddress(controller, "SA_BrlShowTextW");
    sa_StopAudio = (SA_StopAudio)GetProcAddress(controller, "SA_StopAudio");
    sa_IsRunning = (SA_IsRunning)GetProcAddress(controller, "SA_IsRunning");
  }
}

ScreenReaderDriverSA::~ScreenReaderDriverSA() {
  if (controller) FreeLibrary(controller);
}

bool ScreenReaderDriverSA::Speak(const wchar_t *str, bool interrupt) {
  if (interrupt && !Silence()) return false;
  if (sa_SayW) return sa_SayW(str);
  return false;
}

bool ScreenReaderDriverSA::Braille(const wchar_t *str) {
  if (sa_BrlShowTextW) return sa_BrlShowTextW(str);
  return false;
}

bool ScreenReaderDriverSA::Silence() {
  if (sa_StopAudio) return sa_StopAudio();
  return false;
}

bool ScreenReaderDriverSA::IsActive() {
  if (sa_IsRunning) return sa_IsRunning();
  return false;
}

bool ScreenReaderDriverSA::Output(const wchar_t *str, bool interrupt) {
  // Beware short-circuiting.
  const bool speak = Speak(str, interrupt);
  const bool braille = Braille(str);
  return (speak || braille);
}
