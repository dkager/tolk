@echo off
jar xf Tolk.jar com\davykager\tolk\Tolk.class
javac ConsoleApp.java
jar cfe ConsoleApp.jar ConsoleApp ConsoleApp.class com\davykager\tolk\Tolk.class
rmdir /S /Q com
del ConsoleApp.class
