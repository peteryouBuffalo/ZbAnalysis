void Njet_Z_bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_16_amcnlo/Njet_Z_bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:06 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_16_amcnlo = new TCanvas("Njet_Z_bjet_Zee_16_amcnlo", "Njet_Z_bjet_Zee_16_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_16_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_16_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_16_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_16_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_16_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_16_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-27540.71,10.52419,2.751318e+07);
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
   st->SetMaximum(2.35801e+07);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",15,0,15);
   st_stack_113->SetMinimum(0.01);
   st_stack_113->SetMaximum(2.47591e+07);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,10);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/1.0");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *Zee_bjet_Njet_stack_1 = new TH1D("Zee_bjet_Njet_stack_1","",15,0,15);
   Zee_bjet_Njet_stack_1->SetBinContent(1,799.0528);
   Zee_bjet_Njet_stack_1->SetBinContent(2,978.2657);
   Zee_bjet_Njet_stack_1->SetBinContent(3,137.6792);
   Zee_bjet_Njet_stack_1->SetBinContent(4,3.419727);
   Zee_bjet_Njet_stack_1->SetBinContent(5,0.3940473);
   Zee_bjet_Njet_stack_1->SetBinError(1,12.28099);
   Zee_bjet_Njet_stack_1->SetBinError(2,13.75281);
   Zee_bjet_Njet_stack_1->SetBinError(3,5.1795);
   Zee_bjet_Njet_stack_1->SetBinError(4,0.814706);
   Zee_bjet_Njet_stack_1->SetBinError(5,0.2786335);
   Zee_bjet_Njet_stack_1->SetEntries(10439);

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
   Zee_bjet_Njet_stack_2->SetBinContent(1,15839);
   Zee_bjet_Njet_stack_2->SetBinContent(2,984.1803);
   Zee_bjet_Njet_stack_2->SetBinContent(3,124.1462);
   Zee_bjet_Njet_stack_2->SetBinContent(4,2.086333);
   Zee_bjet_Njet_stack_2->SetBinContent(5,0.2980476);
   Zee_bjet_Njet_stack_2->SetBinError(1,79.26894);
   Zee_bjet_Njet_stack_2->SetBinError(2,18.4843);
   Zee_bjet_Njet_stack_2->SetBinError(3,6.185026);
   Zee_bjet_Njet_stack_2->SetBinError(4,0.7885598);
   Zee_bjet_Njet_stack_2->SetBinError(5,0.2980476);
   Zee_bjet_Njet_stack_2->SetEntries(44892);

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
   Zee_bjet_Njet_stack_3->SetBinContent(1,4477.665);
   Zee_bjet_Njet_stack_3->SetBinContent(2,9311.12);
   Zee_bjet_Njet_stack_3->SetBinContent(3,4797.818);
   Zee_bjet_Njet_stack_3->SetBinContent(4,138.8499);
   Zee_bjet_Njet_stack_3->SetBinContent(5,6.231691);
   Zee_bjet_Njet_stack_3->SetBinContent(6,0.1947403);
   Zee_bjet_Njet_stack_3->SetBinError(1,29.52934);
   Zee_bjet_Njet_stack_3->SetBinError(2,42.58228);
   Zee_bjet_Njet_stack_3->SetBinError(3,30.56679);
   Zee_bjet_Njet_stack_3->SetBinError(4,5.199968);
   Zee_bjet_Njet_stack_3->SetBinError(5,1.101618);
   Zee_bjet_Njet_stack_3->SetBinError(6,0.1947403);
   Zee_bjet_Njet_stack_3->SetEntries(96189);

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
   Zee_bjet_Njet_stack_4->SetBinContent(1,49.70312);
   Zee_bjet_Njet_stack_4->SetBinContent(2,95.16777);
   Zee_bjet_Njet_stack_4->SetBinContent(3,44.09915);
   Zee_bjet_Njet_stack_4->SetBinContent(4,1.061213);
   Zee_bjet_Njet_stack_4->SetBinContent(5,0.05853767);
   Zee_bjet_Njet_stack_4->SetBinError(1,0.1697262);
   Zee_bjet_Njet_stack_4->SetBinError(2,0.2348562);
   Zee_bjet_Njet_stack_4->SetBinError(3,0.1598719);
   Zee_bjet_Njet_stack_4->SetBinError(4,0.02480038);
   Zee_bjet_Njet_stack_4->SetBinError(5,0.005824716);
   Zee_bjet_Njet_stack_4->SetEntries(327978);

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
   Zee_bjet_Njet_stack_5->SetBinContent(1,1.294789e+07);
   Zee_bjet_Njet_stack_5->SetBinContent(2,278431.3);
   Zee_bjet_Njet_stack_5->SetBinContent(3,16724.96);
   Zee_bjet_Njet_stack_5->SetBinContent(4,294.9275);
   Zee_bjet_Njet_stack_5->SetBinContent(5,11.99622);
   Zee_bjet_Njet_stack_5->SetBinContent(6,0.4998424);
   Zee_bjet_Njet_stack_5->SetBinError(1,4781.877);
   Zee_bjet_Njet_stack_5->SetBinError(2,439.4403);
   Zee_bjet_Njet_stack_5->SetBinError(3,94.89768);
   Zee_bjet_Njet_stack_5->SetBinError(4,12.31129);
   Zee_bjet_Njet_stack_5->SetBinError(5,2.448718);
   Zee_bjet_Njet_stack_5->SetBinError(6,0.4998424);
   Zee_bjet_Njet_stack_5->SetEntries(1.076043e+07);

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
   
   TH1D *Zee_bjet_Njet__225 = new TH1D("Zee_bjet_Njet__225","",15,0,15);
   Zee_bjet_Njet__225->SetBinContent(1,9064257);
   Zee_bjet_Njet__225->SetBinContent(2,100602);
   Zee_bjet_Njet__225->SetBinContent(3,9058);
   Zee_bjet_Njet__225->SetBinContent(4,230);
   Zee_bjet_Njet__225->SetBinContent(5,12);
   Zee_bjet_Njet__225->SetBinContent(6,1);
   Zee_bjet_Njet__225->SetBinError(1,3010.69);
   Zee_bjet_Njet__225->SetBinError(2,317.1782);
   Zee_bjet_Njet__225->SetBinError(3,95.17353);
   Zee_bjet_Njet__225->SetBinError(4,15.16575);
   Zee_bjet_Njet__225->SetBinError(5,3.464102);
   Zee_bjet_Njet__225->SetBinError(6,1);
   Zee_bjet_Njet__225->SetEntries(9174160);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet__225->SetLineColor(ci);
   Zee_bjet_Njet__225->SetLineWidth(2);
   Zee_bjet_Njet__225->SetMarkerStyle(20);
   Zee_bjet_Njet__225->SetMarkerSize(1.2);
   Zee_bjet_Njet__225->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet__225->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_fx1225[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fy1225[15] = {
   1.296905e+07,
   289800,
   21828.7,
   440.3446,
   18.97854,
   0.6945827,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_fex1225[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fey1225[15] = {
   4782.641,
   442.0994,
   100.025,
   13.41245,
   2.715931,
   0.5364385,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_fx1225,Graph_from_Zee_bjet_Njet_fy1225,Graph_from_Zee_bjet_Njet_fex1225,Graph_from_Zee_bjet_Njet_fey1225);
   gre->SetName("Graph_from_Zee_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet1225 = new TH1F("Graph_Graph_from_Zee_bjet_Njet1225","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet1225->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet1225->SetMaximum(1.427122e+07);
   Graph_Graph_from_Zee_bjet_Njet1225->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet1225->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet1225);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__226 = new TH1D("data_mc_ratio__226","",15,0,15);
   data_mc_ratio__226->SetBinContent(1,0.6989142);
   data_mc_ratio__226->SetBinContent(2,0.3471428);
   data_mc_ratio__226->SetBinContent(3,0.4149583);
   data_mc_ratio__226->SetBinContent(4,0.5223182);
   data_mc_ratio__226->SetBinContent(5,0.6322931);
   data_mc_ratio__226->SetBinContent(6,1.439713);
   data_mc_ratio__226->SetBinError(1,0.0002321442);
   data_mc_ratio__226->SetBinError(2,0.001094473);
   data_mc_ratio__226->SetBinError(3,0.004360018);
   data_mc_ratio__226->SetBinError(4,0.03444064);
   data_mc_ratio__226->SetBinError(5,0.1825273);
   data_mc_ratio__226->SetBinError(6,1.439713);
   data_mc_ratio__226->SetMinimum(0.4);
   data_mc_ratio__226->SetMaximum(1.6);
   data_mc_ratio__226->SetEntries(4.906116);
   data_mc_ratio__226->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__226->SetLineColor(ci);
   data_mc_ratio__226->SetLineWidth(2);
   data_mc_ratio__226->SetMarkerStyle(20);
   data_mc_ratio__226->SetMarkerSize(1.2);
   data_mc_ratio__226->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__226->GetXaxis()->SetRange(1,10);
   data_mc_ratio__226->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__226->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__226->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__226->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__226->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__226->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1226[15] = {
   0.0003687733,
   0.001525533,
   0.004582272,
   0.03045897,
   0.1431054,
   0.7723176,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.07321891);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.926781);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
   Njet_Z_bjet_Zee_16_amcnlo->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
   Njet_Z_bjet_Zee_16_amcnlo->SetSelected(Njet_Z_bjet_Zee_16_amcnlo);
}
