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
Float_t binL, binH, startPt, endPt;

/*The following arrays contain the binning options for each analysis. They
 * are for either 2 GeV bins or 4 GeV bins. */
Float_t massBins[] = 
{
  40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
  110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 
  130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
  150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
  170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
  190, 192, 194, 196, 198, 200
}; Float_t sizeMass = sizeof(massBins)/sizeof(Float_t)-1;
Float_t massBins4[] = 
{
  40, 44, 48, 52, 56, 60, 64, 68, 72, 
  110, 114, 118, 122, 126, 130, 134, 138, 142, 146, 150,
  154, 158, 162, 166, 170, 174, 178, 182, 186, 190, 194,
  198, 202
}; Float_t sizeMass4 = sizeof(massBins4)/sizeof(Float_t)-1;

Float_t metBins[] = 
{
  80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
  102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126,
  128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152,
  154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178,
  180, 182, 184, 186, 188, 190, 192, 194, 196, 198, 200
}; Float_t sizeMET = sizeof(metBins)/sizeof(Float_t)-1;
Float_t metBins4[] =
{
  80, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124, 128, 132, 136, 140,
  144, 148, 152, 156, 160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200
}; Float_t sizeMET4 = sizeof(metBins4)/sizeof(Float_t)-1;

Float_t sigBins[] = 
{
  20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40,
  42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
  74, 76, 80 /*, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
  102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124*/
}; Float_t sizeSig = sizeof(sigBins)/sizeof(Float_t)-1;
Float_t sigBins4[] = 
{
  20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68,
  72, 76, 80 /*, 84, 88, 92, 96, 100, 104, 108, 112, 116, 120, 124*/
}; Float_t sizeSig4 = sizeof(sigBins4)/sizeof(Float_t)-1;

// Histogram names ////////////////////////////////////////////////////////////
std::string histEE[] = 
{
	"Zee_ZmassFull_2bjet", "Zem_2bjet_elecTrig_ZMass",
	"Zee_MET_2bjet", "Zem_MET_2bjet_elec",
	"Zee_METsig_2bjet", "Zem_METsig_2bjet_elec"
};

std::string histMM[] = 
{
	"Zmm_ZmassFull_2bjet", "Zem_2bjet_muonTrig_ZMass",
	"Zmm_MET_2bjet", "Zem_MET_2bjet_muon",
	"Zmm_METsig_2bjet", "Zem_METsig_2bjet_muon"
};

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
  std::cout << "p-val = " << val << "\n";
  int exp = (int)floor(log10(val));
  float value = val * pow(10,-1*exp);
  std::string num_text = std::to_string(value);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  std::string finalStr = rounded + "e" + std::to_string(exp);
  return finalStr;
}

