/*****************************************************************************
*                                                                            *
* model_unc.C - This macro takes the proper data, subtracts out the MC       *
*               background estimations, and then gets the (data-bkgd)/MC     *
*               ratio at each bin. We can then fit the values with a generic *
*               polynomials.                                                 *
*                                                                            *
*               created June 2021, Peter W. Young                            *
*                                                                            *
*****************************************************************************/

// MAIN VARIABLES ////////////////////////////////////////////////////////////

// The necessary channels & variables we want to check
std::string channels[] = { "Zee", "Zmm" };
std::string var[] = { "jet_pt_dilepton", "jet_pt_lep0",
  "jet_deltaPhiRoot_lep0", "jet_deltaEtaRoot_lep0", "jet_deltaRroot_lep0" };

// The necessary years
int years[] = { 2016, 2017, 2018 };

// The necessary files
std::vector<std::string> elec_files = {   //Electron DATA
  "SingleElectron_DATA_2016.root", 
  "SingleElectron_DATA_2017.root",
  "EGamma_DATA_2018.root"
};

std::vector<std::string> muon_files = {   //Muon DATA
  "SingleMuon_DATA_2016.root",
  "SingleMuon_DATA_2017.root",
  "SingleMuon_DATA_2018.root"
};

std::string XX = "DY_0J_amcatnlo_MC_";    //DY_0J MC
std::string bX = "DY_1J_amcatnlo_MC_";    //DY_1J MC
std::string bb = "DY_2J_amcatnlo_MC_";    //DY_2J MC

std::vector<std::vector<std::string> > TT = {  //TT MC
  { "TT_powheg_MC_" },
  { "TT_semi_powheg_MC_", "TT_dilep_powheg_MC_"},
  { "TT_semi_powheg_MC_", "TT_dilep_powheg_MC_"}
};

std::vector<std::string > ST = {  //ST MC
  "ST_tchan_top_MC_", "ST_tchan_antitop_MC_", "ST_schan_MC_",
  "ST_tW_top_MC_", "ST_tW_antitop_MC_" 
};

std::string WW = "WW_MC_";  //WW MC
std::string WZ = "WZ_MC_";  //WZ MC
std::string ZZ = "ZZ_MC_";  //ZZ MC
std::string ZH = "ZH_MC_";  //ZH MC

// MAIN MACRO ////////////////////////////////////////////////////////////////
void model_unc() {

bool debug = false;
gROOT->SetBatch(kTRUE);

// Test
std::cout << "Model Uncertianty Macro (June 2020, v1)" << std::endl;
std::cout << "=======================================" << std::endl;

// Go through each channel
for (int ch = 0; ch < 2; ++ch) {

  // Go through each year
  for (int yr = 0; yr < 3; ++yr) {

    // Go through each variables
    for (int v = 0; v < 5; ++v) {

      // Get the proper data file & pull the proper histogram
      std::string datafile = "";
      if (ch == 0) datafile = elec_files.at(yr);
      else datafile = muon_files.at(yr);

      std::string fullfile = "../root_files/check/" + datafile;
      if (debug) std::cout << fullfile << "\n";
      TFile *f = new TFile(fullfile.c_str(), "READ");
      
      std::string hist = "";
      hist = channels[ch] + "_" + var[v];
      if (debug) std::cout << "\t" << hist << "\n";
      TH1F* data = (TH1F*)f->Get(hist.c_str());

      float data_arr[data->GetNbinsX()];
      for (int i = 0; i < data->GetNbinsX(); ++i) {
        data_arr[i] = data->GetBinContent(i);
      } // end-data-loop

      // Get the proper backgrounds
      std::vector<std::string> backgrounds = {
        bX.c_str() + std::to_string(years[yr]),  // bX
        XX.c_str() + std::to_string(years[yr]),  // XX
        WW.c_str() + std::to_string(years[yr]),  // WW
        WZ.c_str() + std::to_string(years[yr]),  // WZ
        ZZ.c_str() + std::to_string(years[yr]),  // ZZ
        ZH.c_str() + std::to_string(years[yr])   // ZH
      };
      int tSize = TT.at(yr).size();
      for (int i = 0; i < tSize; ++i) {          // TT
      backgrounds.push_back(TT.at(yr).at(i).c_str() + std::to_string(years[yr]));
      }
      int sSize = ST.size();
      for (int i = 0; i < sSize; ++i) {          // ST
      backgrounds.push_back(ST.at(i).c_str() + std::to_string(years[yr]));
      }

      if (debug and v == 0) {
        for (int i = 0; i < backgrounds.size(); ++i)
          std::cout << backgrounds.at(i).c_str() << "\n";
      }

      float bg_arr[data->GetNbinsX()];
      // For each background, get the file & subtract bckgd from data
      for (int b = 0; b < backgrounds.size(); ++b) {

        std::string name = "../root_files/check/" + backgrounds.at(b) + ".root";
        TFile *fb = new TFile(name.c_str(), "READ");
        TH1F* bg = (TH1F*)fb->Get(hist.c_str());
        for (int i = 0; i < bg->GetNbinsX(); ++i) {
          data_arr[i] -= bg->GetBinContent(i);
          bg_arr[i] += bg->GetBinContent(i);
        }//end-bin-loop

      }//end-background-loop     

      // Add the new data back to an appropriate histogram.
      TH1F* data_noBg = (TH1F*)data->Clone(); data_noBg->Reset();
      for (int i = 0; i < data_noBg->GetNbinsX(); ++i) {
      data_noBg->SetBinContent(i, data_arr[i]);
      }//end-bin-loop 
      data_noBg->Scale(1/data_noBg->Integral());

      // Let's get the bb data for comparison.
      std::string filebb = "../root_files/check/" + bb +
        std::to_string(years[yr]) + ".root";
      TFile* f2 = new TFile(filebb.c_str(), "READ");
      TH1F* MC = (TH1F*)f2->Get(hist.c_str());
      MC->Scale(1/MC->Integral());

      // Now, let's get the ratio between the two.
      TH1F* ratio = (TH1F*)data->Clone(); ratio->Reset();
      ratio->SetLineColor(kRed); ratio->SetFillColor(kRed);
      for (int i = 0; i < ratio->GetNbinsX(); ++i) {
        float new_val = data_noBg->GetBinContent(i)/MC->GetBinContent(i);
        ratio->SetBinContent(i, new_val);
      }//end-bin-loop

      // Now, let's print the plots
      TCanvas* c = new TCanvas();
      ratio->Draw();
      std::string path = "model_results/" + channels[ch] + "_" + 
        var[v] + "_" + std::to_string(years[yr]) + ".pdf";
      c->SaveAs(path.c_str());

    }//end-variable-loop

  }//end-year-loop

}//end-channel-loop

}
// END OF FILE ///////////////////////////////////////////////////////////////
