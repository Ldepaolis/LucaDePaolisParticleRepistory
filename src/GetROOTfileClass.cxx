
#ifndef _GETROOTFILECLASS_CXX
#define _GETROOTFILECLASS_CXX

#include "GetROOTfile.h"
#include "LucaDePaolisParticleLibrary.h"
#include "LorentzMomentum.h"
#include <iostream>
#include <string>
#include <fstream>




DataFile::DataFile()
{
  namefile = "nofilename";
  path = "nofilepath";
}


DataFile::DataFile(TString filename, TString filepath)
{
  namefile = filename;
  path = filepath;
}


bool DataFile::IsTxt() const
{
  string str = (string)this->GetName();
  int lenght = (int)strlen(str.c_str());
  string endfile = str.substr(lenght-4,4);
  bool answer;

  if( endfile==".txt")
    {
      answer=true;
    }
  else
    {
      answer =false;
      cout<<"file "<<this->GetName()<<" is not .txt file"<<endl;
    }
  return answer;
}



void DataFile::ConvertTXTtoROOTfile() const
{

  //Declaration of Variables
  Electron electron;
  AntiElectron positron;
  Muon muon;
  AntiMuon antimuon;
  Pion pion;
  AntiPion antipion;
  LorentzMomentum LM;

  int ID;
  double px, py, pz, q, m;
    

  TString namefile = this->GetPath();
  namefile.ReplaceAll(".txt", ".root");
  
  //Building the Output ROOT file
  TFile *fout = TFile::Open(namefile, "recreate");
  fout->cd();

  cout<<"ciao"<<endl;

  //Electrons TTree
  TTree *Electrons = new TTree("Electrons", "Data about electrons");
 
    
  //Defining Branches
  TBranch *ElectronID =Electrons->Branch("ElectronID", &ID, "ParticleID/I");
  TBranch *ElectronPx = Electrons->Branch("ElectronPx", &px, "px/D");
  TBranch *ElectronPy = Electrons->Branch("ElectronPy", &py, "py/D");
  TBranch *ElectronPz = Electrons->Branch("ElectronPz", &pz, "pz/D");
  TBranch *ElectronMass = Electrons->Branch("ElectronMass", &m, "mass/D");
  TBranch *ElectronCharge = Electrons->Branch("ElectronCharge", &q, "charge/D");


  //////////////////////////////////////////////////////////////////////////////////////////////



  
  //Positrons TTree
  TTree *Positrons = new TTree("Positrons", "Data about positrons");


  //Defining Branches
  TBranch *PositronID = Positrons->Branch("PositronID", &ID, "ParticleID/I");
  TBranch *PositronPx = Positrons->Branch("PositronPx", &px, "px/D");
  TBranch *PositronPy = Positrons->Branch("PositronPy", &py, "py/D");
  TBranch *PositronPz = Positrons->Branch("PositronPz", &pz, "pz/D");
  TBranch *PositronMass = Positrons->Branch("PositronMass", &m, "mass/D");
  TBranch *PositronCharge = Positrons->Branch("PositronCharge", &q, "charge/D");




  //////////////////////////////////////////////////////////////////////////////////////////////




  
  //Muons TTree
  TTree *Muons = new TTree("Muons", "Data about muons");


  //Defining Branches
  TBranch *MuonID = Muons->Branch("MuonID", &ID, "ParticleID/I");
  TBranch *MuonPx = Muons->Branch("MuonPx", &px, "px/D");
  TBranch *MuonPy = Muons->Branch("MuonPy", &py, "py/D");
  TBranch *MuonPz = Muons->Branch("MuonPz", &pz, "pz/D");
  TBranch *MuonMass = Muons->Branch("MuonMass", &m, "mass/D");
  TBranch *MuonCharge = Muons->Branch("MuonCharge", &q, "charge/D");

  


  /////////////////////////////////////////////////////////////////////////////////////////////



  
  //Anti-Muons TTree
  TTree *AntiMuons = new TTree("AntiMuons", "Data about antimuons");
  

  //Defining Branches
  TBranch *AntiMuonID = AntiMuons->Branch("AntiMuonID", &ID, "ParticleID/I");
  TBranch *AntiMuonPx = AntiMuons->Branch("AntiMuonPx", &px, "px/D");
  TBranch *AntiMuonPy = AntiMuons->Branch("AntiMuonPy", &py, "py/D");
  TBranch *AntiMuonPz = AntiMuons->Branch("AntiMuonPz", &pz, "pz/D");
  TBranch *AntiMuonMass = AntiMuons->Branch("AntiMuonMass", &m, "mass/D");
  TBranch *AntiMuonCharge = AntiMuons->Branch("AntiMuonCharge", &q, "charge/D");
  


  //////////////////////////////////////////////////////////////////////////////////////////////////


  
  //Positive Pions TTree
   TTree *PositivePions = new TTree("PositivePions", "Data about positive pions");


   //Defining Branches
  TBranch *PositivePionID = PositivePions->Branch("PositivePionID", &ID, "ParticleID/I");
  TBranch *PositivePionPx = PositivePions->Branch("PositivePionPx", &px, "px/D");
  TBranch *PositivePionPy = PositivePions->Branch("PositivePionPy", &py, "py/D");
  TBranch *PositivePionPz = PositivePions->Branch("PositivePionPz", &pz, "pz/D");
  TBranch *PositivePionMass = PositivePions->Branch("PositivePionMass", &m, "mass/D");
  TBranch *PositivePionCharge = PositivePions->Branch("PositivePionCharge", &q, "charge/D");



  
  //////////////////////////////////////////////////////////////////////////////////////////////




  
  //Negative Pions
  TTree *NegativePions = new TTree("NegativePions", "Data about negative pions");


      //Defining Branches
  TBranch *NegativePionID = NegativePions->Branch("NegativePionID", &ID, "ParticleID/I");
  TBranch *NegativePionPx = NegativePions->Branch("NegativePionPx", &px, "px/D");
  TBranch *NegativePionPy = NegativePions->Branch("NegativePionPy", &py, "py/D");
  TBranch *NegativePionPz = NegativePions->Branch("NegativePionPz", &pz, "pz/D");
  TBranch *NegativePionMass = NegativePions->Branch("NegativePionMass", &m, "mass/D");
  TBranch *NegativePionCharge = NegativePions->Branch("NegativePionCharge", &q, "charge/D");



  //////////////////////////////////////////////////////////////////////////////////////////////


  //Reading TXT file with Data
  
  //Declaration of file .txt
  ifstream IN_FILE;
  IN_FILE.open((string)path, ios::in);
  cout<<path<<endl;
  string ParticleName, line;
 
  if (IN_FILE.is_open())
    {
      //First two lines are introduction lines
      getline(IN_FILE,line);
      getline(IN_FILE,line);
            
      while (!IN_FILE.eof())
	{
	  IN_FILE >> ParticleName >> q >> px >> py >>pz;;
	  //Storing Muon particles
	  if (ParticleName == "muon")
	    {
	      //Storing Muons
	      if (q > 0)
		{
		  
		  //Filling Muon elements
		  muon.SetPx(px);
		  muon.SetPy(py);
		  muon.SetPz(pz);

		  ID = muon.GetKindofParticle();
		  m = muon.GetMass();
		  q = muon.GetCharge();

		  //Filling Branch
		  Muons->Fill();
		}

	      //Storing AntiMuons
	      else
		{

		  
		  //Filling Anti-Muon elements
		  antimuon.SetPx(px);
		  antimuon.SetPy(py);
		  antimuon.SetPz(pz);

		  ID = antimuon.GetKindofParticle();
		  m = antimuon.GetMass();
		  q = antimuon.GetCharge();

		  //Filling Branch
		  AntiMuons->Fill();
		  
		}
	    }
	  
	  
	  if (ParticleName == "electron")
	    {
	      if (q > 0)
		{

		  
		  //Filling Electron elements
		  electron.SetPx(px);
		  electron.SetPy(py);
		  electron.SetPz(pz);

		  ID = electron.GetKindofParticle();
		  m = electron.GetMass();
		  q = electron.GetCharge();

		  //Filling Branch
		  Electrons->Fill();
		  
		}
	      else
		{

		  
		  //Filling Anti-Electron elements
		  positron.SetPx(px);
		  positron.SetPy(py);
		  positron.SetPz(pz);

		  ID = positron.GetKindofParticle();
		  m = positron.GetMass();
		  q = positron.GetCharge();

		  //Filling Branch
		  Positrons->Fill();
		 
		}
	    }


	  if (ParticleName == "pion")
	    {
	      if (q > 0)
		{

		  
		  //Filling Pion elements
		  pion.SetPx(px);
		  pion.SetPy(py);
		  pion.SetPz(pz);

		  ID = pion.GetKindofParticle();
		  m = pion.GetMass();
		  q = pion.GetCharge();
		 

		  //Filling Branch
		  PositivePions->Fill();
		  
		}
	      else
		{

		 
		  //Filling Anti-Pion elements
		  antipion.SetPx(px);
		  antipion.SetPy(py);
		  antipion.SetPz(pz);


		  ID = antipion.GetKindofParticle();
		  m = antipion.GetMass();
		  q = antipion.GetCharge();

		  
		  //Filling Branch
		  NegativePions->Fill();
		  
		}
	    }
	  
	}
      
    }

  fout->Print();
  fout->Write();
  fout->Close();
    
  
}



