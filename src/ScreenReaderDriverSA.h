/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSA.h
 *  Description:    Driver for the System Access screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREEN_READER_DRIVER_SA_H_
#define _SCREEN_READER_DRIVER_SA_H_

#include <windows.h>
#include "ScreenReaderDriver.h"

class ScreenReaderDriverSA : public ScreenReaderDriver {
public:
  ScreenReaderDriverSA();
  ~ScreenReaderDriverSA();
  bool Speak(const wchar_t *str, bool interrupt);
  bool Braille(const wchar_t *str);
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt);
private:
  typedef bool (__stdcall *SA_SayW)(const wchar_t*);
  typedef bool (__stdcall *SA_BrlShowTextW)(const wchar_t*);
  typedef bool (__stdcall *SA_StopAudio)();
  typedef bool (__stdcall *SA_IsRunning)();
  HINSTANCE controller;
  SA_SayW sa_SayW;
  SA_BrlShowTextW sa_BrlShowTextW;
  SA_StopAudio sa_StopAudio;
  SA_IsRunning sa_IsRunning;
};

#endif // _SCREEN_READER_DRIVER_SA_H_
