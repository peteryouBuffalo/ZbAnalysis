void DYtoQQ_iso()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb  8 12:34:27 2021) by ROOT version 6.14/09
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",298,114,538,323);
   Canvas_1->Range(-37.5,-0.5271585,337.5,1.734126);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLogy();
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *h_dR_DYtoQQ_Zmass_iso__2 = new TH1D("h_dR_DYtoQQ_Zmass_iso__2","",300,0,300);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(1,16);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(2,17);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(3,14);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(4,7);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(5,3);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(7,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(10,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(11,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(17,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(18,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(28,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(44,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(50,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(124,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(165,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(213,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(267,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetBinContent(277,1);
   h_dR_DYtoQQ_Zmass_iso__2->SetEntries(70);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_dR_DYtoQQ_Zmass_iso");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 70     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  19.01");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  55.57");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_dR_DYtoQQ_Zmass_iso__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_dR_DYtoQQ_Zmass_iso__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dR_DYtoQQ_Zmass_iso__2->SetLineColor(ci);
   h_dR_DYtoQQ_Zmass_iso__2->GetXaxis()->SetLabelFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->GetXaxis()->SetLabelSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetXaxis()->SetTitleSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetXaxis()->SetTitleFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->GetYaxis()->SetLabelFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->GetYaxis()->SetLabelSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetYaxis()->SetTitleSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetYaxis()->SetTitleOffset(0);
   h_dR_DYtoQQ_Zmass_iso__2->GetYaxis()->SetTitleFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->GetZaxis()->SetLabelFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->GetZaxis()->SetLabelSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetZaxis()->SetTitleSize(0.035);
   h_dR_DYtoQQ_Zmass_iso__2->GetZaxis()->SetTitleFont(42);
   h_dR_DYtoQQ_Zmass_iso__2->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
