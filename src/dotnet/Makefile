!ifndef OUTDIR
OUTDIR = $(MAKEDIR)
!endif

CS = csc
CSFLAGS = /nologo /optimize /target:library /warn:4
RFLAGS = /nologo

SOURCES = Tolk.cs

$(OUTDIR)\TolkDotNet.dll: $(SOURCES) TolkDotNet.res
	$(CS) $(CSFLAGS) /win32res:TolkDotNet.res /out:$@ $(SOURCES)

TolkDotNet.res:
	$(RC) $(RFLAGS) /fo $@ $*.rc

clean:
	del TolkDotNet.res
