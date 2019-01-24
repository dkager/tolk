###
 #  Product:        Tolk
 #  File:           extconf.rb
 #  Description:    Tolk Ruby Library makefile generator
 #  Copyright:      (c) 2014-2018, Davy Kager <mail@davykager.nl>
 # Ruby Tolk module written by Dawid Pieper <dawidpieper@o2.pl>
 #  License:        LGPLv3
 ##

require "mkmf-rice"
abort "Ole32 is missing." unless find_library('Ole32','OleRun')
abort "OleAut32 is missing." unless find_library('OleAut32','SysAllocString')
abort "Imm32 is missing." unless find_library('Imm32','ImmGetContext')
abort "WinMM is missing." unless find_library('WinMM','timeGetTime')
# sapi is not the part of MinGW build-tools included with Ruby
# Therefore the code tries to locate it both in standard LIB DIRs and in the current location
unless find_library('SAPI','_CLSID_SpVoice')
if FileTest.exists?("sapi.lib")
$LIBS+=" sapi.lib"
else
abort "SAPI is missing." 
end
end
create_makefile 'tolk'