;;;
 ;  Product:        Tolk
 ;  File:           ConsoleApp.pb
 ;  Description:    PureBasic console application example.
 ;  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 ;  License:        LGPLv3
 ;  Depends:        Tolk.dll
 ;;

;; See README.md for general information.
;; See Tolk.h for full documentation of all functions.
;; Note that for PureBasic the functions are provided as procedures in module Tolk,
;; and that the prefix Tolk_ has been removed from the names.

XIncludeFile "..\..\src\purebasic\Tolk.pb"

If Not OpenConsole()
  End 1
EndIf
PrintN("Tolk -- PureBasic Console App Example")

PrintN("Initializing Tolk...")
;; Tolk will also initialize COM
;; if it has not been initialized on the calling thread
Tolk::Load()

PrintN("Querying for the active screen reader driver...")
name.s = Tolk::DetectScreenReader()
If name
  PrintN("The active screen reader driver is: " + name)
Else
  PrintN("None of the supported screen readers is running")
EndIf

If Tolk::HasSpeech()
  PrintN("This screen reader driver supports speech")
EndIf
If Tolk::HasBraille()
  PrintN("This screen reader driver supports braille")
EndIf

PrintN("Let's output some text...")
If Not Tolk::Output("Hello, World!")
  PrintN("Failed to output text")
EndIf

PrintN("Finalizing Tolk...")
;; Tolk will also try to uninitialize COM
Tolk::Unload()

PrintN("Done!")
CloseConsole()
