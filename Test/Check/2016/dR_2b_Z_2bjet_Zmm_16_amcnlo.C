void dR_2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_16_amcnlo/dR_2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:38 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_16_amcnlo", "dR_2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-9.022484,6.314516,9023.461);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(7733.536);
   
   TH1F *st_stack_309 = new TH1F("st_stack_309","",25,0,10);
   st_stack_309->SetMinimum(0.01);
   st_stack_309->SetMaximum(8120.213);
   st_stack_309->SetDirectory(0);
   st_stack_309->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_309->SetLineColor(ci);
   st_stack_309->GetXaxis()->SetRange(1,15);
   st_stack_309->GetXaxis()->SetLabelFont(42);
   st_stack_309->GetXaxis()->SetLabelSize(0.035);
   st_stack_309->GetXaxis()->SetTitleSize(0.035);
   st_stack_309->GetXaxis()->SetTitleFont(42);
   st_stack_309->GetYaxis()->SetTitle("Events/0.4");
   st_stack_309->GetYaxis()->SetLabelFont(42);
   st_stack_309->GetYaxis()->SetLabelSize(0.05);
   st_stack_309->GetYaxis()->SetTitleSize(0.057);
   st_stack_309->GetYaxis()->SetTitleOffset(1.2);
   st_stack_309->GetYaxis()->SetTitleFont(42);
   st_stack_309->GetZaxis()->SetLabelFont(42);
   st_stack_309->GetZaxis()->SetLabelSize(0.035);
   st_stack_309->GetZaxis()->SetTitleSize(0.035);
   st_stack_309->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_309);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,2.026824);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,3.111439);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,4.584216);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,5.992226);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,9.135305);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,10.25841);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,10.37596);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,6.491714);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,3.427891);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,1.573952);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,0.6249874);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,0.7706915);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,0.9453608);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,1.069521);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,1.327183);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,1.410968);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,1.40449);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,1.130064);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,0.8154182);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.5564767);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(305);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_2 = new TH1D("Zmm_2bjet_dR_2b_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,11.45056);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,20.41966);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,21.22333);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,23.60771);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,18.85321);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,18.00761);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,21.53564);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,5.143021);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,0.2980476);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(12,0.2980476);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,1.861601);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,2.530317);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,2.550247);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,2.685967);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,2.40362);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,2.328061);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,2.564543);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,1.300424);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.2980476);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(12,0.2980476);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(463);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_3 = new TH1D("Zmm_2bjet_dR_2b_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,82.56991);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,138.8499);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,206.4248);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,257.0573);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,329.8901);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,402.9178);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,459.1977);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,164.9451);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,55.30626);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,16.35819);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,3.894807);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,1.363182);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,4.009949);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,5.199968);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,6.340286);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,7.075268);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,8.015168);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,8.85801);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,9.456444);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,5.66758);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,3.281823);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,1.784825);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,0.8709053);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.5152345);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(10880);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_4 = new TH1D("Zmm_2bjet_dR_2b_stack_4","",25,0,10);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(1,0.001159162);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(2,2.640571);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(3,6.986269);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(4,9.992555);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(5,9.8749);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(6,7.895052);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(7,6.032278);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(8,5.955774);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(9,1.124387);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(10,0.1518502);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(11,0.0486848);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(12,0.01854659);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(13,0.005216228);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(1,0.0008196512);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(2,0.03912064);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(3,0.0636326);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(4,0.07610187);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(5,0.07565252);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(6,0.06764482);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(7,0.05912862);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(8,0.05875247);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(9,0.02552789);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(10,0.009381337);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(11,0.005311947);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(12,0.003278605);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(13,0.001738743);
   Zmm_2bjet_dR_2b_stack_4->SetEntries(87524);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_4,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_5 = new TH1D("Zmm_2bjet_dR_2b_stack_5","",25,0,10);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(1,1.499527);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(2,1090.355);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(3,1238.633);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(4,1579.108);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(5,2007.786);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(6,2472.377);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(7,3058.494);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(8,3756.38);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(9,2310.333);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(10,1238.628);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(11,605.6739);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(12,216.0855);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(13,57.358);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(14,13.74813);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(1,0.8657524);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(2,25.04962);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(3,25.55865);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(4,28.52521);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(5,32.28353);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(6,35.80687);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(7,39.98579);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(8,45.06835);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(9,35.33906);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(10,25.40379);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(11,17.71102);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(12,11.15208);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(13,5.487249);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(14,3.288883);
   Zmm_2bjet_dR_2b_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b__617 = new TH1D("Zmm_2bjet_dR_2b__617","",25,0,10);
   Zmm_2bjet_dR_2b__617->SetBinContent(1,1);
   Zmm_2bjet_dR_2b__617->SetBinContent(2,480);
   Zmm_2bjet_dR_2b__617->SetBinContent(3,577);
   Zmm_2bjet_dR_2b__617->SetBinContent(4,665);
   Zmm_2bjet_dR_2b__617->SetBinContent(5,845);
   Zmm_2bjet_dR_2b__617->SetBinContent(6,869);
   Zmm_2bjet_dR_2b__617->SetBinContent(7,1199);
   Zmm_2bjet_dR_2b__617->SetBinContent(8,1542);
   Zmm_2bjet_dR_2b__617->SetBinContent(9,748);
   Zmm_2bjet_dR_2b__617->SetBinContent(10,359);
   Zmm_2bjet_dR_2b__617->SetBinContent(11,163);
   Zmm_2bjet_dR_2b__617->SetBinContent(12,66);
   Zmm_2bjet_dR_2b__617->SetBinContent(13,21);
   Zmm_2bjet_dR_2b__617->SetBinContent(14,1);
   Zmm_2bjet_dR_2b__617->SetBinError(1,1);
   Zmm_2bjet_dR_2b__617->SetBinError(2,21.9089);
   Zmm_2bjet_dR_2b__617->SetBinError(3,24.02082);
   Zmm_2bjet_dR_2b__617->SetBinError(4,25.78759);
   Zmm_2bjet_dR_2b__617->SetBinError(5,29.06888);
   Zmm_2bjet_dR_2b__617->SetBinError(6,29.47881);
   Zmm_2bjet_dR_2b__617->SetBinError(7,34.62658);
   Zmm_2bjet_dR_2b__617->SetBinError(8,39.26831);
   Zmm_2bjet_dR_2b__617->SetBinError(9,27.34959);
   Zmm_2bjet_dR_2b__617->SetBinError(10,18.9473);
   Zmm_2bjet_dR_2b__617->SetBinError(11,12.76715);
   Zmm_2bjet_dR_2b__617->SetBinError(12,8.124038);
   Zmm_2bjet_dR_2b__617->SetBinError(13,4.582576);
   Zmm_2bjet_dR_2b__617->SetBinError(14,1);
   Zmm_2bjet_dR_2b__617->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__617->SetLineColor(ci);
   Zmm_2bjet_dR_2b__617->SetLineWidth(2);
   Zmm_2bjet_dR_2b__617->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__617->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dR_2b_fx1617[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zmm_2bjet_dR_2b_fy1617[25] = {
   1.500686,
   1189.043,
   1408,
   1821.333,
   2304.318,
   2838.15,
   3495.71,
   4253.445,
   2488.037,
   1297.812,
   623.6547,
   220.2969,
   58.72639,
   13.74813,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_dR_2b_fex1617[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zmm_2bjet_dR_2b_fey1617[25] = {
   0.8657528,
   25.44447,
   26.21612,
   29.34775,
   33.17604,
   36.79563,
   41.04561,
   46.14253,
   35.8321,
   25.62961,
   17.80943,
   11.19,
   5.511386,
   3.288883,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dR_2b_fx1617,Graph_from_Zmm_2bjet_dR_2b_fy1617,Graph_from_Zmm_2bjet_dR_2b_fex1617,Graph_from_Zmm_2bjet_dR_2b_fey1617);
   gre->SetName("Graph_from_Zmm_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dR_2b1617 = new TH1F("Graph_Graph_from_Zmm_2bjet_dR_2b1617","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->SetMaximum(4729.546);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1617->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dR_2b1617);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_5","Z+jets","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_4","ZH","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_2","Diboson","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_1","Single top","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dR_2b","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__618 = new TH1D("data_mc_ratio__618","",25,0,10);
   data_mc_ratio__618->SetBinContent(1,0.6663618);
   data_mc_ratio__618->SetBinContent(2,0.4036859);
   data_mc_ratio__618->SetBinContent(3,0.4098012);
   data_mc_ratio__618->SetBinContent(4,0.3651172);
   data_mc_ratio__618->SetBinContent(5,0.3667028);
   data_mc_ratio__618->SetBinContent(6,0.3061853);
   data_mc_ratio__618->SetBinContent(7,0.3429918);
   data_mc_ratio__618->SetBinContent(8,0.3625297);
   data_mc_ratio__618->SetBinContent(9,0.3006386);
   data_mc_ratio__618->SetBinContent(10,0.2766195);
   data_mc_ratio__618->SetBinContent(11,0.2613626);
   data_mc_ratio__618->SetBinContent(12,0.2995957);
   data_mc_ratio__618->SetBinContent(13,0.3575905);
   data_mc_ratio__618->SetBinContent(14,0.07273719);
   data_mc_ratio__618->SetBinError(1,0.6663618);
   data_mc_ratio__618->SetBinError(2,0.01842565);
   data_mc_ratio__618->SetBinError(3,0.01706025);
   data_mc_ratio__618->SetBinError(4,0.01415864);
   data_mc_ratio__618->SetBinError(5,0.01261496);
   data_mc_ratio__618->SetBinError(6,0.01038663);
   data_mc_ratio__618->SetBinError(7,0.009905449);
   data_mc_ratio__618->SetBinError(8,0.009232119);
   data_mc_ratio__618->SetBinError(9,0.01099244);
   data_mc_ratio__618->SetBinError(10,0.01459942);
   data_mc_ratio__618->SetBinError(11,0.0204715);
   data_mc_ratio__618->SetBinError(12,0.03687768);
   data_mc_ratio__618->SetBinError(13,0.07803264);
   data_mc_ratio__618->SetBinError(14,0.07273719);
   data_mc_ratio__618->SetMinimum(0.4);
   data_mc_ratio__618->SetMaximum(1.6);
   data_mc_ratio__618->SetEntries(37.72977);
   data_mc_ratio__618->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__618->SetLineColor(ci);
   data_mc_ratio__618->SetLineWidth(2);
   data_mc_ratio__618->SetMarkerStyle(20);
   data_mc_ratio__618->SetMarkerSize(1.2);
   data_mc_ratio__618->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__618->GetXaxis()->SetRange(1,15);
   data_mc_ratio__618->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__618->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__618->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__618->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__618->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__618->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__618->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__618->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__618->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__618->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__618->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__618->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__618->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__618->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1618[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1618[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1618[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1618[25] = {
   0.5769046,
   0.02139911,
   0.01861941,
   0.01611333,
   0.01439733,
   0.01296465,
   0.01174171,
   0.01084827,
   0.01440175,
   0.01974833,
   0.02855655,
   0.05079509,
   0.09384853,
   0.2392241,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1618,Graph_from_mc_statistical_error_fy1618,Graph_from_mc_statistical_error_fex1618,Graph_from_mc_statistical_error_fey1618);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1618 = new TH1F("Graph_Graph_from_mc_statistical_error1618","",100,0,11);
   Graph_Graph_from_mc_statistical_error1618->SetMinimum(0.3077145);
   Graph_Graph_from_mc_statistical_error1618->SetMaximum(1.692285);
   Graph_Graph_from_mc_statistical_error1618->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1618->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1618->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1618);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_16_amcnlo);
}
