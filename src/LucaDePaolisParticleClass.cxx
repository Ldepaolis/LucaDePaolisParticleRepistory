#ifndef _LUCADEPAOLISPARTICLECLASS_CXX
#define _LUCADEPAOLISPARTICLECLASS_CXX

#include "LucaDePaolisParticleLibrary.h"
#include "LorentzMomentum.h"
#include <iostream>


//Particle Constructor 1
Particle::Particle(TString nameparticle)
{
  particlename = nameparticle;
  particlecharge = 0;
  LifeTime = 0;
}


//Particle Constructor 2
Particle::Particle(TString nameparticle, LorentzMomentum LMparticle, double charge, double tau)
{
  particlename = nameparticle;
  LorentzMParticle = LMparticle;
  particlecharge = charge;
  LifeTime = tau;
}

//Particle Class Functions
double Particle::GetVelocity() const
{
  if (this->GetMass() != 0.0)
    {
      return LorentzMParticle.GetImpulse()/LorentzMParticle.GetMass();
    }

  else
    {
      return LorentzMParticle.GetImpulse();
    }
}



double Particle::GetVx() const
{
   if (this->GetMass() != 0.0)
    {
      return LorentzMParticle.GetPX()/LorentzMParticle.GetMass();
    }

  else
    {
      return LorentzMParticle.GetPX();
    }
}



double Particle::GetVy() const
{
   if (this->GetMass() != 0.0)
    {
      return LorentzMParticle.GetPY()/LorentzMParticle.GetMass();
    }

  else
    {
      return LorentzMParticle.GetPY();
    }
}





double Particle::GetVz() const
{
   if (this->GetMass() != 0.0)
    {
      return LorentzMParticle.GetPZ()/LorentzMParticle.GetMass();
    }

  else
    {
      return LorentzMParticle.GetPZ();
    }
}


void Particle::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<this->GetKindOfParticle()<<endl;
  cout<<"Mass of Particle: "<<this->GetMass()<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<LifeTime<<" s"<<endl;
  cout<<"Charge of Particle: "<<particlecharge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Muon Constructor 1
Muon::Muon()
{
  LorentzMParticle.SetMass(mass);  
}

//Muon Constructor 2
Muon::Muon(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void Muon::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//AntiMuon Constructor 1
AntiMuon::AntiMuon()
{
  LorentzMParticle.SetMass(mass);  
}

//AntiMuon Constructor 2
AntiMuon::AntiMuon(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void AntiMuon::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//Electron Constructor 1
Electron::Electron()
{
  LorentzMParticle.SetMass(mass);  
}

//Electron Constructor 2
Electron::Electron(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void Electron::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//AntiElectron Constructor 1
AntiElectron::AntiElectron()
{
  LorentzMParticle.SetMass(mass);  
}

//AntiElectron Constructor 2
AntiElectron::AntiElectron(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void AntiElectron::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//Electron Constructor 1
Pion::Pion()
{
  LorentzMParticle.SetMass(mass);  
}

//Electron Constructor 2
Pion::Pion(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void Pion::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//Electron Constructor 1
AntiPion::AntiPion()
{
  LorentzMParticle.SetMass(mass);  
}

//Electron Constructor 2
AntiPion::AntiPion(LorentzMomentum LMParticle)
{
  LorentzMParticle=LMParticle;
}



void AntiPion::Print() const
{
  cout<<"Basically information about the particle"<<endl;
  cout<<"Particle name: "<<nameparticle<<endl;
  cout<<"Mass of Particle: "<<mass<<" MeV/c^2"<<endl;
  cout<<"Life Time of Particle: "<<lifetime<<" s"<<endl;
  cout<<"Charge of Particle: "<<charge<<" C"<<endl;
  cout<<"Impulse of Particle: "<<this->GetImpulse()<<" MeV/c"<<endl;
  LorentzMParticle.Print();
  cout<<"Velocity of Particle: "<<this->GetVelocity()<<"*c"<<endl;
}




#endif
