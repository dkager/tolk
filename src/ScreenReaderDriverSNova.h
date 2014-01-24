/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSNova.h
 *  Description:    Driver for the SuperNova screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREENREADER_DRIVER_SNOVA_H_
#define _SCREENREADER_DRIVER_SNOVA_H_

#include <windows.h>
#include "ScreenReaderDriver.h"

class ScreenReaderDriverSNova : public ScreenReaderDriver {
public:
  ScreenReaderDriverSNova();
  ~ScreenReaderDriverSNova();
  bool Speak(const wchar_t *str, bool interrupt = false);
  bool Braille(const wchar_t *str) { return false; }
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt = false) { return Speak(str, interrupt); }
private:
  typedef DWORD (*DolAccess_GetSystem)();
  typedef DWORD (*DolAccess_Action)(int);
  typedef DWORD (*DolAccess_Command)(const wchar_t*, int, int);
  HINSTANCE controller;
  DolAccess_GetSystem dolAccess_GetSystem;
  DolAccess_Action dolAccess_Action;
  DolAccess_Command dolAccess_Command;
};

#endif // _SCREENREADER_DRIVER_SNOVA_H_
