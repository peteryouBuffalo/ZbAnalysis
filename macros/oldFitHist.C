/******************************************************************************
*                                                                             *
* fithist.C - The following program takes two histograms and creates a ratio  *
*             plot between them. It also determines the normalization         *
*             coefficient between the two.                                    *
*                                                                             *
*  Created: October, 2020 - Peter Young                                       *
*  Updated: December, 2020 - --"--                                            *
*                                                                             *
******************************************************************************/

#include <math.h>

// global variables ///////////////////////////////////////////////////////////

TH1F* background;

// Round method ///////////////////////////////////////////////////////////////
std::string round(float val, int n)
{
  std::string num_text = std::to_string(val);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  return rounded;
}

// toSci method ///////////////////////////////////////////////////////////////
std::string toSci(float val, int n)
{
  int exp = (int)floor(log10(val));
  float value = val * pow(10,-1*exp);
  std::string num_text = std::to_string(value);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  std::string finalStr = rounded + "e" + std::to_string(exp);
  return finalStr;
}


// ftotal method //////////////////////////////////////////////////////////////
Double_t ftotal(Double_t *x, Double_t *par)
{
  Double_t xx = x[0];
  Int_t bin = background->GetXaxis()->FindBin(xx);
  Double_t br = par[0]*background->GetBinContent(bin);
  return br;
}

