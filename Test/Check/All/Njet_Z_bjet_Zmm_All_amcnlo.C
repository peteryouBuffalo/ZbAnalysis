void Njet_Z_bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_All_amcnlo/Njet_Z_bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:14 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_All_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_All_amcnlo", "Njet_Z_bjet_Zmm_All_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_All_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_All_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-157797.8,10.52419,1.5764e+08);
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
   st->SetMaximum(1.35105e+08);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",15,0,15);
   st_stack_160->SetMinimum(0.01);
   st_stack_160->SetMaximum(1.418602e+08);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetRange(1,10);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetLabelSize(0.035);
   st_stack_160->GetXaxis()->SetTitleSize(0.035);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/1.0");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetLabelSize(0.05);
   st_stack_160->GetYaxis()->SetTitleSize(0.057);
   st_stack_160->GetYaxis()->SetTitleOffset(1.2);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetLabelSize(0.035);
   st_stack_160->GetZaxis()->SetTitleSize(0.035);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *Zmm_bjet_Njet_all_stack_1 = new TH1D("Zmm_bjet_Njet_all_stack_1","",15,0,15);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(1,4195.899);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(2,5292.783);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(3,807.4906);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(4,19.88088);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(5,0.793112);
   Zmm_bjet_Njet_all_stack_1->SetBinError(1,31.78591);
   Zmm_bjet_Njet_all_stack_1->SetBinError(2,35.23302);
   Zmm_bjet_Njet_all_stack_1->SetBinError(3,13.71535);
   Zmm_bjet_Njet_all_stack_1->SetBinError(4,2.143328);
   Zmm_bjet_Njet_all_stack_1->SetBinError(5,0.3965681);
   Zmm_bjet_Njet_all_stack_1->SetEntries(52113);

   ci = TColor::GetColor("#ff6600");
   Zmm_bjet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_1->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_1,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_2 = new TH1D("Zmm_bjet_Njet_all_stack_2","",15,0,15);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(1,85811.2);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(2,5291.599);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(3,720.4788);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(4,13.20183);
   Zmm_bjet_Njet_all_stack_2->SetBinError(1,207.3467);
   Zmm_bjet_Njet_all_stack_2->SetBinError(2,48.85042);
   Zmm_bjet_Njet_all_stack_2->SetBinError(3,17.36158);
   Zmm_bjet_Njet_all_stack_2->SetBinError(4,2.388718);
   Zmm_bjet_Njet_all_stack_2->SetEntries(216316);

   ci = TColor::GetColor("#cccc00");
   Zmm_bjet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_2->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_2,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_3 = new TH1D("Zmm_bjet_Njet_all_stack_3","",15,0,15);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(1,21138.98);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(2,48333.89);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(3,27495.23);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(4,701.7706);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(5,32.15055);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(6,0.4953409);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(7,0.08255682);
   Zmm_bjet_Njet_all_stack_3->SetBinError(1,65.68963);
   Zmm_bjet_Njet_all_stack_3->SetBinError(2,99.93258);
   Zmm_bjet_Njet_all_stack_3->SetBinError(3,75.89789);
   Zmm_bjet_Njet_all_stack_3->SetBinError(4,12.07391);
   Zmm_bjet_Njet_all_stack_3->SetBinError(5,2.423887);
   Zmm_bjet_Njet_all_stack_3->SetBinError(6,0.2022221);
   Zmm_bjet_Njet_all_stack_3->SetBinError(7,0.08255682);
   Zmm_bjet_Njet_all_stack_3->SetEntries(738721);

   ci = TColor::GetColor("#0000cc");
   Zmm_bjet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_3->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_3,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_4 = new TH1D("Zmm_bjet_Njet_all_stack_4","",15,0,15);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(1,236.9794);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(2,493.8042);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(3,253.3793);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(4,5.236246);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(5,0.308084);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(6,0.005016141);
   Zmm_bjet_Njet_all_stack_4->SetBinError(1,0.3611266);
   Zmm_bjet_Njet_all_stack_4->SetBinError(2,0.5217641);
   Zmm_bjet_Njet_all_stack_4->SetBinError(3,0.3740585);
   Zmm_bjet_Njet_all_stack_4->SetBinError(4,0.05373721);
   Zmm_bjet_Njet_all_stack_4->SetBinError(5,0.01310011);
   Zmm_bjet_Njet_all_stack_4->SetBinError(6,0.001664254);
   Zmm_bjet_Njet_all_stack_4->SetEntries(1952051);

   ci = TColor::GetColor("#cc0000");
   Zmm_bjet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_4->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_4,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_5 = new TH1D("Zmm_bjet_Njet_all_stack_5","",15,0,15);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(1,7.419635e+07);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(2,1457477);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(3,85721.16);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(4,1289.172);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(5,33.97528);
   Zmm_bjet_Njet_all_stack_5->SetBinContent(6,0.895259);
   Zmm_bjet_Njet_all_stack_5->SetBinError(1,13596.12);
   Zmm_bjet_Njet_all_stack_5->SetBinError(2,1235.083);
   Zmm_bjet_Njet_all_stack_5->SetBinError(3,280.8077);
   Zmm_bjet_Njet_all_stack_5->SetBinError(4,33.84149);
   Zmm_bjet_Njet_all_stack_5->SetBinError(5,5.312225);
   Zmm_bjet_Njet_all_stack_5->SetBinError(6,0.895259);
   Zmm_bjet_Njet_all_stack_5->SetEntries(4.365984e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_bjet_Njet_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_5->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_5->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_bjet_Njet_all__319 = new TH1D("Zmm_bjet_Njet_all__319","",15,0,15);
   Zmm_bjet_Njet_all__319->SetBinContent(1,5.440113e+07);
   Zmm_bjet_Njet_all__319->SetBinContent(2,607448);
   Zmm_bjet_Njet_all__319->SetBinContent(3,54338);
   Zmm_bjet_Njet_all__319->SetBinContent(4,1468);
   Zmm_bjet_Njet_all__319->SetBinContent(5,65);
   Zmm_bjet_Njet_all__319->SetBinContent(6,1);
   Zmm_bjet_Njet_all__319->SetBinError(1,7375.712);
   Zmm_bjet_Njet_all__319->SetBinError(2,779.3895);
   Zmm_bjet_Njet_all__319->SetBinError(3,233.1051);
   Zmm_bjet_Njet_all__319->SetBinError(4,38.31449);
   Zmm_bjet_Njet_all__319->SetBinError(5,8.062258);
   Zmm_bjet_Njet_all__319->SetBinError(6,1);
   Zmm_bjet_Njet_all__319->SetEntries(5.506445e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all__319->SetLineColor(ci);
   Zmm_bjet_Njet_all__319->SetLineWidth(2);
   Zmm_bjet_Njet_all__319->SetMarkerStyle(20);
   Zmm_bjet_Njet_all__319->SetMarkerSize(1.2);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_all_fx1319[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_all_fy1319[15] = {
   7.430773e+07,
   1516889,
   114997.7,
   2029.262,
   67.22703,
   1.395616,
   0.08255682,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_bjet_Njet_all_fex1319[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_all_fey1319[15] = {
   13597.89,
   1240.582,
   291.7244,
   36.07393,
   5.852555,
   0.9178155,
   0.08255682,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_all_fx1319,Graph_from_Zmm_bjet_Njet_all_fy1319,Graph_from_Zmm_bjet_Njet_all_fex1319,Graph_from_Zmm_bjet_Njet_all_fey1319);
   gre->SetName("Graph_from_Zmm_bjet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet_all1319 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet_all1319","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetMaximum(8.175346e+07);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet_all1319);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_bjet_Njet_all","Data (Z(#mu#mu) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_bjet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__320 = new TH1D("data_mc_ratio__320","",15,0,15);
   data_mc_ratio__320->SetBinContent(1,0.7321059);
   data_mc_ratio__320->SetBinContent(2,0.4004566);
   data_mc_ratio__320->SetBinContent(3,0.4725136);
   data_mc_ratio__320->SetBinContent(4,0.7234159);
   data_mc_ratio__320->SetBinContent(5,0.966873);
   data_mc_ratio__320->SetBinContent(6,0.7165294);
   data_mc_ratio__320->SetBinError(1,9.925901e-05);
   data_mc_ratio__320->SetBinError(2,0.000513808);
   data_mc_ratio__320->SetBinError(3,0.002027041);
   data_mc_ratio__320->SetBinError(4,0.018881);
   data_mc_ratio__320->SetBinError(5,0.1199258);
   data_mc_ratio__320->SetBinError(6,0.7165294);
   data_mc_ratio__320->SetMinimum(0.4);
   data_mc_ratio__320->SetMaximum(1.6);
   data_mc_ratio__320->SetEntries(21.24911);
   data_mc_ratio__320->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__320->SetLineColor(ci);
   data_mc_ratio__320->SetLineWidth(2);
   data_mc_ratio__320->SetMarkerStyle(20);
   data_mc_ratio__320->SetMarkerSize(1.2);
   data_mc_ratio__320->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__320->GetXaxis()->SetRange(1,10);
   data_mc_ratio__320->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__320->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__320->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__320->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__320->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__320->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1320[15] = {
   0.0001829943,
   0.0008178465,
   0.002536784,
   0.01777688,
   0.08705658,
   0.6576418,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1320->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1320->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1320->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1320);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
   Njet_Z_bjet_Zmm_All_amcnlo->Modified();
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
   Njet_Z_bjet_Zmm_All_amcnlo->SetSelected(Njet_Z_bjet_Zmm_All_amcnlo);
}