void DataFile::ReadROOTData() const
{
  //Opening ROOT file with Data
  TFile *fin = TFile::Open(this->GetPath(), "READ");
  
  //Pointer to take TTrees
  TTree *tr;

  //Pointer to take  TBranches
  TBranch *b;

  //Declaring Variables to take data
  LorentzMomentum LM;
  int Nevents;

  //Declaration of Histograms
  TH1D *HistoEnergyPositivePions = new TH1D("HistoEnergyPositivePions", "Histogram of the energy of positive pions; E(MeV); N° pions" , 100, 10, 500);
  TH1D *HistoEnergyNegativePions = new TH1D("HistoEnergyNegativePions", "Histogram of the energy of negative pions; E(MeV); N° pions" , 100, 10, 500);
  TH1D *HistoEnergyElectrons = new TH1D("HistoEnergyElectrons", "Histogram of the energy of electrons; E(MeV), N° electrons" , 100, 10, 500);
  TH1D *HistoEnergyPositrons = new TH1D("HistoEnergyPositrons", "Histogram of the energy of positrons; E(MeV), N° positrons" , 100, 10, 500);
  TH1D *HistoEnergyMuons = new TH1D("HistoEnergyMuons", "Histogram of the energy of muons; E(MeV); N° muons" , 100, 10, 500);
  TH1D *HistoEnergyAntiMuons = new TH1D("HistoEnergyAntiMuons", "Histogram of the energy of anti-muons; E(MeV); N° anti-muons" , 100, 10, 500);


  ////////////////////////////////////////////////////////////////////////////////////////////////

  //Filling Positive Pions Histogram
  tr = (TTree*)fin->Get("PositivePions");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("PositivePionPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositivePionPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositivePionPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositivePionMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyPositivePions->Fill(LM.GetEnergy());
      
    }

  /////////////////////////////////////////////////////////////////////////////////////////////////

   //Filling Negative Pions Histogram
  tr = (TTree*)fin->Get("NegativePions");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("NegativePionPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("NegativePionPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("NegativePionPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("NegativePionMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyNegativePions->Fill(LM.GetEnergy());
      
    }


  /////////////////////////////////////////////////////////////////////////////////////////////////
  
  //Filling Muons Histogram
  tr = (TTree*)fin->Get("Muons");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("MuonPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("MuonPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("MuonPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("MuonMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyMuons->Fill(LM.GetEnergy());
      
    }


  ////////////////////////////////////////////////////////////////////////////////////////////////


   //Filling Anti-Muons Histogram
  tr = (TTree*)fin->Get("AntiMuons");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("AntiMuonPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("AntiMuonPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("AntiMuonPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("AntiMuonMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyAntiMuons->Fill(LM.GetEnergy());
      
    }



  ////////////////////////////////////////////////////////////////////////////////////////////////


   //Filling Electrons Histogram
  tr = (TTree*)fin->Get("Electrons");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("ElectronPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("ElectronPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("ElectronPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("ElectronMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyElectrons->Fill(LM.GetEnergy());
      
    }


  ////////////////////////////////////////////////////////////////////////////////////////////////


  //Filling Positrons Histogram
  tr = (TTree*)fin->Get("Positrons");
  Nevents = tr->GetEntries();

  for (int i = 0; i<Nevents; i++)
    {
      //Taking the entry
      tr->GetEntry(i);

      //Filling the Lorentz Momentum with data about particle 
      b= (TBranch*)tr->GetBranch("PositronPx");
      LM.SetPX(b->GetLeaf("px")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositronPy");
      LM.SetPY(b->GetLeaf("py")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositronPz");
      LM.SetPZ(b->GetLeaf("pz")->GetValue(0));
      b= (TBranch*)tr->GetBranch("PositronMass");
      LM.SetMass(b->GetLeaf("mass")->GetValue(0));


      HistoEnergyPositrons->Fill(LM.GetEnergy());
      
    }


  ////////////////////////////////////////////////////////////////////////////////////////////////

  //Filling Histograms with coupled particles (particle-antriparticle)

  //Declaring TCanvas
  TCanvas *Canvas1 = new TCanvas("Canvas1", "Histogram of pions and anti-pions energy", 2000, 900);
  TCanvas *Canvas2 = new TCanvas("Canvas2", "Histogram of electrons and positrons energy", 2000, 900);
  TCanvas *Canvas3 = new TCanvas("Canvas3", "Histogram of muons and anti-muons energy", 2000, 900);


  /////////////////////////////////////////////////////////////////////////////////////////////////

  
  //Filling histogram for pions
  Canvas1->cd();
  
  //Set characteristics of Histograms
  HistoEnergyPositivePions->SetFillColor(2);
  HistoEnergyPositivePions->SetLineColor(0);
  HistoEnergyNegativePions->SetFillColor(1);
  HistoEnergyNegativePions->SetLineColor(5);

  //Filling stack of Histogram
  THStack *PionsHistogram = new THStack();
  PionsHistogram->SetTitle("Histogram of pions and anti-pions energy");
  PionsHistogram->SetMinimum(10);
  PionsHistogram->SetMaximum(500);
  PionsHistogram->Add(HistoEnergyPositivePions);
  PionsHistogram->Add(HistoEnergyNegativePions);
  PionsHistogram->Draw();


  //Building Legend
  TLegend *leg1 = new TLegend(0.5,0.75,0.90,0.90);
  leg1->SetHeader("Legend of Histogram","C");
  leg1->AddEntry(HistoEnergyPositivePions,"positive pions");
  leg1->AddEntry(HistoEnergyNegativePions,"negative pions");
  leg1->Draw();

  //Storing Stack of Histogram in folder macros
  TString namePDF = this->GetPath();
  namePDF.ReplaceAll("/"+this->GetName(), "/macros/HistoEnergyPions");
  Canvas1->Print(namePDF,"Title: Histogram of energy of pions");

  ////////////////////////////////////////////////////////////////////////////////////////////////

  
  //Filling histogram for electrons and positrons
  Canvas2->cd();

  //Set characteristics of Histograms
  HistoEnergyElectrons->SetFillColor(2);
  HistoEnergyElectrons->SetLineColor(0);
  HistoEnergyPositrons->SetFillColor(1);
  HistoEnergyPositrons->SetLineColor(5);

  //Filling stack of Histogram
  THStack *ElectronsHistogram = new THStack();
  ElectronsHistogram->SetTitle("Histogram of electrons and positrons energy");
  ElectronsHistogram->SetMinimum(10);
  ElectronsHistogram->SetMaximum(500);
  ElectronsHistogram->Add(HistoEnergyElectrons);
  ElectronsHistogram->Add(HistoEnergyPositrons);
  ElectronsHistogram->Draw();


  //Building Legend
  TLegend *leg2 = new TLegend(0.5,0.75,0.90,0.90);
  leg2->SetHeader("Legend of Histogram","C");
  leg2->AddEntry(HistoEnergyElectrons,"electrons");
  leg2->AddEntry(HistoEnergyPositrons,"positrons");
  leg2->Draw();


  //Storing Stack of Histogram in folder macros
  namePDF = this->GetPath();
  namePDF.ReplaceAll("/"+this->GetName(), "/macros/HistoEnergyElectrons");
  Canvas2->Print(namePDF,"Title: Histogram of energy of electrons");



   /////////////////////////////////////////////////////////////////////////////////////////////////

  
  //Filling histogram for muons
  Canvas3->cd();
  
  //Set characteristics of Histograms
  HistoEnergyMuons->SetFillColor(2);
  HistoEnergyMuons->SetLineColor(0);
  HistoEnergyAntiMuons->SetFillColor(1);
  HistoEnergyAntiMuons->SetLineColor(5);

  //Filling stack of Histogram
  THStack *MuonsHistogram = new THStack();
  MuonsHistogram->SetTitle("Histogram of muons and anti-muons energy");
  MuonsHistogram->SetMinimum(10);
  MuonsHistogram->SetMaximum(500);
  MuonsHistogram->Add(HistoEnergyMuons);
  MuonsHistogram->Add(HistoEnergyAntiMuons);
  MuonsHistogram->Draw();


  //Building Legend
  TLegend *leg3 = new TLegend(0.5,0.75,0.90,0.90);
  leg3->SetHeader("Legend of Histogram","C");
  leg3->AddEntry(HistoEnergyMuons,"muons");
  leg3->AddEntry(HistoEnergyAntiMuons,"anti-muons");
  leg3->Draw();

  //Storing Stack of Histogram in folder macros
  namePDF = this->GetPath();
  namePDF.ReplaceAll("/"+this->GetName(), "/macros/HistoEnergyMuons");
  Canvas3->Print(namePDF,"Title: Histogram of energy of muons");


  /////////////////////////////////////////////////////////////////////////////////////////////////
  
  
  //Deleting Pointers
  Canvas1 = NULL;
  delete Canvas1;
  Canvas2 = NULL;
  delete Canvas2;
  Canvas3 = NULL;
  delete Canvas3;
  leg1 = NULL;
  delete leg1;
  leg2 = NULL;
  delete leg2;
  leg3 = NULL;
  delete leg3;
  MuonsHistogram = NULL;
  delete MuonsHistogram;
  ElectronsHistogram = NULL;
  delete ElectronsHistogram;
  PionsHistogram = NULL;
  delete PionsHistogram;
 
 
  
}




#endif