// fithist method /////////////////////////////////////////////////////////////
void fithist()
{
  //-- Get the files & retrieve the original histograms. --------------------//
  gStyle->SetOptStat(0);
  TFile *f = new TFile("../output_withTrig/SingleElectron_DATA_2016.root");
  TH1F* h1 = (TH1F*)f->Get("Zee_ZmassFull_2bjet");
  TH1F* h2 = (TH1F*)f->Get("Zem_2bjet_elecTrig_ZMass");
  
  int eeORmm = 0;   // 0 = ee, 1 = mm (this one is purely aesthetic)
  int type = 0;     // 0 = mass, 1 = MET, 2 = METsig (this one isn't)
 
  //-- Convert the histograms to the preferred bins. The current preference -//
  //-- is 2 GeV per bin. ----------------------------------------------------//

  // zMass bins
  Float_t massBins[] = {
    //40, 44, 48, 52, 56, 126, 130, 134, 136, 138, 142, 146, 150,
    //154, 158, 162, 166, 170, 174, 178, 182, 186, 190, 194, 198, 202
    40, 42, 44, 46, 48, 50, 52, 54, 56, 126, 128, 
    130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
    150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
    170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
    190, 192, 194, 196, 198, 200
  };

  // MET/METsig bins
  Float_t metBins[] = { 
    //80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124, 128, 132, 136, 140,
    //144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200
    80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
    102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126,
    128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152,
    154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178,
    180, 182, 184, 186, 188, 190, 192, 194, 196, 198, 200
  };

  Float_t sigBins[] = {
    //8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68,
    //72, 76, 80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124
    10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40,
    42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
    74, 76, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
    102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126
  };

  Float_t *bins;
  Float_t binL = 56, binH = 126, endPt = 0, startPt = 0;
  Int_t binnum = 0;

  switch(type)
  {
    case 0: // mass
      bins = massBins; binL = 56; binH = 126; endPt = 204; startPt = 38;
      binnum = sizeof(massBins)/sizeof(Float_t)-1; break;
    case 1: // met
      bins = metBins;  binL = 0; binH = 80; endPt = 204; startPt = 78;
      binnum = sizeof(metBins)/sizeof(Float_t)-1; break;
    case 2: // met sig
      bins = sigBins;  binL = 0; binH = 10; endPt = 126; startPt = 6;
      binnum = sizeof(sigBins)/sizeof(Float_t)-1; break;
  }
  
  TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
  nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
  nHist1->GetYaxis()->SetTitle("Events/2 GeV");
  //nHist1->GetXaxis()->SetTitle("M_{Z}");

  TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
  nHist2->SetLineColor(kBlack); nHist2->SetMarkerColor(kBlack);
  nHist2->GetYaxis()->SetTitle("Events/2 GeV");
  //nHist2->GetXaxis()->SetTitle("M_{Z}");

  std::string xLbl = "";
  switch(type)
  {
    case 0: xLbl = "M_{Z}"; break;
    case 1: xLbl = "MET"; break;
    case 2: xLbl = "MET Significance"; break;
  }

  nHist1->GetXaxis()->SetTitle(xLbl.c_str());
  nHist2->GetXaxis()->SetTitle(xLbl.c_str());
  
  //-- Now, let's take the data from the old histogram and fill the new. ----//

  long N_ll_low = 0L;  long N_ll_high = 0L;
  long N_emu_low = 0L; long N_emu_high = 0L;

  // Fill the first histogram
  int n1 = h1->GetNbinsX();
  for (int i = 0; i < n1; ++i)
  {
    // get the size and center of the i'th bin
    int size = h1->GetBinContent(i);
    int val = h1->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;
    if (val > endPt || val < startPt) continue;   
 
    // use the value to properly fill the new one
    for (int j = 0; j < size; ++j)
    {
      nHist1->Fill(val);
      if (val < binL) N_ll_low++;
      if (val > binH) N_ll_high++;
    }
  }//end-for

  // Fill the second histogram
  int n2 = h2->GetNbinsX();
  for (int i = 0; i < n2; ++i)
  {
    // get the size of center of the i'th bin
    int size = h2->GetBinContent(i);
    int val = h2->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;
    if (val > endPt || val < startPt) continue;

    // use the value to properly fill the new one
    for (int j = 0; j < size; ++j)
    {
      nHist2->Fill(val);
      if (val < binL) N_emu_low++;
      if (val > binH) N_emu_high++;
    }
  }//end-for

  background = nHist2;
  long N_ll_side = N_ll_low + N_ll_high;
  long N_emu_side = N_emu_low + N_emu_high;

  std::cout << "\n\tlow \thigh \tside (total)\n";
  std::cout << "-----\t----\t-----\t------------\n";
  std::cout << "N_ll\t" << N_ll_low << "\t" << N_ll_high << "\t" << N_ll_side << "\n";
  std::cout << "N_emu\t" << N_emu_low << "\t" << N_emu_high << "\t" << N_emu_side << "\n";

  //-- fit method #1 - the fit function -------------------------------------//
  float ct1 = 0.0; float err1 = 0.0;
  TF1 *ftot = new TF1("ftot", ftotal, 40, 200, 1);
  nHist1->Fit("ftot", "0q");
  ct1 = ftot->GetParameter(0);
  err1 = ftot->GetParError(0);

  float chi2 = ftot->GetChisquare();
  float ndf = ftot->GetNDF();
  float pval = ftot->GetProb();
 
  std::cout << "\nc_t = " << ct1 << " +/- " << err1 << "\n";  
  std::cout << "chi2/ndf = " << chi2 << "/" << ndf << " = " << 
               (chi2/ndf) << "\n";
  std::cout << "p-val = " << pval << "\n";

  //-- Now, let's properly scale the second histogram & draw. ---------------//

  nHist2->Scale(ct1);

  std::string ctOut = "c_{t} = " + round(ct1, 3) + 
				      " #pm " + round(err1, 3);
  float chi = chi2/ndf;
  std::string chiOut = "#chi^{2}/ndf = " + round(chi,3);
  std::string pvalOut = "p-val = " + toSci(pval, 2);

  int W = 800; int H = 600;
  float T = 0.08*H;    float B = 0.12*H;
  float L = 0.12*W;    float R = 0.04*W;

  TString canvName = "TTbarBackgroundEstimation_";
  canvName += W; canvName += "-";
  canvName += H; canvName += "-out";

  TCanvas* canv = new TCanvas(canvName, canvName, 50, 50, W, H);
  canv->SetFillColor(0);
  canv->SetBorderMode(0);
  canv->SetFrameFillStyle(0);
  canv->SetFrameBorderMode(0);
  canv->SetLeftMargin( L/W );
  canv->SetRightMargin( R/W );
  canv->SetTopMargin( T/H );
  canv->SetBottomMargin( B/H );
  canv->SetTickx(0);
  canv->SetTicky(0);

  TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");
  rat->Draw();

  gPad->Modified(); gPad->Update();
  TPad *pad = rat->GetUpperPad();
  rat->GetUpperRefYaxis()->SetTitle("Events/2 GeV");
  rat->GetLowerRefXaxis()->SetTitle("M_Z");
  rat->GetLowerRefYaxis()->SetTitle("ratio");
  rat->GetUpperRefYaxis()->SetLabelSize(0.03);
  rat->GetLowerRefXaxis()->SetLabelSize(0.03);
  rat->GetLowerRefYaxis()->SetRangeUser(0.,2.);

  TLegend *l = pad->BuildLegend();
  l->SetLineColor(kWhite);
  l->SetBorderSize(0);
  TList *p = l->GetListOfPrimitives();

  TIter next(p); TObject *obj;
  TLegendEntry *le; int i = 0;
  
  std::string lbl1 = "";
  switch(eeORmm)
  {
    case 0: lbl1 = "Z(#rightarrow ee) + #geq 2 b-jets"; break;
    case 1: lbl1 = "Z(#rightarrow #mu#mu) + #geq 2 b-jets"; break;
  }
  std::string lbl[] = { lbl1.c_str(), "Z(#rightarrow e#mu) + #geq 2 b-jets" };
 
  while ((obj=next()))
  {
    le = (TLegendEntry*)obj; i++;
    le->SetLabel(lbl[i-1].c_str());
  }
  //l->AddEntry((TObject*)0, ct.c_str(), "");
  //l->AddEntry((TObject*)0, chiOut.c_str(), "");
  pad->Modified(); pad->Update(); canv->Update();
  
  TLegend *l2 = new TLegend(0.1, 0.7, 0.35, 0.9);
  l2->SetLineColor(kWhite);
  l2->SetBorderSize(0);
  l2->AddEntry((TObject*)0, ctOut.c_str(), "");
  l2->AddEntry((TObject*)0, chiOut.c_str(), "");
  l2->AddEntry((TObject*)0, pvalOut.c_str(), "");
  l2->Draw("same"); pad->Modified(); pad->Update();

  canv->Update();
}
