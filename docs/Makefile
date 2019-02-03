!ifndef OUTDIR
OUTDIR = .
!endif

DOC = pandoc
DOCTITLE = Tolk
DOCAUTHOR = Davy Kager
DOCFLAGS = -s --toc -M title="$(DOCTITLE)" -M author="$(DOCAUTHOR)" -r markdown -w html5

SOURCES = README.md

$(OUTDIR)\README.html: $(SOURCES)
	$(DOC) $(DOCFLAGS) -o $@ $**
