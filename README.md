---project LucaDePaolisParticleRepistory---

developer: luca.depaolis@lnf.infn.it
description: In this project I will prepare an exercise for the course of Marco Vanadia about object programmation for physicist

---->LucaDePaolisParticleProgram

First to execute the program enter in the folder /LucaDePaolisParticleLibrary and digit "source path-to/thisroot.sh" to call libraries of ROOT. 
LucaDePaolisParticleProgram could be called using ./bin/LucaDePaolisParticleProgram.
To modify the program and recompile it is sufficient to enter in folder "LucaDePaolisParticleRepistory" and type "make" on terminal.
For more details open Makefile and read it.

---->src:
--LorentzMomentumClass.cxx
--LucaDePaolisParticleClass.cxx


---->util:
--LucaDePaolisParticleProgram.cxx


---->LucaDePaolisParticleLibraries
--LorentzMomentum.h
--LucaDePaolisParticleLibrary.h


---->obj:
--LorentzMomentum.o
--LucaDePaolisParticleClass.o


---->macros:
--HitoEnergyElectrons.pdf
--HistoEnergyMuons.pdf
--HistoEnergyPions.pdf


File of data are DATA.txt and DATA.root in folder LucaDePaolisParticleProgram.


-----> A sample of data file is inside the folder of the program. It is the "DATA.txt" file. Is it possible to execute the program using similar data.
