@echo off

cd src\ruby
ruby extconf.rb
make
cd ..\..
move src\ruby\tolk.so bin\tolk.so
