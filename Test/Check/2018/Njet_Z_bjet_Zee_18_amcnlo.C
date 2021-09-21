void Njet_Z_bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_18_amcnlo/Njet_Z_bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:06 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_18_amcnlo = new TCanvas("Njet_Z_bjet_Zee_18_amcnlo", "Njet_Z_bjet_Zee_18_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_18_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_18_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_18_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_18_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_18_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_18_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-50250.62,10.52419,5.020038e+07);
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
   st->SetMaximum(4.302411e+07);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",15,0,15);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(4.517532e+07);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetRange(1,10);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetLabelSize(0.035);
   st_stack_115->GetXaxis()->SetTitleSize(0.035);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/1.0");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetLabelSize(0.035);
   st_stack_115->GetZaxis()->SetTitleSize(0.035);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *Zee_bjet_Njet_stack_1 = new TH1D("Zee_bjet_Njet_stack_1","",15,0,15);
   Zee_bjet_Njet_stack_1->SetBinContent(1,1373.843);
   Zee_bjet_Njet_stack_1->SetBinContent(2,1804.844);
   Zee_bjet_Njet_stack_1->SetBinContent(3,290.6534);
   Zee_bjet_Njet_stack_1->SetBinContent(4,6.568795);
   Zee_bjet_Njet_stack_1->SetBinError(1,18.35447);
   Zee_bjet_Njet_stack_1->SetBinError(2,21.71125);
   Zee_bjet_Njet_stack_1->SetBinError(3,8.826161);
   Zee_bjet_Njet_stack_1->SetBinError(4,1.289322);
   Zee_bjet_Njet_stack_1->SetEntries(16539);

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
   Zee_bjet_Njet_stack_2->SetBinContent(1,28519.7);
   Zee_bjet_Njet_stack_2->SetBinContent(2,1769.022);
   Zee_bjet_Njet_stack_2->SetBinContent(3,254.7776);
   Zee_bjet_Njet_stack_2->SetBinContent(4,5.709646);
   Zee_bjet_Njet_stack_2->SetBinError(1,138.6718);
   Zee_bjet_Njet_stack_2->SetBinError(2,32.26521);
   Zee_bjet_Njet_stack_2->SetBinError(3,11.40159);
   Zee_bjet_Njet_stack_2->SetBinError(4,1.734936);
   Zee_bjet_Njet_stack_2->SetEntries(47823);

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
   Zee_bjet_Njet_stack_3->SetBinContent(1,6990.549);
   Zee_bjet_Njet_stack_3->SetBinContent(2,16995.49);
   Zee_bjet_Njet_stack_3->SetBinContent(3,10163.58);
   Zee_bjet_Njet_stack_3->SetBinContent(4,259.857);
   Zee_bjet_Njet_stack_3->SetBinContent(5,13.01575);
   Zee_bjet_Njet_stack_3->SetBinContent(6,0.3302273);
   Zee_bjet_Njet_stack_3->SetBinContent(7,0.08255682);
   Zee_bjet_Njet_stack_3->SetBinError(1,23.91994);
   Zee_bjet_Njet_stack_3->SetBinError(2,37.35943);
   Zee_bjet_Njet_stack_3->SetBinError(3,28.93902);
   Zee_bjet_Njet_stack_3->SetBinError(4,4.621693);
   Zee_bjet_Njet_stack_3->SetBinError(5,1.035603);
   Zee_bjet_Njet_stack_3->SetBinError(6,0.1651136);
   Zee_bjet_Njet_stack_3->SetBinError(7,0.08255682);
   Zee_bjet_Njet_stack_3->SetEntries(419282);

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
   Zee_bjet_Njet_stack_4->SetBinContent(1,75.53032);
   Zee_bjet_Njet_stack_4->SetBinContent(2,166.4739);
   Zee_bjet_Njet_stack_4->SetBinContent(3,88.89976);
   Zee_bjet_Njet_stack_4->SetBinContent(4,1.862744);
   Zee_bjet_Njet_stack_4->SetBinContent(5,0.1376546);
   Zee_bjet_Njet_stack_4->SetBinContent(6,0.001356203);
   Zee_bjet_Njet_stack_4->SetBinContent(7,0.0006781013);
   Zee_bjet_Njet_stack_4->SetBinError(1,0.2263122);
   Zee_bjet_Njet_stack_4->SetBinError(2,0.3359854);
   Zee_bjet_Njet_stack_4->SetBinError(3,0.2455261);
   Zee_bjet_Njet_stack_4->SetBinError(4,0.03554053);
   Zee_bjet_Njet_stack_4->SetBinError(5,0.009661457);
   Zee_bjet_Njet_stack_4->SetBinError(6,0.0009589801);
   Zee_bjet_Njet_stack_4->SetBinError(7,0.0006781013);
   Zee_bjet_Njet_stack_4->SetEntries(490939);

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
   Zee_bjet_Njet_stack_5->SetBinContent(1,2.36263e+07);
   Zee_bjet_Njet_stack_5->SetBinContent(2,477119.4);
   Zee_bjet_Njet_stack_5->SetBinContent(3,29075.85);
   Zee_bjet_Njet_stack_5->SetBinContent(4,392.5718);
   Zee_bjet_Njet_stack_5->SetBinContent(5,12.36074);
   Zee_bjet_Njet_stack_5->SetBinError(1,8485.108);
   Zee_bjet_Njet_stack_5->SetBinError(2,792.7511);
   Zee_bjet_Njet_stack_5->SetBinError(3,184.1613);
   Zee_bjet_Njet_stack_5->SetBinError(4,21.50502);
   Zee_bjet_Njet_stack_5->SetBinError(5,3.726902);
   Zee_bjet_Njet_stack_5->SetEntries(1.063274e+07);

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
   
   TH1D *Zee_bjet_Njet__229 = new TH1D("Zee_bjet_Njet__229","",15,0,15);
   Zee_bjet_Njet__229->SetBinContent(1,1.604987e+07);
   Zee_bjet_Njet__229->SetBinContent(2,203112);
   Zee_bjet_Njet__229->SetBinContent(3,19221);
   Zee_bjet_Njet__229->SetBinContent(4,589);
   Zee_bjet_Njet__229->SetBinContent(5,28);
   Zee_bjet_Njet__229->SetBinError(1,4006.229);
   Zee_bjet_Njet__229->SetBinError(2,450.6795);
   Zee_bjet_Njet__229->SetBinError(3,138.6398);
   Zee_bjet_Njet__229->SetBinError(4,24.26932);
   Zee_bjet_Njet__229->SetBinError(5,5.291503);
   Zee_bjet_Njet__229->SetEntries(1.627282e+07);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet__229->SetLineColor(ci);
   Zee_bjet_Njet__229->SetLineWidth(2);
   Zee_bjet_Njet__229->SetMarkerStyle(20);
   Zee_bjet_Njet__229->SetMarkerSize(1.2);
   Zee_bjet_Njet__229->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet__229->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet__229->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__229->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__229->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet__229->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet__229->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__229->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__229->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet__229->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet__229->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet__229->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__229->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__229->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet__229->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_fx1229[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fy1229[15] = {
   2.366326e+07,
   497855.2,
   39873.76,
   666.5699,
   25.51414,
   0.3315835,
   0.08323492,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_fex1229[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fey1229[15] = {
   8486.295,
   794.5832,
   186.9781,
   22.10202,
   3.868122,
   0.1651164,
   0.0825596,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_fx1229,Graph_from_Zee_bjet_Njet_fy1229,Graph_from_Zee_bjet_Njet_fex1229,Graph_from_Zee_bjet_Njet_fey1229);
   gre->SetName("Graph_from_Zee_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet1229 = new TH1F("Graph_Graph_from_Zee_bjet_Njet1229","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet1229->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet1229->SetMaximum(2.603892e+07);
   Graph_Graph_from_Zee_bjet_Njet1229->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet1229->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet1229);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",15,0,15);
   data_mc_ratio__230->SetBinContent(1,0.6782611);
   data_mc_ratio__230->SetBinContent(2,0.407974);
   data_mc_ratio__230->SetBinContent(3,0.4820463);
   data_mc_ratio__230->SetBinContent(4,0.8836282);
   data_mc_ratio__230->SetBinContent(5,1.097431);
   data_mc_ratio__230->SetBinError(1,0.0001693016);
   data_mc_ratio__230->SetBinError(2,0.0009052421);
   data_mc_ratio__230->SetBinError(3,0.003476969);
   data_mc_ratio__230->SetBinError(4,0.03640927);
   data_mc_ratio__230->SetBinError(5,0.2073949);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(172.8168);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__230->GetXaxis()->SetRange(1,10);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__230->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1230[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1230[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1230[15] = {
   0.0003586274,
   0.001596013,
   0.004689253,
   0.03315785,
   0.151607,
   0.4979634,
   0.9918866,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.007302042);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(2.190264);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_18_amcnlo->cd();
   Njet_Z_bjet_Zee_18_amcnlo->Modified();
   Njet_Z_bjet_Zee_18_amcnlo->cd();
   Njet_Z_bjet_Zee_18_amcnlo->SetSelected(Njet_Z_bjet_Zee_18_amcnlo);
}
