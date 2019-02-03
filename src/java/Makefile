!ifndef OUTDIR
OUTDIR = $(MAKEDIR)
!endif

JC = javac
JAR = jar
JFLAGS = -g:none
JARFLAGS = cf

SOURCES = com\davykager\tolk\Tolk.java
CLASSES = com\davykager\tolk\Tolk.class

$(OUTDIR)\Tolk.jar: $(CLASSES)
	$(JAR) $(JARFLAGS) $@ -C . $**

$(CLASSES): $(SOURCES)
	$(JC) $(JFLAGS) $**

clean:
	del $(CLASSES)
