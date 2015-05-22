###
 #  Product:        Tolk
 #  File:           ConsoleApp.py
 #  Description:    Python console application example.
 #  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 #  License:        LGPLv3
 #  Depends:        Tolk.dll, Tolk.pyc
 ##

## See README.md for general information.
## See Tolk.h for full documentation of all functions.
## Note that for Python the functions are provided in module Tolk,
## that the prefix Tolk_ has been removed from the names,
## and that the names are lower_case_with_underscores.

import Tolk

print("Tolk -- Python Console App Example")

print("Initializing Tolk...")
## Tolk will also initialize COM
## if it has not been initialized on the calling thread
Tolk.load()

print("Querying for the active screen reader driver...")
name = Tolk.detect_screen_reader()
if name:
  print("The active screen reader driver is: " + name)
else:
  print("None of the supported screen readers is running\n")

if Tolk.has_speech():
  print("This screen reader driver supports speech")
if Tolk.has_braille():
  print("This screen reader driver supports braille")

print("Let's output some text...")
if not Tolk.output("Hello, World!"):
  print("Failed to output text")

print("Finalizing Tolk...")
## Tolk will also try to uninitialize COM
Tolk.unload()

print("Done!\n")
