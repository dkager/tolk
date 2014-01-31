@echo off
rc /nologo /n /fo bin\TolkDotNet.res src\dotnet\TolkDotNet.rc
csc /nologo /optimize /target:library /win32res:bin\TolkDotNet.res /out:bin\TolkDotNet.dll /warn:4 src\dotnet\Tolk.cs
del bin\TolkDotNet.res
