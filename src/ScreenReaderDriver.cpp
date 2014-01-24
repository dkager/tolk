/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriver.cpp
 *  Description:    Generic screen reader driver.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriver.h"

ScreenReaderDriver::ScreenReaderDriver(const wchar_t *screenReaderName, bool speech, bool braille) :
  name(screenReaderName),
  hasSpeech(speech),
  hasBraille(braille)
{}
