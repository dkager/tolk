@echo off
javac -g:none src\java\com\davykager\tolk\Tolk.java
javah -o src\java\TolkJNI.h -jni -classpath src\java com.davykager.tolk.Tolk
jar cf bin\Tolk.jar -C src\java com\davykager\tolk\Tolk.class
del src\java\com\davykager\tolk\Tolk.class
