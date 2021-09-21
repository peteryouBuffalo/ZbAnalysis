void dRmin_Z2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_All_amcnlo/dRmin_Z2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_All_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-25.48769,6.314516,25472.2);
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
   st->SetMaximum(21830.89);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",25,0,10);
   st_stack_244->SetMinimum(0.01);
   st_stack_244->SetMaximum(22922.43);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,15);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.4");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(1,1.978463);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(2,9.764585);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(3,15.7538);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(4,24.86222);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(5,36.56993);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(6,35.57024);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(7,37.8561);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(8,24.03514);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(9,5.02905);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(10,0.984303);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(11,1.014011);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(12,0.4043335);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(13,0.121482);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(1,0.6671416);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(2,1.543158);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(3,1.896089);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(4,2.535073);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(5,2.920031);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(6,2.907023);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(7,2.959676);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(8,2.332853);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(9,1.048049);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(10,0.439173);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(11,0.4849726);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(12,0.2859263);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(13,0.08612349);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(1,2.674294);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(2,11.14197);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(3,17.83253);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(4,39.886);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(5,69.91201);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(6,86.21582);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(7,108.2479);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(8,68.82831);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(9,23.93163);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(10,8.332746);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(11,4.501315);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(12,3.51154);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(13,1.726268);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(14,0.4985287);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(16,0.7038619);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(1,1.078313);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(2,2.120973);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(3,2.665734);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(4,4.01206);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(5,5.449391);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(6,6.018407);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(7,6.596788);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(8,5.259245);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(9,3.087382);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(10,1.864908);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(11,1.324848);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(12,1.264547);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(13,0.9280292);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(14,0.4985287);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(16,0.4977055);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(1,136.9144);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(2,411.3364);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(3,709.8478);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(4,1158.547);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(5,1617.348);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(6,1588.799);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(7,1102.354);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(8,491.2163);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(9,75.4378);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(10,24.02711);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(11,9.170938);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(12,3.222816);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(13,1.66813);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(14,0.07793469);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(15,0.4103127);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(16,0.07314745);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(18,0.08255682);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(1,5.334348);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(2,9.383849);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(3,12.07062);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(4,15.51071);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(5,18.36188);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(6,18.28805);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(7,15.01578);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(8,9.995854);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(9,3.837795);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(10,2.312121);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(11,1.324653);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(12,0.5924753);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(13,0.4222506);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(14,0.07793469);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(15,0.4103127);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(16,0.07314745);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(18,0.08255682);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_4 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_4","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(1,1.70973);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(2,4.944065);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(3,8.629494);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(4,14.91113);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(5,25.31452);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(6,36.23859);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(7,36.7056);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(8,22.5092);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(9,2.010102);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(10,0.3942305);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(11,0.1531882);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(12,0.05886368);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(13,0.02788009);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(14,0.01292716);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(15,0.003894688);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(16,0.002625446);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(17,0.000344831);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(18,0.002057425);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(19,0.0006781013);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(20,0.0006781013);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(1,0.0306932);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(2,0.05234287);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(3,0.06900943);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(4,0.09070463);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(5,0.1182005);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(6,0.1413497);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(7,0.1424766);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(8,0.1115772);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(9,0.03322973);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(10,0.01476961);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(11,0.009090714);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(12,0.005590115);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(13,0.00392484);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(14,0.002565901);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(15,0.001437743);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(16,0.001222037);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(17,0.000344831);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(18,0.0009671893);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(19,0.0006781013);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetBinError(20,0.0006781013);
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_5 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_5","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(1,693.5571);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(2,2077.733);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(3,3541.636);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(4,5409.278);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(5,7977.673);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(6,10260.16);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(7,10710.8);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(8,8485.202);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(9,2250.687);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(10,838.0099);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(11,380.6918);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(12,266.9307);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(13,144.9409);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(14,79.33737);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(15,32.24752);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(16,20.28153);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(17,14.37337);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(18,5.715019);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(19,4.270712);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(20,2.826406);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(1,24.70812);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(2,43.15013);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(3,56.3385);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(4,69.75371);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(5,84.7684);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(6,96.54688);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(7,98.94712);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(8,88.90522);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(9,47.05073);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(10,29.7396);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(11,20.78219);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(12,20.40544);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(13,16.06456);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(14,13.31771);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(15,8.757768);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(16,6.752791);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(17,6.362842);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(18,3.287713);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(19,2.671063);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetBinError(20,2.826406);
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all__487 = new TH1D("Zee_2bjet_dRmin_Z2b_all__487","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(1,314);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(2,947);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(3,1632);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(4,2566);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(5,3683);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(6,4308);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(7,4108);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(8,3058);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(9,834);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(10,360);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(11,167);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(12,121);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(13,75);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(14,33);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(15,16);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(16,12);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(17,7);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(18,4);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(19,2);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(20,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(21,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(1,17.72005);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(2,30.77337);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(3,40.39802);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(4,50.6557);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(5,60.68773);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(6,65.63536);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(7,64.09368);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(8,55.29919);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(9,28.87906);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(10,18.97367);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(11,12.92285);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(12,11);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(13,8.660254);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(14,5.744563);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(15,4);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(16,3.464102);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(17,2.645751);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(18,2);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(19,1.414214);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(20,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(21,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all__487->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all__487->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b_all__487->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b_all__487->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_all_fx1487[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_all_fy1487[25] = {
   836.8339,
   2514.92,
   4293.7,
   6647.484,
   9726.818,
   12006.99,
   11995.97,
   9091.791,
   2357.096,
   871.7483,
   395.5313,
   274.1283,
   148.4847,
   79.92676,
   32.66172,
   21.06117,
   14.37372,
   5.799633,
   4.27139,
   2.827084,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_all_fex1487[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_all_fey1487[25] = {
   25.3092,
   44.23656,
   57.7099,
   71.6149,
   86.95445,
   98.49083,
   100.3409,
   89.65026,
   47.31946,
   29.89081,
   20.8721,
   20.45517,
   16.09712,
   13.32726,
   8.767375,
   6.771503,
   6.362842,
   3.28875,
   2.671063,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dRmin_Z2b_all_fx1487,Graph_from_Zee_2bjet_dRmin_Z2b_all_fy1487,Graph_from_Zee_2bjet_dRmin_Z2b_all_fex1487,Graph_from_Zee_2bjet_dRmin_Z2b_all_fey1487);
   gre->SetName("Graph_from_Zee_2bjet_dRmin_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487 = new TH1F("Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->SetMaximum(13316.03);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dRmin_Z2b_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dRmin_Z2b_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__488 = new TH1D("data_mc_ratio__488","",25,0,10);
   data_mc_ratio__488->SetBinContent(1,0.3752238);
   data_mc_ratio__488->SetBinContent(2,0.3765528);
   data_mc_ratio__488->SetBinContent(3,0.3800918);
   data_mc_ratio__488->SetBinContent(4,0.3860107);
   data_mc_ratio__488->SetBinContent(5,0.3786439);
   data_mc_ratio__488->SetBinContent(6,0.3587911);
   data_mc_ratio__488->SetBinContent(7,0.3424484);
   data_mc_ratio__488->SetBinContent(8,0.3363474);
   data_mc_ratio__488->SetBinContent(9,0.3538253);
   data_mc_ratio__488->SetBinContent(10,0.4129632);
   data_mc_ratio__488->SetBinContent(11,0.4222169);
   data_mc_ratio__488->SetBinContent(12,0.4413992);
   data_mc_ratio__488->SetBinContent(13,0.5051025);
   data_mc_ratio__488->SetBinContent(14,0.412878);
   data_mc_ratio__488->SetBinContent(15,0.48987);
   data_mc_ratio__488->SetBinContent(16,0.5697689);
   data_mc_ratio__488->SetBinContent(17,0.4869999);
   data_mc_ratio__488->SetBinContent(18,0.6896988);
   data_mc_ratio__488->SetBinContent(19,0.4682316);
   data_mc_ratio__488->SetBinContent(20,0.3537214);
   data_mc_ratio__488->SetBinError(1,0.0211751);
   data_mc_ratio__488->SetBinError(2,0.01223632);
   data_mc_ratio__488->SetBinError(3,0.009408673);
   data_mc_ratio__488->SetBinError(4,0.007620281);
   data_mc_ratio__488->SetBinError(5,0.006239217);
   data_mc_ratio__488->SetBinError(6,0.00546643);
   data_mc_ratio__488->SetBinError(7,0.005342936);
   data_mc_ratio__488->SetBinError(8,0.006082321);
   data_mc_ratio__488->SetBinError(9,0.01225197);
   data_mc_ratio__488->SetBinError(10,0.02176507);
   data_mc_ratio__488->SetBinError(11,0.03267212);
   data_mc_ratio__488->SetBinError(12,0.0401272);
   data_mc_ratio__488->SetBinError(13,0.05832422);
   data_mc_ratio__488->SetBinError(14,0.07187283);
   data_mc_ratio__488->SetBinError(15,0.1224675);
   data_mc_ratio__488->SetBinError(16,0.1644781);
   data_mc_ratio__488->SetBinError(17,0.1840687);
   data_mc_ratio__488->SetBinError(18,0.3448494);
   data_mc_ratio__488->SetBinError(19,0.3310898);
   data_mc_ratio__488->SetBinError(20,0.3537214);
   data_mc_ratio__488->SetMinimum(0.4);
   data_mc_ratio__488->SetMaximum(1.6);
   data_mc_ratio__488->SetEntries(79.87458);
   data_mc_ratio__488->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__488->SetLineColor(ci);
   data_mc_ratio__488->SetLineWidth(2);
   data_mc_ratio__488->SetMarkerStyle(20);
   data_mc_ratio__488->SetMarkerSize(1.2);
   data_mc_ratio__488->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__488->GetXaxis()->SetRange(1,15);
   data_mc_ratio__488->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__488->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__488->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__488->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__488->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__488->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1488[25] = {
   0.03024399,
   0.01758965,
   0.0134406,
   0.01077323,
   0.00893966,
   0.008202793,
   0.008364555,
   0.009860573,
   0.02007532,
   0.03428835,
   0.05276978,
   0.07461896,
   0.1084093,
   0.1667434,
   0.2684297,
   0.321516,
   0.442672,
   0.5670617,
   0.625338,
   0.9997602,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,11);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(0.0002158472);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(2.199712);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_All_amcnlo);
}
