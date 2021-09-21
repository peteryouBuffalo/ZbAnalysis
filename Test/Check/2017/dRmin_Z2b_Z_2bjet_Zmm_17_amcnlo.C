void dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-9.915176,6.314516,9915.26);
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
   st->SetMaximum(8497.85);
   
   TH1F *st_stack_330 = new TH1F("st_stack_330","",25,0,10);
   st_stack_330->SetMinimum(0.01);
   st_stack_330->SetMaximum(8922.742);
   st_stack_330->SetDirectory(0);
   st_stack_330->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_330->SetLineColor(ci);
   st_stack_330->GetXaxis()->SetRange(1,15);
   st_stack_330->GetXaxis()->SetLabelFont(42);
   st_stack_330->GetXaxis()->SetLabelSize(0.035);
   st_stack_330->GetXaxis()->SetTitleSize(0.035);
   st_stack_330->GetXaxis()->SetTitleFont(42);
   st_stack_330->GetYaxis()->SetTitle("Events/0.4");
   st_stack_330->GetYaxis()->SetLabelFont(42);
   st_stack_330->GetYaxis()->SetLabelSize(0.05);
   st_stack_330->GetYaxis()->SetTitleSize(0.057);
   st_stack_330->GetYaxis()->SetTitleOffset(1.2);
   st_stack_330->GetYaxis()->SetTitleFont(42);
   st_stack_330->GetZaxis()->SetLabelFont(42);
   st_stack_330->GetZaxis()->SetLabelSize(0.035);
   st_stack_330->GetZaxis()->SetTitleSize(0.035);
   st_stack_330->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_330);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.8767435);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,2.747838);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,5.947395);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,9.821319);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,12.86477);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,18.4626);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,16.51645);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,12.09204);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.085975);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.199812);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.4100514);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.730756);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,1.093952);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.401337);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.809042);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.922383);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.824049);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.552242);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.4602993);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.199812);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(407);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,2.111586);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,3.167378);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,5.982826);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,15.03409);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,25.19626);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,37.35979);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,42.63875);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,26.99974);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,6.587748);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,4.828093);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,2.265637);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,0.6049222);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.7038619);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(14,0.2529913);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.8620512);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.055793);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.451048);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,2.294762);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.956719);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,3.615657);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,3.86404);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,3.078476);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.514398);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.29388);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.8644571);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.4334281);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.4977055);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(14,0.2529913);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(499);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,56.40536);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,144.0518);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,273.6074);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,438.1748);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,642.0749);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,646.9574);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,445.0515);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,190.9214);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,34.26449);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,7.500219);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,4.747243);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,1.054429);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(15,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,4.775676);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,7.63396);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,10.52559);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,13.32228);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,16.13916);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,16.19311);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,13.4239);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,8.778848);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,3.648006);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.663307);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,1.367532);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.5957637);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(15,0.4103127);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(7536);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.6358683);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,1.848294);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,3.322102);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,5.852472);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,9.918029);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,14.37014);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,13.97979);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,8.569395);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,0.8455256);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.1934502);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.06206958);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.02206918);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.01103459);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.006206958);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.001379324);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(17,0.000344831);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(19,0.000344831);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.01480767);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.02524577);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.03384618);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.04492342);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.05848114);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.07039368);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.06943101);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.05435985);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.01707523);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.008167473);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.004626393);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.002758648);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.001950659);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.001462994);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.000689662);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(17,0.000344831);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(19,0.000344831);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetEntries(172950);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,253.166);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,688.9649);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,1257.952);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,1912.143);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,2958.853);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,3809.118);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,4155.631);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,3193.431);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,844.1627);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,354.3808);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,174.6007);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,126.6783);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,62.00264);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,25.62977);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,9.988478);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,4.616924);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,5.512183);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(18,0.895259);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(20,2.826406);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(1,15.22557);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(2,25.04275);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(3,33.78641);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(4,41.6211);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(5,51.76309);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(6,58.64849);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(7,61.48466);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(8,53.81656);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(9,28.1471);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(10,19.12959);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(11,12.9231);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(12,13.16328);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(13,9.958617);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(14,6.691644);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(15,3.794796);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(16,3.097022);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(17,3.223823);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(18,0.895259);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(20,2.826406);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetEntries(22004);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__659 = new TH1D("Zmm_2bjet_dRmin_Z2b__659","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(1,108);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(2,382);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(3,629);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(4,1006);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(5,1435);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(6,1660);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(7,1585);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(8,1220);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(9,354);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(10,137);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(11,68);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(12,34);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(13,24);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(14,17);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(15,6);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(16,2);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(17,3);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(18,1);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(23,1);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(1,10.3923);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(2,19.54482);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(3,25.07987);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(4,31.7175);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(5,37.88139);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(6,40.7431);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(7,39.81206);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(8,34.9285);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(9,18.81489);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(10,11.7047);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(11,8.246211);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(12,5.830952);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(13,4.898979);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(14,4.123106);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(15,2.44949);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(16,1.414214);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(17,1.732051);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(18,1);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(23,1);
   Zmm_2bjet_dRmin_Z2b__659->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__659->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__659->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__659->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__659->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fx1659[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fy1659[25] = {
   313.1956,
   840.7802,
   1546.812,
   2381.026,
   3648.907,
   4526.268,
   4673.817,
   3432.014,
   886.9464,
   367.1024,
   181.6756,
   128.3597,
   63.12785,
   26.29928,
   10.40017,
   4.616924,
   5.512527,
   0.895259,
   0.000344831,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fex1659[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fey1659[25] = {
   15.98551,
   26.21195,
   35.43463,
   43.78391,
   54.33147,
   60.98061,
   63.07795,
   54.6368,
   28.42662,
   19.24634,
   13.02398,
   13.18388,
   9.979485,
   6.708983,
   3.816914,
   3.097022,
   3.223823,
   0.895259,
   0.000344831,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dRmin_Z2b_fx1659,Graph_from_Zmm_2bjet_dRmin_Z2b_fy1659,Graph_from_Zmm_2bjet_dRmin_Z2b_fex1659,Graph_from_Zmm_2bjet_dRmin_Z2b_fey1659);
   gre->SetName("Graph_from_Zmm_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659 = new TH1F("Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->SetMaximum(5210.585);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1659);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__660 = new TH1D("data_mc_ratio__660","",25,0,10);
   data_mc_ratio__660->SetBinContent(1,0.3448325);
   data_mc_ratio__660->SetBinContent(2,0.4543399);
   data_mc_ratio__660->SetBinContent(3,0.4066428);
   data_mc_ratio__660->SetBinContent(4,0.4225069);
   data_mc_ratio__660->SetBinContent(5,0.3932684);
   data_mc_ratio__660->SetBinContent(6,0.3667481);
   data_mc_ratio__660->SetBinContent(7,0.3391232);
   data_mc_ratio__660->SetBinContent(8,0.3554764);
   data_mc_ratio__660->SetBinContent(9,0.3991222);
   data_mc_ratio__660->SetBinContent(10,0.3731929);
   data_mc_ratio__660->SetBinContent(11,0.3742935);
   data_mc_ratio__660->SetBinContent(12,0.2648806);
   data_mc_ratio__660->SetBinContent(13,0.3801809);
   data_mc_ratio__660->SetBinContent(14,0.6464056);
   data_mc_ratio__660->SetBinContent(15,0.5769137);
   data_mc_ratio__660->SetBinContent(16,0.4331889);
   data_mc_ratio__660->SetBinContent(17,0.544215);
   data_mc_ratio__660->SetBinContent(18,1.116995);
   data_mc_ratio__660->SetBinError(1,0.03318152);
   data_mc_ratio__660->SetBinError(2,0.02324605);
   data_mc_ratio__660->SetBinError(3,0.01621391);
   data_mc_ratio__660->SetBinError(4,0.01332094);
   data_mc_ratio__660->SetBinError(5,0.01038157);
   data_mc_ratio__660->SetBinError(6,0.009001477);
   data_mc_ratio__660->SetBinError(7,0.008518103);
   data_mc_ratio__660->SetBinError(8,0.01017726);
   data_mc_ratio__660->SetBinError(9,0.02121311);
   data_mc_ratio__660->SetBinError(10,0.03188402);
   data_mc_ratio__660->SetBinError(11,0.04538975);
   data_mc_ratio__660->SetBinError(12,0.04542664);
   data_mc_ratio__660->SetBinError(13,0.07760409);
   data_mc_ratio__660->SetBinError(14,0.1567764);
   data_mc_ratio__660->SetBinError(15,0.235524);
   data_mc_ratio__660->SetBinError(16,0.3063108);
   data_mc_ratio__660->SetBinError(17,0.3142027);
   data_mc_ratio__660->SetBinError(18,1.116995);
   data_mc_ratio__660->SetMinimum(0.4);
   data_mc_ratio__660->SetMaximum(1.6);
   data_mc_ratio__660->SetEntries(22.03242);
   data_mc_ratio__660->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__660->SetLineColor(ci);
   data_mc_ratio__660->SetLineWidth(2);
   data_mc_ratio__660->SetMarkerStyle(20);
   data_mc_ratio__660->SetMarkerSize(1.2);
   data_mc_ratio__660->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__660->GetXaxis()->SetRange(1,15);
   data_mc_ratio__660->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__660->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__660->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__660->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__660->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__660->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1660[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1660[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1660[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1660[25] = {
   0.05104001,
   0.03117574,
   0.02290816,
   0.01838867,
   0.01488979,
   0.0134726,
   0.01349602,
   0.01591975,
   0.03204998,
   0.05242773,
   0.07168808,
   0.1027104,
   0.1580837,
   0.2551014,
   0.367005,
   0.6707978,
   0.5848176,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1660,Graph_from_mc_statistical_error_fy1660,Graph_from_mc_statistical_error_fex1660,Graph_from_mc_statistical_error_fey1660);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1660 = new TH1F("Graph_Graph_from_mc_statistical_error1660","",100,0,11);
   Graph_Graph_from_mc_statistical_error1660->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1660->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1660->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1660->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1660->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1660);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo);
}
