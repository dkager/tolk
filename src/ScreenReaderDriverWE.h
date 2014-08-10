/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverWE.h
 *  Description:    Driver for the Window-Eyes screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREEN_READER_DRIVER_WE_H_
#define _SCREEN_READER_DRIVER_WE_H_

#include "wineyes.h"
#include "ScreenReaderDriver.h"

class ScreenReaderDriverWE : public ScreenReaderDriver {
public:
  ScreenReaderDriverWE();
  ~ScreenReaderDriverWE();

public:
  bool Speak(const wchar_t *str, bool interrupt);
  bool Braille(const wchar_t *str);
  bool IsSpeaking() { return false; }
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt);

private:
  void Initialize();
  void Finalize();
  bool IsRunning();

private:
  _Application *controller;
  _Speech *speech;
  _Braille *braille;
  VARIANT varOpt;
};

#endif // _SCREEN_READER_DRIVER_WE_H_
