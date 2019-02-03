CD = cd
MD = md
RD = rd
RDFLAGS = /Q /S
CP = copy
ZIP = 7z
ZFLAGS = a

SRCDIR = $(MAKEDIR)\src
DOTNETDIR = $(SRCDIR)\dotnet
JAVADIR = $(SRCDIR)\java
DOCSDIR = $(MAKEDIR)\docs
LIBSDIR = $(MAKEDIR)\libs
LIBSDIR32 = $(LIBSDIR)\x86
LIBSDIR64 = $(LIBSDIR)\x64
OUTDIR = $(MAKEDIR)\dist
OUTDIR32 = $(OUTDIR)\x86
OUTDIR64 = $(OUTDIR)\x64

all: tolkdll tolkdotnetdll tolkjar tolkdocs

dist:
	$(MD) $(OUTDIR)
	$(CP) LICENSE*.txt $(OUTDIR)
	$(MD) $(OUTDIR32)
	$(CD) $(SRCDIR) && $(MAKE) /$(MAKEFLAGS) OUTDIR=$(OUTDIR32)
	$(CP) $(LIBSDIR32)\* $(OUTDIR32)
	$(MD) $(OUTDIR64)
	$(CD) $(SRCDIR) && vcvarsall x64 && $(MAKE) /$(MAKEFLAGS) OUTDIR=$(OUTDIR64)
	$(CP) $(LIBSDIR64)\* $(OUTDIR64)
	$(CD) $(DOTNETDIR) && $(MAKE) /$(MAKEFLAGS) OUTDIR=$(OUTDIR)
	$(CD) $(JAVADIR) && $(MAKE) /$(MAKEFLAGS) OUTDIR=$(OUTDIR)
	$(CD) $(DOCSDIR) && $(MAKE) /$(MAKEFLAGS) OUTDIR=$(OUTDIR)
	$(ZIP) $(ZFLAGS) $(MAKEDIR)\tolk.zip $(OUTDIR)\*
	$(RD) $(RDFLAGS) $(OUTDIR)

tolkdll:
	$(CD) $(SRCDIR) && $(MAKE) /$(MAKEFLAGS)
	
tolkdotnetdll:
	$(CD) $(DOTNETDIR) && $(MAKE) /$(MAKEFLAGS)

tolkjar:
	$(CD) $(JAVADIR) && $(MAKE) /$(MAKEFLAGS)

tolkdocs:
	$(CD) $(DOCSDIR) && $(MAKE) /$(MAKEFLAGS)

clean:
	$(CD) $(SRCDIR) && $(MAKE) /$(MAKEFLAGS) clean
	$(CD) $(DOTNETDIR) && $(MAKE) /$(MAKEFLAGS) clean
	$(CD) $(JAVADIR) && $(MAKE) /$(MAKEFLAGS) clean
