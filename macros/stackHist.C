void stackHist()
{
	THStack *hs = new THStack("hs", "");
	TFile *f1 = new TFile("../output_MC2020_v2/DY_0J_amcatnlo_MC_2016.root");
	TH1D* h1 = (TH1D*)f1->Get("lJet_MET");
	h1->SetFillColor(kRed);
	
	TH1D* h3 = (TH1D*)f1->Get("bJet_MET");
	h3->SetFillColor(kGreen);
	TH1D* h4 = (TH1D*)f1->Get("cJet_MET");
	h4->SetFillColor(kBlue);
	
	TFile *f2 = new TFile("../output_MC2020_v2/TT_powheg_MC_2016.root");
	TH1D* h2 = (TH1D*)f2->Get("lJet_MET");
	h2->SetFillColor(kYellow);
	hs->Add(h3); hs->Add(h4); hs->Add(h1);  hs->Add(h2);
	
	hs->Draw();
    
}
