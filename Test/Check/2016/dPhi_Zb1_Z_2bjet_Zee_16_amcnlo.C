void dPhi_Zb1_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_16_amcnlo/dPhi_Zb1_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_16_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_16_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.639783,3.416482,1648.143);
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
   st->SetMaximum(1412.538);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,3.141593);
   st_stack_237->SetMinimum(0.01);
   st_stack_237->SetMaximum(1483.165);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,31);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.105");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.255823);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,1.769857);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,0.5899525);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,0.7869761);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.180464);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,0.7875354);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,0.3940473);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.180464);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,1.377488);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,0.3929288);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,1.572834);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,0.5523681);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,1.377488);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,1.64987);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.770976);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,2.418634);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,1.632217);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,1.067521);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,1.376929);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,1.337666);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,2.812122);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,0.7869761);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.559071);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,1.461009);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,1.968);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,2.247426);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,1.968559);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,1.376929);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,2.247426);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.4879188);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.589953);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.3406095);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.3934885);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.481923);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.393768);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.2786335);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.481923);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.520642);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.2778426);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.5560811);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.3003455);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.520642);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.5618731);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.5903259);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.6836415);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.5592429);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.4479145);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.5204306);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.4943485);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.7380937);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.3934885);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.7097591);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.5272987);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.6223367);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.6577667);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.6225135);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.5204306);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.6577667);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(221);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,1.614991);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.19219);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,1.788286);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.682428);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.490238);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,1.490238);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,0.5960952);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,1.552186);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,0.2980476);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,0.8941428);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,2.086333);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,1.913039);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,2.086333);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,2.807182);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,1.788286);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,2.980476);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,3.576571);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,2.980476);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,5.787657);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,5.364857);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,3.403277);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,4.893515);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,5.662904);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,4.768762);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,10.50788);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,8.892887);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,4.768762);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,4.470714);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,6.508506);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,3.403277);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,0.7308146);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.5960952);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.7300645);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.8941428);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.6664547);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.6664547);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.4215029);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.8005147);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.2980476);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.5162336);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.7885598);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.7892543);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.7885598);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,0.9430904);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,0.7300645);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,0.9425092);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.032467);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,0.9425092);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.33332);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.264509);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.032998);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.229327);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.299159);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.19219);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.813859);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.660119);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.19219);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.154333);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.430152);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.032998);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(336);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,29.40579);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,26.67943);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,33.10586);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,34.2743);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,29.40579);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,32.52164);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,32.91112);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,34.07956);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,32.71638);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,29.99001);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,42.64814);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,45.76398);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,48.29561);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,53.5536);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,57.25366);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,62.51165);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,67.5749);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,71.08023);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,76.53296);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,70.49601);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,74.19607);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,73.41711);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,77.7014);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,71.27497);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,76.33822);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,74.58555);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,63.48535);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,70.88549);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,66.40646);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,64.45906);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.393009);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.279377);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.539103);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.583523);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.393009);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.5166);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.531625);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.576173);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.524123);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,2.416664);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,2.881894);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,2.985313);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.066774);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.229403);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.339101);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.48906);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.627611);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,3.720509);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.860577);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.705188);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,3.80118);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,3.781174);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,3.889935);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,3.725602);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,3.855662);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,3.811144);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,3.516129);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.715409);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.596111);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.54299);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(8337);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_4 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,0.5082925);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,0.4625056);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,0.4654035);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,0.4543915);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,0.4764155);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,0.4856888);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,0.493803);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,0.4816318);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,0.522782);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,0.5911726);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,0.6479715);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,0.7221578);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,0.8461882);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,0.9360232);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,1.062951);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,1.241462);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,1.416496);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,1.520241);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,1.692956);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,1.88132);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,2.087071);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,2.258627);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,2.315426);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,2.344984);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,2.263843);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,2.189077);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,2.00477);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,1.819884);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,1.623986);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,1.557914);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.01716382);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.01637252);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.01642373);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.01622827);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.0166169);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.01677784);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.01691741);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.01670762);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.01740674);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.01851033);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.01937916);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.02045847);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.02214576);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.02329166);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.02482068);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.02682402);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.02865264);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.02968337);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.03132419);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.03302086);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.03477969);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.03618089);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.036633);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.03686609);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.03622265);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.03561948);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.03408705);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.03247723);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.03067949);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.03004891);
   Zee_2bjet_dPhi_Zb1_stack_4->SetEntries(64487);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_4,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_5 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,322.0881);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,318.2337);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,315.7189);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,324.0829);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,306.3769);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,290.5729);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,333.384);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,318.8162);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,352.4394);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,325.778);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,360.164);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,382.4094);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,383.7286);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,393.705);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,447.4299);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,458.2051);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,511.5538);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,525.8748);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,526.9105);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,577.0176);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,627.4763);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,640.7916);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,660.038);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,664.8455);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,648.4489);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,689.2605);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,680.5405);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,651.4681);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,656.0232);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,653.4879);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(1,13.33285);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(2,13.36222);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(3,13.45478);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(4,13.11248);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(5,12.93999);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(6,12.28971);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(7,13.31177);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(8,12.96279);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(9,14.1131);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(10,13.08061);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(11,13.96228);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(12,14.4917);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(13,14.40649);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(14,14.43547);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(15,15.837);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(16,15.64523);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(17,16.86737);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(18,16.43444);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(19,16.46268);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(20,17.9156);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(21,18.27977);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(22,18.37617);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(23,18.74162);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(24,19.03046);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(25,18.42328);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(26,19.09409);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(27,19.34117);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(28,18.54756);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(29,18.73101);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(30,18.68615);
   Zee_2bjet_dPhi_Zb1_stack_5->SetEntries(27953);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1__473 = new TH1D("Zee_2bjet_dPhi_Zb1__473","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(1,117);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(2,126);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(3,110);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(4,121);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(5,97);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(6,120);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(7,131);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(8,117);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(9,131);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(10,131);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(11,129);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(12,145);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(13,139);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(14,158);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(15,191);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(16,191);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(17,230);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(18,205);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(19,223);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(20,229);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(21,244);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(22,238);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(23,248);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(24,223);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(25,238);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(26,258);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(27,239);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(28,252);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(29,263);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(30,246);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(1,10.81665);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(2,11.22497);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(3,10.48809);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(4,11);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(5,9.848858);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(6,10.95445);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(7,11.44552);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(8,10.81665);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(9,11.44552);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(10,11.44552);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(11,11.35782);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(12,12.04159);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(13,11.78983);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(14,12.56981);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(15,13.82027);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(16,13.82027);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(17,15.16575);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(18,14.31782);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(19,14.93318);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(20,15.13275);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(21,15.6205);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(22,15.42725);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(23,15.74802);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(24,14.93318);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(25,15.42725);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(26,16.06238);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(27,15.45962);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(28,15.87451);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(29,16.21727);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(30,15.68439);
   Zee_2bjet_dPhi_Zb1__473->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__473->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__473->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__473->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__473->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fx1473[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fy1473[30] = {
   354.873,
   346.5678,
   352.8484,
   362.0839,
   338.5363,
   326.251,
   368.1725,
   355.3236,
   387.157,
   358.6308,
   405.9394,
   432.3815,
   435.5091,
   452.3793,
   509.1846,
   526.7097,
   586.5404,
   603.088,
   611.9916,
   656.1367,
   708.5003,
   724.173,
   746.5047,
   745.7933,
   739.0198,
   776.896,
   753.0468,
   730.6127,
   731.939,
   725.1556};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fex1473[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fey1473[30] = {
   13.57438,
   13.56835,
   13.72441,
   13.39879,
   13.18215,
   12.57167,
   13.56265,
   13.24346,
   14.34825,
   13.32218,
   14.28111,
   14.82748,
   14.75346,
   14.83149,
   16.2114,
   16.06812,
   17.29745,
   16.88594,
   16.96771,
   18.34579,
   18.70592,
   18.8159,
   19.18917,
   19.44132,
   18.917,
   19.55131,
   19.70531,
   18.96147,
   19.13374,
   19.05848};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb1_fx1473,Graph_from_Zee_2bjet_dPhi_Zb1_fy1473,Graph_from_Zee_2bjet_dPhi_Zb1_fex1473,Graph_from_Zee_2bjet_dPhi_Zb1_fey1473);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb11473 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb11473","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->SetMinimum(265.4025);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->SetMaximum(844.7242);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb11473);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__474 = new TH1D("data_mc_ratio__474","",30,0,3.141593);
   data_mc_ratio__474->SetBinContent(1,0.3296954);
   data_mc_ratio__474->SetBinContent(2,0.3635652);
   data_mc_ratio__474->SetBinContent(3,0.3117487);
   data_mc_ratio__474->SetBinContent(4,0.3341767);
   data_mc_ratio__474->SetBinContent(5,0.2865276);
   data_mc_ratio__474->SetBinContent(6,0.367815);
   data_mc_ratio__474->SetBinContent(7,0.3558115);
   data_mc_ratio__474->SetBinContent(8,0.3292773);
   data_mc_ratio__474->SetBinContent(9,0.338364);
   data_mc_ratio__474->SetBinContent(10,0.3652782);
   data_mc_ratio__474->SetBinContent(11,0.3177815);
   data_mc_ratio__474->SetBinContent(12,0.335352);
   data_mc_ratio__474->SetBinContent(13,0.3191667);
   data_mc_ratio__474->SetBinContent(14,0.3492644);
   data_mc_ratio__474->SetBinContent(15,0.3751095);
   data_mc_ratio__474->SetBinContent(16,0.3626286);
   data_mc_ratio__474->SetBinContent(17,0.3921299);
   data_mc_ratio__474->SetBinContent(18,0.3399172);
   data_mc_ratio__474->SetBinContent(19,0.3643841);
   data_mc_ratio__474->SetBinContent(20,0.3490127);
   data_mc_ratio__474->SetBinContent(21,0.3443894);
   data_mc_ratio__474->SetBinContent(22,0.3286507);
   data_mc_ratio__474->SetBinContent(23,0.3322149);
   data_mc_ratio__474->SetBinContent(24,0.2990105);
   data_mc_ratio__474->SetBinContent(25,0.3220482);
   data_mc_ratio__474->SetBinContent(26,0.3320908);
   data_mc_ratio__474->SetBinContent(27,0.3173773);
   data_mc_ratio__474->SetBinContent(28,0.344916);
   data_mc_ratio__474->SetBinContent(29,0.3593195);
   data_mc_ratio__474->SetBinContent(30,0.3392375);
   data_mc_ratio__474->SetBinError(1,0.03048035);
   data_mc_ratio__474->SetBinError(2,0.03238896);
   data_mc_ratio__474->SetBinError(3,0.02972407);
   data_mc_ratio__474->SetBinError(4,0.0303797);
   data_mc_ratio__474->SetBinError(5,0.02909247);
   data_mc_ratio__474->SetBinError(6,0.03357676);
   data_mc_ratio__474->SetBinError(7,0.03108739);
   data_mc_ratio__474->SetBinError(8,0.0304417);
   data_mc_ratio__474->SetBinError(9,0.029563);
   data_mc_ratio__474->SetBinError(10,0.0319145);
   data_mc_ratio__474->SetBinError(11,0.0279791);
   data_mc_ratio__474->SetBinError(12,0.02784947);
   data_mc_ratio__474->SetBinError(13,0.02707137);
   data_mc_ratio__474->SetBinError(14,0.02778599);
   data_mc_ratio__474->SetBinError(15,0.02714197);
   data_mc_ratio__474->SetBinError(16,0.02623888);
   data_mc_ratio__474->SetBinError(17,0.02585628);
   data_mc_ratio__474->SetBinError(18,0.02374085);
   data_mc_ratio__474->SetBinError(19,0.02440096);
   data_mc_ratio__474->SetBinError(20,0.02306341);
   data_mc_ratio__474->SetBinError(21,0.02204727);
   data_mc_ratio__474->SetBinError(22,0.02130326);
   data_mc_ratio__474->SetBinError(23,0.02109567);
   data_mc_ratio__474->SetBinError(24,0.02002322);
   data_mc_ratio__474->SetBinError(25,0.02087528);
   data_mc_ratio__474->SetBinError(26,0.02067507);
   data_mc_ratio__474->SetBinError(27,0.02052943);
   data_mc_ratio__474->SetBinError(28,0.02172766);
   data_mc_ratio__474->SetBinError(29,0.02215659);
   data_mc_ratio__474->SetBinError(30,0.021629);
   data_mc_ratio__474->SetMinimum(0.4);
   data_mc_ratio__474->SetMaximum(1.6);
   data_mc_ratio__474->SetEntries(4255.243);
   data_mc_ratio__474->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__474->SetLineColor(ci);
   data_mc_ratio__474->SetLineWidth(2);
   data_mc_ratio__474->SetMarkerStyle(20);
   data_mc_ratio__474->SetMarkerSize(1.2);
   data_mc_ratio__474->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__474->GetXaxis()->SetRange(1,31);
   data_mc_ratio__474->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__474->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__474->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__474->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__474->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__474->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.03825137,
   0.03915062,
   0.03889605,
   0.03700464,
   0.03893865,
   0.03853374,
   0.03683776,
   0.03727156,
   0.03706055,
   0.03714734,
   0.0351804,
   0.03429259,
   0.03387634,
   0.03278551,
   0.03183796,
   0.03050659,
   0.02949064,
   0.02799913,
   0.0277254,
   0.02796032,
   0.02640214,
   0.0259826,
   0.02570535,
   0.02606797,
   0.02559742,
   0.02516593,
   0.02616745,
   0.02595284,
   0.02614117,
   0.02628192};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.9530193);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(1.046981);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_16_amcnlo);
}
