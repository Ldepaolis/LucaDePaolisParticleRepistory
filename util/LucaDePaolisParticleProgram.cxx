#include <iostream>
#include "LucaDePaolisParticleLibrary.h"
#include "LorentzMomentum.h"
#include "GetROOTfile.h"




int main ()
{
  cout<<"Welcome to the program of Luca De Paolis"<<endl;

  Particle p("ciao");
  p.SetPx(3.5);
  p.SetPy(5);
  p.SetPz(8.41);
  p.SetMass(4);
  p.SetName("Barabba");

  p.Print();

  Muon c;
  c.SetPx(2.45);
  c.SetPy(7.52);
  c.SetPz(5.5);

  c.Print();

  
  DataFile fileTXT;
  fileTXT.SetName("DATA.txt");
  fileTXT.SetPath("/home/luca/Scrivania/MVanadiaCourse/LucaDePaolisParticleRepistory/DATA.txt");
  if (fileTXT.IsTxt())
    {
      fileTXT.ConvertTXTtoROOTfile();
    }
  
  DataFile fileROOT;
  fileROOT.SetName("DATA.root");
  fileROOT.SetPath("/home/luca/Scrivania/MVanadiaCourse/LucaDePaolisParticleRepistory/DATA.root");
  fileROOT.ReadROOTData();
  
}
