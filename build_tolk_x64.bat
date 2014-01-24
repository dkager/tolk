@echo off

cl /nologo /c /Od /Ot /Oy /EHsc /GF /GL /GR- /Gy /MD /vmb /vms /MP /W3 /WL /DUNICODE /D_DLL /D_UNICODE /DWIN64 /DNDEBUG /D_WINDOWS /D_USRDLL /D_WINDLL /D_EXPORTING /Fobin\x64\ src\*.c src\*.cpp src\java\*.cpp

rc /nologo /n /d _WIN64 /fo bin\x64\Tolk.res src\Tolk.rc

link /nologo /DLL /DYNAMICBASE /INCREMENTAL:NO /LTCG /MACHINE:X64 /MANIFEST:NO /NXCOMPAT /OPT:REF /OPT:ICF /VERSION:"1.0" /OUT:bin\x64\Tolk.dll User32.Lib Ole32.Lib OleAut32.Lib bin\x64\*.obj bin\x64\Tolk.res

del bin\x64\*.obj bin\x64\Tolk.res
