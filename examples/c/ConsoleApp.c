/**
 *  Product:        Tolk
 *  File:           ConsoleApp.c
 *  Description:    C console application example.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 *  Depends:        Tolk.dll, Tolk.lib
 */

// See README.md for general information.
// See Tolk.h for full documentation of all functions.

#define UNICODE

#include <stdio.h>
#include "..\..\src\Tolk.h"

void main() {
  const wchar_t *name = NULL;

  wprintf_s(L"Tolk -- C Console App Example\n");

  wprintf_s(L"Initializing Tolk...\n");
  // Tolk will also initialize COM
  // if it has not been initialized on the calling thread
  Tolk_Load();

  wprintf_s(L"Querying for the active screen reader driver...\n");
  name = Tolk_DetectScreenReader();
  if (name) {
    wprintf_s(L"The active screen reader driver is: %s\n", name);
  }
  else {
    wprintf_s(L"None of the supported screen readers is running\n");
  }

  if (Tolk_HasSpeech()) {
    wprintf_s(L"This screen reader driver supports speech\n");
  }
  if (Tolk_HasBraille()) {
    wprintf_s(L"This screen reader driver supports braille\n");
  }

  wprintf_s(L"Let's output some text...\n");
  // C does not have default parameter values (compile as C++)
  if (!Tolk_Output(L"Hello, World!", false)) {
    wprintf_s(L"Failed to output text\n");
  }

  wprintf_s(L"Finalizing Tolk...\n");
  // Tolk will also try to uninitialize COM
  Tolk_Unload();

  wprintf_s(L"Done!\n");
}
