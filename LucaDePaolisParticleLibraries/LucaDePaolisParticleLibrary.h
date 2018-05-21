
#ifndef _PARTICLE_H
#define _PARTICLE_H

#include "LorentzMomentum.h"
#include "TString.h"

using namespace std;

class Particle
{
 public:
  
  //Constructors
  Particle(TString nameparticle);
  Particle(TString nameparticle, LorentzMomentum LMparticle, double charge, double tau);

 
  
  //Function To Get Variables
  TString GetKindOfParticle() const {return particlename;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double Getcharge() const {return particlecharge;}
  double GetLifeTime() const {return LifeTime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity () const;
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const;
  double GetVy() const; 
  double GetVz() const;
  double GetMass() const {return LorentzMParticle.GetMass();}
  double GetBeta() const {return LorentzMParticle.GetBeta();}
  double GetGamma() const {return LorentzMParticle.GetGamma();}
  
  

  //Function To Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle = LMParticle;}
  void SetName(TString nameparticle) {particlename = nameparticle;}
  void SetLifeTime (double tau) {LifeTime = tau;}
  void SetCharge (double charge) {particlecharge = charge;}
  void SetMass (double mass) {LorentzMParticle.SetMass(mass);}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}

  //Function to print particle
  void Print() const;
  

 
 private:
  TString particlename;
  LorentzMomentum LorentzMParticle;
  double particlecharge;
  double LifeTime;
 
  
  
  
};


//////////////////////////////////////////////////////////////////////////////////////////////////


class Muon
{
 public:

  //Constructors of the class
  Muon();
  Muon(LorentzMomentum LMParticle);

 
  //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}

  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = 1;
  TString nameparticle = "muon";
  double charge = 1.602*pow(10,-19);//Coulomb
  double lifetime = 2.2*pow(10,-6);//seconds
  double mass = 105.7;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};



////////////////////////////////////////////////////////////////////////////////////////////////



class AntiMuon
{
 public:

  //Constructors of the class
  AntiMuon();
  AntiMuon(LorentzMomentum LMParticle);


  //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}

  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = -1;
  TString nameparticle = "anti-muon";
  double charge = -1.602*pow(10,-19);//Coulomb
  double lifetime = 2.2*pow(10,-6);//seconds
  double mass = 105.7;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};



////////////////////////////////////////////////////////////////////////////////////////////////



class Electron
{
 public:

  //Constructors of the class
  Electron();
  Electron(LorentzMomentum LMParticle);

   //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
 LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}

  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = 2;
  TString nameparticle = "electron";
  double charge = 1.602*pow(10,-19);//Coulomb
  double lifetime = 1.45*pow(10,34);//seconds
  double mass = 0.511;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};





////////////////////////////////////////////////////////////////////////////////////////////////



class AntiElectron
{
 public:

  //Constructors of the class
  AntiElectron();
  AntiElectron(LorentzMomentum LMParticle);


  //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}

  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = -2;
  TString nameparticle = "positron";
  double charge = -1.602*pow(10,-19);//Coulomb
  double lifetime = 1.45*pow(10,34);//seconds
  double mass = 0.511;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};




////////////////////////////////////////////////////////////////////////////////////////////////



class Pion
{
 public:

  //Constructors of the class
  Pion();
  Pion(LorentzMomentum LMParticle);

  //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}


  

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}


  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = 3;
  TString nameparticle = "pion +";
  double charge = 1.602*pow(10,-19);//Coulomb
  double lifetime = 2.6*pow(10,-8);//seconds
  double mass = 139.6;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};





////////////////////////////////////////////////////////////////////////////////////////////////



class AntiPion
{
 public:

  //Constructors of the class
  AntiPion();
  AntiPion(LorentzMomentum LMParticle);


  //Function to Get Variables
  TString GetNameOfParticle() const {return nameparticle;}
  int GetKindofParticle() const {return KindParticle;}
  LorentzMomentum GetLorentzM() const {return LorentzMParticle;}
  double GetCharge() const {return charge;}
  double GetLifeTime() const {return lifetime;}
  double GetImpulse() const {return LorentzMParticle.GetImpulse();}
  double GetEnergy() const {return LorentzMParticle.GetEnergy();}
  double GetVelocity() const {return LorentzMParticle.GetImpulse()/mass;}
  double GetPx() const {return LorentzMParticle.GetPX();}
  double GetPy() const {return LorentzMParticle.GetPY();}
  double GetPz() const {return LorentzMParticle.GetPZ();}
  double GetVx() const {return LorentzMParticle.GetPX()/mass;}
  double GetVy() const {return LorentzMParticle.GetPY()/mass;}
  double GetVz() const {return LorentzMParticle.GetPZ()/mass;}
  double GetMass() const {return mass;}

  //Functions to Set Variables
  void SetLorentzM(LorentzMomentum LMParticle) {LorentzMParticle=LMParticle;}
  void SetPx (double px) {LorentzMParticle.SetPX(px);}
  void SetPy (double py) {LorentzMParticle.SetPY(py);}
  void SetPz (double pz) {LorentzMParticle.SetPZ(pz);}


  //Function to print Particle
  void Print() const;

 private:
  int KindParticle = -3;
  TString nameparticle = "pion -";
  double charge = -1.602*pow(10,-19);//Coulomb
  double lifetime = 2.6*pow(10,-8);//seconds
  double mass = 139.6;//MeV/c^2c
  LorentzMomentum LorentzMParticle;
  
  
};



#endif
