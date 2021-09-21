void dPhi_Zb_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_17_amcnlo/dPhi_Zb_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_17_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-4.5612,3.416482,4566.638);
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
   st->SetMaximum(3913.827);
   
   TH1F *st_stack_322 = new TH1F("st_stack_322","",30,0,3.141593);
   st_stack_322->SetMinimum(0.01);
   st_stack_322->SetMaximum(4109.518);
   st_stack_322->SetDirectory(0);
   st_stack_322->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_322->SetLineColor(ci);
   st_stack_322->GetXaxis()->SetRange(1,31);
   st_stack_322->GetXaxis()->SetLabelFont(42);
   st_stack_322->GetXaxis()->SetLabelSize(0.035);
   st_stack_322->GetXaxis()->SetTitleSize(0.035);
   st_stack_322->GetXaxis()->SetTitleFont(42);
   st_stack_322->GetYaxis()->SetTitle("Events/0.105");
   st_stack_322->GetYaxis()->SetLabelFont(42);
   st_stack_322->GetYaxis()->SetLabelSize(0.05);
   st_stack_322->GetYaxis()->SetTitleSize(0.057);
   st_stack_322->GetYaxis()->SetTitleOffset(1.2);
   st_stack_322->GetYaxis()->SetTitleFont(42);
   st_stack_322->GetZaxis()->SetLabelFont(42);
   st_stack_322->GetZaxis()->SetLabelSize(0.035);
   st_stack_322->GetZaxis()->SetTitleSize(0.035);
   st_stack_322->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_322);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.8133765);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(2,1.290496);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.8767435);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.2045215);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.409043);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,1.271658);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.2045215);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.608855);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.8039575);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.808667);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.672222);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.6041455);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,1.412812);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,1.013188);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,2.21206);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,1.426941);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,2.616394);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,1.47618);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,3.370286);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,3.102932);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,2.026377);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,3.38024);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,7.254455);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,3.819975);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,5.11989);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,5.364231);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,5.982505);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,6.600779);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,6.859541);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,9.007942);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.4067087);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.5036908);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.4100514);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.2045215);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.2892371);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.4960722);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.2045215);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.3515436);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.4019994);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.4043609);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.3554056);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.3488248);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.5340285);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.453141);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.6669976);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.5393506);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.7256994);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.5365787);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,1.175669);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.7866007);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.6408382);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.816767);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,1.209152);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.8764091);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,1.012722);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.029876);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,1.08997);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,1.14692);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.176479);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.341019);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(407);

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
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,1.055793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,1.759655);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.055793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,2.463517);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,1.055793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,1.055793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,2.463517);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.3519309);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,1.660715);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,1.055793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(11,2.463517);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,0.7038619);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,2.716508);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.111586);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,2.716508);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,3.42037);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.111586);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,4.927033);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,5.081085);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,6.686688);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,7.038619);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,8.798273);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,8.446342);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,11.26179);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,14.07724);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,14.33023);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,14.63833);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,19.05938);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,12.57057);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,16.59587);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.6095623);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.7869415);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.6095623);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.9311217);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.6095623);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.6095623);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.9311217);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.3519309);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.7479479);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.6095623);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.9311217);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.4977055);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.9648794);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.8620512);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.9648794);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.085681);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.8620512);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,1.316805);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.318381);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.534031);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.573883);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.759655);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.724102);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.990822);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,2.225807);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.240138);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,2.241992);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,2.575363);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,2.097366);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,2.401147);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(499);

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
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,31.88517);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,42.63124);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,37.21924);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,34.24848);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,37.53098);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,36.00894);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,36.37797);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,35.32354);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,45.24898);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,50.0948);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,41.65474);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,54.17729);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,52.28159);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,62.05116);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,76.10037);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,81.00348);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,87.49055);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,106.1105);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,108.1414);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,127.582);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,158.023);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,137.4088);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,165.0763);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,166.3072);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,188.1684);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,155.2448);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,180.4917);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,178.6533);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,190.5523);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,182.9535);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,3.584656);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,4.151277);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,3.877936);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,3.703489);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,3.881068);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,3.830314);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,3.81624);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,3.76945);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,4.272632);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,4.502176);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,4.109043);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,4.670671);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,4.580997);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,5.002001);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,5.557715);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,5.724551);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,5.954672);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,6.560968);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,6.614386);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,7.188533);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,8.008711);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,7.455036);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,8.185816);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,8.216609);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,8.727641);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,7.909434);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,8.558913);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,8.502556);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,8.784975);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,8.617722);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(7536);

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
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.2617267);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.2579336);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.2506921);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.2462093);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.2620715);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.2634509);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.2789683);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.2872442);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.2786234);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.3268998);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.361038);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.4103489);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.4355215);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.5200051);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.5624193);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(16,0.7093173);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(17,0.8048355);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(18,0.9675957);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(19,1.210357);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(20,1.532774);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(21,1.938985);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(22,2.496232);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(23,3.201066);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(24,4.003488);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(25,4.952463);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(26,6.019025);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(27,6.781791);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(28,7.140415);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(29,6.816619);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(30,6.060405);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.009500078);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.009430986);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.009297656);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.009214152);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.009506334);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.009531318);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.009808002);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.009952422);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.009801938);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.01061721);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.01115783);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.01189542);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.01225485);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.01339081);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.01392622);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.01563952);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.0166593);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.01826628);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.0204296);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.02299017);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.02585773);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.02933902);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.03322389);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.03715544);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.04132508);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.04555816);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.04835878);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.04962093);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.0484828);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.0457145);
   Zmm_2bjet_dPhi_Zb_stack_4->SetEntries(172950);

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
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(1,166.4283);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(2,184.5254);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(3,159.3175);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(4,159.8162);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(5,139.1614);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(6,170.4187);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(7,177.1074);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(8,166.812);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(9,168.4875);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(10,198.8239);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(11,187.8251);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(12,225.7841);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(13,247.3085);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(14,302.8914);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(15,297.9417);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(16,330.5038);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(17,397.597);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(18,460.2907);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(19,530.3892);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(20,624.0589);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(21,757.5033);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(22,843.3331);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(23,1074.284);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(24,1260.804);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(25,1411.95);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(26,1640.431);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(27,1806.117);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(28,1909.839);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(29,1902.817);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(30,1937.987);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(1,12.41991);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(2,13.26494);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(3,12.16276);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(4,12.83825);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(5,11.87173);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(6,12.9944);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(7,13.82813);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(8,12.86869);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(9,12.71485);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(10,13.73816);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(11,12.96134);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(12,14.59324);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(13,15.41433);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(14,16.95375);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(15,17.3024);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(16,17.51261);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(17,19.14975);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(18,20.56361);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(19,22.40222);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(20,23.97409);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(21,26.55071);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(22,27.86296);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(23,31.17101);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(24,33.90509);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(25,35.84321);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(26,38.79021);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(27,40.30918);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(28,41.44366);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(29,41.29525);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(30,41.66806);
   Zmm_2bjet_dPhi_Zb_stack_5->SetEntries(22004);

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
   
   TH1D *Zmm_2bjet_dPhi_Zb__643 = new TH1D("Zmm_2bjet_dPhi_Zb__643","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(1,97);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(2,94);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(3,94);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(4,80);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(5,98);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(6,94);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(7,89);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(8,106);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(9,88);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(10,116);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(11,119);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(12,114);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(13,160);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(14,154);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(15,146);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(16,195);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(17,217);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(18,250);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(19,268);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(20,318);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(21,331);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(22,380);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(23,431);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(24,497);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(25,554);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(26,613);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(27,710);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(28,755);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(29,743);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(30,761);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(1,9.848858);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(2,9.69536);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(3,9.69536);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(4,8.944272);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(5,9.899495);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(6,9.69536);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(7,9.433981);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(8,10.29563);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(9,9.380832);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(10,10.77033);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(11,10.90871);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(12,10.67708);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(13,12.64911);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(14,12.40967);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(15,12.08305);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(16,13.96424);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(17,14.73092);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(18,15.81139);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(19,16.37071);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(20,17.83255);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(21,18.19341);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(22,19.49359);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(23,20.76054);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(24,22.2935);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(25,23.5372);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(26,24.75884);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(27,26.64583);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(28,27.47726);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(29,27.25803);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(30,27.58623);
   Zmm_2bjet_dPhi_Zb__643->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__643->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__643->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__643->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__643->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fx1643[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fy1643[30] = {
   200.4444,
   230.4647,
   198.7199,
   196.9789,
   178.4193,
   209.0185,
   216.4323,
   203.3836,
   216.4798,
   251.1101,
   232.9767,
   281.6797,
   304.1549,
   368.5873,
   379.5331,
   417.0639,
   490.6204,
   573.772,
   648.1923,
   762.9633,
   926.5303,
   995.4167,
   1258.262,
   1446.197,
   1624.268,
   1821.389,
   2014.011,
   2121.293,
   2119.616,
   2152.605};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fex1643[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fey1643[30] = {
   12.94763,
   13.93071,
   12.78714,
   13.39572,
   12.50823,
   13.56995,
   14.37671,
   13.41863,
   13.44038,
   14.47556,
   13.63356,
   15.33451,
   16.11842,
   17.70306,
   18.21091,
   18.46434,
   20.08584,
   21.63171,
   23.42499,
   25.08794,
   27.78432,
   28.90824,
   32.29667,
   34.95426,
   36.97146,
   39.6651,
   41.28319,
   42.40072,
   42.28781,
   42.6387};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb_fx1643,Graph_from_Zmm_2bjet_dPhi_Zb_fy1643,Graph_from_Zmm_2bjet_dPhi_Zb_fex1643,Graph_from_Zmm_2bjet_dPhi_Zb_fey1643);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->SetMinimum(149.32);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->SetMaximum(2398.177);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb1643);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__644 = new TH1D("data_mc_ratio__644","",30,0,3.141593);
   data_mc_ratio__644->SetBinContent(1,0.4839247);
   data_mc_ratio__644->SetBinContent(2,0.4078716);
   data_mc_ratio__644->SetBinContent(3,0.4730275);
   data_mc_ratio__644->SetBinContent(4,0.4061349);
   data_mc_ratio__644->SetBinContent(5,0.5492679);
   data_mc_ratio__644->SetBinContent(6,0.4497209);
   data_mc_ratio__644->SetBinContent(7,0.411214);
   data_mc_ratio__644->SetBinContent(8,0.5211826);
   data_mc_ratio__644->SetBinContent(9,0.4065044);
   data_mc_ratio__644->SetBinContent(10,0.4619488);
   data_mc_ratio__644->SetBinContent(11,0.5107808);
   data_mc_ratio__644->SetBinContent(12,0.4047149);
   data_mc_ratio__644->SetBinContent(13,0.5260477);
   data_mc_ratio__644->SetBinContent(14,0.4178114);
   data_mc_ratio__644->SetBinContent(15,0.3846832);
   data_mc_ratio__644->SetBinContent(16,0.4675543);
   data_mc_ratio__644->SetBinContent(17,0.4422972);
   data_mc_ratio__644->SetBinContent(18,0.4357131);
   data_mc_ratio__644->SetBinContent(19,0.4134575);
   data_mc_ratio__644->SetBinContent(20,0.4167959);
   data_mc_ratio__644->SetBinContent(21,0.3572468);
   data_mc_ratio__644->SetBinContent(22,0.3817497);
   data_mc_ratio__644->SetBinContent(23,0.342536);
   data_mc_ratio__644->SetBinContent(24,0.34366);
   data_mc_ratio__644->SetBinContent(25,0.3410768);
   data_mc_ratio__644->SetBinContent(26,0.3365563);
   data_mc_ratio__644->SetBinContent(27,0.3525303);
   data_mc_ratio__644->SetBinContent(28,0.355915);
   data_mc_ratio__644->SetBinContent(29,0.3505352);
   data_mc_ratio__644->SetBinContent(30,0.3535252);
   data_mc_ratio__644->SetBinError(1,0.04913511);
   data_mc_ratio__644->SetBinError(2,0.04206874);
   data_mc_ratio__644->SetBinError(3,0.04878906);
   data_mc_ratio__644->SetBinError(4,0.04540726);
   data_mc_ratio__644->SetBinError(5,0.05548444);
   data_mc_ratio__644->SetBinError(6,0.04638517);
   data_mc_ratio__644->SetBinError(7,0.04358859);
   data_mc_ratio__644->SetBinError(8,0.05062173);
   data_mc_ratio__644->SetBinError(9,0.04333352);
   data_mc_ratio__644->SetBinError(10,0.04289087);
   data_mc_ratio__644->SetBinError(11,0.0468232);
   data_mc_ratio__644->SetBinError(12,0.03790503);
   data_mc_ratio__644->SetBinError(13,0.04158772);
   data_mc_ratio__644->SetBinError(14,0.0336682);
   data_mc_ratio__644->SetBinError(15,0.03183661);
   data_mc_ratio__644->SetBinError(16,0.03348226);
   data_mc_ratio__644->SetBinError(17,0.03002509);
   data_mc_ratio__644->SetBinError(18,0.02755692);
   data_mc_ratio__644->SetBinError(19,0.02525594);
   data_mc_ratio__644->SetBinError(20,0.02337276);
   data_mc_ratio__644->SetBinError(21,0.01963606);
   data_mc_ratio__644->SetBinError(22,0.01958334);
   data_mc_ratio__644->SetBinError(23,0.01649938);
   data_mc_ratio__644->SetBinError(24,0.01541526);
   data_mc_ratio__644->SetBinError(25,0.01449096);
   data_mc_ratio__644->SetBinError(26,0.01359338);
   data_mc_ratio__644->SetBinError(27,0.01323023);
   data_mc_ratio__644->SetBinError(28,0.01295307);
   data_mc_ratio__644->SetBinError(29,0.01285989);
   data_mc_ratio__644->SetBinError(30,0.01281528);
   data_mc_ratio__644->SetMinimum(0.4);
   data_mc_ratio__644->SetMaximum(1.6);
   data_mc_ratio__644->SetEntries(3142.198);
   data_mc_ratio__644->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__644->SetLineColor(ci);
   data_mc_ratio__644->SetLineWidth(2);
   data_mc_ratio__644->SetMarkerStyle(20);
   data_mc_ratio__644->SetMarkerSize(1.2);
   data_mc_ratio__644->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__644->GetXaxis()->SetRange(1,31);
   data_mc_ratio__644->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__644->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__644->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__644->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__644->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__644->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__644->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__644->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__644->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__644->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__644->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__644->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__644->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__644->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1644[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1644[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1644[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1644[30] = {
   0.06459461,
   0.06044618,
   0.06434753,
   0.06800587,
   0.07010582,
   0.06492222,
   0.06642587,
   0.06597693,
   0.06208607,
   0.05764629,
   0.05851899,
   0.05443953,
   0.05299411,
   0.04802947,
   0.0479824,
   0.04427221,
   0.04093968,
   0.03770087,
   0.03613896,
   0.03288224,
   0.02998749,
   0.02904135,
   0.02566769,
   0.02416978,
   0.02276192,
   0.02177739,
   0.020498,
   0.01998815,
   0.01995069,
   0.01980795};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1644,Graph_from_mc_statistical_error_fy1644,Graph_from_mc_statistical_error_fex1644,Graph_from_mc_statistical_error_fey1644);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1644 = new TH1F("Graph_Graph_from_mc_statistical_error1644","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1644->SetMinimum(0.915873);
   Graph_Graph_from_mc_statistical_error1644->SetMaximum(1.084127);
   Graph_Graph_from_mc_statistical_error1644->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1644->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1644->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1644);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_17_amcnlo);
}
