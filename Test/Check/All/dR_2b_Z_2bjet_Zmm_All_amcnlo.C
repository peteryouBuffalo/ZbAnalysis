void dR_2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_All_amcnlo/dR_2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:38 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_All_amcnlo", "dR_2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-33.45303,6.314516,33429.58);
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
   st->SetMaximum(28650.74);
   
   TH1F *st_stack_312 = new TH1F("st_stack_312","",25,0,10);
   st_stack_312->SetMinimum(0.01);
   st_stack_312->SetMaximum(30083.27);
   st_stack_312->SetDirectory(0);
   st_stack_312->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_312->SetLineColor(ci);
   st_stack_312->GetXaxis()->SetRange(1,15);
   st_stack_312->GetXaxis()->SetLabelFont(42);
   st_stack_312->GetXaxis()->SetLabelSize(0.035);
   st_stack_312->GetXaxis()->SetTitleSize(0.035);
   st_stack_312->GetXaxis()->SetTitleFont(42);
   st_stack_312->GetYaxis()->SetTitle("Events/0.4");
   st_stack_312->GetYaxis()->SetLabelFont(42);
   st_stack_312->GetYaxis()->SetLabelSize(0.05);
   st_stack_312->GetYaxis()->SetTitleSize(0.057);
   st_stack_312->GetYaxis()->SetTitleOffset(1.2);
   st_stack_312->GetYaxis()->SetTitleFont(42);
   st_stack_312->GetZaxis()->SetLabelFont(42);
   st_stack_312->GetZaxis()->SetLabelSize(0.035);
   st_stack_312->GetZaxis()->SetTitleSize(0.035);
   st_stack_312->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_312);
   
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_1 = new TH1D("Zmm_2bjet_dR_2b_all_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(2,10.24194);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(3,15.13657);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(4,19.26436);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(5,29.79585);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(6,37.79332);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(7,43.71611);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(8,47.50369);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(9,23.70755);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(10,10.80878);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(11,5.900336);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(12,2.195414);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(13,0.9794673);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(14,0.2380547);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(2,1.5399);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(3,1.862825);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(4,2.095167);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(5,2.62507);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(6,2.932656);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(7,3.161324);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(8,3.345381);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(9,2.310458);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(10,1.583961);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(11,1.139671);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(12,0.74382);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(13,0.4953837);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(14,0.2380547);
   Zmm_2bjet_dR_2b_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_2 = new TH1D("Zmm_2bjet_dR_2b_all_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(2,36.65258);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(3,70.96724);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(4,88.83718);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(5,91.58291);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(6,87.88783);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(7,89.04576);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(8,91.36943);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(9,16.29872);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(10,3.454349);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(11,0.75152);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(12,0.2980476);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(2,3.863574);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(3,5.309078);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(4,6.022244);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(5,6.129375);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(6,6.036056);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(7,6.126817);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(8,6.132767);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(9,2.638294);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(10,1.180615);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(11,0.5590487);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(12,0.2980476);
   Zmm_2bjet_dR_2b_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_3 = new TH1D("Zmm_2bjet_dR_2b_all_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(2,382.5223);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(3,635.5692);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(4,922.5858);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(5,1163.132);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(6,1411.774);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(7,1717.584);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(8,1986.831);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(9,759.3812);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(10,257.195);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(11,66.7556);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(12,20.48223);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(13,2.589654);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(14,0.3208179);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(2,9.008464);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(3,11.43622);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(4,13.85736);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(5,15.63438);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(6,16.98362);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(7,18.74346);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(8,20.35364);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(9,12.64145);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(10,7.469508);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(11,3.69594);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(12,2.163308);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(13,0.7074704);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(14,0.1606158);
   Zmm_2bjet_dR_2b_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dR_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_4 = new TH1D("Zmm_2bjet_dR_2b_all_stack_4","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(1,0.001837263);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(2,9.554699);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(3,26.24178);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(4,38.72545);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(5,39.48667);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(6,31.9559);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(7,24.82327);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(8,24.55607);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(9,4.828537);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(10,0.5888293);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(11,0.1777361);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(12,0.05706163);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(13,0.01854903);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinContent(14,0.0006781013);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(1,0.00106379);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(2,0.0729264);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(3,0.1207294);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(4,0.1465579);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(5,0.147798);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(6,0.1331709);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(7,0.1172544);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(8,0.1165816);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(9,0.05174638);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(10,0.0180221);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(11,0.009900943);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(12,0.005730975);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(13,0.003143358);
   Zmm_2bjet_dR_2b_all_stack_4->SetBinError(14,0.0006781013);
   Zmm_2bjet_dR_2b_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dR_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_5 = new TH1D("Zmm_2bjet_dR_2b_all_stack_5","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(1,4.976005);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(2,3277.815);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(3,4275.808);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(4,5551.791);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(5,6973.661);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(6,8671.335);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(7,10694.38);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(8,13607.64);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(9,8395.938);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(10,4415.521);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(11,2300.816);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(12,885.6069);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(13,254.4131);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(14,38.40695);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinContent(15,1.123703);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(1,2.187593);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(2,54.13081);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(3,62.33097);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(4,70.87746);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(5,78.73253);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(6,88.2309);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(7,98.08548);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(8,112.8247);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(9,88.5334);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(10,63.68804);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(11,46.13184);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(12,28.71059);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(13,15.85584);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(14,6.038574);
   Zmm_2bjet_dR_2b_all_stack_5->SetBinError(15,1.123703);
   Zmm_2bjet_dR_2b_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dR_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b_all__623 = new TH1D("Zmm_2bjet_dR_2b_all__623","",25,0,10);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(1,1);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(2,2131);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(3,2319);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(4,2683);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(5,3230);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(6,3808);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(7,4864);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(8,6027);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(9,3156);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(10,1501);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(11,695);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(12,300);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(13,101);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(14,11);
   Zmm_2bjet_dR_2b_all__623->SetBinError(1,1);
   Zmm_2bjet_dR_2b_all__623->SetBinError(2,46.16276);
   Zmm_2bjet_dR_2b_all__623->SetBinError(3,48.156);
   Zmm_2bjet_dR_2b_all__623->SetBinError(4,51.79768);
   Zmm_2bjet_dR_2b_all__623->SetBinError(5,56.83309);
   Zmm_2bjet_dR_2b_all__623->SetBinError(6,61.70899);
   Zmm_2bjet_dR_2b_all__623->SetBinError(7,69.74238);
   Zmm_2bjet_dR_2b_all__623->SetBinError(8,77.63376);
   Zmm_2bjet_dR_2b_all__623->SetBinError(9,56.17829);
   Zmm_2bjet_dR_2b_all__623->SetBinError(10,38.74274);
   Zmm_2bjet_dR_2b_all__623->SetBinError(11,26.36285);
   Zmm_2bjet_dR_2b_all__623->SetBinError(12,17.32051);
   Zmm_2bjet_dR_2b_all__623->SetBinError(13,10.04988);
   Zmm_2bjet_dR_2b_all__623->SetBinError(14,3.316625);
   Zmm_2bjet_dR_2b_all__623->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all__623->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all__623->SetLineWidth(2);
   Zmm_2bjet_dR_2b_all__623->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b_all__623->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dR_2b_all_fx1623[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_all_fy1623[25] = {
   4.977843,
   3716.787,
   5023.723,
   6621.204,
   8297.659,
   10240.75,
   12569.55,
   15757.9,
   9200.154,
   4687.568,
   2374.401,
   908.6397,
   258.0007,
   38.9665,
   1.123703,
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_all_fex1623[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_all_fey1623[25] = {
   2.187593,
   55.03272,
   63.62081,
   72.50048,
   80.54643,
   90.10099,
   100.0981,
   114.8586,
   89.50012,
   64.155,
   46.29706,
   28.80312,
   15.87935,
   6.045398,
   1.123703,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dR_2b_all_fx1623,Graph_from_Zmm_2bjet_dR_2b_all_fy1623,Graph_from_Zmm_2bjet_dR_2b_all_fex1623,Graph_from_Zmm_2bjet_dR_2b_all_fey1623);
   gre->SetName("Graph_from_Zmm_2bjet_dR_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dR_2b_all1623 = new TH1F("Graph_Graph_from_Zmm_2bjet_dR_2b_all1623","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->SetMaximum(17460.04);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b_all1623->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dR_2b_all1623);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dR_2b_all","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__624 = new TH1D("data_mc_ratio__624","",25,0,10);
   data_mc_ratio__624->SetBinContent(1,0.2008902);
   data_mc_ratio__624->SetBinContent(2,0.5733447);
   data_mc_ratio__624->SetBinContent(3,0.4616099);
   data_mc_ratio__624->SetBinContent(4,0.4052133);
   data_mc_ratio__624->SetBinContent(5,0.3892664);
   data_mc_ratio__624->SetBinContent(6,0.3718479);
   data_mc_ratio__624->SetBinContent(7,0.3869668);
   data_mc_ratio__624->SetBinContent(8,0.3824747);
   data_mc_ratio__624->SetBinContent(9,0.3430377);
   data_mc_ratio__624->SetBinContent(10,0.3202087);
   data_mc_ratio__624->SetBinContent(11,0.2927054);
   data_mc_ratio__624->SetBinContent(12,0.3301639);
   data_mc_ratio__624->SetBinContent(13,0.3914718);
   data_mc_ratio__624->SetBinContent(14,0.2822937);
   data_mc_ratio__624->SetBinError(1,0.2008902);
   data_mc_ratio__624->SetBinError(2,0.01242007);
   data_mc_ratio__624->SetBinError(3,0.00958572);
   data_mc_ratio__624->SetBinError(4,0.007823001);
   data_mc_ratio__624->SetBinError(5,0.006849292);
   data_mc_ratio__624->SetBinError(6,0.00602583);
   data_mc_ratio__624->SetBinError(7,0.005548517);
   data_mc_ratio__624->SetBinError(8,0.004926655);
   data_mc_ratio__624->SetBinError(9,0.006106233);
   data_mc_ratio__624->SetBinError(10,0.008264999);
   data_mc_ratio__624->SetBinError(11,0.01110295);
   data_mc_ratio__624->SetBinError(12,0.01906202);
   data_mc_ratio__624->SetBinError(13,0.0389529);
   data_mc_ratio__624->SetBinError(14,0.08511477);
   data_mc_ratio__624->SetMinimum(0.4);
   data_mc_ratio__624->SetMaximum(1.6);
   data_mc_ratio__624->SetEntries(433.1674);
   data_mc_ratio__624->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__624->SetLineColor(ci);
   data_mc_ratio__624->SetLineWidth(2);
   data_mc_ratio__624->SetMarkerStyle(20);
   data_mc_ratio__624->SetMarkerSize(1.2);
   data_mc_ratio__624->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__624->GetXaxis()->SetRange(1,15);
   data_mc_ratio__624->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__624->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__624->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__624->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__624->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__624->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__624->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__624->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__624->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__624->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__624->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__624->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__624->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__624->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1624[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1624[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1624[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1624[25] = {
   0.4394661,
   0.01480653,
   0.01266408,
   0.01094974,
   0.009707127,
   0.008798284,
   0.007963534,
   0.00728895,
   0.00972811,
   0.0136862,
   0.01949841,
   0.03169917,
   0.06154768,
   0.1551435,
   1,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1624,Graph_from_mc_statistical_error_fy1624,Graph_from_mc_statistical_error_fex1624,Graph_from_mc_statistical_error_fey1624);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1624 = new TH1F("Graph_Graph_from_mc_statistical_error1624","",100,0,11);
   Graph_Graph_from_mc_statistical_error1624->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1624->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1624->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1624->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1624->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1624);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_All_amcnlo);
}
