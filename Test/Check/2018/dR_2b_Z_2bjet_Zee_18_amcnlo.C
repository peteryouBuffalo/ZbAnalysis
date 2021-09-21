void dR_2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_18_amcnlo/dR_2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:24 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_18_amcnlo", "dR_2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-11.52067,6.314516,11519.15);
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
   st->SetMaximum(9872.462);
   
   TH1F *st_stack_223 = new TH1F("st_stack_223","",25,0,10);
   st_stack_223->SetMinimum(0.01);
   st_stack_223->SetMaximum(10366.08);
   st_stack_223->SetDirectory(0);
   st_stack_223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_223->SetLineColor(ci);
   st_stack_223->GetXaxis()->SetRange(1,15);
   st_stack_223->GetXaxis()->SetLabelFont(42);
   st_stack_223->GetXaxis()->SetLabelSize(0.035);
   st_stack_223->GetXaxis()->SetTitleSize(0.035);
   st_stack_223->GetXaxis()->SetTitleFont(42);
   st_stack_223->GetYaxis()->SetTitle("Events/0.4");
   st_stack_223->GetYaxis()->SetLabelFont(42);
   st_stack_223->GetYaxis()->SetLabelSize(0.05);
   st_stack_223->GetYaxis()->SetTitleSize(0.057);
   st_stack_223->GetYaxis()->SetTitleOffset(1.2);
   st_stack_223->GetYaxis()->SetTitleFont(42);
   st_stack_223->GetZaxis()->SetLabelFont(42);
   st_stack_223->GetZaxis()->SetLabelSize(0.035);
   st_stack_223->GetZaxis()->SetTitleSize(0.035);
   st_stack_223->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_223);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,3.782077);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,4.001589);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,10.58974);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,10.69718);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,12.63647);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,19.5064);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,16.63593);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,8.53259);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,4.879315);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(11,2.404084);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(12,0.2380547);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(13,0.2944187);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,1.004678);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.9952681);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,1.686833);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,1.691852);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,1.846876);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,2.28889);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,2.118016);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,1.526381);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,1.139059);
   Zee_2bjet_dR_2b_stack_1->SetBinError(11,0.7878331);
   Zee_2bjet_dR_2b_stack_1->SetBinError(12,0.2380547);
   Zee_2bjet_dR_2b_stack_1->SetBinError(13,0.2446364);
   Zee_2bjet_dR_2b_stack_1->SetEntries(388);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_2 = new TH1D("Zee_2bjet_dR_2b_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,10.4691);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,24.15521);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,34.35161);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,30.90878);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,23.43085);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,28.8678);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,33.80621);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,7.431061);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(10,3.217002);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,2.284546);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,3.493658);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,4.17761);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,3.925419);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,3.417741);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,3.836481);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,4.18422);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,2.007924);
   Zee_2bjet_dR_2b_stack_2->SetBinError(10,1.329417);
   Zee_2bjet_dR_2b_stack_2->SetEntries(389);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_3 = new TH1D("Zee_2bjet_dR_2b_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(1,0.08255682);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,133.6091);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,246.1371);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,336.1416);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,424.5557);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,512.9291);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,631.1022);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,712.8386);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,290.2036);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,86.01782);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,23.17752);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,6.430023);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,1.063829);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(14,0.08255682);
   Zee_2bjet_dR_2b_stack_3->SetBinError(1,0.08255682);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,3.31518);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,4.501386);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,5.259663);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,5.911925);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,6.499957);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,7.209141);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,7.662108);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,4.88867);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,2.661348);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,1.38054);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,0.7281167);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.2951916);
   Zee_2bjet_dR_2b_stack_3->SetBinError(14,0.08255682);
   Zee_2bjet_dR_2b_stack_3->SetEntries(41359);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_4 = new TH1D("Zee_2bjet_dR_2b_stack_4","",25,0,10);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(1,0.001356203);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(2,3.326087);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(3,9.157759);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(4,13.59119);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(5,13.62238);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(6,10.79402);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(7,8.464739);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(8,8.371161);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(9,1.659314);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(10,0.2041085);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(11,0.0522138);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(12,0.01830874);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(13,0.006102912);
   Zee_2bjet_dR_2b_stack_4->SetBinError(1,0.0009589801);
   Zee_2bjet_dR_2b_stack_4->SetBinError(2,0.04749131);
   Zee_2bjet_dR_2b_stack_4->SetBinError(3,0.07880284);
   Zee_2bjet_dR_2b_stack_4->SetBinError(4,0.09600105);
   Zee_2bjet_dR_2b_stack_4->SetBinError(5,0.09611115);
   Zee_2bjet_dR_2b_stack_4->SetBinError(6,0.08555371);
   Zee_2bjet_dR_2b_stack_4->SetBinError(7,0.07576246);
   Zee_2bjet_dR_2b_stack_4->SetBinError(8,0.07534252);
   Zee_2bjet_dR_2b_stack_4->SetBinError(9,0.03354375);
   Zee_2bjet_dR_2b_stack_4->SetBinError(10,0.01176462);
   Zee_2bjet_dR_2b_stack_4->SetBinError(11,0.005950315);
   Zee_2bjet_dR_2b_stack_4->SetBinError(12,0.003523518);
   Zee_2bjet_dR_2b_stack_4->SetBinError(13,0.002034304);
   Zee_2bjet_dR_2b_stack_4->SetEntries(102151);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_4,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_5 = new TH1D("Zee_2bjet_dR_2b_stack_5","",25,0,10);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(2,1097.408);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(3,1346.492);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(4,1927.003);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(5,2258.825);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(6,2898.376);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(7,3528.978);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(8,4658.202);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(9,2787.849);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(10,1480.133);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(11,777.3465);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(12,326.3547);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(13,101.0872);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(14,23.80851);
   Zee_2bjet_dR_2b_stack_5->SetBinError(2,36.23652);
   Zee_2bjet_dR_2b_stack_5->SetBinError(3,39.27528);
   Zee_2bjet_dR_2b_stack_5->SetBinError(4,47.06554);
   Zee_2bjet_dR_2b_stack_5->SetBinError(5,51.09463);
   Zee_2bjet_dR_2b_stack_5->SetBinError(6,57.79828);
   Zee_2bjet_dR_2b_stack_5->SetBinError(7,64.21163);
   Zee_2bjet_dR_2b_stack_5->SetBinError(8,74.28561);
   Zee_2bjet_dR_2b_stack_5->SetBinError(9,57.43959);
   Zee_2bjet_dR_2b_stack_5->SetBinError(10,41.62839);
   Zee_2bjet_dR_2b_stack_5->SetBinError(11,29.80682);
   Zee_2bjet_dR_2b_stack_5->SetBinError(12,19.45322);
   Zee_2bjet_dR_2b_stack_5->SetBinError(13,11.16451);
   Zee_2bjet_dR_2b_stack_5->SetBinError(14,5.197375);
   Zee_2bjet_dR_2b_stack_5->SetEntries(20359);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b__445 = new TH1D("Zee_2bjet_dR_2b__445","",25,0,10);
   Zee_2bjet_dR_2b__445->SetBinContent(2,743);
   Zee_2bjet_dR_2b__445->SetBinContent(3,803);
   Zee_2bjet_dR_2b__445->SetBinContent(4,882);
   Zee_2bjet_dR_2b__445->SetBinContent(5,1098);
   Zee_2bjet_dR_2b__445->SetBinContent(6,1332);
   Zee_2bjet_dR_2b__445->SetBinContent(7,1648);
   Zee_2bjet_dR_2b__445->SetBinContent(8,2122);
   Zee_2bjet_dR_2b__445->SetBinContent(9,1084);
   Zee_2bjet_dR_2b__445->SetBinContent(10,564);
   Zee_2bjet_dR_2b__445->SetBinContent(11,251);
   Zee_2bjet_dR_2b__445->SetBinContent(12,98);
   Zee_2bjet_dR_2b__445->SetBinContent(13,20);
   Zee_2bjet_dR_2b__445->SetBinContent(14,3);
   Zee_2bjet_dR_2b__445->SetBinError(2,27.25803);
   Zee_2bjet_dR_2b__445->SetBinError(3,28.33725);
   Zee_2bjet_dR_2b__445->SetBinError(4,29.69848);
   Zee_2bjet_dR_2b__445->SetBinError(5,33.13608);
   Zee_2bjet_dR_2b__445->SetBinError(6,36.49658);
   Zee_2bjet_dR_2b__445->SetBinError(7,40.59557);
   Zee_2bjet_dR_2b__445->SetBinError(8,46.06517);
   Zee_2bjet_dR_2b__445->SetBinError(9,32.92416);
   Zee_2bjet_dR_2b__445->SetBinError(10,23.74868);
   Zee_2bjet_dR_2b__445->SetBinError(11,15.84298);
   Zee_2bjet_dR_2b__445->SetBinError(12,9.899495);
   Zee_2bjet_dR_2b__445->SetBinError(13,4.472136);
   Zee_2bjet_dR_2b__445->SetBinError(14,1.732051);
   Zee_2bjet_dR_2b__445->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__445->SetLineColor(ci);
   Zee_2bjet_dR_2b__445->SetLineWidth(2);
   Zee_2bjet_dR_2b__445->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__445->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dR_2b_fx1445[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zee_2bjet_dR_2b_fy1445[25] = {
   0.08391302,
   1248.595,
   1629.943,
   2321.677,
   2738.609,
   3458.167,
   4216.919,
   5429.854,
   3095.676,
   1574.451,
   802.9804,
   333.0411,
   102.4516,
   23.89106,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dR_2b_fex1445[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zee_2bjet_dR_2b_fey1445[25] = {
   0.08256239,
   36.47336,
   39.69902,
   47.57243,
   51.61291,
   58.29228,
   64.76935,
   74.82686,
   57.70241,
   41.7501,
   29.84917,
   19.4683,
   11.17109,
   5.198031,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dR_2b_fx1445,Graph_from_Zee_2bjet_dR_2b_fy1445,Graph_from_Zee_2bjet_dR_2b_fex1445,Graph_from_Zee_2bjet_dR_2b_fey1445);
   gre->SetName("Graph_from_Zee_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dR_2b1445 = new TH1F("Graph_Graph_from_Zee_2bjet_dR_2b1445","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->SetMaximum(6055.149);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dR_2b1445->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1445->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dR_2b1445);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__446 = new TH1D("data_mc_ratio__446","",25,0,10);
   data_mc_ratio__446->SetBinContent(2,0.595069);
   data_mc_ratio__446->SetBinContent(3,0.4926551);
   data_mc_ratio__446->SetBinContent(4,0.3798978);
   data_mc_ratio__446->SetBinContent(5,0.4009335);
   data_mc_ratio__446->SetBinContent(6,0.3851752);
   data_mc_ratio__446->SetBinContent(7,0.3908067);
   data_mc_ratio__446->SetBinContent(8,0.3908024);
   data_mc_ratio__446->SetBinContent(9,0.3501659);
   data_mc_ratio__446->SetBinContent(10,0.3582201);
   data_mc_ratio__446->SetBinContent(11,0.3125855);
   data_mc_ratio__446->SetBinContent(12,0.294258);
   data_mc_ratio__446->SetBinContent(13,0.1952142);
   data_mc_ratio__446->SetBinContent(14,0.12557);
   data_mc_ratio__446->SetBinError(2,0.02183096);
   data_mc_ratio__446->SetBinError(3,0.01738542);
   data_mc_ratio__446->SetBinError(4,0.01279182);
   data_mc_ratio__446->SetBinError(5,0.0120996);
   data_mc_ratio__446->SetBinError(6,0.01055373);
   data_mc_ratio__446->SetBinError(7,0.009626831);
   data_mc_ratio__446->SetBinError(8,0.008483685);
   data_mc_ratio__446->SetBinError(9,0.01063553);
   data_mc_ratio__446->SetBinError(10,0.01508379);
   data_mc_ratio__446->SetBinError(11,0.01973022);
   data_mc_ratio__446->SetBinError(12,0.02972454);
   data_mc_ratio__446->SetBinError(13,0.04365122);
   data_mc_ratio__446->SetBinError(14,0.07249786);
   data_mc_ratio__446->SetMinimum(0.4);
   data_mc_ratio__446->SetMaximum(1.6);
   data_mc_ratio__446->SetEntries(1735.451);
   data_mc_ratio__446->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__446->SetLineColor(ci);
   data_mc_ratio__446->SetLineWidth(2);
   data_mc_ratio__446->SetMarkerStyle(20);
   data_mc_ratio__446->SetMarkerSize(1.2);
   data_mc_ratio__446->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__446->GetXaxis()->SetRange(1,15);
   data_mc_ratio__446->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__446->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__446->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__446->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__446->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__446->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__446->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__446->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__446->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__446->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__446->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__446->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__446->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__446->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1446[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1446[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1446[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1446[25] = {
   0.9839044,
   0.02921153,
   0.02435607,
   0.02049055,
   0.0188464,
   0.01685641,
   0.0153594,
   0.01378064,
   0.01863968,
   0.02651724,
   0.03717298,
   0.05845613,
   0.1090378,
   0.2175722,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1446,Graph_from_mc_statistical_error_fy1446,Graph_from_mc_statistical_error_fex1446,Graph_from_mc_statistical_error_fey1446);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1446 = new TH1F("Graph_Graph_from_mc_statistical_error1446","",100,0,11);
   Graph_Graph_from_mc_statistical_error1446->SetMinimum(0.01448607);
   Graph_Graph_from_mc_statistical_error1446->SetMaximum(2.180685);
   Graph_Graph_from_mc_statistical_error1446->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1446->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1446->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1446);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_18_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_18_amcnlo);
}
