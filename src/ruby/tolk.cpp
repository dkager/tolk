/**
 *  Product:        Tolk
 *  File:           Tolk.cpp
 *  Description:    Ruby C++ Native Extension
 *  Copyright:      (c) 2014-2018, Davy Kager <mail@davykager.nl>
 *  Ruby Tolk module written by Dawid Pieper <dawidpieper@o2.pl>
 *  License:        LGPLv3
 */

// Ruby Tolk module builds using Tolk code so it is not needed to include 'tolk.dll' library with the project
#ifndef UNICODE
#define _UNICODE
#define UNICODE
#endif
#define _EXPORTING
#include <string>
#include "../fsapi.c"
#include "../wineyes.c"
#include "../zt.c"
#include "../ScreenReaderDriver.h"
#include "../ScreenReaderDriverJAWS.cpp"
#include "../ScreenReaderDriverSA.cpp"
#include "../ScreenReaderDriverSAPI.cpp"
#include "../ScreenReaderDriverSNova.cpp"
#include "../ScreenReaderDriverWE.cpp"
#include "../ScreenReaderDriverZT.cpp"
#include "../java/com_davykager_tolk_Tolk.cpp"
#include <sapi.h>
#include "../ScreenReaderDriverNVDA.cpp"
#include "../tolk.cpp"
#include "rice/Data_Type.hpp"
#include "rice/Constructor.hpp"

using namespace Rice;

// Ruby Rice gem uses std::string to represent Ruby Strings while Tolk uses wchar_t, so it is needed to write some wrapper functions converting Unicoded wchar_t to std::string

BOOL rb_Tolk_Output(std::string str, BOOL interrupt) {
int sz = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
std::wstring widestr( sz, 0 );
MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &widestr[0], sz);
return Tolk_Output(widestr.c_str(), interrupt);
}

BOOL rb_Tolk_Speak(std::string str, BOOL interrupt) {
int sz = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
std::wstring widestr( sz, 0 );
MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &widestr[0], sz);
return Tolk_Speak(widestr.c_str(), interrupt);
}

BOOL rb_Tolk_Braille(std::string str) {
int sz = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
std::wstring widestr( sz, 0 );
MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &widestr[0], sz);
return Tolk_Braille(widestr.c_str());
}

std::string rb_Tolk_DetectScreenReader() {
const wchar_t *t = Tolk_DetectScreenReader();
// Ruby Rice library does not support returning of NULL values in std::string methods
if(t==NULL) {
std::string s("");
return s;
}
std::wstring ws(t);
int sz = WideCharToMultiByte(CP_UTF8, 0, &ws[0], ws.size(), NULL, 0, NULL, NULL);
std::string str(sz, 0);
WideCharToMultiByte(CP_UTF8, 0, &ws[0], (int)ws.size(), &str[0], sz, NULL, NULL);
return str;
}

void rb_tolk_define() {
Module mod = define_module("Tolk");
mod.define_module_function("load", &Tolk_Load);
mod.define_module_function("isLoaded", &Tolk_IsLoaded);
mod.define_module_function("unload", &Tolk_Unload);
mod.define_module_function("trySAPI", &Tolk_TrySAPI);
mod.define_module_function("preferSAPI", &Tolk_PreferSAPI);
mod.define_module_function("detectScreenReader", &rb_Tolk_DetectScreenReader);
mod.define_module_function("hasSpeech", &Tolk_HasSpeech);
mod.define_module_function("hasBraille", &Tolk_HasBraille);
mod.define_module_function("output", &rb_Tolk_Output);
mod.define_module_function("speak", &rb_Tolk_Speak);
mod.define_module_function("braille", &rb_Tolk_Braille);
mod.define_module_function("isSpeaking", &Tolk_IsSpeaking);
mod.define_module_function("silence", &Tolk_Silence);

}

extern "C" {
void Init_tolk(void) {
rb_tolk_define();
}
}	