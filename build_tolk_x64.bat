@echo off

set PATH=%PATH%;VS140COMNTOOLS..\..\..\VC\bin\amd64
vcvars64.bat

cl /nologo /c /O2 /EHsc /GL /GR- /GS- /Gw /LD /MP /W4 /WL ^
/D_EXPORTING /D_UNICODE /D_WINDOWS /D_WITH_JNI /DNDEBUG /DWIN64 /DUNICODE ^
/Fobin\x64\ src\*.c src\*.cpp src\java\*.cpp

rc /nologo /n /d _WIN64 /fo bin\x64\Tolk.res src\Tolk.rc

link /nologo /DLL /INCREMENTAL:NO /LTCG /MACHINE:X64 /MANIFEST:NO ^
/OPT:REF /OPT:ICF /VERSION:"1.0" /OUT:bin\x64\Tolk.dll ^
User32.Lib Ole32.Lib OleAut32.Lib bin\x64\*.obj bin\x64\Tolk.res
