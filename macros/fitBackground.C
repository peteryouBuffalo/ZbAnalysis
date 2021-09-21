/******************************************************************************
*																			  *
* fistBackground.C - The following program takes two histograms and creates a *
* 					 normalization coefficient between the two. It then uses  *
*					 this coefficient scale the background with the signal.   *
*																			  *
*  Created: February, 2021 - Peter Young									  *
*																		      *
******************************************************************************/

#include <math.h>
#include "BinningValues.h"
#include "OutputFuncs.h"

// global variables ///////////////////////////////////////////////////////////

TH1F* background;
Float_t minVal, maxVal, regionL, regionH;

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

// FillBins method /////////////////////////////////////////////////////////////
void FillBins(TH1F* hist, TH1F* orig, int an, bool fillMid=false)
{
	int n1 = orig->GetNbinsX();
	for (Int_t i = 0; i < n1; ++i)
	{
		// determine the size of the bin & its appropriate value
		int size = orig->GetBinContent(i);
		int center = orig->GetBinCenter(i);
	
		if (center > regionL && center < regionH && !fillMid) continue;
		if ((center <= regionL || center >= regionH) && fillMid) continue;
		if (center < minVal || center > maxVal) continue;
		
		for (Int_t j = 0; j < size; ++j)
			hist->Fill(center);
	}
	
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

// fistBackground method (MAIN CODE) //////////////////////////////////////////
void fitBackground()
{
	// Get the location of the files you want to use
	std::string fileLoc = "../output_prefire/";
	std::string filesEE[] = 
    {  "SingleElectron_DATA_2016.root", "SingleElectron_DATA_2017.root",
     "EGamma_DATA_2018.root" };
    std::string filesMM[] =
    {  "SingleMuon_DATA_2016.root", "SingleMuon_DATA_2017.root",
     "SingleMuon_DATA_2018.root" };
     
    std::string fileLoc2 = "../output_prefire/";
    std::string filesTT[3][2] =
    {
    	{ "TT_powheg_MC_2016.root", ""},
    	{ "TT_semi_powheg_MC_2017.root", "TT_dilep_powheg_MC_2017.root"},
    	{ "TT_semi_powheg_MC_2018.root", "TT_dilep_powheg_MC_2018.root"},
    };
     
    //--- Set the options that you want -------------------------------------//
    
   	int year = 2018;
   	int channel = 1;		// 0 = electron, 1 = muon
   	int analysis = 0;		// 0 = mass, 1 = MET, 2 = MET sig
   	int binSize = 4;		// (in GeV), size for analysis for ct
   	int outSize = 2;		// (in GeV), size for final plot
   	
   	// Set the appropriate files & histograms -------------------------------//
   	
   	std::string fName = (channel == 0) ? filesEE[year-2016] : filesMM[year-2016];
    std::string h1Name = (channel == 0) ? histEE[analysis*2] : histMM[analysis*2];
    std::string h2Name = (channel == 0) ? histEE[analysis*2+1] : histMM[analysis*2+1];
	
	std::string filename = fileLoc + fName;
	TFile *f = new TFile(filename.c_str());
	TH1F* h1 = (TH1F*)f->Get(h1Name.c_str());
	TH1F* h2 = (TH1F*)f->Get(h2Name.c_str());
	
	switch(analysis)
	{
		case 0:
			minVal = 36; maxVal = 204; regionL = 72; regionH = 112; break;
		case 1:
			minVal = 76; maxVal = 204; regionL = -1; regionH = -1; break;
		case 2:
			minVal = 16; maxVal = 84; regionL = -1; regionH = -1; break;
	}
	
	h1->Rebin(binSize); h1->SetLineColor(kBlack); h1->SetMarkerColor(kBlack);
	h2->Rebin(binSize); h2->SetLineColor(kBlue); h2->SetMarkerColor(kBlue);
	
	int numBins = (maxVal-minVal)/binSize;
	TH1F* nHist1 = new TH1F("n1", "", numBins, minVal, maxVal);
	nHist1->SetLineColor(kBlack); nHist1->SetMarkerColor(kBlack);
    nHist1->SetMarkerStyle(20); FillBins(nHist1, h1, analysis);
    
	TH1F* nHist2 = new TH1F("n2", "", numBins, minVal, maxVal);
	nHist2->SetLineColor(kAzure); nHist2->SetMarkerColor(kAzure);
	FillBins(nHist2, h2, analysis);
	 
	//--- Now, use the fit function to get the values ------------------------//
	
	background = nHist2;
	TF1* ftot = new TF1("ftot", ftotal, 40, 200, 1);
    nHist1->Fit("ftot", "0q");
    float ct = ftot->GetParameter(0);
    float err = ftot->GetParError(0);
    float chi2 = ftot->GetChisquare();
    float ndf = ftot->GetNDF();
    float pval = ftot->GetProb();
    float chi = chi2/ndf;
    
    std::string ctOut = "c_{t} = " + round(ct, 3) + 
    			 		" #pm " + round(err,3);
	std::string chiOut = "#chi^{2}/ndf = " + round(chi,3);
	std::string pvalOut = "p-val = " + toSci(pval, 2);
	
	std::cout << ctOut << std::endl;
	std::cout << chiOut << std::endl;
	std::cout << pvalOut << std::endl;
	
	//--- Create the canvas -------------------------------------------------//
	
	int W = 800; int H = 600;
    float T = 0.08*H;    float B = 0.12*H;
    float L = 0.12*W;    float R = 0.04*W;
    TCanvas *canv = new TCanvas("canv", "canv", 50, 50, W, H);
    canv->SetFillColor(kWhite); canv->SetBorderMode(0);
    canv->SetFrameFillStyle(0); canv->SetLeftMargin(L/W);
    canv->SetRightMargin(R/W); canv->SetTopMargin(T/H);
    canv->SetBottomMargin(B/H); canv->SetTickx(0);
    canv->SetTicky(0);
    
    //--- Modify the MC for output ------------------------------------------//
    
  	float lumi[] = { 35862, 41529, 59710 };
  	float xSec[3][2] = { {831.76, 0}, {365.3, 88.2}, {365.3, 88.2}};
  	
  	TH1F* ttHist = new TH1F("n2", "", numBins, minVal, maxVal);
	ttHist->SetLineColor(kRed); ttHist->SetMarkerColor(kRed);
	
	int num = year == 2016 ? 1 : 2;
	int yI = year-2016;
	for (int i = 0; i < num; ++i)
	{
		// Get the proper values to calculate the scale factor
		std::string filename = fileLoc2 + filesTT[year-2016][i];
		std::cout << filename << "\n";
		TFile *f = new TFile(filename.c_str());
		TH1F* nevt = (TH1F*)f->Get("Nevt");
		TH1F* ttbar = (TH1F*)f->Get(h1Name.c_str());
		
		// scale it
		int nTot_ttbar = nevt->GetBinContent(3) - nevt->GetBinContent(1);
		float scale = lumi[yI]*xSec[yI][i]/nTot_ttbar;
		std::cout << "scale " << (i+1) << " = " << scale << "\n";
		//ttbar->Scale(scale);
		
		// add the values to the overall background
		for (int j = 0; j < 2; ++j)
			FillBins(ttHist, ttbar, analysis, j);
		ttHist->Scale(scale);
		//delete ttbar;
	}
	
    
    //--- Create the background plot ----------------------------------------//
    
    // make sure to add the middles back in
    FillBins(nHist1, h1, analysis, true); //nHist1->Rebin(outSize);
    FillBins(nHist2, h2, analysis, true); //nHist2->Rebin(outSize);
    
    nHist2->Scale(ct);
    THStack *hStack = new THStack();
    hStack->Add(nHist1, "HIST");
    hStack->Add(nHist2, "HIST");
    hStack->Add(ttHist, "HIST");
    hStack->Draw("nostack");
    hStack->GetXaxis()->SetTitle("M_{ll} (GeV)");
    
    std::string yLbl = "Events/" + std::to_string(binSize) + " GeV";
    hStack->GetYaxis()->SetTitle(yLbl.c_str());
    
    std::string lbl = "", lbl2 = "";
	switch(channel)
	{
	  case 0:
	  	lbl = "ee + #geq 2 b-jets data"; 
	  	lbl2 = "t#bar{t}#rightarrow ee MC"; break;
	  case 1: 
	 	lbl = "#mu#mu + #geq 2 b-jets data"; 
	 	lbl2 = "t#bar{t}#rightarrow #mu#mu MC"; break;
	}
	std::string labels[] = 
	{ lbl.c_str(), "e#mu + #geq 2 b-jets data", 
	lbl2.c_str() };
	TLegend *l = new TLegend(0.65, 0.7, 0.92, 0.9);
	l->SetFillColor(kWhite); l->SetLineColor(kWhite);
	l->AddEntry(nHist1, labels[0].c_str(), "L");
	l->AddEntry(nHist2, labels[1].c_str(), "L");
	l->AddEntry(ttHist, labels[2].c_str(), "L");
	l->Draw("same");
	
	//TLegend *l2 = new TLegend(0.3, 0.2, 0.7, 0.33);
	TLegend *l2 = new TLegend(0.65, 0.4, 0.92, 0.55);
	l2->SetLineColor(kWhite);
	l2->SetBorderSize(0);
	l2->AddEntry((TObject*)0, ctOut.c_str(), "");
	l2->AddEntry((TObject*)0, chiOut.c_str(), "");
	l2->AddEntry((TObject*)0, pvalOut.c_str(), "");
	l2->Draw("same");
    
}
// END OF FILE ////////////////////////////////////////////////////////////////


