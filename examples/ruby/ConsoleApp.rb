###
 #  Product:        Tolk
 #  File:           ConsoleApp.rb
 #  Description:    Ruby console application example.
 #  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 #  License:        LGPLv3
 #  Depends:        Tolk.so
 ##

## See README.md for general information.
## See Tolk.h for full documentation of all functions.
## Note that for Python the functions are provided in module Tolk,
## that the prefix Tolk_ has been removed from the names,
## and that the first letters of names are lowercase.

require("tolk")

puts("Tolk -- Ruby Console App Example")

puts("Initializing Tolk...")
## Tolk will also initialize COM
## if it has not been initialized on the calling thread
Tolk.load

puts("Querying for the active screen reader driver...")
name = Tolk.detectScreenReader
if name!=""
  puts("The active screen reader driver is: " + name)
else
  puts("None of the supported screen readers is running\n")
end

if Tolk.hasSpeech
  puts("This screen reader driver supports speech")
end
if Tolk.hasBraille
  puts("This screen reader driver supports braille")
end

puts("Let's output some text...")
if !Tolk.output("Hello, World!", 0)
  puts("Failed to output text")
end

puts("Finalizing Tolk...")
## Tolk will also try to uninitialize COM
Tolk.unload

puts("Done!")
