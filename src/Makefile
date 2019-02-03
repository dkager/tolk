!ifndef OUTDIR
OUTDIR = $(MAKEDIR)
!endif

CFLAGS = /nologo /O2 /EHsc /LD /Gw /W4 /WL \
	/D_EXPORTING /DUNICODE /D_WITH_JNI
RFLAGS = /nologo

SYSLIBS = User32.Lib Ole32.Lib OleAut32.Lib

SOURCES = Tolk.cpp TolkJNI.cpp \
	ScreenReaderDriverJAWS.cpp ScreenReaderDriverNVDA.cpp \
	ScreenReaderDriverSA.cpp ScreenReaderDriverSNova.cpp \
	ScreenReaderDriverWE.cpp ScreenReaderDriverZT.cpp \
	ScreenReaderDriverSAPI.cpp \
	fsapi.c wineyes.c zt.c

$(OUTDIR)\Tolk.dll: $(SOURCES) Tolk.res
	$(CC) $(CFLAGS) /Fe:$@ $** $(SYSLIBS)

Tolk.res:
	$(RC) $(RFLAGS) /fo $@ $*.rc

clean:
	del Tolk.res *.obj
