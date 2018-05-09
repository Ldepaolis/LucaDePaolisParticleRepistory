#include "LucaDePaolisParticleLibrary.h"



//Default Constructor
LucaDePaolisParticleClass::LucaDePaolisParticleClass()
{
  Nint=4;
  name="LucaDePaolisParticleClass";
 
}

void LucaDePaolisParticleClass::printHello()
{
  for (int i=0; i<Nint; i++)
    {
      std::cout<<"Hello from "<<name<<std::endl;
    }
  return;
}

