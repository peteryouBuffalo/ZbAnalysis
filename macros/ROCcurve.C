/******************************************************************************
*                                                                             *
* ROCcurve.C - the following macro creates a ROC curve.                       *
*     Created December, 2020 - Peter Young                                    *
*                                                                             *
******************************************************************************/

#include "tdrstyle.C"

// main method for macro //////////////////////////////////////////////////////
void METcurve()
{
  //-- set the appropriate style --------------------------------------------//
   

  //-- get the file & the appropriate histograms ----------------------------//
  TFile *f = new TFile("../output_MC2020_v2/DY_0J_amcatnlo_MC_2016.root");
  TH1F* signals[] = 
  {
    (TH1F*)f->Get("lJet_MET"),
    (TH1F*)f->Get("bJet_MET"),
    (TH1F*)f->Get("cJet_MET"),
    (TH1F*)f->Get("lJet_PuppiMET"),
    (TH1F*)f->Get("bJet_PuppiMET"),
    (TH1F*)f->Get("cJet_PuppiMET"),
    (TH1F*)f->Get("lJet_METsig"),
    (TH1F*)f->Get("bJet_METsig"),
    (TH1F*)f->Get("cJet_METsig")
  };

  std::string names[] = 
  {
    "Z+l Eff vs ttbar Eff (MET)",
    "Z+b Eff vs ttbar Eff (MET)",
    "Z+c Eff vs ttbar Eff (MET)",
    "Z+l Eff vs ttbar Eff (PuppiMET)",
    "Z+b Eff vs ttbar Eff (PuppiMET)",
    "Z+c Eff vs ttbar Eff (PuppiMET)",
    "Z+l Eff vs ttbar Eff (MET Sig)", 
    "Z+b Eff vs ttbar Eff (MET Sig)",
    "Z+c Eff vs ttbar Eff (MET Sig)"
  };

  TFile *f2 = new TFile("../output_MC2020_v2/TT_semi_powheg_MC_2017.root");
  TH1F* backgrounds[] =
  {
    (TH1F*)f2->Get("lJet_MET"),
    (TH1F*)f2->Get("bJet_MET"),
    (TH1F*)f2->Get("cJet_MET"),
    (TH1F*)f2->Get("lJet_PuppiMET"),
    (TH1F*)f2->Get("bJet_PuppiMET"),
    (TH1F*)f2->Get("cJet_PuppiMET"),
    (TH1F*)f2->Get("lJet_METsig"),
    (TH1F*)f2->Get("bJet_METsig"),
    (TH1F*)f2->Get("cJet_METsig")
  };

  int numSignals = sizeof(names)/sizeof(std::string);

  //-- calculate the values -------------------------------------------------//
  Int_t N = 50;
  Double_t cuts[N];

  std::vector<std::vector<Double_t>> bgEff;
  std::vector<std::vector<Double_t>> dataEff;
  std::vector<std::vector<Int_t>> nData;
 
  // get the efficiency at each cut
  for (Int_t i = 0; i < N; ++i)
  {
    cuts[i] = i * 5;  // cut value changes by 5 GeV
    Int_t nBg = 0;
    std::vector<Double_t> bgEffAtCutI;

    // calculate the background efficiency
    for (Int_t j = 0; j < numSignals; ++j)
    {
      Int_t bgTotal = backgrounds[j]->Integral();
      Int_t nBg = 0;
      for (Int_t k = 0; k < backgrounds[j]->GetNbinsX(); ++k)
      {
        int nEntries = backgrounds[j]->GetBinContent(k);
        int binCenter = backgrounds[j]->GetBinCenter(k);
        if (binCenter < cuts[i]) nBg += nEntries;
      }

      Double_t bgEff = nBg/(bgTotal*1.0);
     // if (j == 0) std::cout << "cut #" << i << " : eff = " << bgEff << std::endl;
      bgEffAtCutI.push_back(bgEff); 
    } 
    
    std::vector<Double_t> effAtCutI;
    std::vector<Int_t> nAtCutI;
    
    // generate the efficiencies for each signal
    for (Int_t j = 0; j < numSignals; ++j)
    { 
      Int_t nSize = signals[j]->Integral();
      Int_t nSig = 0;
      for (Int_t k = 0; k < signals[j]->GetNbinsX(); ++k)
      {
        int nEntries = signals[j]->GetBinContent(k); 
        int binCenter = signals[j]->GetBinCenter(k);
        if (binCenter < cuts[i]) nSig += nEntries;
      }

      Double_t sigEff = nSig/(nSize*1.0);
      //if (j == 0)
      //{ std::cout << "cut #" << i << ": eff = " << sigEff << "\n"; }
      effAtCutI.push_back(sigEff);
      nAtCutI.push_back(nSig);
    }

    nData.push_back(nAtCutI);
    dataEff.push_back(effAtCutI);
    bgEff.push_back(bgEffAtCutI);
  }

  //-- now that we have the results, let's plot the details -----------------//
  TMultiGraph *mg = new TMultiGraph("mg", "");
  mg->GetXaxis()->SetTitle("Background Selection Eff.");
  mg->GetYaxis()->SetTitle("Z+j Selection Eff.");

  TLegend *l = new TLegend(0.68, 0.72,  0.98, 0.92);
  l->SetLineColor(kWhite);
  l->SetBorderSize(0);

  for (Int_t i = 0; i < numSignals; ++i)
  {
    // properly format the data for use
    Double_t data[N];
    for (Int_t j = 0; j < N; ++j)
    { data[j] = dataEff.at(j).at(i); }

    Double_t bg[N];
    for (Int_t j = 0; j < N; ++j)
    { bg[j] = bgEff.at(j).at(i); }

    // create the TGraph
    TGraph* gr = new TGraph(N, bg, data);
    if (i % 3 == 0) { gr->SetLineColor(kGreen+3); }
    else if (i % 3 == 1) { gr->SetLineColor(kRed+1); }
    else if (i % 3 == 2) { gr->SetLineColor(kBlue+2); }
    else { gr->SetLineColor(kBlack+3); }
    
    if (i < 3) gr->SetLineStyle(2);
    else if (i > 5) gr->SetLineStyle(4);
    gr->SetLineWidth(2);
    
    if (i == 4) gr->SetMarkerStyle(20);

    // add the cut values to the graph
    if (i == 0)
    {
      for (Int_t j = 0; j < N; ++j)
      {
        if (j > 20) continue;
        Double_t y = gr->GetY()[j]+0.2;
        if (cuts[j] > 40) y = gr->GetY()[j]-0.1;
        TLatex *lt = new TLatex(gr->GetX()[j], y, Form("%.1f", cuts[j]));
        lt->SetTextSize(0.029);
        gr->GetListOfFunctions()->Add(lt);
      }
    }

    mg->Add(gr, "");
    std::string str = names[i];
    l->AddEntry(gr, str.c_str(), "l");

  }//end-for-i

  TCanvas *cs = new TCanvas("ROC", "", 10, 10, 1280, 720);
  cs->SetGrid();
  mg->Draw("acp"); l->Draw();
  gPad->Update(); gPad->Modified();
}

// END OF MACRO ///////////////////////////////////////////////////////////////
