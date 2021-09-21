void A_Z2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_17_amcnlo/A_Z2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:39 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_17_amcnlo", "A_Z2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7.758362,1.052419,7760.603);
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
   st->SetMaximum(6651.206);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",25,0,1);
   st_stack_318->SetMinimum(0.01);
   st_stack_318->SetMaximum(6983.767);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetRange(1,25);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetLabelSize(0.035);
   st_stack_318->GetXaxis()->SetTitleSize(0.035);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.04");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetLabelSize(0.05);
   st_stack_318->GetYaxis()->SetTitleSize(0.057);
   st_stack_318->GetYaxis()->SetTitleOffset(1.2);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetLabelSize(0.035);
   st_stack_318->GetZaxis()->SetTitleSize(0.035);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,11.69712);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,13.12436);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,7.790232);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,7.059061);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,8.875672);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,5.787403);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,4.920078);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,2.898411);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,3.624873);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,2.026377);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,2.294266);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,2.839753);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,1.008479);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,2.026377);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,1.222419);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,1.008479);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.599436);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(18,0.6675125);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,0.2678886);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,0.199812);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(21,0.4724101);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(23,0.2045215);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,1.526929);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,1.627985);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,1.245459);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,1.181568);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,1.575418);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,1.072387);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,0.9928146);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,0.7595469);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,0.8544427);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,0.6408382);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.6747094);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.759003);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.451035);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.6408382);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.4990692);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.451035);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.3460845);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(18,0.3527165);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.2110906);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.199812);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(21,0.2939189);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(23,0.2045215);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(407);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,34.24752);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,35.09415);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,27.75872);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,19.25726);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,13.27444);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,9.854066);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,9.810238);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,4.223171);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,5.278964);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,4.223171);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,3.673361);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,1.759655);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,1.407724);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,1.055793);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(20,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(21,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(22,0.7038619);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(24,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(25,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,3.450011);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,3.510796);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,3.109506);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,2.598499);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,2.15561);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,1.862243);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,1.830957);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,1.219125);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,1.363023);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,1.219125);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,1.114768);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,0.7869415);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,0.7038619);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.6095623);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(20,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(21,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(22,0.4977055);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(24,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(25,0.3519309);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(499);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,388.5682);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,388.7608);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,342.031);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,309.9074);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,260.851);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,207.3545);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,172.1662);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,150.8299);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,131.6851);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,86.98166);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,86.74786);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,70.35599);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,57.69359);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,49.93893);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,39.93556);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,30.24392);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,26.16144);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,22.29211);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,18.61994);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,13.59761);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,14.02857);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,7.619432);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,5.079621);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,2.539811);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,2.051563);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,12.54544);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,12.53516);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,11.77962);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,11.19579);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,10.2878);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,9.1619);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,8.34301);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,7.800723);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,7.304695);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,5.928381);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,5.926844);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,5.341461);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,4.814586);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,4.500827);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,4.025511);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,3.48946);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,3.260484);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,2.994229);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,2.754667);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,2.328916);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,2.393782);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,1.746035);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,1.425632);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,1.008074);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,0.917487);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(7536);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_4 = new TH1D("Zmm_2bjet_A_Z2b_stack_4","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(1,12.8884);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(2,10.53769);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(3,8.023527);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(4,5.957645);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(5,4.613494);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(6,3.558656);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(7,2.837614);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(8,2.235539);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(9,1.790362);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(10,1.414842);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(11,1.12139);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(12,0.932423);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(13,0.7431108);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(14,0.6110405);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(15,0.5013843);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(16,0.4165558);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(17,0.3469);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(18,0.2868994);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(19,0.238623);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(20,0.1948295);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(21,0.1500015);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(22,0.1113804);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(23,0.07138001);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(24,0.04241421);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(25,0.01241392);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(1,0.06666574);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(2,0.06028036);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(3,0.05260001);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(4,0.04532528);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(5,0.03988578);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(6,0.03503048);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(7,0.03128094);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(8,0.02776478);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(9,0.02484698);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(10,0.02208803);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(11,0.01966444);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(12,0.01793121);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(13,0.01600774);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(14,0.01451571);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(15,0.01314887);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(16,0.01198505);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(17,0.01093718);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(18,0.009946446);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(19,0.009071087);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(20,0.008196539);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(21,0.00719202);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(22,0.006197372);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(23,0.004961254);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(24,0.003824361);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(25,0.002068986);
   Zmm_2bjet_A_Z2b_stack_4->SetEntries(172950);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_5 = new TH1D("Zmm_2bjet_A_Z2b_stack_5","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(1,3210.762);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(2,3017.055);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(3,2512.974);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(4,2074.913);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(5,1722.527);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(6,1328.665);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(7,1109.953);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(8,901.7292);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(9,698.4547);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(10,565.3809);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(11,516.6148);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(12,436.8091);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(13,326.411);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(14,263.9091);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(15,251.6186);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(16,205.8197);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(17,162.0801);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(18,145.748);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(19,107.3543);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(20,77.63145);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(21,79.90809);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(22,58.06379);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(23,42.02596);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(24,20.56535);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(25,3.581036);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(1,54.22411);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(2,52.7141);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(3,48.14101);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(4,44.0155);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(5,39.80023);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(6,34.78724);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(7,31.76127);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(8,28.58936);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(9,24.99304);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(10,22.6082);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(11,21.99753);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(12,20.04151);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(13,17.08539);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(14,15.5382);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(15,15.36163);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(16,13.76662);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(17,12.26673);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(18,11.41605);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(19,9.800156);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(20,8.323314);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(21,9.078012);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(22,7.202138);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(23,6.130218);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(24,4.288245);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(25,1.790518);
   Zmm_2bjet_A_Z2b_stack_5->SetEntries(22004);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b__635 = new TH1D("Zmm_2bjet_A_Z2b__635","",25,0,1);
   Zmm_2bjet_A_Z2b__635->SetBinContent(1,1428);
   Zmm_2bjet_A_Z2b__635->SetBinContent(2,1265);
   Zmm_2bjet_A_Z2b__635->SetBinContent(3,1081);
   Zmm_2bjet_A_Z2b__635->SetBinContent(4,893);
   Zmm_2bjet_A_Z2b__635->SetBinContent(5,748);
   Zmm_2bjet_A_Z2b__635->SetBinContent(6,603);
   Zmm_2bjet_A_Z2b__635->SetBinContent(7,473);
   Zmm_2bjet_A_Z2b__635->SetBinContent(8,360);
   Zmm_2bjet_A_Z2b__635->SetBinContent(9,332);
   Zmm_2bjet_A_Z2b__635->SetBinContent(10,265);
   Zmm_2bjet_A_Z2b__635->SetBinContent(11,234);
   Zmm_2bjet_A_Z2b__635->SetBinContent(12,198);
   Zmm_2bjet_A_Z2b__635->SetBinContent(13,150);
   Zmm_2bjet_A_Z2b__635->SetBinContent(14,123);
   Zmm_2bjet_A_Z2b__635->SetBinContent(15,100);
   Zmm_2bjet_A_Z2b__635->SetBinContent(16,107);
   Zmm_2bjet_A_Z2b__635->SetBinContent(17,79);
   Zmm_2bjet_A_Z2b__635->SetBinContent(18,64);
   Zmm_2bjet_A_Z2b__635->SetBinContent(19,60);
   Zmm_2bjet_A_Z2b__635->SetBinContent(20,40);
   Zmm_2bjet_A_Z2b__635->SetBinContent(21,30);
   Zmm_2bjet_A_Z2b__635->SetBinContent(22,14);
   Zmm_2bjet_A_Z2b__635->SetBinContent(23,13);
   Zmm_2bjet_A_Z2b__635->SetBinContent(24,9);
   Zmm_2bjet_A_Z2b__635->SetBinContent(25,3);
   Zmm_2bjet_A_Z2b__635->SetBinError(1,37.78889);
   Zmm_2bjet_A_Z2b__635->SetBinError(2,35.56684);
   Zmm_2bjet_A_Z2b__635->SetBinError(3,32.87856);
   Zmm_2bjet_A_Z2b__635->SetBinError(4,29.88311);
   Zmm_2bjet_A_Z2b__635->SetBinError(5,27.34959);
   Zmm_2bjet_A_Z2b__635->SetBinError(6,24.55606);
   Zmm_2bjet_A_Z2b__635->SetBinError(7,21.74856);
   Zmm_2bjet_A_Z2b__635->SetBinError(8,18.97367);
   Zmm_2bjet_A_Z2b__635->SetBinError(9,18.22087);
   Zmm_2bjet_A_Z2b__635->SetBinError(10,16.27882);
   Zmm_2bjet_A_Z2b__635->SetBinError(11,15.29706);
   Zmm_2bjet_A_Z2b__635->SetBinError(12,14.07125);
   Zmm_2bjet_A_Z2b__635->SetBinError(13,12.24745);
   Zmm_2bjet_A_Z2b__635->SetBinError(14,11.09054);
   Zmm_2bjet_A_Z2b__635->SetBinError(15,10);
   Zmm_2bjet_A_Z2b__635->SetBinError(16,10.34408);
   Zmm_2bjet_A_Z2b__635->SetBinError(17,8.888194);
   Zmm_2bjet_A_Z2b__635->SetBinError(18,8);
   Zmm_2bjet_A_Z2b__635->SetBinError(19,7.745967);
   Zmm_2bjet_A_Z2b__635->SetBinError(20,6.324555);
   Zmm_2bjet_A_Z2b__635->SetBinError(21,5.477226);
   Zmm_2bjet_A_Z2b__635->SetBinError(22,3.741657);
   Zmm_2bjet_A_Z2b__635->SetBinError(23,3.605551);
   Zmm_2bjet_A_Z2b__635->SetBinError(24,3);
   Zmm_2bjet_A_Z2b__635->SetBinError(25,1.732051);
   Zmm_2bjet_A_Z2b__635->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__635->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__635->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__635->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__635->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fx1635[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fy1635[25] = {
   3658.163,
   3464.572,
   2898.578,
   2417.094,
   2010.141,
   1555.22,
   1299.687,
   1061.916,
   840.834,
   660.027,
   610.4517,
   512.697,
   387.2639,
   316.8374,
   293.6299,
   237.4887,
   190.2436,
   168.9945,
   126.4807,
   91.97564,
   94.911,
   66.49847,
   47.38148,
   23.4995,
   5.996944};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fex1635[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fey1635[25] = {
   55.78423,
   54.32206,
   49.67434,
   45.5067,
   41.19499,
   36.03764,
   32.90476,
   29.66929,
   26.08829,
   23.41311,
   22.81923,
   20.7699,
   17.77048,
   16.19345,
   15.89206,
   14.20914,
   12.712,
   11.80746,
   10.18214,
   8.652471,
   9.39951,
   7.427461,
   6.297131,
   4.419177,
   2.042449};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_A_Z2b_fx1635,Graph_from_Zmm_2bjet_A_Z2b_fy1635,Graph_from_Zmm_2bjet_A_Z2b_fex1635,Graph_from_Zmm_2bjet_A_Z2b_fey1635);
   gre->SetName("Graph_from_Zmm_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_A_Z2b1635 = new TH1F("Graph_Graph_from_Zmm_2bjet_A_Z2b1635","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->SetMinimum(3.559046);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->SetMaximum(4084.947);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1635->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_A_Z2b1635);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__636 = new TH1D("data_mc_ratio__636","",25,0,1);
   data_mc_ratio__636->SetBinContent(1,0.3903598);
   data_mc_ratio__636->SetBinContent(2,0.3651245);
   data_mc_ratio__636->SetBinContent(3,0.3729415);
   data_mc_ratio__636->SetBinContent(4,0.3694519);
   data_mc_ratio__636->SetBinContent(5,0.3721131);
   data_mc_ratio__636->SetBinContent(6,0.3877266);
   data_mc_ratio__636->SetBinContent(7,0.3639337);
   data_mc_ratio__636->SetBinContent(8,0.3390098);
   data_mc_ratio__636->SetBinContent(9,0.3948461);
   data_mc_ratio__636->SetBinContent(10,0.4014987);
   data_mc_ratio__636->SetBinContent(11,0.3833227);
   data_mc_ratio__636->SetBinContent(12,0.386193);
   data_mc_ratio__636->SetBinContent(13,0.3873327);
   data_mc_ratio__636->SetBinContent(14,0.3882117);
   data_mc_ratio__636->SetBinContent(15,0.3405648);
   data_mc_ratio__636->SetBinContent(16,0.4505478);
   data_mc_ratio__636->SetBinContent(17,0.415257);
   data_mc_ratio__636->SetBinContent(18,0.3787106);
   data_mc_ratio__636->SetBinContent(19,0.4743806);
   data_mc_ratio__636->SetBinContent(20,0.4348978);
   data_mc_ratio__636->SetBinContent(21,0.3160856);
   data_mc_ratio__636->SetBinContent(22,0.2105312);
   data_mc_ratio__636->SetBinContent(23,0.2743688);
   data_mc_ratio__636->SetBinContent(24,0.3829868);
   data_mc_ratio__636->SetBinContent(25,0.5002548);
   data_mc_ratio__636->SetBinError(1,0.01033002);
   data_mc_ratio__636->SetBinError(2,0.01026587);
   data_mc_ratio__636->SetBinError(3,0.011343);
   data_mc_ratio__636->SetBinError(4,0.01236324);
   data_mc_ratio__636->SetBinError(5,0.0136058);
   data_mc_ratio__636->SetBinError(6,0.01578945);
   data_mc_ratio__636->SetBinError(7,0.01673369);
   data_mc_ratio__636->SetBinError(8,0.01786738);
   data_mc_ratio__636->SetBinError(9,0.02166999);
   data_mc_ratio__636->SetBinError(10,0.02466387);
   data_mc_ratio__636->SetBinError(11,0.02505859);
   data_mc_ratio__636->SetBinError(12,0.02744554);
   data_mc_ratio__636->SetBinError(13,0.03162559);
   data_mc_ratio__636->SetBinError(14,0.03500387);
   data_mc_ratio__636->SetBinError(15,0.03405648);
   data_mc_ratio__636->SetBinError(16,0.0435561);
   data_mc_ratio__636->SetBinError(17,0.04672006);
   data_mc_ratio__636->SetBinError(18,0.04733882);
   data_mc_ratio__636->SetBinError(19,0.06124228);
   data_mc_ratio__636->SetBinError(20,0.06876338);
   data_mc_ratio__636->SetBinError(21,0.05770907);
   data_mc_ratio__636->SetBinError(22,0.05626682);
   data_mc_ratio__636->SetBinError(23,0.07609621);
   data_mc_ratio__636->SetBinError(24,0.1276623);
   data_mc_ratio__636->SetBinError(25,0.2888222);
   data_mc_ratio__636->SetMinimum(0.4);
   data_mc_ratio__636->SetMaximum(1.6);
   data_mc_ratio__636->SetEntries(502.4053);
   data_mc_ratio__636->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__636->SetLineColor(ci);
   data_mc_ratio__636->SetLineWidth(2);
   data_mc_ratio__636->SetMarkerStyle(20);
   data_mc_ratio__636->SetMarkerSize(1.2);
   data_mc_ratio__636->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__636->GetXaxis()->SetRange(1,25);
   data_mc_ratio__636->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__636->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__636->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__636->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__636->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__636->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__636->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__636->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__636->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__636->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__636->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__636->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__636->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__636->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1636[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1636[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1636[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1636[25] = {
   0.01524924,
   0.0156793,
   0.01713749,
   0.01882703,
   0.02049358,
   0.02317206,
   0.02531745,
   0.02793938,
   0.03102669,
   0.03547296,
   0.0373809,
   0.04051107,
   0.04588726,
   0.05110966,
   0.05412277,
   0.05983081,
   0.06681959,
   0.06986893,
   0.08050347,
   0.09407351,
   0.09903499,
   0.1116937,
   0.1329028,
   0.1880541,
   0.3405816};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1636,Graph_from_mc_statistical_error_fy1636,Graph_from_mc_statistical_error_fex1636,Graph_from_mc_statistical_error_fey1636);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1636 = new TH1F("Graph_Graph_from_mc_statistical_error1636","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1636->SetMinimum(0.5913021);
   Graph_Graph_from_mc_statistical_error1636->SetMaximum(1.408698);
   Graph_Graph_from_mc_statistical_error1636->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1636->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1636->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1636);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_17_amcnlo);
}
