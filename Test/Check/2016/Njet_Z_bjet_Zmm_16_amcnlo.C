void Njet_Z_bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_16_amcnlo/Njet_Z_bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:14 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_16_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_16_amcnlo", "Njet_Z_bjet_Zmm_16_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_16_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_16_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-40520.79,10.52419,4.048027e+07);
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
   st->SetMaximum(3.469352e+07);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",15,0,15);
   st_stack_157->SetMinimum(0.01);
   st_stack_157->SetMaximum(3.642819e+07);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,10);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/1.0");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *Zmm_bjet_Njet_stack_1 = new TH1D("Zmm_bjet_Njet_stack_1","",15,0,15);
   Zmm_bjet_Njet_stack_1->SetBinContent(1,1092.191);
   Zmm_bjet_Njet_stack_1->SetBinContent(2,1262.631);
   Zmm_bjet_Njet_stack_1->SetBinContent(3,190.526);
   Zmm_bjet_Njet_stack_1->SetBinContent(4,5.902321);
   Zmm_bjet_Njet_stack_1->SetBinContent(5,0.3934881);
   Zmm_bjet_Njet_stack_1->SetBinError(1,14.28649);
   Zmm_bjet_Njet_stack_1->SetBinError(2,15.58922);
   Zmm_bjet_Njet_stack_1->SetBinError(3,6.084013);
   Zmm_bjet_Njet_stack_1->SetBinError(4,1.077613);
   Zmm_bjet_Njet_stack_1->SetBinError(5,0.2782384);
   Zmm_bjet_Njet_stack_1->SetEntries(14117);

   ci = TColor::GetColor("#ff6600");
   Zmm_bjet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_1->SetLineColor(ci);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_1,"");
   
   TH1D *Zmm_bjet_Njet_stack_2 = new TH1D("Zmm_bjet_Njet_stack_2","",15,0,15);
   Zmm_bjet_Njet_stack_2->SetBinContent(1,21960.33);
   Zmm_bjet_Njet_stack_2->SetBinContent(2,1349.321);
   Zmm_bjet_Njet_stack_2->SetBinContent(3,164.6446);
   Zmm_bjet_Njet_stack_2->SetBinContent(4,2.086333);
   Zmm_bjet_Njet_stack_2->SetBinError(1,93.35187);
   Zmm_bjet_Njet_stack_2->SetBinError(2,21.75068);
   Zmm_bjet_Njet_stack_2->SetBinError(3,7.142678);
   Zmm_bjet_Njet_stack_2->SetBinError(4,0.7885598);
   Zmm_bjet_Njet_stack_2->SetEntries(62131);

   ci = TColor::GetColor("#cccc00");
   Zmm_bjet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_2->SetLineColor(ci);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_2,"");
   
   TH1D *Zmm_bjet_Njet_stack_3 = new TH1D("Zmm_bjet_Njet_stack_3","",15,0,15);
   Zmm_bjet_Njet_stack_3->SetBinContent(1,5878.627);
   Zmm_bjet_Njet_stack_3->SetBinContent(2,12108.57);
   Zmm_bjet_Njet_stack_3->SetBinContent(3,6243.376);
   Zmm_bjet_Njet_stack_3->SetBinContent(4,171.761);
   Zmm_bjet_Njet_stack_3->SetBinContent(5,7.205393);
   Zmm_bjet_Njet_stack_3->SetBinError(1,33.83498);
   Zmm_bjet_Njet_stack_3->SetBinError(2,48.55951);
   Zmm_bjet_Njet_stack_3->SetBinError(3,34.86886);
   Zmm_bjet_Njet_stack_3->SetBinError(4,5.783493);
   Zmm_bjet_Njet_stack_3->SetBinError(5,1.184559);
   Zmm_bjet_Njet_stack_3->SetEntries(125344);

   ci = TColor::GetColor("#0000cc");
   Zmm_bjet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_3->SetLineColor(ci);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_3,"");
   
   TH1D *Zmm_bjet_Njet_stack_4 = new TH1D("Zmm_bjet_Njet_stack_4","",15,0,15);
   Zmm_bjet_Njet_stack_4->SetBinContent(1,68.67165);
   Zmm_bjet_Njet_stack_4->SetBinContent(2,128.7342);
   Zmm_bjet_Njet_stack_4->SetBinContent(3,59.99938);
   Zmm_bjet_Njet_stack_4->SetBinContent(4,1.332457);
   Zmm_bjet_Njet_stack_4->SetBinContent(5,0.08114133);
   Zmm_bjet_Njet_stack_4->SetBinContent(6,0.0005795809);
   Zmm_bjet_Njet_stack_4->SetBinError(1,0.1995013);
   Zmm_bjet_Njet_stack_4->SetBinError(2,0.2731518);
   Zmm_bjet_Njet_stack_4->SetBinError(3,0.1864792);
   Zmm_bjet_Njet_stack_4->SetBinError(4,0.02778968);
   Zmm_bjet_Njet_stack_4->SetBinError(5,0.006857694);
   Zmm_bjet_Njet_stack_4->SetBinError(6,0.0005795809);
   Zmm_bjet_Njet_stack_4->SetEntries(446563);

   ci = TColor::GetColor("#cc0000");
   Zmm_bjet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_4->SetLineColor(ci);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_4,"");
   
   TH1D *Zmm_bjet_Njet_stack_5 = new TH1D("Zmm_bjet_Njet_stack_5","",15,0,15);
   Zmm_bjet_Njet_stack_5->SetBinContent(1,1.905243e+07);
   Zmm_bjet_Njet_stack_5->SetBinContent(2,392133.9);
   Zmm_bjet_Njet_stack_5->SetBinContent(3,22840.34);
   Zmm_bjet_Njet_stack_5->SetBinContent(4,418.4966);
   Zmm_bjet_Njet_stack_5->SetBinContent(5,13.99559);
   Zmm_bjet_Njet_stack_5->SetBinError(1,5825.767);
   Zmm_bjet_Njet_stack_5->SetBinError(2,520.768);
   Zmm_bjet_Njet_stack_5->SetBinError(3,110.2274);
   Zmm_bjet_Njet_stack_5->SetBinError(4,14.64811);
   Zmm_bjet_Njet_stack_5->SetBinError(5,2.644917);
   Zmm_bjet_Njet_stack_5->SetEntries(1.556838e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_bjet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_5->SetLineColor(ci);
   Zmm_bjet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_bjet_Njet__313 = new TH1D("Zmm_bjet_Njet__313","",15,0,15);
   Zmm_bjet_Njet__313->SetBinContent(1,1.374284e+07);
   Zmm_bjet_Njet__313->SetBinContent(2,143225);
   Zmm_bjet_Njet__313->SetBinContent(3,12429);
   Zmm_bjet_Njet__313->SetBinContent(4,325);
   Zmm_bjet_Njet__313->SetBinContent(5,10);
   Zmm_bjet_Njet__313->SetBinError(1,3707.133);
   Zmm_bjet_Njet__313->SetBinError(2,378.4508);
   Zmm_bjet_Njet__313->SetBinError(3,111.4854);
   Zmm_bjet_Njet__313->SetBinError(4,18.02776);
   Zmm_bjet_Njet__313->SetBinError(5,3.162278);
   Zmm_bjet_Njet__313->SetEntries(1.389882e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet__313->SetLineColor(ci);
   Zmm_bjet_Njet__313->SetLineWidth(2);
   Zmm_bjet_Njet__313->SetMarkerStyle(20);
   Zmm_bjet_Njet__313->SetMarkerSize(1.2);
   Zmm_bjet_Njet__313->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet__313->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_fx1313[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fy1313[15] = {
   1.908143e+07,
   406983.1,
   29498.89,
   599.5787,
   21.67561,
   0.0005795809,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_bjet_Njet_fex1313[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fey1313[15] = {
   5826.631,
   523.7113,
   115.9913,
   15.80506,
   2.911397,
   0.0005795809,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_fx1313,Graph_from_Zmm_bjet_Njet_fy1313,Graph_from_Zmm_bjet_Njet_fex1313,Graph_from_Zmm_bjet_Njet_fey1313);
   gre->SetName("Graph_from_Zmm_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet1313 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet1313","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetMaximum(2.099599e+07);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet1313->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet1313);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_bjet_Njet","Data (Z(#mu#mu) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_bjet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__314 = new TH1D("data_mc_ratio__314","",15,0,15);
   data_mc_ratio__314->SetBinContent(1,0.7202203);
   data_mc_ratio__314->SetBinContent(2,0.3519187);
   data_mc_ratio__314->SetBinContent(3,0.4213379);
   data_mc_ratio__314->SetBinContent(4,0.5420473);
   data_mc_ratio__314->SetBinContent(5,0.461348);
   data_mc_ratio__314->SetBinError(1,0.0001942796);
   data_mc_ratio__314->SetBinError(2,0.000929893);
   data_mc_ratio__314->SetBinError(3,0.00377931);
   data_mc_ratio__314->SetBinError(4,0.03006737);
   data_mc_ratio__314->SetBinError(5,0.1458911);
   data_mc_ratio__314->SetMinimum(0.4);
   data_mc_ratio__314->SetMaximum(1.6);
   data_mc_ratio__314->SetEntries(237.4956);
   data_mc_ratio__314->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__314->SetLineColor(ci);
   data_mc_ratio__314->SetLineWidth(2);
   data_mc_ratio__314->SetMarkerStyle(20);
   data_mc_ratio__314->SetMarkerSize(1.2);
   data_mc_ratio__314->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__314->GetXaxis()->SetRange(1,10);
   data_mc_ratio__314->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__314->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__314->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__314->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__314->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__314->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1314[15] = {
   0.000305356,
   0.001286813,
   0.003932057,
   0.02636027,
   0.1343167,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
   Njet_Z_bjet_Zmm_16_amcnlo->Modified();
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
   Njet_Z_bjet_Zmm_16_amcnlo->SetSelected(Njet_Z_bjet_Zmm_16_amcnlo);
}
