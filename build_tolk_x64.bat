@echo off

cl /nologo /c /O2 /EHsc /GL /GR- /MD /vmb /vms /MP /W4 /WL /D_DLL /D_EXPORTING /D_UNICODE /D_USRDLL /D_WINDLL /D_WINDOWS /D_WITH_JNI /DNDEBUG /DWIN64 /DUNICODE /Fobin\x64\ src\*.c src\*.cpp src\java\*.cpp src\reaper\*.cpp

rc /nologo /n /d _WIN64 /fo bin\x64\Tolk.res src\Tolk.rc

link /nologo /DLL /DYNAMICBASE /INCREMENTAL:NO /LTCG /MACHINE:X64 /MANIFEST:NO /NXCOMPAT /OPT:REF /OPT:ICF /VERSION:"1.0" /OUT:bin\x64\Tolk.dll User32.Lib Ole32.Lib OleAut32.Lib bin\x64\*.obj bin\x64\Tolk.res

del bin\x64\*.obj bin\x64\Tolk.exp bin\x64\Tolk.res
