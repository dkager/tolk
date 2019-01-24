###
 #  Product:        Tolk
 #  File:           extconf.rb
 #  Description:    Tolk Ruby Library makefile generator
 #  Copyright:      (c) 2014-2018, Davy Kager <mail@davykager.nl>
 # Ruby Tolk module written by Dawid Pieper <dawidpieper@o2.pl>
 #  License:        LGPLv3
 ##

require "rubygems"
begin
puts("Generating Tolk makefile for Ruby Version #{RUBY_VERSION} and platform #{RUBY_PLATFORM}")
require 'mkmf-rice'
rescue LoadError
# if 'Rice' is not installed, try to install it
Gem.install("rice")
require 'mkmf-rice'
end
abort "Ole32 is missing." unless find_library('Ole32','OleRun')
abort "OleAut32 is missing." unless find_library('OleAut32','SysAllocString')
abort "Imm32 is missing." unless find_library('Imm32','ImmGetContext')
abort "WinMM is missing." unless find_library('WinMM','timeGetTime')
# sapi is not the part of MinGW build-tools included with Ruby
# Therefore the code tries to locate it both in standard LIB DIRs and in the current location
unless find_library('SAPI',nil)
# Try to locate the library in common Directories
suc=false
pf=nil
paths=[
'C:\Program Files (X86)\Microsoft SDKs\Windows',
'C:\Program Files\Microsoft SDKs\Windows'
]
paths.each {|d| pf=d if pf==nil and FileTest.exists?(d) }
if pf!=nil
pf.delete(".")
pf.delete("..")
for d in Dir.entries(pf)
if ![".",".."].include?(d)
pth=pf+"\\"+d+"\\lib"
if FileTest.exists?(pth+"\\sapi.lib")
suc=find_library("SAPI",nil,"\"#{pth.gsub("\\","/")}\"")
break
end
end
end
end
abort "SAPI is missing." if !suc
end
create_makefile 'tolk'