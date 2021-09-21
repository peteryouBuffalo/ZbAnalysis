void dPhi_Zb1_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_All_amcnlo/dPhi_Zb1_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_All_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_All_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-6.100095,3.416482,6103.995);
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
   st->SetMaximum(5231.415);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,3.141593);
   st_stack_240->SetMinimum(0.01);
   st_stack_240->SetMaximum(5492.985);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,31);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.105");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(1,3.761255);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(2,2.676233);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(3,4.391028);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(4,2.903689);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(5,2.912738);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(6,3.787494);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(7,3.222871);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(8,5.180788);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(9,5.126884);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(10,5.706973);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(11,3.751556);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(12,7.612692);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(13,3.698053);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(14,6.74196);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(15,6.316995);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(16,8.346345);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(17,9.866672);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(18,6.027755);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(19,7.61073);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(20,7.77422);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(21,5.956483);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(22,8.865197);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(23,9.901686);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(24,9.720622);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(25,8.224083);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(26,7.133499);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(27,8.437933);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(28,9.376774);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(29,8.850368);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(30,10.06008);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(1,0.9081189);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(2,0.8176261);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(3,0.9832144);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(4,0.8188396);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(5,0.8122236);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(6,0.948972);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(7,0.8548208);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(8,1.139859);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(9,1.085846);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(10,1.169495);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(11,0.9166138);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(12,1.572781);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(13,0.9190833);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(14,1.250327);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(15,1.222969);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(16,1.384839);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(17,1.544916);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(18,1.192138);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(19,1.334941);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(20,1.345583);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(21,1.153979);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(22,1.426042);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(23,1.521648);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(24,1.51161);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(25,1.344545);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(26,1.287064);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(27,1.366541);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(28,1.461896);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(29,1.443235);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(30,1.523893);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(1,7.979664);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(2,6.401342);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(3,6.333779);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(4,7.567599);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(5,6.035732);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(6,9.516802);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(7,6.782596);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(8,7.710737);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(9,4.922773);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(10,7.718316);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(11,6.895895);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(12,10.9749);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(13,9.154079);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(14,9.053595);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(15,14.62441);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(16,14.97477);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(17,14.04253);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(18,15.29758);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(19,22.69791);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(20,23.97603);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(21,26.7542);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(22,25.41094);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(23,27.19788);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(24,24.16106);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(25,29.47843);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(26,25.8508);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(27,19.92008);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(28,22.67004);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(29,18.76593);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(30,15.07431);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(1,1.872906);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(2,1.590275);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(3,1.626123);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(4,1.733708);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(5,1.598576);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(6,2.048531);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(7,1.714646);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(8,1.801862);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(9,1.533494);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(10,1.876851);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(11,1.614557);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(12,2.114195);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(13,1.864028);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(14,1.935323);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(15,2.504052);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(16,2.520298);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(17,2.340535);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(18,2.469836);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(19,3.027477);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(20,3.119556);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(21,3.391241);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(22,3.223018);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(23,3.367263);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(24,3.060284);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(25,3.380246);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(26,3.195105);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(27,2.833605);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(28,3.040982);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(29,2.807067);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(30,2.53035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(1,139.3713);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(2,137.5646);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(3,143.7297);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(4,138.2528);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(5,135.0165);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(6,147.1769);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(7,147.1089);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(8,141.7955);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(9,151.8612);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(10,157.003);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(11,185.7324);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(12,207.4244);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(13,206.2082);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(14,238.1686);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(15,252.3429);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(16,270.7264);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(17,293.8776);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(18,321.9692);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(19,317.5419);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(20,327.4599);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(21,331.3515);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(22,329.4566);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(23,339.4225);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(24,337.506);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(25,336.9511);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(26,329.3804);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(27,312.9099);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(28,326.0283);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(29,313.3573);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(30,313.8374);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(1,5.401032);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(2,5.35827);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(3,5.459964);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(4,5.215742);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(5,5.343218);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(6,5.613443);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(7,5.434283);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(8,5.368692);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(9,5.59001);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(10,5.660566);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(11,6.206358);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(12,6.573109);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(13,6.515403);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(14,7.08816);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(15,7.274325);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(16,7.525102);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(17,7.826974);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(18,8.335571);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(19,8.088314);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(20,8.196345);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(21,8.21671);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(22,8.151876);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(23,8.361596);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(24,8.547661);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(25,8.339706);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(26,8.233802);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(27,7.998273);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(28,8.256534);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(29,8.137722);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(30,8.110287);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_3,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_4 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_4","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(1,2.044728);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(2,2.013443);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(3,2.010789);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(4,1.998833);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(5,1.986572);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(6,2.014732);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(7,2.125012);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(8,2.122125);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(9,2.242873);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(10,2.50669);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(11,2.798809);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(12,3.092572);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(13,3.520195);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(14,4.007323);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(15,4.548379);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(16,5.141367);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(17,5.854821);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(18,6.387192);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(19,7.221182);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(20,7.865801);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(21,8.600516);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(22,9.161337);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(23,9.454944);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(24,9.354862);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(25,9.095992);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(26,8.767895);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(27,7.901025);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(28,7.139122);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(29,6.479361);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(30,6.17131);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(1,0.03341915);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(2,0.0332928);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(3,0.03329945);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(4,0.03327338);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(5,0.03312761);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(6,0.03322842);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(7,0.03419277);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(8,0.034341);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(9,0.03509604);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(10,0.03716207);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(11,0.03932122);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(12,0.04131473);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(13,0.04413744);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(14,0.0470149);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(15,0.05014659);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(16,0.05324864);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(17,0.05687172);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(18,0.05929967);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(19,0.06315308);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(20,0.06589078);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(21,0.06888027);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(22,0.07118104);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(23,0.07222742);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(24,0.07194054);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(25,0.07096596);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(26,0.06963624);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(27,0.0660928);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(28,0.06279355);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(29,0.05980325);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetBinError(30,0.05841603);
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_4->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_4,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_5 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_5","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(1,1199.451);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(2,1171.185);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(3,1230.647);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(4,1181.25);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(5,1197.21);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(6,1083.021);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(7,1169.102);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(8,1176.045);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(9,1222.991);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(10,1336.422);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(11,1319.598);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(12,1389.142);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(13,1496.604);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(14,1508.234);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(15,1630.749);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(16,1714.424);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(17,1904.319);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(18,1972.987);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(19,2005.827);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(20,2188.1);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(21,2338.223);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(22,2475.591);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(23,2398.566);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(24,2496.535);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(25,2437.113);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(26,2468.667);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(27,2509.887);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(28,2313.954);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(29,2364.157);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(30,2296.359);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(1,33.22697);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(2,33.16805);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(3,34.3223);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(4,33.69251);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(5,34.2088);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(6,31.44106);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(7,32.56092);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(8,33.40325);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(9,33.83096);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(10,35.44165);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(11,35.12449);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(12,35.63256);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(13,37.22641);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(14,37.53023);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(15,38.77078);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(16,39.71356);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(17,42.01977);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(18,42.86373);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(19,42.71939);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(20,45.20012);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(21,46.2859);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(22,47.71463);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(23,46.93411);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(24,47.93508);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(25,47.52463);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(26,47.64805);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(27,47.97044);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(28,46.53006);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(29,46.43514);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetBinError(30,45.9512);
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_5->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all__479 = new TH1D("Zee_2bjet_dPhi_Zb1_all__479","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(1,468);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(2,444);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(3,450);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(4,506);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(5,455);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(6,482);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(7,475);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(8,500);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(9,499);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(10,563);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(11,548);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(12,597);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(13,590);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(14,686);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(15,720);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(16,740);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(17,783);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(18,839);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(19,849);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(20,886);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(21,926);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(22,996);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(23,1018);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(24,1018);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(25,1038);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(26,984);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(27,1050);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(28,1087);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(29,1052);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(30,1000);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(1,21.63331);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(2,21.07131);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(3,21.2132);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(4,22.49444);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(5,21.33073);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(6,21.9545);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(7,21.79449);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(8,22.36068);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(9,22.33831);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(10,23.72762);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(11,23.4094);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(12,24.43358);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(13,24.28992);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(14,26.1916);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(15,26.83282);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(16,27.20294);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(17,27.98214);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(18,28.9655);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(19,29.1376);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(20,29.76575);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(21,30.43025);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(22,31.55947);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(23,31.90611);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(24,31.90611);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(25,32.21801);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(26,31.36877);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(27,32.4037);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(28,32.96968);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(29,32.43455);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(30,31.62278);
   Zee_2bjet_dPhi_Zb1_all__479->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all__479->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all__479->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1_all__479->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1_all__479->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_all_fx1479[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_all_fy1479[30] = {
   1352.608,
   1319.84,
   1387.112,
   1331.973,
   1343.162,
   1245.517,
   1328.341,
   1332.854,
   1387.144,
   1509.357,
   1518.777,
   1618.247,
   1719.185,
   1766.205,
   1908.582,
   2013.613,
   2227.961,
   2322.669,
   2360.899,
   2555.176,
   2710.886,
   2848.485,
   2784.543,
   2877.278,
   2820.863,
   2839.799,
   2859.056,
   2679.168,
   2711.61,
   2641.502};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_all_fex1479[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_all_fey1479[30] = {
   33.72738,
   33.64565,
   34.8058,
   34.14772,
   34.66999,
   32.01795,
   33.06686,
   33.89907,
   34.34114,
   35.95892,
   35.7169,
   36.32947,
   37.8494,
   38.26319,
   39.54564,
   40.52242,
   42.83445,
   43.75278,
   43.60412,
   46.06275,
   47.1459,
   48.53416,
   47.81617,
   48.81075,
   48.38781,
   48.47682,
   48.73435,
   47.37727,
   47.2484,
   46.75487};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb1_all_fx1479,Graph_from_Zee_2bjet_dPhi_Zb1_all_fy1479,Graph_from_Zee_2bjet_dPhi_Zb1_all_fex1479,Graph_from_Zee_2bjet_dPhi_Zb1_all_fey1479);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->SetMinimum(1042.24);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->SetMaximum(3097.348);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dPhi_Zb1_all","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__480 = new TH1D("data_mc_ratio__480","",30,0,3.141593);
   data_mc_ratio__480->SetBinContent(1,0.3459983);
   data_mc_ratio__480->SetBinContent(2,0.3364043);
   data_mc_ratio__480->SetBinContent(3,0.324415);
   data_mc_ratio__480->SetBinContent(4,0.3798875);
   data_mc_ratio__480->SetBinContent(5,0.3387529);
   data_mc_ratio__480->SetBinContent(6,0.3869878);
   data_mc_ratio__480->SetBinContent(7,0.3575889);
   data_mc_ratio__480->SetBinContent(8,0.3751348);
   data_mc_ratio__480->SetBinContent(9,0.3597318);
   data_mc_ratio__480->SetBinContent(10,0.3730066);
   data_mc_ratio__480->SetBinContent(11,0.3608167);
   data_mc_ratio__480->SetBinContent(12,0.3689178);
   data_mc_ratio__480->SetBinContent(13,0.343186);
   data_mc_ratio__480->SetBinContent(14,0.3884033);
   data_mc_ratio__480->SetBinContent(15,0.3772435);
   data_mc_ratio__480->SetBinContent(16,0.3674986);
   data_mc_ratio__480->SetBinContent(17,0.3514425);
   data_mc_ratio__480->SetBinContent(18,0.3612224);
   data_mc_ratio__480->SetBinContent(19,0.3596087);
   data_mc_ratio__480->SetBinContent(20,0.3467472);
   data_mc_ratio__480->SetBinContent(21,0.3415857);
   data_mc_ratio__480->SetBinContent(22,0.3496596);
   data_mc_ratio__480->SetBinContent(23,0.3655897);
   data_mc_ratio__480->SetBinContent(24,0.3538066);
   data_mc_ratio__480->SetBinContent(25,0.3679725);
   data_mc_ratio__480->SetBinContent(26,0.3465034);
   data_mc_ratio__480->SetBinContent(27,0.3672541);
   data_mc_ratio__480->SetBinContent(28,0.4057229);
   data_mc_ratio__480->SetBinContent(29,0.3879614);
   data_mc_ratio__480->SetBinContent(30,0.3785725);
   data_mc_ratio__480->SetBinError(1,0.01599378);
   data_mc_ratio__480->SetBinError(2,0.01596504);
   data_mc_ratio__480->SetBinError(3,0.01529307);
   data_mc_ratio__480->SetBinError(4,0.01688806);
   data_mc_ratio__480->SetBinError(5,0.01588098);
   data_mc_ratio__480->SetBinError(6,0.01762681);
   data_mc_ratio__480->SetBinError(7,0.0164073);
   data_mc_ratio__480->SetBinError(8,0.01677654);
   data_mc_ratio__480->SetBinError(9,0.01610381);
   data_mc_ratio__480->SetBinError(10,0.01572036);
   data_mc_ratio__480->SetBinError(11,0.01541332);
   data_mc_ratio__480->SetBinError(12,0.0150988);
   data_mc_ratio__480->SetBinError(13,0.01412874);
   data_mc_ratio__480->SetBinError(14,0.01482931);
   data_mc_ratio__480->SetBinError(15,0.01405904);
   data_mc_ratio__480->SetBinError(16,0.01350952);
   data_mc_ratio__480->SetBinError(17,0.01255953);
   data_mc_ratio__480->SetBinError(18,0.01247078);
   data_mc_ratio__480->SetBinError(19,0.01234174);
   data_mc_ratio__480->SetBinError(20,0.0116492);
   data_mc_ratio__480->SetBinError(21,0.0112252);
   data_mc_ratio__480->SetBinError(22,0.01107939);
   data_mc_ratio__480->SetBinError(23,0.0114583);
   data_mc_ratio__480->SetBinError(24,0.01108899);
   data_mc_ratio__480->SetBinError(25,0.01142133);
   data_mc_ratio__480->SetBinError(26,0.01104612);
   data_mc_ratio__480->SetBinError(27,0.01133371);
   data_mc_ratio__480->SetBinError(28,0.01230594);
   data_mc_ratio__480->SetBinError(29,0.01196136);
   data_mc_ratio__480->SetBinError(30,0.01197151);
   data_mc_ratio__480->SetMinimum(0.4);
   data_mc_ratio__480->SetMaximum(1.6);
   data_mc_ratio__480->SetEntries(15513.89);
   data_mc_ratio__480->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__480->SetLineColor(ci);
   data_mc_ratio__480->SetLineWidth(2);
   data_mc_ratio__480->SetMarkerStyle(20);
   data_mc_ratio__480->SetMarkerSize(1.2);
   data_mc_ratio__480->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__480->GetXaxis()->SetRange(1,31);
   data_mc_ratio__480->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__480->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__480->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__480->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__480->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__480->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.02493508,
   0.02549221,
   0.02509228,
   0.02563694,
   0.02581222,
   0.02570654,
   0.02489335,
   0.02543344,
   0.02475671,
   0.02382401,
   0.02351689,
   0.02244989,
   0.0220159,
   0.02166407,
   0.02071991,
   0.02012423,
   0.01922586,
   0.01883729,
   0.01846928,
   0.01802723,
   0.01739132,
   0.01703859,
   0.017172,
   0.01696421,
   0.01715355,
   0.01707051,
   0.01704561,
   0.01768357,
   0.01742448,
   0.01770011};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.9690253);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(1.030975);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_All_amcnlo);
}
