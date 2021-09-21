void dPhi_Zb_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_16_amcnlo/dPhi_Zb_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:39 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_16_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-4.573807,3.416482,4579.233);
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
   st->SetMaximum(3924.621);
   
   TH1F *st_stack_321 = new TH1F("st_stack_321","",30,0,3.141593);
   st_stack_321->SetMinimum(0.01);
   st_stack_321->SetMaximum(4120.853);
   st_stack_321->SetDirectory(0);
   st_stack_321->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_321->SetLineColor(ci);
   st_stack_321->GetXaxis()->SetRange(1,31);
   st_stack_321->GetXaxis()->SetLabelFont(42);
   st_stack_321->GetXaxis()->SetLabelSize(0.035);
   st_stack_321->GetXaxis()->SetTitleSize(0.035);
   st_stack_321->GetXaxis()->SetTitleFont(42);
   st_stack_321->GetYaxis()->SetTitle("Events/0.105");
   st_stack_321->GetYaxis()->SetLabelFont(42);
   st_stack_321->GetYaxis()->SetLabelSize(0.05);
   st_stack_321->GetYaxis()->SetTitleSize(0.057);
   st_stack_321->GetYaxis()->SetTitleOffset(1.2);
   st_stack_321->GetYaxis()->SetTitleFont(42);
   st_stack_321->GetZaxis()->SetLabelFont(42);
   st_stack_321->GetZaxis()->SetLabelSize(0.035);
   st_stack_321->GetZaxis()->SetTitleSize(0.035);
   st_stack_321->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_321);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.3934881);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.4523121);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.7858576);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,1.065844);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.2558477);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.3940473);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.3940473);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.5905117);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.5610906);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.1964644);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.8704978);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.4770097);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.7869761);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,0.9834405);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.9839998);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,2.163345);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.846894);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,1.180464);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,2.830334);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,2.553935);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.6916);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.770417);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,2.89844);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,4.526511);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,2.952559);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,5.187907);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,5.114683);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,3.70564);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,4.326691);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,5.037088);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.2782384);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.2841178);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.3929288);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.4471769);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.2052429);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.2786335);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.2786335);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.3409324);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.3026357);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.1964644);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.4022549);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.2905038);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.3934885);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.4398084);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.4400585);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.6522738);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.5954156);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.481923);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.7402372);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.6905991);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.5623868);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.5901395);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.7435445);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.9438437);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.762348);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.00555);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.9906287);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.842378);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,0.9224545);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.9872437);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(305);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,1.316944);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,3.278524);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.490238);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,0.8941428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.8941428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,1.490238);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.5960952);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.2980476);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.2980476);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,1.19219);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(11,2.384381);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.490238);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,2.682428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.335839);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,1.913039);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,3.576571);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,3.278524);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,1.788286);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,2.682428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,4.470714);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,7.277895);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,5.48961);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,5.48961);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,9.003376);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,11.15251);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,12.76751);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,9.239475);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,15.80993);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,12.9408);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,13.31506);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.6672762);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.988512);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.6664547);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.5162336);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.5162336);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.6664547);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.4215029);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.2980476);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.2980476);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.5960952);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.8430059);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.6664547);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.8941428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.8953674);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.7892543);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.032467);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.988512);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.7300645);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,0.8941428);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.154333);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.490606);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.299581);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.299581);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.691636);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,1.837587);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,1.977578);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.659459);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,2.235129);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,1.977301);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,2.044384);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(463);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,27.06891);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,26.48469);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,26.09521);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,26.67943);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,27.45839);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,24.53728);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,27.45839);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,27.84787);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,27.65313);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,31.3532);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,36.41645);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,35.05326);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,39.92177);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,49.07457);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,53.5536);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,63.29061);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,71.08023);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,73.22237);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,76.53296);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,95.22803);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,104.3808);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,104.3808);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,120.739);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,122.1022);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,126.776);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,134.7603);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,131.8392);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,132.6182);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,140.2131);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,134.9551);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.295955);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,2.271043);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,2.254283);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,2.279377);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,2.312414);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,2.185955);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.312414);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,2.328756);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.320599);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.470978);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.663034);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.612716);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.788257);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,3.091407);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,3.229403);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.510732);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.720509);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.776155);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.860577);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,4.30636);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,4.508565);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,4.508565);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.848996);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.876292);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.968742);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,5.122819);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,5.066993);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,5.08194);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,5.225432);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,5.126519);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(10880);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.2092287);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.2092287);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.1970575);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.2231387);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.2283549);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.2092287);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.2422648);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.2300936);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.2457423);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.2909496);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.3309407);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.3454302);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.3970129);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.4630852);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.479893);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(16,0.59465);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(17,0.7407044);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(18,0.8369149);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(19,1.027017);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(20,1.294784);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(21,1.635577);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(22,2.087071);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(23,2.719973);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(24,3.3465);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(25,4.256442);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(26,5.038297);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(27,5.74017);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(28,6.024744);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(29,5.742488);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(30,5.340259);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.01101204);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.01101204);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.01068694);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.0113722);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.01150435);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.01101204);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.01184956);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.01154807);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.0119343);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.01298572);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.01384944);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.01414937);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.01516908);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.01638278);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.01667744);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.01856469);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.02071951);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.02202408);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.02439754);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.02739401);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.03078879);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.03477969);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.03970447);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.04404052);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.04966843);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.05403796);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.05767922);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.05909168);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.05769087);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.05563373);
   Zmm_2bjet_dPhi_Zb_stack_4->SetEntries(87524);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(1,181.5402);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(2,197.7671);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(3,185.7864);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(4,181.051);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(5,163.237);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(6,185.343);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(7,206.8052);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(8,202.0337);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(9,189.4967);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(10,216.9619);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(11,242.2735);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(12,240.2848);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(13,280.3074);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(14,284.0644);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(15,339.5264);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(16,366.2754);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(17,388.774);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(18,471.3044);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(19,538.7316);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(20,588.4321);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(21,741.0641);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(22,808.2389);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(23,991.1858);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(24,1175.277);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(25,1333.5);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(26,1530.159);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(27,1692.808);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(28,1810.956);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(29,1995.319);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(30,1917.956);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(1,10.17863);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(2,10.55982);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(3,10.08871);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(4,9.57764);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(5,9.270871);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(6,10.30158);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(7,11.15027);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(8,10.66996);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(9,9.963959);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(10,11.33035);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(11,11.74336);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(12,11.19302);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(13,13.15706);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(14,12.62587);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(15,13.52717);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(16,14.42876);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(17,14.13917);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(18,15.67579);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(19,16.8155);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(20,17.60886);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(21,19.7084);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(22,20.52756);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(23,22.79583);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(24,24.92392);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(25,26.59547);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(26,28.06247);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(27,29.58055);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(28,30.69008);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(29,32.39652);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(30,31.92059);
   Zmm_2bjet_dPhi_Zb_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb__641 = new TH1D("Zmm_2bjet_dPhi_Zb__641","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(1,68);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(2,75);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(3,84);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(4,81);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(5,85);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(6,91);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(7,70);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(8,87);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(9,99);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(10,110);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(11,96);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(12,94);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(13,116);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(14,134);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(15,128);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(16,132);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(17,195);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(18,201);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(19,215);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(20,268);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(21,325);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(22,372);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(23,424);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(24,447);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(25,484);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(26,531);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(27,597);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(28,587);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(29,687);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(30,653);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(1,8.246211);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(2,8.660254);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(3,9.165151);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(4,9);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(5,9.219544);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(6,9.539392);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(7,8.3666);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(8,9.327379);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(9,9.949874);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(10,10.48809);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(11,9.797959);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(12,9.69536);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(13,10.77033);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(14,11.57584);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(15,11.31371);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(16,11.48913);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(17,13.96424);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(18,14.17745);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(19,14.66288);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(20,16.37071);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(21,18.02776);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(22,19.2873);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(23,20.59126);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(24,21.14237);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(25,22);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(26,23.04344);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(27,24.43358);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(28,24.22808);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(29,26.21068);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(30,25.55386);
   Zmm_2bjet_dPhi_Zb__641->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__641->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__641->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__641->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__641->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fx1641[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fy1641[30] = {
   210.5288,
   228.1918,
   214.3548,
   209.9135,
   192.0737,
   211.9738,
   235.496,
   231.0003,
   218.2548,
   249.9947,
   282.2758,
   277.6507,
   324.0956,
   336.9213,
   396.4569,
   435.9005,
   465.7203,
   548.3325,
   621.8043,
   691.9795,
   856.05,
   921.9668,
   1123.033,
   1314.255,
   1478.637,
   1687.913,
   1844.742,
   1969.114,
   2158.542,
   2076.603};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fex1641[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fey1641[30] = {
   10.45939,
   10.85013,
   10.36642,
   9.868807,
   9.571053,
   10.5557,
   11.39874,
   10.93053,
   10.23944,
   11.61364,
   12.0777,
   11.51689,
   13.4847,
   13.03705,
   13.93665,
   14.89987,
   14.66596,
   16.14793,
   17.292,
   18.17765,
   20.28022,
   21.06528,
   23.35393,
   25.47027,
   27.12872,
   28.61242,
   30.07361,
   31.19961,
   32.88774,
   32.4093};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb_fx1641,Graph_from_Zmm_2bjet_dPhi_Zb_fy1641,Graph_from_Zmm_2bjet_dPhi_Zb_fex1641,Graph_from_Zmm_2bjet_dPhi_Zb_fey1641);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->SetMinimum(164.2524);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->SetMaximum(2392.322);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb1641);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__642 = new TH1D("data_mc_ratio__642","",30,0,3.141593);
   data_mc_ratio__642->SetBinContent(1,0.3229962);
   data_mc_ratio__642->SetBinContent(2,0.3286709);
   data_mc_ratio__642->SetBinContent(3,0.3918737);
   data_mc_ratio__642->SetBinContent(4,0.3858732);
   data_mc_ratio__642->SetBinContent(5,0.4425384);
   data_mc_ratio__642->SetBinContent(6,0.4292983);
   data_mc_ratio__642->SetBinContent(7,0.297245);
   data_mc_ratio__642->SetBinContent(8,0.376623);
   data_mc_ratio__642->SetBinContent(9,0.4535984);
   data_mc_ratio__642->SetBinContent(10,0.4400093);
   data_mc_ratio__642->SetBinContent(11,0.3400929);
   data_mc_ratio__642->SetBinContent(12,0.3385549);
   data_mc_ratio__642->SetBinContent(13,0.3579191);
   data_mc_ratio__642->SetBinContent(14,0.397719);
   data_mc_ratio__642->SetBinContent(15,0.3228598);
   data_mc_ratio__642->SetBinContent(16,0.3028214);
   data_mc_ratio__642->SetBinContent(17,0.4187062);
   data_mc_ratio__642->SetBinContent(18,0.3665659);
   data_mc_ratio__642->SetBinContent(19,0.3457679);
   data_mc_ratio__642->SetBinContent(20,0.3872947);
   data_mc_ratio__642->SetBinContent(21,0.3796507);
   data_mc_ratio__642->SetBinContent(22,0.4034853);
   data_mc_ratio__642->SetBinContent(23,0.3775491);
   data_mc_ratio__642->SetBinContent(24,0.3401166);
   data_mc_ratio__642->SetBinContent(25,0.3273285);
   data_mc_ratio__642->SetBinContent(26,0.3145897);
   data_mc_ratio__642->SetBinContent(27,0.3236225);
   data_mc_ratio__642->SetBinContent(28,0.2981036);
   data_mc_ratio__642->SetBinContent(29,0.3182704);
   data_mc_ratio__642->SetBinContent(30,0.3144558);
   data_mc_ratio__642->SetBinError(1,0.03916905);
   data_mc_ratio__642->SetBinError(2,0.03795164);
   data_mc_ratio__642->SetBinError(3,0.04275693);
   data_mc_ratio__642->SetBinError(4,0.0428748);
   data_mc_ratio__642->SetBinError(5,0.04800002);
   data_mc_ratio__642->SetBinError(6,0.04500269);
   data_mc_ratio__642->SetBinError(7,0.03552757);
   data_mc_ratio__642->SetBinError(8,0.04037822);
   data_mc_ratio__642->SetBinError(9,0.04558835);
   data_mc_ratio__642->SetBinError(10,0.04195324);
   data_mc_ratio__642->SetBinError(11,0.03471059);
   data_mc_ratio__642->SetBinError(12,0.03491927);
   data_mc_ratio__642->SetBinError(13,0.03323196);
   data_mc_ratio__642->SetBinError(14,0.03435769);
   data_mc_ratio__642->SetBinError(15,0.02853704);
   data_mc_ratio__642->SetBinError(16,0.02635722);
   data_mc_ratio__642->SetBinError(17,0.02998418);
   data_mc_ratio__642->SetBinError(18,0.02585557);
   data_mc_ratio__642->SetBinError(19,0.02358118);
   data_mc_ratio__642->SetBinError(20,0.02365779);
   data_mc_ratio__642->SetBinError(21,0.02105923);
   data_mc_ratio__642->SetBinError(22,0.02091974);
   data_mc_ratio__642->SetBinError(23,0.0183354);
   data_mc_ratio__642->SetBinError(24,0.01608696);
   data_mc_ratio__642->SetBinError(25,0.01487857);
   data_mc_ratio__642->SetBinError(26,0.01365203);
   data_mc_ratio__642->SetBinError(27,0.01324499);
   data_mc_ratio__642->SetBinError(28,0.01230405);
   data_mc_ratio__642->SetBinError(29,0.01214277);
   data_mc_ratio__642->SetBinError(30,0.01230561);
   data_mc_ratio__642->SetMinimum(0.4);
   data_mc_ratio__642->SetMaximum(1.6);
   data_mc_ratio__642->SetEntries(3392.495);
   data_mc_ratio__642->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__642->SetLineColor(ci);
   data_mc_ratio__642->SetLineWidth(2);
   data_mc_ratio__642->SetMarkerStyle(20);
   data_mc_ratio__642->SetMarkerSize(1.2);
   data_mc_ratio__642->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__642->GetXaxis()->SetRange(1,31);
   data_mc_ratio__642->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__642->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__642->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__642->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__642->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__642->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__642->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__642->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__642->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__642->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__642->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__642->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__642->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__642->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1642[30] = {
   0.04968151,
   0.0475483,
   0.04836104,
   0.04701368,
   0.0498301,
   0.04979719,
   0.04840311,
   0.04731825,
   0.0469151,
   0.04645553,
   0.0427869,
   0.04147976,
   0.04160719,
   0.03869465,
   0.03515299,
   0.03418181,
   0.03149093,
   0.02944915,
   0.02780939,
   0.02626905,
   0.02369046,
   0.0228482,
   0.02079541,
   0.01938,
   0.01834711,
   0.01695136,
   0.01630234,
   0.01584449,
   0.01523609,
   0.01560688};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1642,Graph_from_mc_statistical_error_fy1642,Graph_from_mc_statistical_error_fex1642,Graph_from_mc_statistical_error_fey1642);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1642 = new TH1F("Graph_Graph_from_mc_statistical_error1642","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1642->SetMinimum(0.9402039);
   Graph_Graph_from_mc_statistical_error1642->SetMaximum(1.059796);
   Graph_Graph_from_mc_statistical_error1642->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1642->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1642->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1642);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_16_amcnlo);
}
