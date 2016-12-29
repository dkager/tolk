@echo off

set PATH=%PATH%;VS140COMNTOOLS..\..\..\VC\bin\amd64
vcvars64.bat

rc /nologo /n /fo bin\TolkDotNet.res src\dotnet\TolkDotNet.rc

csc /nologo /optimize /target:library /win32res:bin\TolkDotNet.res ^
/out:bin\TolkDotNet.dll /warn:4 src\dotnet\Tolk.cs
