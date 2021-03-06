#ifndef _LORENTZMOMENTUMCLASS_CXX
#define _LORENTZMOMENTUMCLASS_CXX

#include <iostream>
#include "LorentzMomentum.h"

using namespace std;

LorentzMomentum::LorentzMomentum()
{
  m_px=0;
  m_py=0;
  m_pz=0;
  m_mass=0;
  
}


LorentzMomentum::LorentzMomentum(double px, double py, double pz, double m)
{
  m_px=px;
  m_py=py;
  m_pz=pz;
  m_mass=m;
}


double LorentzMomentum::GetBeta() const
{
  double Energy=this->GetEnergy();
  double beta=0;
  
  if (Energy<0.00001)
    {
      cout<<"Error in LorentzMomentum::GetBeta()!! The energy is 0"<<endl;
    }

  else {beta = this->GetEnergy()/this->GetImpulse();}
  return beta;
}


double LorentzMomentum::GetGamma() const
{
  double beta = this->GetBeta();
  double gamma = -1;

  if (beta == 1)
    {
      cout<<"Error in LorentzMomentum::GetGamma()!! beta is 1 so gamma would be infinite"<<endl;
    }

  else {gamma = (1./sqrt(1-pow(beta,2)));}
  return gamma;
}

void LorentzMomentum::Print() const
{
  cout<<"LorentzMomentum px = "<<m_px<<" MeV/c"<<endl;
  cout<<"LorentzMomentum py = "<<m_py<<" MeV/c"<<endl;
  cout<<"LorentzMomentum pz = "<<m_pz<<" MeV/c"<<endl;
  cout<<"LorentzMomentum m = "<<m_mass<<" MeV/c^2"<<endl;
  cout<<"LorentzMomentum Energy = "<<this->GetEnergy()<<" MeV"<<endl;
  
}


#endif
