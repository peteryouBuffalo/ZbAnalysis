void dR_2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_17_amcnlo/dR_2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:38 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_17_amcnlo", "dR_2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-9.852814,6.314516,9852.96);
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
   st->SetMaximum(8444.456);
   
   TH1F *st_stack_310 = new TH1F("st_stack_310","",25,0,10);
   st_stack_310->SetMinimum(0.01);
   st_stack_310->SetMaximum(8866.679);
   st_stack_310->SetDirectory(0);
   st_stack_310->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_310->SetLineColor(ci);
   st_stack_310->GetXaxis()->SetRange(1,15);
   st_stack_310->GetXaxis()->SetLabelFont(42);
   st_stack_310->GetXaxis()->SetLabelSize(0.035);
   st_stack_310->GetXaxis()->SetTitleSize(0.035);
   st_stack_310->GetXaxis()->SetTitleFont(42);
   st_stack_310->GetYaxis()->SetTitle("Events/0.4");
   st_stack_310->GetYaxis()->SetLabelFont(42);
   st_stack_310->GetYaxis()->SetLabelSize(0.05);
   st_stack_310->GetYaxis()->SetTitleSize(0.057);
   st_stack_310->GetYaxis()->SetTitleOffset(1.2);
   st_stack_310->GetYaxis()->SetTitleFont(42);
   st_stack_310->GetZaxis()->SetLabelFont(42);
   st_stack_310->GetZaxis()->SetLabelSize(0.035);
   st_stack_310->GetZaxis()->SetTitleSize(0.035);
   st_stack_310->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_310);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,3.425061);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,5.65125);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,6.050582);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,9.630926);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,11.92548);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,13.87849);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,17.09349);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,7.331951);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,2.21206);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,2.407163);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(12,0.808667);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(13,0.199812);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,0.8307511);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,1.068057);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,1.092094);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,1.388391);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,1.552671);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,1.661045);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,2.023971);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,1.212638);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,0.6669976);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.6949147);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(12,0.4043609);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(13,0.199812);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(407);

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
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,10.61304);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,23.1285);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,27.50572);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,25.64713);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,27.7036);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,25.49308);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,27.50572);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,4.223171);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,1.660715);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(11,0.2529913);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,1.913103);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,2.848614);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,3.099197);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,2.987624);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,3.118449);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,2.986928);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,3.099197);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,1.219125);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.7479479);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(11,0.2529913);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(499);

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
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,124.7304);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,195.3569);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,288.3374);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,370.7896);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,420.3709);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,511.7101);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,615.5811);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,243.2282);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,87.90086);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,19.59643);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,8.029745);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,0.4103127);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,7.115792);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,8.883356);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,10.79689);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,12.25865);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,13.02635);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,14.37607);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,15.80125);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,9.936678);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,5.968791);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,2.817277);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,1.793598);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.4103127);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(7536);

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
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(2,2.70244);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(3,7.593523);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(4,11.39046);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(5,11.87874);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(6,9.472852);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(7,7.470763);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(8,7.421797);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(9,1.457601);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(10,0.1786225);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(11,0.05310397);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(12,0.01206908);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(13,0.006551789);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(2,0.03052679);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(3,0.05117111);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(4,0.06267202);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(5,0.06400123);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(6,0.05715359);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(7,0.05075579);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(8,0.05058919);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(9,0.02241932);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(10,0.00784822);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(11,0.00427924);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(12,0.002040048);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(13,0.001503083);
   Zmm_2bjet_dR_2b_stack_4->SetEntries(172950);

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
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(2,927.4326);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(3,1169.27);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(4,1579.938);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(5,1979.888);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(6,2473.687);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(7,3110.356);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(8,3976.849);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(9,2383.457);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(10,1244.561);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(11,649.1121);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(12,261.8625);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(13,75.21434);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(14,8.926982);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(2,28.9448);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(3,32.41345);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(4,37.94978);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(5,42.14169);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(6,47.0921);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(7,53.35957);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(8,61.30751);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(9,47.10253);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(10,33.84632);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(11,24.53021);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(12,15.47194);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(13,8.525443);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(14,2.823064);
   Zmm_2bjet_dR_2b_stack_5->SetEntries(22004);

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
   
   TH1D *Zmm_2bjet_dR_2b__619 = new TH1D("Zmm_2bjet_dR_2b__619","",25,0,10);
   Zmm_2bjet_dR_2b__619->SetBinContent(2,623);
   Zmm_2bjet_dR_2b__619->SetBinContent(3,628);
   Zmm_2bjet_dR_2b__619->SetBinContent(4,745);
   Zmm_2bjet_dR_2b__619->SetBinContent(5,886);
   Zmm_2bjet_dR_2b__619->SetBinContent(6,1122);
   Zmm_2bjet_dR_2b__619->SetBinContent(7,1396);
   Zmm_2bjet_dR_2b__619->SetBinContent(8,1661);
   Zmm_2bjet_dR_2b__619->SetBinContent(9,908);
   Zmm_2bjet_dR_2b__619->SetBinContent(10,404);
   Zmm_2bjet_dR_2b__619->SetBinContent(11,194);
   Zmm_2bjet_dR_2b__619->SetBinContent(12,80);
   Zmm_2bjet_dR_2b__619->SetBinContent(13,22);
   Zmm_2bjet_dR_2b__619->SetBinContent(14,3);
   Zmm_2bjet_dR_2b__619->SetBinError(2,24.95997);
   Zmm_2bjet_dR_2b__619->SetBinError(3,25.05993);
   Zmm_2bjet_dR_2b__619->SetBinError(4,27.29469);
   Zmm_2bjet_dR_2b__619->SetBinError(5,29.76575);
   Zmm_2bjet_dR_2b__619->SetBinError(6,33.49627);
   Zmm_2bjet_dR_2b__619->SetBinError(7,37.36308);
   Zmm_2bjet_dR_2b__619->SetBinError(8,40.75537);
   Zmm_2bjet_dR_2b__619->SetBinError(9,30.13304);
   Zmm_2bjet_dR_2b__619->SetBinError(10,20.09975);
   Zmm_2bjet_dR_2b__619->SetBinError(11,13.92839);
   Zmm_2bjet_dR_2b__619->SetBinError(12,8.944272);
   Zmm_2bjet_dR_2b__619->SetBinError(13,4.690416);
   Zmm_2bjet_dR_2b__619->SetBinError(14,1.732051);
   Zmm_2bjet_dR_2b__619->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__619->SetLineColor(ci);
   Zmm_2bjet_dR_2b__619->SetLineWidth(2);
   Zmm_2bjet_dR_2b__619->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__619->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dR_2b_fx1619[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fy1619[25] = {
   0,
   1068.904,
   1401,
   1913.222,
   2397.834,
   2943.16,
   3668.908,
   4644.451,
   2639.698,
   1336.514,
   671.4218,
   270.713,
   75.83102,
   8.926982,
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fex1619[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fey1619[25] = {
   0,
   29.87954,
   33.74617,
   39.59243,
   44.01198,
   48.98459,
   55.36785,
   63.4192,
   48.16994,
   34.38319,
   24.70254,
   15.5808,
   8.537649,
   2.823064,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dR_2b_fx1619,Graph_from_Zmm_2bjet_dR_2b_fy1619,Graph_from_Zmm_2bjet_dR_2b_fex1619,Graph_from_Zmm_2bjet_dR_2b_fey1619);
   gre->SetName("Graph_from_Zmm_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dR_2b1619 = new TH1F("Graph_Graph_from_Zmm_2bjet_dR_2b1619","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->SetMaximum(5178.657);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1619->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dR_2b1619);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__620 = new TH1D("data_mc_ratio__620","",25,0,10);
   data_mc_ratio__620->SetBinContent(2,0.5828402);
   data_mc_ratio__620->SetBinContent(3,0.4482512);
   data_mc_ratio__620->SetBinContent(4,0.3893955);
   data_mc_ratio__620->SetBinContent(5,0.3695001);
   data_mc_ratio__620->SetBinContent(6,0.3812229);
   data_mc_ratio__620->SetBinContent(7,0.3804947);
   data_mc_ratio__620->SetBinContent(8,0.3576311);
   data_mc_ratio__620->SetBinContent(9,0.3439788);
   data_mc_ratio__620->SetBinContent(10,0.302279);
   data_mc_ratio__620->SetBinContent(11,0.2889391);
   data_mc_ratio__620->SetBinContent(12,0.2955159);
   data_mc_ratio__620->SetBinContent(13,0.2901187);
   data_mc_ratio__620->SetBinContent(14,0.3360598);
   data_mc_ratio__620->SetBinError(2,0.023351);
   data_mc_ratio__620->SetBinError(3,0.01788717);
   data_mc_ratio__620->SetBinError(4,0.01426635);
   data_mc_ratio__620->SetBinError(5,0.0124136);
   data_mc_ratio__620->SetBinError(6,0.01138106);
   data_mc_ratio__620->SetBinError(7,0.01018371);
   data_mc_ratio__620->SetBinError(8,0.008775067);
   data_mc_ratio__620->SetBinError(9,0.01141534);
   data_mc_ratio__620->SetBinError(10,0.01503894);
   data_mc_ratio__620->SetBinError(11,0.02074462);
   data_mc_ratio__620->SetBinError(12,0.03303968);
   data_mc_ratio__620->SetBinError(13,0.06185352);
   data_mc_ratio__620->SetBinError(14,0.1940242);
   data_mc_ratio__620->SetMinimum(0.4);
   data_mc_ratio__620->SetMaximum(1.6);
   data_mc_ratio__620->SetEntries(389.4127);
   data_mc_ratio__620->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__620->SetLineColor(ci);
   data_mc_ratio__620->SetLineWidth(2);
   data_mc_ratio__620->SetMarkerStyle(20);
   data_mc_ratio__620->SetMarkerSize(1.2);
   data_mc_ratio__620->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__620->GetXaxis()->SetRange(1,15);
   data_mc_ratio__620->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__620->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__620->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__620->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__620->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__620->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__620->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__620->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__620->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__620->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__620->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__620->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__620->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__620->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1620[25] = {
   0,
   0.02795345,
   0.0240872,
   0.02069411,
   0.01835489,
   0.01664354,
   0.0150911,
   0.01365483,
   0.01824828,
   0.02572603,
   0.03679139,
   0.05755467,
   0.1125878,
   0.3162395,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1620,Graph_from_mc_statistical_error_fy1620,Graph_from_mc_statistical_error_fex1620,Graph_from_mc_statistical_error_fey1620);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1620 = new TH1F("Graph_Graph_from_mc_statistical_error1620","",100,0,11);
   Graph_Graph_from_mc_statistical_error1620->SetMinimum(0.6205126);
   Graph_Graph_from_mc_statistical_error1620->SetMaximum(1.379487);
   Graph_Graph_from_mc_statistical_error1620->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1620->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1620->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1620);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_17_amcnlo);
}
