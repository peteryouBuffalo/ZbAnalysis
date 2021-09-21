void Njet_Z_bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_All_amcnlo/Njet_Z_bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:06 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_All_amcnlo = new TCanvas("Njet_Z_bjet_Zee_All_amcnlo", "Njet_Z_bjet_Zee_All_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_All_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_All_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_All_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_All_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_All_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_All_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-113648.1,10.52419,1.135345e+08);
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
   st->SetMaximum(9.730446e+07);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",15,0,15);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(1.021697e+08);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetRange(1,10);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/1.0");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *Zee_bjet_Njet_all_stack_1 = new TH1D("Zee_bjet_Njet_all_stack_1","",15,0,15);
   Zee_bjet_Njet_all_stack_1->SetBinContent(1,3186.45);
   Zee_bjet_Njet_all_stack_1->SetBinContent(2,4053.614);
   Zee_bjet_Njet_all_stack_1->SetBinContent(3,616.1845);
   Zee_bjet_Njet_all_stack_1->SetBinContent(4,15.51746);
   Zee_bjet_Njet_all_stack_1->SetBinContent(5,0.7983808);
   Zee_bjet_Njet_all_stack_1->SetBinError(1,27.74784);
   Zee_bjet_Njet_all_stack_1->SetBinError(2,30.72577);
   Zee_bjet_Njet_all_stack_1->SetBinError(3,11.99748);
   Zee_bjet_Njet_all_stack_1->SetBinError(4,1.853472);
   Zee_bjet_Njet_all_stack_1->SetBinError(5,0.3992374);
   Zee_bjet_Njet_all_stack_1->SetEntries(38985);

   ci = TColor::GetColor("#ff6600");
   Zee_bjet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_1->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_1,"");
   
   TH1D *Zee_bjet_Njet_all_stack_2 = new TH1D("Zee_bjet_Njet_all_stack_2","",15,0,15);
   Zee_bjet_Njet_all_stack_2->SetBinContent(1,64649.87);
   Zee_bjet_Njet_all_stack_2->SetBinContent(2,3979.846);
   Zee_bjet_Njet_all_stack_2->SetBinContent(3,569.6017);
   Zee_bjet_Njet_all_stack_2->SetBinContent(4,10.96336);
   Zee_bjet_Njet_all_stack_2->SetBinContent(5,0.2980476);
   Zee_bjet_Njet_all_stack_2->SetBinError(1,179.8149);
   Zee_bjet_Njet_all_stack_2->SetBinError(2,42.19944);
   Zee_bjet_Njet_all_stack_2->SetBinError(3,15.33224);
   Zee_bjet_Njet_all_stack_2->SetBinError(4,2.178653);
   Zee_bjet_Njet_all_stack_2->SetBinError(5,0.2980476);
   Zee_bjet_Njet_all_stack_2->SetEntries(163580);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_2->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_2,"");
   
   TH1D *Zee_bjet_Njet_all_stack_3 = new TH1D("Zee_bjet_Njet_all_stack_3","",15,0,15);
   Zee_bjet_Njet_all_stack_3->SetBinContent(1,16705.4);
   Zee_bjet_Njet_all_stack_3->SetBinContent(2,38399.46);
   Zee_bjet_Njet_all_stack_3->SetBinContent(3,21948.65);
   Zee_bjet_Njet_all_stack_3->SetBinContent(4,572.5463);
   Zee_bjet_Njet_all_stack_3->SetBinContent(5,27.76543);
   Zee_bjet_Njet_all_stack_3->SetBinContent(6,0.9352803);
   Zee_bjet_Njet_all_stack_3->SetBinContent(7,0.08255682);
   Zee_bjet_Njet_all_stack_3->SetBinError(1,58.77717);
   Zee_bjet_Njet_all_stack_3->SetBinError(2,89.30792);
   Zee_bjet_Njet_all_stack_3->SetBinError(3,67.78817);
   Zee_bjet_Njet_all_stack_3->SetBinError(4,10.85648);
   Zee_bjet_Njet_all_stack_3->SetBinError(5,2.382742);
   Zee_bjet_Njet_all_stack_3->SetBinError(6,0.4832627);
   Zee_bjet_Njet_all_stack_3->SetBinError(7,0.08255682);
   Zee_bjet_Njet_all_stack_3->SetEntries(587024);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_3->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_3,"");
   
   TH1D *Zee_bjet_Njet_all_stack_4 = new TH1D("Zee_bjet_Njet_all_stack_4","",15,0,15);
   Zee_bjet_Njet_all_stack_4->SetBinContent(1,180.8064);
   Zee_bjet_Njet_all_stack_4->SetBinContent(2,379.8021);
   Zee_bjet_Njet_all_stack_4->SetBinContent(3,194.4757);
   Zee_bjet_Njet_all_stack_4->SetBinContent(4,4.205349);
   Zee_bjet_Njet_all_stack_4->SetBinContent(5,0.2765379);
   Zee_bjet_Njet_all_stack_4->SetBinContent(6,0.001701034);
   Zee_bjet_Njet_all_stack_4->SetBinContent(7,0.0006781013);
   Zee_bjet_Njet_all_stack_4->SetBinError(1,0.3149404);
   Zee_bjet_Njet_all_stack_4->SetBinError(2,0.4569343);
   Zee_bjet_Njet_all_stack_4->SetBinError(3,0.3271715);
   Zee_bjet_Njet_all_stack_4->SetBinError(4,0.04816692);
   Zee_bjet_Njet_all_stack_4->SetBinError(5,0.01244896);
   Zee_bjet_Njet_all_stack_4->SetBinError(6,0.001019093);
   Zee_bjet_Njet_all_stack_4->SetBinError(7,0.0006781013);
   Zee_bjet_Njet_all_stack_4->SetEntries(1504970);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_4->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_4,"");
   
   TH1D *Zee_bjet_Njet_all_stack_5 = new TH1D("Zee_bjet_Njet_all_stack_5","",15,0,15);
   Zee_bjet_Njet_all_stack_5->SetBinContent(1,5.343273e+07);
   Zee_bjet_Njet_all_stack_5->SetBinContent(2,1088660);
   Zee_bjet_Njet_all_stack_5->SetBinContent(3,66127.6);
   Zee_bjet_Njet_all_stack_5->SetBinContent(4,941.9317);
   Zee_bjet_Njet_all_stack_5->SetBinContent(5,34.2048);
   Zee_bjet_Njet_all_stack_5->SetBinContent(6,0.4998424);
   Zee_bjet_Njet_all_stack_5->SetBinError(1,11525.43);
   Zee_bjet_Njet_all_stack_5->SetBinError(2,1073.693);
   Zee_bjet_Njet_all_stack_5->SetBinError(3,248.5837);
   Zee_bjet_Njet_all_stack_5->SetBinError(4,29.20007);
   Zee_bjet_Njet_all_stack_5->SetBinError(5,5.357461);
   Zee_bjet_Njet_all_stack_5->SetBinError(6,0.4998424);
   Zee_bjet_Njet_all_stack_5->SetEntries(3.16349e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_Njet_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_5->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_5->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_Njet_all__231 = new TH1D("Zee_bjet_Njet_all__231","",15,0,15);
   Zee_bjet_Njet_all__231->SetBinContent(1,3.575737e+07);
   Zee_bjet_Njet_all__231->SetBinContent(2,423659);
   Zee_bjet_Njet_all__231->SetBinContent(3,39843);
   Zee_bjet_Njet_all__231->SetBinContent(4,1110);
   Zee_bjet_Njet_all__231->SetBinContent(5,53);
   Zee_bjet_Njet_all__231->SetBinContent(6,1);
   Zee_bjet_Njet_all__231->SetBinError(1,5979.746);
   Zee_bjet_Njet_all__231->SetBinError(2,650.8909);
   Zee_bjet_Njet_all__231->SetBinError(3,199.6071);
   Zee_bjet_Njet_all__231->SetBinError(4,33.31666);
   Zee_bjet_Njet_all__231->SetBinError(5,7.28011);
   Zee_bjet_Njet_all__231->SetBinError(6,1);
   Zee_bjet_Njet_all__231->SetEntries(3.622203e+07);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all__231->SetLineColor(ci);
   Zee_bjet_Njet_all__231->SetLineWidth(2);
   Zee_bjet_Njet_all__231->SetMarkerStyle(20);
   Zee_bjet_Njet_all__231->SetMarkerSize(1.2);
   Zee_bjet_Njet_all__231->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all__231->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_all_fx1231[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_all_fy1231[15] = {
   5.351745e+07,
   1135472,
   89456.51,
   1545.164,
   63.3432,
   1.436824,
   0.08323492,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_all_fex1231[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_all_fey1231[15] = {
   11527.01,
   1078.665,
   258.3955,
   31.28404,
   5.884576,
   0.6952598,
   0.0825596,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_all_fx1231,Graph_from_Zee_bjet_Njet_all_fy1231,Graph_from_Zee_bjet_Njet_all_fex1231,Graph_from_Zee_bjet_Njet_all_fey1231);
   gre->SetName("Graph_from_Zee_bjet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet_all1231 = new TH1F("Graph_Graph_from_Zee_bjet_Njet_all1231","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetMaximum(5.888188e+07);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet_all1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_Njet_all","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",15,0,15);
   data_mc_ratio__232->SetBinContent(1,0.6681441);
   data_mc_ratio__232->SetBinContent(2,0.3731125);
   data_mc_ratio__232->SetBinContent(3,0.4453896);
   data_mc_ratio__232->SetBinContent(4,0.7183703);
   data_mc_ratio__232->SetBinContent(5,0.8367117);
   data_mc_ratio__232->SetBinContent(6,0.6959796);
   data_mc_ratio__232->SetBinError(1,0.0001117345);
   data_mc_ratio__232->SetBinError(2,0.0005732336);
   data_mc_ratio__232->SetBinError(3,0.002231331);
   data_mc_ratio__232->SetBinError(4,0.02156189);
   data_mc_ratio__232->SetBinError(5,0.1149312);
   data_mc_ratio__232->SetBinError(6,0.6959796);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(22.61544);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__232->GetXaxis()->SetRange(1,10);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1232[15] = {
   0.0002153879,
   0.0009499703,
   0.002888504,
   0.02024642,
   0.09289988,
   0.4838867,
   0.9918866,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.007302042);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(2.190264);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_All_amcnlo->cd();
   Njet_Z_bjet_Zee_All_amcnlo->Modified();
   Njet_Z_bjet_Zee_All_amcnlo->cd();
   Njet_Z_bjet_Zee_All_amcnlo->SetSelected(Njet_Z_bjet_Zee_All_amcnlo);
}
