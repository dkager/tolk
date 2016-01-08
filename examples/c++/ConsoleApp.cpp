/**
 *  Product:        Tolk
 *  File:           ConsoleApp.cpp
 *  Description:    C++ console application example.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 *  Depends:        Tolk.dll, Tolk.lib
 */

// See README.md for general information.
// See Tolk.h for full documentation of all functions.

#include <iostream>
#include "..\..\src\Tolk.h"

using namespace std;

void main() {
  wcout << L"Tolk -- C++ Console App Example" << endl;

  wcout << L"Initializing Tolk..." << endl;
  // Tolk will also initialize COM
  // if it has not been initialized on the calling thread
  Tolk_Load();

  wcout << L"Querying for the active screen reader driver..." << endl;
  const wchar_t *name = Tolk_DetectScreenReader();
  if (name) {
    wcout << L"The active screen reader driver is: " << name << endl;
  }
  else {
    wcout << L"None of the supported screen readers is running" << endl;
  }

  if (Tolk_HasSpeech()) {
    wcout << L"This screen reader driver supports speech" << endl;
  }
  if (Tolk_HasBraille()) {
    wcout << L"This screen reader driver supports braille" << endl;
  }

  wcout << L"Let's output some text..." << endl;
  if (!Tolk_Output(L"Hello, World!")) {
    wcout << L"Failed to output text" << endl;
  }

  wcout << L"Finalizing Tolk..." << endl;
  // Tolk will also try to uninitialize COM
  Tolk_Unload();

  wcout << L"Done!" << endl;
}