// FixBins method /////////////////////////////////////////////////////////////
void FixBins(TH1F* hist, TH1F* orig, int an)
{
        // get the contents from the original bin
	int n1 = orig->GetNbinsX();
	for (Int_t i = 0; i < n1; ++i)
	{
                // determine the size of the bin & its appropriate value
		int size = orig->GetBinContent(i);
		int center = orig->GetBinCenter(i);

		// if this bin is not in the range we want to look at, skip it
		if (center >= binL && center <= binH && an == 0) continue;
		if (center > binL && center < binH && an != 0) continue;
		if (center < startPt || center > endPt) continue;
		
                // fill the new histogram
		for (Int_t j = 0; j < size; ++j)
			hist->Fill(center);
	}
	
        // add the appropriate label
	std::string xLbl;
	if (an == 0) xLbl = "M_{Z}"; 
	else if (an == 1) xLbl = "MET"; 
	else xLbl = "MET Significance";
	
	hist->GetXaxis()->SetTitle(xLbl.c_str());
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
  gStyle->SetOptStat(0);
  
  //--- Files that are currently being used ---------------------------------//
  std::string fileLoc = "../output_updated/";
  
  std::string filesEE[] = 
  {  "SingleElectron_DATA_2016.root", "SingleElectron_DATA_2017.root",
     "EGamma_DATA_2018.root" };
  std::string filesMM[] =
  {  "SingleMuon_DATA_2016.root", "SingleMuon_DATA_2017.root",
     "SingleMuon_DATA_2018.root" };
  
  //--- Options to Set ------------------------------------------------------//
  
  int year = 2016;
  int channel = 1;		// 0 = electron, 1 = muon (completely aesthetic)
  int analysis = 0;		// 0 = mass, 1 = MET, 2 = MET sig
  int binSize = 1;		// 0 = 2 GeV, 1 = 4 GeV
	
  //--- Get the appropriate files & histograms ------------------------------//

  std::string fName = (channel == 0) ? filesEE[year-2016] : filesMM[year-2016];
  std::string h1Name = (channel == 0) ? histEE[analysis*2] : histMM[analysis*2];
  std::string h2Name = (channel == 0) ? histEE[analysis*2+1] : histMM[analysis*2+1];
  
  std::string filename = fileLoc + fName;
  TFile *f = new TFile(filename.c_str());
  TH1F* h1 = (TH1F*)f->Get(h1Name.c_str());
  TH1F* h2 = (TH1F*)f->Get(h2Name.c_str());
  
  /* This is for including the ttbar background over top if you wish to do so.
   * It is currently not included and any ttbar contribution is scaled to 0. */
  TFile *f2 = new TFile("../output_MC2020_v2/TT_semi_powheg_MC_2017.root");
  TH1F* h3 = (TH1F*)f->Get(h1Name.c_str());
  
  //--- Get the necessary information to resize the histograms as necessary--//
  Float_t *bins; Int_t binnum = 0;
  
  switch(analysis)
  {
    case 0:	//Z mass
      bins = (binSize == 0) ? massBins : massBins4;
      binnum = (binSize == 0) ? sizeMass : sizeMass4;
      binL = 72; binH = 110; startPt = 38; endPt = 204; break;
    
    case 1: // MET
      bins = (binSize == 0) ? metBins : metBins4;
      binnum = (binSize == 0) ? sizeMET : sizeMET4;
      binL = 0; binH = 78; startPt = 78; endPt = 204; break;
     
    case 2: // MET Sig
      bins = (binSize == 0) ? sigBins : sigBins4;
      binnum = (binSize == 0) ? sizeSig : sizeSig4; 
      binL = 0; binH = 20; // binH = (binSize == 0) ? 10 : 8;
      startPt = (binSize == 0) ? 16 : 16; endPt = 84; break;
  }
  
  //--- Now that we have the information, modify the histograms -------------//
  
  for (int i = 0; i < binnum; ++i)
  { bins[i] = bins[i] - 0.5; }
  
  TH1F* nHist1 = new TH1F("n1", "", binnum, bins); 
  nHist1->SetLineColor(kBlack); nHist1->SetMarkerColor(kBlack);
  nHist1->SetMarkerStyle(20); FixBins(nHist1, h1, analysis);
  
  TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
  nHist2->SetLineColor(kAzure); nHist2->SetMarkerColor(kAzure);
  FixBins(nHist2, h2, analysis);
  
  TH1F* nHist3 = new TH1F("n3", "", binnum, bins);
  nHist3->SetLineColor(kRed); nHist3->SetMarkerColor(kRed);
  FixBins(nHist3, h3, analysis);
  
  background = nHist2;
  
  //--- Now, use the fit function to get values -----------------------------//
  TF1* ftot = new TF1("ftot", ftotal, 40, 200, 1);
  nHist1->Fit("ftot", "0q");
  float ct = ftot->GetParameter(0);
  float err = ftot->GetParError(0);
  float chi2 = ftot->GetChisquare();
  float ndf = ftot->GetNDF();
  float pval = ftot->GetProb();
  
  //--- Modify values for output --------------------------------------------//
  nHist2->Scale(ct);
  nHist3->Scale(1./nHist1->Integral());

  std::string ctOut = "c_{t} = " + round(ct, 3) + 
                      " #pm " + round(err, 3);
  float chi = chi2/ndf;
  std::string chiOut = "#chi^{2}/ndf = " + round(chi,3);
  std::string pvalOut = "p-val = " + toSci(pval, 2);

  // Create the canvas
  int W = 800; int H = 600;
  float T = 0.08*H;    float B = 0.12*H;
  float L = 0.12*W;    float R = 0.04*W;
  TCanvas *canv = new TCanvas("canv", "canv", 50, 50, W, H);
  canv->SetFillColor(kWhite); canv->SetBorderMode(0);
  canv->SetFrameFillStyle(0); canv->SetLeftMargin(L/W);
  canv->SetRightMargin(R/W); canv->SetTopMargin(T/H);
  canv->SetBottomMargin(B/H); canv->SetTickx(0);
  canv->SetTicky(0);

  // Create the ratio plot
  TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");
  rat->SetH1DrawOpt("E"); rat->SetH2DrawOpt("H");
  rat->Draw(); rat->GetUpperPad()->cd(); nHist3->Draw("same");

  gPad->Modified(); gPad->Update();
  TPad *pad = rat->GetUpperPad();
  if (binSize == 0) rat->GetUpperRefYaxis()->SetTitle("Events/2 GeV");
  else rat->GetUpperRefYaxis()->SetTitle("Events/4 GeV");
  rat->GetLowerRefYaxis()->SetTitle("ratio");
  rat->GetUpperRefYaxis()->SetLabelSize(0.03);
  rat->GetLowerRefXaxis()->SetLabelSize(0.03);
  rat->GetLowerRefYaxis()->SetRangeUser(0.,2.);
  
  // create the legend
  TLegend *l = pad->BuildLegend();
  l->SetLineColor(kWhite); l->SetBorderSize(0);
  TList *p = l->GetListOfPrimitives();

  TIter next(p); TObject *obj;
  TLegendEntry *le; int i = 0;

  std::string lbl = "";
  switch(channel)
  {
	  case 0: lbl = "Z(#rightarrow ee) + #geq 2 b-jets"; break;
	  case 1: lbl = "Z(#rightarrow #mu#mu) + #geq 2 b-jets"; break;
  }
  std::string labels[] = 
  { lbl.c_str(), "Z(#rightarrow e#mu) + #geq 2 b-jets", 
	"t#bar{t}" };
	  
  while ((obj=next()))
  { le = (TLegendEntry*)obj; i++;
    le->SetLabel(labels[i-1].c_str()); }
  pad->Modified(); pad->Update();

  // Create the legend that contains the stats
  TLegend *l2 = new TLegend(0.1, 0.7, 0.35, 0.9);
  l2->SetLineColor(kWhite);
  l2->SetBorderSize(0);
  l2->AddEntry((TObject*)0, ctOut.c_str(), "");
  l2->AddEntry((TObject*)0, chiOut.c_str(), "");
  l2->AddEntry((TObject*)0, pvalOut.c_str(), "");
  l2->Draw("same"); gPad->Modified(); gPad->Update();
  canv->Update();
}
// END OF FILE ////////////////////////////////////////////////////////////////
