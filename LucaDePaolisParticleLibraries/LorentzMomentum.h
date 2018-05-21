#include <cmath>

using namespace std;

#ifndef _LORENTZMOMENTUM_H
#define _LORENTZMOMENTUM_H

class LorentzMomentum
{
 public:
  LorentzMomentum();
  LorentzMomentum(double px, double py, double pz, double m);
  double GetPX() const {return m_px;}
  double GetPY() const {return m_py;}
  double GetPZ() const {return m_pz;}
  double GetMass() const {return m_mass;}
  double GetEnergy() const {return sqrt(pow(m_px,2)+pow(m_py,2)+pow(m_pz,2)+pow(m_mass,2));}
  double GetImpulse() const {return sqrt(pow(m_px,2)+pow(m_py,2)+pow(m_pz,2));}
  void SetPX(double px) {m_px=px;}
  void SetPY(double py) {m_py=py;}
  void SetPZ(double pz) {m_pz=pz;}
  void SetMass(double m) {m_mass=m;}
  double GetBeta() const;
  double GetGamma() const;
  void Print() const;
  
 private:
  double m_px, m_py, m_pz, m_mass;
};


#endif
