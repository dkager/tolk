@echo off

call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\amd64\vcvars64.bat"

rc /nologo /n /fo bin\TolkDotNet.res src\dotnet\TolkDotNet.rc

csc /nologo /optimize /target:library /win32res:bin\TolkDotNet.res ^
/out:bin\TolkDotNet.dll /warn:4 src\dotnet\Tolk.cs
