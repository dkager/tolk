@echo off

javac -g:none -h src\java src\java\com\davykager\tolk\Tolk.java
jar cf bin\Tolk.jar -C src\java com\davykager\tolk\Tolk.class
