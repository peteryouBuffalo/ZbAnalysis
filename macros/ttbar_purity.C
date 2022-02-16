/******************************************************************************
*                                                                             *
* ttbar_purity.C - This macro takes DY files and calculates the purity of 	 *
*                  ttbar selections in the desired regions.                   *
*                                                                             *
* Created: February, 2022 - Peter Young                                       *
*                                                                             *
******************************************************************************/

#include <math.h>

/*/////////////////////////////////////////////////////////////////////////////
Global Variables
/////////////////////////////////////////////////////////////////////////////*/

TH1F* background;
Float_t min_val, max_val, regionL, regionH;

std::string tt_files[3][2] = 
{
  { "TT_powheg_MC_2016.root", "" },
  { "TT_semi_powheg_MC_2017.root", "TT_dilep_powheg_MC_2017.root" },
  { "TT_semi_powheg_MC_2018.root", "TT_dilep_powheg_MC_2018.root" },
};

std::string DY_files[3][3] = 
{
  { "DY_0J_amcatnlo_MC_2016.root", "DY_1J_amcatnlo_MC_2016.root",
    "DY_2J_amcatnlo_MC_2016.root" },
  { "DY_0J_amcatnlo_MC_2017.root", "DY_1J_amcatnlo_MC_2017.root",
    "DY_2J_amcatnlo_MC_2017.root" },
  { "DY_0J_amcatnlo_MC_2018.root", "DY_1J_amcatnlo_MC_2018.root",
    "DY_2J_amcatnlo_MC_2018.root" },
};

std::string channels[] = { "Electron", "Muon", "EMu" };
std::string variables[] = { "ZMass", "met", "metSig" };

std::string ee_plots[] = { "Zee_2bjet", "Zem_2bjet_elec" };
std::string mm_plots[] = { "Zmm_2bjet", "Zem_2bjet_muon" };

float lumi[] = { 35862, 41529, 59710 };
float xSec_tt[3][2] = {
  { 831.76, 0},
  { 365.3, 88.2 },
  { 365.3, 88.2 }
};

float xSec_DY[3][3] = {
  { 4578.46*1.054, 851.76*1.054, 335.18*1.054 },
  { 4578.46*1.054, 851.76*1.054, 335.18*1.054 },
  { 4578.46*1.054, 851.76*1.054, 335.18*1.054 }
};

/*/////////////////////////////////////////////////////////////////////////////
Methods
/////////////////////////////////////////////////////////////////////////////*/


void FillBins(TH1F* hist, TH1F* orig, int an, bool fill_mid = false)
{
  int n1 = orig->GetNbinsX();
  for (Int_t i = 0; i < n1; ++i)
  {
    // Determine the size of the bin and its appropriate value
    int size = orig->GetBinContent(i);
    int center = orig->GetBinCenter(i);
    
    if (center > regionL && center < regionH && !fill_mid) continue;
    if ((center <= regionL || center >= regionH) && fill_mid) continue;
    if (center < min_val || center > max_val) continue;
    
    for (Int_t j = 0; j < size; ++j)
      hist->Fill(center);
  }
  
  std::string x_lbl;
  if (an == 0) x_lbl = "M_{Z}";
  else if (an == 1) x_lbl = "MET";
  else x_lbl = "MET Significance";
  
  hist->GetXaxis()->SetTitle(x_lbl.c_str());
}


/*/////////////////////////////////////////////////////////////////////////////
Main Method
/////////////////////////////////////////////////////////////////////////////*/
void ttbar_purity()
{
  bool debug = false;
  int bin_size = 4;
  gStyle->SetOptStat(0);
  
  std::cout << "====================================================\n";
  std::cout << "# ttbar Purity Bckg Check                          #\n";
  std::cout << "====================================================\n";
  
  // Get the appropriate files that we want to use.
  std::string directory = "../output_updated2021/";
  
  // We want to loop over each channel, year, and variable.
  for (int ch = 0; ch < 2; ++ch)
  {
    std::string channel = channels[ch];
    if (debug) std::cout << "Channel : " << channel << std::endl;
    
    for (int yr = 0; yr < 3; ++yr)
    {
      int year = 2016 + yr;
      if (debug) std::cout << ">> Year = " << year << std::endl;
      
      for (int v = 0; v < 3; ++v)
      {
        std::string variable = variables[v];
        if (debug) std::cout << ">>>> Variable = " << variable << std::endl;
        
        // Set the appropriate variables so we can analyze appropriately.
        switch(v)
        {
          case 0:
            min_val = 36; max_val = 204; regionL = 72; regionH = 112; break;
          case 1:
            min_val = 76; max_val = 204; regionL = -1; regionH = -1; break;
          case 2:
            min_val = 16; max_val = 84; regionL = -1; regionH = -1; break;
        }
        int num_bins = (max_val - min_val)/bin_size;
        
        // Set the histogram names that we want to pull.
        std::string hist_name = (ch == 0) ? ee_plots[0] : mm_plots[0];
        hist_name += "_" + variable;
        
        // Get the appropriate ttbar histograms and combine them.
        TH1F* ttHist = new TH1F("ttHist", "", num_bins, min_val, max_val);
        int num_files = (year == 2016) ? 1 : 2;
        for (int i = 0; i < num_files; ++i)
        {
          std::string file_name = directory + tt_files[yr][i];
          if (debug) std::cout << ">>>> |" << file_name << std::endl;
          TFile *f = new TFile(file_name.c_str());
          TH1F* nevt = (TH1F*)f->Get("Nevt");
          TH1F* ttbar = (TH1F*)f->Get(hist_name.c_str());
          
          // Remember to scale the histograms
          int nTot_ttbar = nevt->GetBinContent(3) - nevt->GetBinContent(1);
          float scale = lumi[yr] * xSec_tt[yr][i] / nTot_ttbar;
          FillBins(ttHist, ttbar, v, false);
          ttHist->Scale(scale);
        }  
        Float_t n_tt = ttHist->GetEntries();
        
        // Get the appropriate DY histograms and combine them.
        TH1F* dyHist = new TH1F("ttHist", "", num_bins, min_val, max_val);
        for (int i = 0; i < 3; ++i)
        {
          std::string file_name = directory + DY_files[yr][i];
          if (debug) std::cout << ">>>> |" << file_name << std::endl;
          TFile *f = new TFile(file_name.c_str());
          TH1F* nevt = (TH1F*)f->Get("Nevt");
          TH1F* dy = (TH1F*)f->Get(hist_name.c_str());
          
          // Remember to scale the histograms
          int nTot_dy = nevt->GetBinContent(3) - nevt->GetBinContent(1);
          float scale = lumi[yr] * xSec_DY[yr][i] / nTot_dy;
          FillBins(dyHist, dy, v, false);
          dy->Scale(scale);
        }
        Float_t n_DY = dyHist->GetEntries();
        Float_t purity = n_tt / (n_tt + n_DY);
        
        std::cout << "========================================" << std::endl;
        std::cout << "Channel  : " << channel << std::endl;
        std::cout << "Year     : " << year << std::endl;
        std::cout << "Variable : " << variable << "\n" << std::endl;
        std::cout << "n_tt   = " << n_tt << std::endl;
        std::cout << "n_DY   = " << n_DY << std::endl;
        std::cout << "purity = " << purity << std::endl;
      
      }//end-for-variable
    }//end-for-year
    std::cout << "========================================\n" << std::endl;
  }//end-for-channel
  
  
}

// END OF FILE ////////////////////////////////////////////////////////////////
