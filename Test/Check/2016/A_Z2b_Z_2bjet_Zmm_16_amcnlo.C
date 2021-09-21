void A_Z2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_16_amcnlo/A_Z2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:39 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_16_amcnlo", "A_Z2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7.36871,1.052419,7371.341);
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
   st->SetMaximum(6317.59);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",25,0,1);
   st_stack_317->SetMinimum(0.01);
   st_stack_317->SetMaximum(6633.47);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetRange(1,25);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetLabelSize(0.035);
   st_stack_317->GetXaxis()->SetTitleSize(0.035);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.04");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetLabelSize(0.05);
   st_stack_317->GetYaxis()->SetTitleSize(0.057);
   st_stack_317->GetYaxis()->SetTitleOffset(1.2);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetLabelSize(0.035);
   st_stack_317->GetZaxis()->SetTitleSize(0.035);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,5.734141);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,9.956528);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,6.067127);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,5.976458);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,5.461967);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,3.404311);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,3.398469);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,3.539612);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,3.010264);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,1.435193);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,2.162786);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,1.180464);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,1.377488);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,1.041705);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,0.9839998);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,1.180464);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.1964644);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,0.3940473);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,0.279986);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(22,0.1964644);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,1.049224);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,1.393803);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,1.083661);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,1.068538);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,1.027825);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,0.8134355);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,0.8001627);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,0.8192916);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,0.7642256);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,0.5233873);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.6521051);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.481923);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.520642);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.4433031);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.4400585);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.481923);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.1964644);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.2786335);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.213481);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(22,0.1964644);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(305);

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
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,30.17902);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,24.93806);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,20.81479);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,16.34408);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,14.25774);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,7.575943);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,4.768762);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,4.768762);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,3.874619);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,2.931935);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,2.384381);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,1.788286);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,1.19219);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,0.5960952);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,1.913039);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(16,0.4228008);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,0.8941428);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(18,0.8941428);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(22,0.2980476);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,3.025396);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,2.819107);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,2.51183);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,2.230875);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,2.086858);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,1.520111);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,1.19219);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,1.19219);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,1.074626);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,0.9896199);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,0.8430059);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,0.7300645);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,0.5960952);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,0.4215029);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.7892543);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(16,0.4228008);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.5162336);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(18,0.5162336);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(22,0.2980476);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(463);

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
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,296.2001);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,274.1944);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,260.5626);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,206.8142);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,187.1455);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,156.9607);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,126.3865);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,114.5073);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,94.05959);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,76.14348);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,57.83788);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,48.29561);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,43.62184);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,36.02696);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,29.01631);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,23.1741);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,19.47403);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,15.96871);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,16.35819);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,12.0739);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,9.737017);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,5.257989);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,4.673768);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,3.505326);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,0.7789614);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,7.594874);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,7.307306);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,7.123345);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,6.346265);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,6.036951);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,5.528706);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,4.961104);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,4.722202);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,4.279859);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,3.850741);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,3.356094);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,3.066774);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,2.914607);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,2.648755);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,2.377109);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,2.124366);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,1.947403);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,1.763449);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,1.784825);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,1.533387);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,1.377022);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,1.011901);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,0.954029);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,0.8262133);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,0.3894807);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(10880);

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
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(1,11.28502);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(2,9.144048);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(3,6.812394);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(4,5.198841);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(5,3.910433);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(6,2.947169);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(7,2.329336);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(8,1.836692);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(9,1.432144);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(10,1.138297);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(11,0.9174766);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(12,0.7366474);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(13,0.5824788);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(14,0.486848);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(15,0.41498);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(16,0.3547035);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(17,0.2880517);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(18,0.2486402);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(19,0.1970575);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(20,0.1477931);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(21,0.1257691);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(22,0.09215337);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(23,0.05969684);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(24,0.02897905);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(25,0.01159162);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(1,0.08087387);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(2,0.07279915);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(3,0.06283577);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(4,0.05489216);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(5,0.04760685);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(6,0.04132944);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(7,0.03674287);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(8,0.03262685);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(9,0.02881048);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(10,0.02568531);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(11,0.02305975);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(12,0.02066269);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(13,0.01837372);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(14,0.01679785);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(15,0.01550853);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(16,0.01433804);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(17,0.01292089);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(18,0.01200446);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(19,0.01068694);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(20,0.009255165);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(21,0.00853776);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(22,0.007308238);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(23,0.005882104);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(24,0.004098256);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(25,0.002591965);
   Zmm_2bjet_A_Z2b_stack_4->SetEntries(87524);

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
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(1,3131.276);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(2,2929.125);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(3,2555.802);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(4,2032.747);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(5,1617.755);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(6,1321.988);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(7,1086.46);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(8,873.3829);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(9,736.2252);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(10,613.7486);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(11,493.0293);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(12,407.1238);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(13,347.4876);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(14,307.0473);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(15,235.3944);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(16,213.8087);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(17,174.8054);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(18,150.0608);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(19,117.2671);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(20,97.5773);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(21,74.28061);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(22,61.51663);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(23,39.79149);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(24,22.26099);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(25,6.497951);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(1,41.12313);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(2,39.89812);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(3,36.86818);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(4,32.57477);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(5,29.2971);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(6,26.55756);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(7,23.83043);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(8,21.44152);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(9,19.59359);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(10,18.09679);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(11,15.9787);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(12,14.36585);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(13,13.61937);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(14,12.45475);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(15,11.13883);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(16,10.40724);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(17,9.620512);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(18,8.731607);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(19,7.696244);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(20,7.071599);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(21,6.143754);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(22,5.582117);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(23,4.52842);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(24,3.366407);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(25,1.802207);
   Zmm_2bjet_A_Z2b_stack_5->SetEntries(38399);

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
   
   TH1D *Zmm_2bjet_A_Z2b__633 = new TH1D("Zmm_2bjet_A_Z2b__633","",25,0,1);
   Zmm_2bjet_A_Z2b__633->SetBinContent(1,1208);
   Zmm_2bjet_A_Z2b__633->SetBinContent(2,1154);
   Zmm_2bjet_A_Z2b__633->SetBinContent(3,971);
   Zmm_2bjet_A_Z2b__633->SetBinContent(4,780);
   Zmm_2bjet_A_Z2b__633->SetBinContent(5,615);
   Zmm_2bjet_A_Z2b__633->SetBinContent(6,487);
   Zmm_2bjet_A_Z2b__633->SetBinContent(7,433);
   Zmm_2bjet_A_Z2b__633->SetBinContent(8,351);
   Zmm_2bjet_A_Z2b__633->SetBinContent(9,278);
   Zmm_2bjet_A_Z2b__633->SetBinContent(10,241);
   Zmm_2bjet_A_Z2b__633->SetBinContent(11,182);
   Zmm_2bjet_A_Z2b__633->SetBinContent(12,164);
   Zmm_2bjet_A_Z2b__633->SetBinContent(13,136);
   Zmm_2bjet_A_Z2b__633->SetBinContent(14,91);
   Zmm_2bjet_A_Z2b__633->SetBinContent(15,92);
   Zmm_2bjet_A_Z2b__633->SetBinContent(16,85);
   Zmm_2bjet_A_Z2b__633->SetBinContent(17,69);
   Zmm_2bjet_A_Z2b__633->SetBinContent(18,45);
   Zmm_2bjet_A_Z2b__633->SetBinContent(19,50);
   Zmm_2bjet_A_Z2b__633->SetBinContent(20,36);
   Zmm_2bjet_A_Z2b__633->SetBinContent(21,26);
   Zmm_2bjet_A_Z2b__633->SetBinContent(22,18);
   Zmm_2bjet_A_Z2b__633->SetBinContent(23,15);
   Zmm_2bjet_A_Z2b__633->SetBinContent(24,8);
   Zmm_2bjet_A_Z2b__633->SetBinContent(25,1);
   Zmm_2bjet_A_Z2b__633->SetBinError(1,34.75629);
   Zmm_2bjet_A_Z2b__633->SetBinError(2,33.97058);
   Zmm_2bjet_A_Z2b__633->SetBinError(3,31.16087);
   Zmm_2bjet_A_Z2b__633->SetBinError(4,27.92848);
   Zmm_2bjet_A_Z2b__633->SetBinError(5,24.79919);
   Zmm_2bjet_A_Z2b__633->SetBinError(6,22.06808);
   Zmm_2bjet_A_Z2b__633->SetBinError(7,20.80865);
   Zmm_2bjet_A_Z2b__633->SetBinError(8,18.73499);
   Zmm_2bjet_A_Z2b__633->SetBinError(9,16.67333);
   Zmm_2bjet_A_Z2b__633->SetBinError(10,15.52417);
   Zmm_2bjet_A_Z2b__633->SetBinError(11,13.49074);
   Zmm_2bjet_A_Z2b__633->SetBinError(12,12.80625);
   Zmm_2bjet_A_Z2b__633->SetBinError(13,11.6619);
   Zmm_2bjet_A_Z2b__633->SetBinError(14,9.539392);
   Zmm_2bjet_A_Z2b__633->SetBinError(15,9.591663);
   Zmm_2bjet_A_Z2b__633->SetBinError(16,9.219544);
   Zmm_2bjet_A_Z2b__633->SetBinError(17,8.306624);
   Zmm_2bjet_A_Z2b__633->SetBinError(18,6.708204);
   Zmm_2bjet_A_Z2b__633->SetBinError(19,7.071068);
   Zmm_2bjet_A_Z2b__633->SetBinError(20,6);
   Zmm_2bjet_A_Z2b__633->SetBinError(21,5.09902);
   Zmm_2bjet_A_Z2b__633->SetBinError(22,4.242641);
   Zmm_2bjet_A_Z2b__633->SetBinError(23,3.872983);
   Zmm_2bjet_A_Z2b__633->SetBinError(24,2.828427);
   Zmm_2bjet_A_Z2b__633->SetBinError(25,1);
   Zmm_2bjet_A_Z2b__633->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__633->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__633->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__633->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__633->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fx1633[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fy1633[25] = {
   3474.675,
   3247.358,
   2850.059,
   2267.081,
   1828.53,
   1492.876,
   1223.343,
   998.0353,
   838.6019,
   695.3975,
   556.3318,
   459.1248,
   394.2616,
   345.1989,
   267.7227,
   238.9407,
   195.6581,
   167.1722,
   134.2164,
   110.079,
   84.1434,
   67.36128,
   44.52495,
   25.7953,
   7.288504};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fex1633[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fey1633[25] = {
   41.94109,
   40.68356,
   37.64959,
   33.27931,
   30.00297,
   27.18169,
   24.3837,
   22.00299,
   20.0989,
   18.53581,
   16.36211,
   14.71558,
   13.95023,
   12.74799,
   11.42545,
   10.64118,
   9.83117,
   8.922856,
   7.905411,
   7.239092,
   6.296188,
   5.684317,
   4.627829,
   3.466315,
   1.843815};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_A_Z2b_fx1633,Graph_from_Zmm_2bjet_A_Z2b_fy1633,Graph_from_Zmm_2bjet_A_Z2b_fex1633,Graph_from_Zmm_2bjet_A_Z2b_fey1633);
   gre->SetName("Graph_from_Zmm_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_A_Z2b1633 = new TH1F("Graph_Graph_from_Zmm_2bjet_A_Z2b1633","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->SetMinimum(4.90022);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->SetMaximum(3867.733);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1633->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_A_Z2b1633);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__634 = new TH1D("data_mc_ratio__634","",25,0,1);
   data_mc_ratio__634->SetBinContent(1,0.3476585);
   data_mc_ratio__634->SetBinContent(2,0.3553658);
   data_mc_ratio__634->SetBinContent(3,0.3406947);
   data_mc_ratio__634->SetBinContent(4,0.3440548);
   data_mc_ratio__634->SetBinContent(5,0.3363357);
   data_mc_ratio__634->SetBinContent(6,0.326216);
   data_mc_ratio__634->SetBinContent(7,0.3539482);
   data_mc_ratio__634->SetBinContent(8,0.351691);
   data_mc_ratio__634->SetBinContent(9,0.3315042);
   data_mc_ratio__634->SetBinContent(10,0.3465644);
   data_mc_ratio__634->SetBinContent(11,0.3271429);
   data_mc_ratio__634->SetBinContent(12,0.3572014);
   data_mc_ratio__634->SetBinContent(13,0.3449487);
   data_mc_ratio__634->SetBinContent(14,0.2636161);
   data_mc_ratio__634->SetBinContent(15,0.3436391);
   data_mc_ratio__634->SetBinContent(16,0.3557367);
   data_mc_ratio__634->SetBinContent(17,0.352656);
   data_mc_ratio__634->SetBinContent(18,0.2691834);
   data_mc_ratio__634->SetBinContent(19,0.3725328);
   data_mc_ratio__634->SetBinContent(20,0.3270379);
   data_mc_ratio__634->SetBinContent(21,0.3089963);
   data_mc_ratio__634->SetBinContent(22,0.2672158);
   data_mc_ratio__634->SetBinContent(23,0.3368897);
   data_mc_ratio__634->SetBinContent(24,0.310134);
   data_mc_ratio__634->SetBinContent(25,0.1372024);
   data_mc_ratio__634->SetBinError(1,0.01000275);
   data_mc_ratio__634->SetBinError(2,0.01046099);
   data_mc_ratio__634->SetBinError(3,0.01093341);
   data_mc_ratio__634->SetBinError(4,0.01231914);
   data_mc_ratio__634->SetBinError(5,0.01356236);
   data_mc_ratio__634->SetBinError(6,0.01478226);
   data_mc_ratio__634->SetBinError(7,0.01700967);
   data_mc_ratio__634->SetBinError(8,0.01877188);
   data_mc_ratio__634->SetBinError(9,0.0198823);
   data_mc_ratio__634->SetBinError(10,0.02232417);
   data_mc_ratio__634->SetBinError(11,0.02424944);
   data_mc_ratio__634->SetBinError(12,0.02789274);
   data_mc_ratio__634->SetBinError(13,0.0295791);
   data_mc_ratio__634->SetBinError(14,0.02763448);
   data_mc_ratio__634->SetBinError(15,0.03582686);
   data_mc_ratio__634->SetBinError(16,0.03858507);
   data_mc_ratio__634->SetBinError(17,0.04245479);
   data_mc_ratio__634->SetBinError(18,0.0401275);
   data_mc_ratio__634->SetBinError(19,0.0526841);
   data_mc_ratio__634->SetBinError(20,0.05450632);
   data_mc_ratio__634->SetBinError(21,0.06059916);
   data_mc_ratio__634->SetBinError(22,0.06298337);
   data_mc_ratio__634->SetBinError(23,0.08698456);
   data_mc_ratio__634->SetBinError(24,0.1096489);
   data_mc_ratio__634->SetBinError(25,0.1372024);
   data_mc_ratio__634->SetMinimum(0.4);
   data_mc_ratio__634->SetMaximum(1.6);
   data_mc_ratio__634->SetEntries(920.4585);
   data_mc_ratio__634->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__634->SetLineColor(ci);
   data_mc_ratio__634->SetLineWidth(2);
   data_mc_ratio__634->SetMarkerStyle(20);
   data_mc_ratio__634->SetMarkerSize(1.2);
   data_mc_ratio__634->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__634->GetXaxis()->SetRange(1,25);
   data_mc_ratio__634->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__634->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__634->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__634->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__634->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__634->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__634->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__634->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__634->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__634->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__634->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__634->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__634->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__634->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1634[25] = {
   0.01207051,
   0.0125282,
   0.01321011,
   0.01467937,
   0.01640824,
   0.01820761,
   0.01993202,
   0.0220463,
   0.02396715,
   0.02665498,
   0.0294107,
   0.03205138,
   0.03538318,
   0.03692941,
   0.04267643,
   0.04453481,
   0.05024668,
   0.05337522,
   0.0589005,
   0.0657627,
   0.07482688,
   0.08438552,
   0.1039379,
   0.1343778,
   0.2529758};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1634,Graph_from_mc_statistical_error_fy1634,Graph_from_mc_statistical_error_fex1634,Graph_from_mc_statistical_error_fey1634);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1634 = new TH1F("Graph_Graph_from_mc_statistical_error1634","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1634->SetMinimum(0.6964291);
   Graph_Graph_from_mc_statistical_error1634->SetMaximum(1.303571);
   Graph_Graph_from_mc_statistical_error1634->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1634->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1634->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1634);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_16_amcnlo);
}
