void Njet_Z_jet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_17_amcnlo/Njet_Z_jet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:45:51 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_17_amcnlo = new TCanvas("Njet_Z_jet_Zee_17_amcnlo", "Njet_Z_jet_Zee_17_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_17_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_17_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_17_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_17_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_17_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_17_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-26412.51,10.52419,2.638611e+07);
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
   st->SetMaximum(2.261415e+07);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",15,0,15);
   st_stack_34->SetMinimum(0.01);
   st_stack_34->SetMaximum(2.374486e+07);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetRange(1,10);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetLabelSize(0.035);
   st_stack_34->GetXaxis()->SetTitleSize(0.035);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Events/1.0");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetLabelSize(0.05);
   st_stack_34->GetYaxis()->SetTitleSize(0.057);
   st_stack_34->GetYaxis()->SetTitleOffset(1.2);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetLabelSize(0.035);
   st_stack_34->GetZaxis()->SetTitleSize(0.035);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,346.3592);
   Zee_jet_Njet_stack_1->SetBinContent(2,1149.3);
   Zee_jet_Njet_stack_1->SetBinContent(3,655.2469);
   Zee_jet_Njet_stack_1->SetBinContent(4,234.8321);
   Zee_jet_Njet_stack_1->SetBinContent(5,70.45201);
   Zee_jet_Njet_stack_1->SetBinContent(6,15.98736);
   Zee_jet_Njet_stack_1->SetBinContent(7,4.656899);
   Zee_jet_Njet_stack_1->SetBinContent(8,0.808667);
   Zee_jet_Njet_stack_1->SetBinContent(9,0.199812);
   Zee_jet_Njet_stack_1->SetBinError(1,10.54322);
   Zee_jet_Njet_stack_1->SetBinError(2,16.33717);
   Zee_jet_Njet_stack_1->SetBinError(3,12.46631);
   Zee_jet_Njet_stack_1->SetBinError(4,7.218307);
   Zee_jet_Njet_stack_1->SetBinError(5,4.032394);
   Zee_jet_Njet_stack_1->SetBinError(6,1.791094);
   Zee_jet_Njet_stack_1->SetBinError(7,0.9710952);
   Zee_jet_Njet_stack_1->SetBinError(8,0.4043609);
   Zee_jet_Njet_stack_1->SetBinError(9,0.199812);
   Zee_jet_Njet_stack_1->SetEntries(12007);

   ci = TColor::GetColor("#ff6600");
   Zee_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_1->SetLineColor(ci);
   Zee_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_1,"");
   
   TH1D *Zee_jet_Njet_stack_2 = new TH1D("Zee_jet_Njet_stack_2","",15,0,15);
   Zee_jet_Njet_stack_2->SetBinContent(1,8226.794);
   Zee_jet_Njet_stack_2->SetBinContent(2,7123.669);
   Zee_jet_Njet_stack_2->SetBinContent(3,4603.586);
   Zee_jet_Njet_stack_2->SetBinContent(4,1348.37);
   Zee_jet_Njet_stack_2->SetBinContent(5,322.2617);
   Zee_jet_Njet_stack_2->SetBinContent(6,68.92049);
   Zee_jet_Njet_stack_2->SetBinContent(7,14.52942);
   Zee_jet_Njet_stack_2->SetBinContent(8,3.530593);
   Zee_jet_Njet_stack_2->SetBinError(1,55.55376);
   Zee_jet_Njet_stack_2->SetBinError(2,47.61519);
   Zee_jet_Njet_stack_2->SetBinError(3,37.49107);
   Zee_jet_Njet_stack_2->SetBinError(4,20.11348);
   Zee_jet_Njet_stack_2->SetBinError(5,9.803384);
   Zee_jet_Njet_stack_2->SetBinError(6,4.573191);
   Zee_jet_Njet_stack_2->SetBinError(7,2.082641);
   Zee_jet_Njet_stack_2->SetBinError(8,1.033106);
   Zee_jet_Njet_stack_2->SetEntries(70865);

   ci = TColor::GetColor("#cccc00");
   Zee_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_2->SetLineColor(ci);
   Zee_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_2,"");
   
   TH1D *Zee_jet_Njet_stack_3 = new TH1D("Zee_jet_Njet_stack_3","",15,0,15);
   Zee_jet_Njet_stack_3->SetBinContent(1,806.2776);
   Zee_jet_Njet_stack_3->SetBinContent(2,5244.762);
   Zee_jet_Njet_stack_3->SetBinContent(3,9826.641);
   Zee_jet_Njet_stack_3->SetBinContent(4,5472.506);
   Zee_jet_Njet_stack_3->SetBinContent(5,2175.196);
   Zee_jet_Njet_stack_3->SetBinContent(6,710.5934);
   Zee_jet_Njet_stack_3->SetBinContent(7,200.9885);
   Zee_jet_Njet_stack_3->SetBinContent(8,50.01902);
   Zee_jet_Njet_stack_3->SetBinContent(9,10.81938);
   Zee_jet_Njet_stack_3->SetBinContent(10,0.9558555);
   Zee_jet_Njet_stack_3->SetBinContent(11,1.308873);
   Zee_jet_Njet_stack_3->SetBinError(1,17.97733);
   Zee_jet_Njet_stack_3->SetBinError(2,45.85235);
   Zee_jet_Njet_stack_3->SetBinError(3,62.59035);
   Zee_jet_Njet_stack_3->SetBinError(4,46.16972);
   Zee_jet_Njet_stack_3->SetBinError(5,28.88075);
   Zee_jet_Njet_stack_3->SetBinError(6,16.35387);
   Zee_jet_Njet_stack_3->SetBinError(7,8.651729);
   Zee_jet_Njet_stack_3->SetBinError(8,4.268255);
   Zee_jet_Njet_stack_3->SetBinError(9,1.960495);
   Zee_jet_Njet_stack_3->SetBinError(10,0.4592093);
   Zee_jet_Njet_stack_3->SetBinError(11,0.7149428);
   Zee_jet_Njet_stack_3->SetEntries(71553);

   ci = TColor::GetColor("#0000cc");
   Zee_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_3->SetLineColor(ci);
   Zee_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_3,"");
   
   TH1D *Zee_jet_Njet_stack_4 = new TH1D("Zee_jet_Njet_stack_4","",15,0,15);
   Zee_jet_Njet_stack_4->SetBinContent(1,12.02046);
   Zee_jet_Njet_stack_4->SetBinContent(2,69.2062);
   Zee_jet_Njet_stack_4->SetBinContent(3,99.48133);
   Zee_jet_Njet_stack_4->SetBinContent(4,38.24107);
   Zee_jet_Njet_stack_4->SetBinContent(5,12.39116);
   Zee_jet_Njet_stack_4->SetBinContent(6,3.791762);
   Zee_jet_Njet_stack_4->SetBinContent(7,1.056562);
   Zee_jet_Njet_stack_4->SetBinContent(8,0.2872442);
   Zee_jet_Njet_stack_4->SetBinContent(9,0.07275934);
   Zee_jet_Njet_stack_4->SetBinContent(10,0.01931054);
   Zee_jet_Njet_stack_4->SetBinContent(11,0.00344831);
   Zee_jet_Njet_stack_4->SetBinContent(12,0.001034493);
   Zee_jet_Njet_stack_4->SetBinError(1,0.06438189);
   Zee_jet_Njet_stack_4->SetBinError(2,0.1544812);
   Zee_jet_Njet_stack_4->SetBinError(3,0.185214);
   Zee_jet_Njet_stack_4->SetBinError(4,0.1148334);
   Zee_jet_Njet_stack_4->SetBinError(5,0.06536708);
   Zee_jet_Njet_stack_4->SetBinError(6,0.0361596);
   Zee_jet_Njet_stack_4->SetBinError(7,0.01908757);
   Zee_jet_Njet_stack_4->SetBinError(8,0.009952422);
   Zee_jet_Njet_stack_4->SetBinError(9,0.005008959);
   Zee_jet_Njet_stack_4->SetBinError(10,0.002580479);
   Zee_jet_Njet_stack_4->SetBinError(11,0.001090451);
   Zee_jet_Njet_stack_4->SetBinError(12,0.0005972648);
   Zee_jet_Njet_stack_4->SetEntries(686053);

   ci = TColor::GetColor("#cc0000");
   Zee_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_4->SetLineColor(ci);
   Zee_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_4,"");
   
   TH1D *Zee_jet_Njet_stack_5 = new TH1D("Zee_jet_Njet_stack_5","",15,0,15);
   Zee_jet_Njet_stack_5->SetBinContent(1,1.242839e+07);
   Zee_jet_Njet_stack_5->SetBinContent(2,3349363);
   Zee_jet_Njet_stack_5->SetBinContent(3,1127129);
   Zee_jet_Njet_stack_5->SetBinContent(4,247932.7);
   Zee_jet_Njet_stack_5->SetBinContent(5,47937.6);
   Zee_jet_Njet_stack_5->SetBinContent(6,9318.188);
   Zee_jet_Njet_stack_5->SetBinContent(7,1771.357);
   Zee_jet_Njet_stack_5->SetBinContent(8,315.425);
   Zee_jet_Njet_stack_5->SetBinContent(9,66.24917);
   Zee_jet_Njet_stack_5->SetBinContent(10,12.50802);
   Zee_jet_Njet_stack_5->SetBinContent(11,2.685777);
   Zee_jet_Njet_stack_5->SetBinContent(12,0.895259);
   Zee_jet_Njet_stack_5->SetBinError(1,5735.991);
   Zee_jet_Njet_stack_5->SetBinError(2,1993.964);
   Zee_jet_Njet_stack_5->SetBinError(3,1069.932);
   Zee_jet_Njet_stack_5->SetBinError(4,492.8369);
   Zee_jet_Njet_stack_5->SetBinError(5,214.9326);
   Zee_jet_Njet_stack_5->SetBinError(6,94.97152);
   Zee_jet_Njet_stack_5->SetBinError(7,41.02577);
   Zee_jet_Njet_stack_5->SetBinError(8,17.2815);
   Zee_jet_Njet_stack_5->SetBinError(9,7.701309);
   Zee_jet_Njet_stack_5->SetBinError(10,3.342999);
   Zee_jet_Njet_stack_5->SetBinError(11,1.550634);
   Zee_jet_Njet_stack_5->SetBinError(12,0.895259);
   Zee_jet_Njet_stack_5->SetEntries(1.024172e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_jet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_5->SetLineColor(ci);
   Zee_jet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_jet_Njet__67 = new TH1D("Zee_jet_Njet__67","",15,0,15);
   Zee_jet_Njet__67->SetBinContent(1,8772641);
   Zee_jet_Njet__67->SetBinContent(2,1465869);
   Zee_jet_Njet__67->SetBinContent(3,400251);
   Zee_jet_Njet__67->SetBinContent(4,102146);
   Zee_jet_Njet__67->SetBinContent(5,25635);
   Zee_jet_Njet__67->SetBinContent(6,6418);
   Zee_jet_Njet__67->SetBinContent(7,1571);
   Zee_jet_Njet__67->SetBinContent(8,403);
   Zee_jet_Njet__67->SetBinContent(9,95);
   Zee_jet_Njet__67->SetBinContent(10,18);
   Zee_jet_Njet__67->SetBinContent(11,4);
   Zee_jet_Njet__67->SetBinContent(12,2);
   Zee_jet_Njet__67->SetBinContent(13,2);
   Zee_jet_Njet__67->SetBinError(1,2961.864);
   Zee_jet_Njet__67->SetBinError(2,1210.731);
   Zee_jet_Njet__67->SetBinError(3,632.6539);
   Zee_jet_Njet__67->SetBinError(4,319.6029);
   Zee_jet_Njet__67->SetBinError(5,160.1093);
   Zee_jet_Njet__67->SetBinError(6,80.11242);
   Zee_jet_Njet__67->SetBinError(7,39.63584);
   Zee_jet_Njet__67->SetBinError(8,20.07486);
   Zee_jet_Njet__67->SetBinError(9,9.746794);
   Zee_jet_Njet__67->SetBinError(10,4.242641);
   Zee_jet_Njet__67->SetBinError(11,2);
   Zee_jet_Njet__67->SetBinError(12,1.414214);
   Zee_jet_Njet__67->SetBinError(13,1.414214);
   Zee_jet_Njet__67->SetEntries(1.077506e+07);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__67->SetLineColor(ci);
   Zee_jet_Njet__67->SetLineWidth(2);
   Zee_jet_Njet__67->SetMarkerStyle(20);
   Zee_jet_Njet__67->SetMarkerSize(1.2);
   Zee_jet_Njet__67->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__67->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__67->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1067[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_Zee_jet_Njet_fy1067[15] = {
   1.243778e+07,
   3362949,
   1142314,
   255026.7,
   50517.9,
   10117.48,
   1992.589,
   370.0705,
   77.34112,
   13.48318,
   3.998098,
   0.8962935,
   0,
   0,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1067[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_Zee_jet_Njet_fey1067[15] = {
   5736.298,
   1995.126,
   1072.489,
   495.4559,
   217.1232,
   96.49436,
   41.99103,
   17.83534,
   7.949444,
   3.374393,
   1.707516,
   0.8952592,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1067,Graph_from_Zee_jet_Njet_fy1067,Graph_from_Zee_jet_Njet_fex1067,Graph_from_Zee_jet_Njet_fey1067);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1067 = new TH1F("Graph_Graph_from_Zee_jet_Njet1067","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1067->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet1067->SetMaximum(1.368787e+07);
   Graph_Graph_from_Zee_jet_Njet1067->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1067->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1067);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_jet_Njet","Data (Z(ee) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_jet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_jet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__68 = new TH1D("data_mc_ratio__68","",15,0,15);
   data_mc_ratio__68->SetBinContent(1,0.705322);
   data_mc_ratio__68->SetBinContent(2,0.4358879);
   data_mc_ratio__68->SetBinContent(3,0.3503862);
   data_mc_ratio__68->SetBinContent(4,0.4005306);
   data_mc_ratio__68->SetBinContent(5,0.5074439);
   data_mc_ratio__68->SetBinContent(6,0.6343476);
   data_mc_ratio__68->SetBinContent(7,0.7884217);
   data_mc_ratio__68->SetBinContent(8,1.088982);
   data_mc_ratio__68->SetBinContent(9,1.228325);
   data_mc_ratio__68->SetBinContent(10,1.334996);
   data_mc_ratio__68->SetBinContent(11,1.000476);
   data_mc_ratio__68->SetBinContent(12,2.231412);
   data_mc_ratio__68->SetBinError(1,0.0002381345);
   data_mc_ratio__68->SetBinError(2,0.0003600205);
   data_mc_ratio__68->SetBinError(3,0.0005538355);
   data_mc_ratio__68->SetBinError(4,0.001253213);
   data_mc_ratio__68->SetBinError(5,0.003169358);
   data_mc_ratio__68->SetBinError(6,0.007918218);
   data_mc_ratio__68->SetBinError(7,0.01989163);
   data_mc_ratio__68->SetBinError(8,0.05424604);
   data_mc_ratio__68->SetBinError(9,0.1260235);
   data_mc_ratio__68->SetBinError(10,0.3146616);
   data_mc_ratio__68->SetBinError(11,0.5002379);
   data_mc_ratio__68->SetBinError(12,1.577846);
   data_mc_ratio__68->SetMinimum(0.4);
   data_mc_ratio__68->SetMaximum(1.6);
   data_mc_ratio__68->SetEntries(14.08389);
   data_mc_ratio__68->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__68->SetLineColor(ci);
   data_mc_ratio__68->SetLineWidth(2);
   data_mc_ratio__68->SetMarkerStyle(20);
   data_mc_ratio__68->SetMarkerSize(1.2);
   data_mc_ratio__68->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__68->GetXaxis()->SetRange(1,10);
   data_mc_ratio__68->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__68->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__68->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__68->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__68->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__68->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1068[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_mc_statistical_error_fy1068[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1068[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1068[15] = {
   0.0004611994,
   0.0005932668,
   0.0009388744,
   0.001942761,
   0.004297945,
   0.00953739,
   0.02107361,
   0.04819443,
   0.1027842,
   0.2502667,
   0.4270821,
   0.998846,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1068,Graph_from_mc_statistical_error_fy1068,Graph_from_mc_statistical_error_fex1068,Graph_from_mc_statistical_error_fey1068);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1068 = new TH1F("Graph_Graph_from_mc_statistical_error1068","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1068->SetMinimum(0.001038571);
   Graph_Graph_from_mc_statistical_error1068->SetMaximum(2.198615);
   Graph_Graph_from_mc_statistical_error1068->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1068->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1068);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_17_amcnlo->cd();
   Njet_Z_jet_Zee_17_amcnlo->Modified();
   Njet_Z_jet_Zee_17_amcnlo->cd();
   Njet_Z_jet_Zee_17_amcnlo->SetSelected(Njet_Z_jet_Zee_17_amcnlo);
}
