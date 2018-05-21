
#ifndef _GETROOTFILE_H
#define _GETROOTFILE_H

#include "TFile.h"
#include <iostream>
#include "TTree.h"
#include "TBranch.h"
#include "TLeaf.h"
#include "TString.h"
#include "TH1.h"
#include "TCanvas.h"
#include "THStack.h"
#include "TLegend.h"

using namespace std;

class DataFile
{
 public:
  DataFile();
  DataFile(TString filename, TString filepath);

  //Function to Set Parameters
  void SetName(TString filename) {namefile = filename;}
  void SetPath(TString filepath) {path=filepath;}

  //Function to Get Parameters
  TString GetName() const {return namefile;}
  TString GetPath() const {return path;}

  //Function to convert txt files in root files

  //This function verify if data file is a kind .txt
  bool IsTxt() const;

  //This function write Data on a root file
  void ConvertTXTtoROOTfile() const;

  //This function will produce data from ROOT file
  void ReadROOTData() const;



 private:
  TString namefile;
  TString  path;
  
};



#endif
