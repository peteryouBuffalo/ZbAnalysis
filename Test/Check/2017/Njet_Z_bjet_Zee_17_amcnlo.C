void Njet_Z_bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_17_amcnlo/Njet_Z_bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:06 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_17_amcnlo = new TCanvas("Njet_Z_bjet_Zee_17_amcnlo", "Njet_Z_bjet_Zee_17_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_17_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_17_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_17_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_17_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_17_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_17_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-35856.79,10.52419,3.582094e+07);
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
   st->SetMaximum(3.070025e+07);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",15,0,15);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(3.223526e+07);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,10);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/1.0");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *Zee_bjet_Njet_stack_1 = new TH1D("Zee_bjet_Njet_stack_1","",15,0,15);
   Zee_bjet_Njet_stack_1->SetBinContent(1,1013.554);
   Zee_bjet_Njet_stack_1->SetBinContent(2,1270.505);
   Zee_bjet_Njet_stack_1->SetBinContent(3,187.852);
   Zee_bjet_Njet_stack_1->SetBinContent(4,5.528933);
   Zee_bjet_Njet_stack_1->SetBinContent(5,0.4043335);
   Zee_bjet_Njet_stack_1->SetBinError(1,16.7998);
   Zee_bjet_Njet_stack_1->SetBinError(2,16.83908);
   Zee_bjet_Njet_stack_1->SetBinError(3,6.261881);
   Zee_bjet_Njet_stack_1->SetBinError(4,1.053216);
   Zee_bjet_Njet_stack_1->SetBinError(5,0.2859263);
   Zee_bjet_Njet_stack_1->SetEntries(12007);

   ci = TColor::GetColor("#ff6600");
   Zee_bjet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_1->SetLineColor(ci);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_1,"");
   
   TH1D *Zee_bjet_Njet_stack_2 = new TH1D("Zee_bjet_Njet_stack_2","",15,0,15);
   Zee_bjet_Njet_stack_2->SetBinContent(1,20291.17);
   Zee_bjet_Njet_stack_2->SetBinContent(2,1226.644);
   Zee_bjet_Njet_stack_2->SetBinContent(3,190.678);
   Zee_bjet_Njet_stack_2->SetBinContent(4,3.167378);
   Zee_bjet_Njet_stack_2->SetBinError(1,82.58306);
   Zee_bjet_Njet_stack_2->SetBinError(2,19.95195);
   Zee_bjet_Njet_stack_2->SetBinError(3,8.17476);
   Zee_bjet_Njet_stack_2->SetBinError(4,1.055793);
   Zee_bjet_Njet_stack_2->SetEntries(70865);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_2->SetLineColor(ci);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_2,"");
   
   TH1D *Zee_bjet_Njet_stack_3 = new TH1D("Zee_bjet_Njet_stack_3","",15,0,15);
   Zee_bjet_Njet_stack_3->SetBinContent(1,5237.189);
   Zee_bjet_Njet_stack_3->SetBinContent(2,12092.86);
   Zee_bjet_Njet_stack_3->SetBinContent(3,6987.255);
   Zee_bjet_Njet_stack_3->SetBinContent(4,173.8395);
   Zee_bjet_Njet_stack_3->SetBinContent(5,8.517992);
   Zee_bjet_Njet_stack_3->SetBinContent(6,0.4103127);
   Zee_bjet_Njet_stack_3->SetBinError(1,44.83983);
   Zee_bjet_Njet_stack_3->SetBinError(2,69.04293);
   Zee_bjet_Njet_stack_3->SetBinError(3,53.13606);
   Zee_bjet_Njet_stack_3->SetBinError(4,8.334475);
   Zee_bjet_Njet_stack_3->SetBinError(5,1.841582);
   Zee_bjet_Njet_stack_3->SetBinError(6,0.4103127);
   Zee_bjet_Njet_stack_3->SetEntries(71553);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_3->SetLineColor(ci);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_3,"");
   
   TH1D *Zee_bjet_Njet_stack_4 = new TH1D("Zee_bjet_Njet_stack_4","",15,0,15);
   Zee_bjet_Njet_stack_4->SetBinContent(1,55.57296);
   Zee_bjet_Njet_stack_4->SetBinContent(2,118.1605);
   Zee_bjet_Njet_stack_4->SetBinContent(3,61.47681);
   Zee_bjet_Njet_stack_4->SetBinContent(4,1.281392);
   Zee_bjet_Njet_stack_4->SetBinContent(5,0.08034562);
   Zee_bjet_Njet_stack_4->SetBinContent(6,0.000344831);
   Zee_bjet_Njet_stack_4->SetBinError(1,0.1384315);
   Zee_bjet_Njet_stack_4->SetBinError(2,0.2018549);
   Zee_bjet_Njet_stack_4->SetBinError(3,0.1455991);
   Zee_bjet_Njet_stack_4->SetBinError(4,0.02102055);
   Zee_bjet_Njet_stack_4->SetBinError(5,0.005263617);
   Zee_bjet_Njet_stack_4->SetBinError(6,0.000344831);
   Zee_bjet_Njet_stack_4->SetEntries(686053);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_4->SetLineColor(ci);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_4,"");
   
   TH1D *Zee_bjet_Njet_stack_5 = new TH1D("Zee_bjet_Njet_stack_5","",15,0,15);
   Zee_bjet_Njet_stack_5->SetBinContent(1,1.685854e+07);
   Zee_bjet_Njet_stack_5->SetBinContent(2,333109);
   Zee_bjet_Njet_stack_5->SetBinContent(3,20326.79);
   Zee_bjet_Njet_stack_5->SetBinContent(4,254.4324);
   Zee_bjet_Njet_stack_5->SetBinContent(5,9.847849);
   Zee_bjet_Njet_stack_5->SetBinError(1,6162.144);
   Zee_bjet_Njet_stack_5->SetBinError(2,575.5479);
   Zee_bjet_Njet_stack_5->SetBinError(3,137.3787);
   Zee_bjet_Njet_stack_5->SetBinError(4,15.44701);
   Zee_bjet_Njet_stack_5->SetBinError(5,2.969238);
   Zee_bjet_Njet_stack_5->SetEntries(1.024172e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_5->SetLineColor(ci);
   Zee_bjet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_Njet__227 = new TH1D("Zee_bjet_Njet__227","",15,0,15);
   Zee_bjet_Njet__227->SetBinContent(1,1.064324e+07);
   Zee_bjet_Njet__227->SetBinContent(2,119945);
   Zee_bjet_Njet__227->SetBinContent(3,11564);
   Zee_bjet_Njet__227->SetBinContent(4,291);
   Zee_bjet_Njet__227->SetBinContent(5,13);
   Zee_bjet_Njet__227->SetBinError(1,3262.398);
   Zee_bjet_Njet__227->SetBinError(2,346.3308);
   Zee_bjet_Njet__227->SetBinError(3,107.536);
   Zee_bjet_Njet__227->SetBinError(4,17.05872);
   Zee_bjet_Njet__227->SetBinError(5,3.605551);
   Zee_bjet_Njet__227->SetEntries(1.077506e+07);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet__227->SetLineColor(ci);
   Zee_bjet_Njet__227->SetLineWidth(2);
   Zee_bjet_Njet__227->SetMarkerStyle(20);
   Zee_bjet_Njet__227->SetMarkerSize(1.2);
   Zee_bjet_Njet__227->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet__227->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_fx1227[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fy1227[15] = {
   1.688514e+07,
   347817.2,
   27754.05,
   438.2496,
   18.85052,
   0.4106575,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_fex1227[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fey1227[15] = {
   6162.883,
   580.262,
   147.6564,
   17.61528,
   3.50565,
   0.4103128,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_fx1227,Graph_from_Zee_bjet_Njet_fy1227,Graph_from_Zee_bjet_Njet_fex1227,Graph_from_Zee_bjet_Njet_fey1227);
   gre->SetName("Graph_from_Zee_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet1227 = new TH1F("Graph_Graph_from_Zee_bjet_Njet1227","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet1227->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet1227->SetMaximum(1.858043e+07);
   Graph_Graph_from_Zee_bjet_Njet1227->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet1227->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_Njet","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__228 = new TH1D("data_mc_ratio__228","",15,0,15);
   data_mc_ratio__228->SetBinContent(1,0.630332);
   data_mc_ratio__228->SetBinContent(2,0.3448507);
   data_mc_ratio__228->SetBinContent(3,0.4166599);
   data_mc_ratio__228->SetBinContent(4,0.6640052);
   data_mc_ratio__228->SetBinContent(5,0.6896361);
   data_mc_ratio__228->SetBinError(1,0.0001932112);
   data_mc_ratio__228->SetBinError(2,0.0009957265);
   data_mc_ratio__228->SetBinError(3,0.003874607);
   data_mc_ratio__228->SetBinError(4,0.03892467);
   data_mc_ratio__228->SetBinError(5,0.1912707);
   data_mc_ratio__228->SetMinimum(0.4);
   data_mc_ratio__228->SetMaximum(1.6);
   data_mc_ratio__228->SetEntries(136.3499);
   data_mc_ratio__228->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__228->SetLineColor(ci);
   data_mc_ratio__228->SetLineWidth(2);
   data_mc_ratio__228->SetMarkerStyle(20);
   data_mc_ratio__228->SetMarkerSize(1.2);
   data_mc_ratio__228->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__228->GetXaxis()->SetRange(1,10);
   data_mc_ratio__228->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__228->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__228->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__228->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__228->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__228->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1228[15] = {
   0.0003649887,
   0.001668296,
   0.005320172,
   0.04019463,
   0.185971,
   0.9991606,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.0007554166);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(2.198993);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_17_amcnlo->cd();
   Njet_Z_bjet_Zee_17_amcnlo->Modified();
   Njet_Z_bjet_Zee_17_amcnlo->cd();
   Njet_Z_bjet_Zee_17_amcnlo->SetSelected(Njet_Z_bjet_Zee_17_amcnlo);
}
