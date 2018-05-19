@echo off

call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"

rc /nologo /n /fo bin\TolkDotNet.res src\dotnet\TolkDotNet.rc

csc /nologo /optimize /target:library /win32res:bin\TolkDotNet.res ^
/out:bin\TolkDotNet.dll /warn:4 src\dotnet\Tolk.cs
