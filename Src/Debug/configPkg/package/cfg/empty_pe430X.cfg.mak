# invoke SourceDir generated makefile for empty.pe430X
empty.pe430X: .libraries,empty.pe430X
.libraries,empty.pe430X: package/cfg/empty_pe430X.xdl
	$(MAKE) -f C:\TI_RTOS\Workspace\RT_FinProj_Part1_MontanoHadad/src/makefile.libs

clean::
	$(MAKE) -f C:\TI_RTOS\Workspace\RT_FinProj_Part1_MontanoHadad/src/makefile.libs clean

