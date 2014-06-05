;;;
 ;  Product:        Tolk
 ;  File:           ConsoleApp.au3
 ;  Description:    AutoIt console application example.
 ;  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 ;  License:        LGPLv3
 ;  Depends:        Tolk.dll
 ;;

;; See README.md for general information.
;; See Tolk.h for full documentation of all functions.

#include "..\..\src\autoit\Tolk.au3"

ConsoleWrite("Tolk -- AutoIt Console App Example" & @CRLF)

ConsoleWrite("Initializing Tolk..." & @CRLF)
;; Tolk will also initialize COM
;; if it has not been initialized on the calling thread
Tolk_Load();

ConsoleWrite("Querying for the active screen reader driver..." & @CRLF)
Local Const $name = Tolk_DetectScreenReader();
If $name <> Null Then
  ConsoleWrite("The active screen reader driver is: " & $name & @CRLF)
Else
  ConsoleWrite("None of the supported screen readers is running" & @CRLF)
EndIf

If Tolk_HasSpeech() Then
  ConsoleWrite("This screen reader driver supports speech" & @CRLF)
EndIf
If Tolk_HasBraille() Then
  ConsoleWrite("This screen reader driver supports braille" & @CRLF)
EndIf

ConsoleWrite("Let's output some text..." & @CRLF)
If Not Tolk_Output("Hello, World!") Then
  ConsoleWrite("Failed to output text" & @CRLF)
EndIf

ConsoleWrite("Finalizing Tolk..." & @CRLF)
;; Tolk will also try to uninitialize COM
Tolk_Unload();

ConsoleWrite("Done!" & @CRLF)
