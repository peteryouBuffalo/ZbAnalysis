void pt_lep1_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_All_amcnlo/pt_lep1_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:16 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_All_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_All_amcnlo", "pt_lep1_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-42.09652,210.4839,42064.42);
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
   st->SetMaximum(36051.21);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",40,0,200);
   st_stack_176->SetMinimum(0.01);
   st_stack_176->SetMaximum(37853.77);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetRange(1,40);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetLabelSize(0.035);
   st_stack_176->GetXaxis()->SetTitleSize(0.035);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Events/5.0");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetLabelSize(0.05);
   st_stack_176->GetYaxis()->SetTitleSize(0.057);
   st_stack_176->GetYaxis()->SetTitleOffset(1.2);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetLabelSize(0.035);
   st_stack_176->GetZaxis()->SetTitleSize(0.035);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_1 = new TH1D("Zee_2bjet_pt_lep1_all_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(8,61.419);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(9,48.33608);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(10,32.17612);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(11,21.76598);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(12,12.39758);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(13,6.070366);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(14,4.624322);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(15,2.100309);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(16,2.027551);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(17,1.241982);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(18,0.705091);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(19,0.4378667);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(20,0.3962764);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(21,0.0486711);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(29,0.1964644);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(8,3.862589);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(9,3.34296);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(10,2.735966);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(11,2.245975);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(12,1.697956);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(13,1.162103);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(14,1.074702);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(15,0.6744761);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(16,0.6827595);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(17,0.5654144);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(18,0.4156771);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(19,0.3107972);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(20,0.2802197);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(21,0.0486711);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(29,0.1964644);
   Zee_2bjet_pt_lep1_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_2 = new TH1D("Zee_2bjet_pt_lep1_all_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(8,140.0597);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(9,102.2122);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(10,60.11548);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(11,37.07801);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(12,25.25414);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(13,18.13465);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(14,13.66324);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(15,11.75719);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(16,10.06433);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(17,7.761994);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(18,3.255241);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(19,4.486262);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(20,2.069837);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(22,2.647572);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(23,1.647036);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(24,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(25,1.748577);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(26,1.446555);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(28,0.2529913);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(29,0.4985287);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(30,0.9970574);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(31,1.148507);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(33,0.2529913);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(34,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(36,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(41,0.4985287);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(8,7.579377);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(9,6.465427);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(10,5.046228);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(11,3.87108);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(12,3.18155);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(13,2.713088);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(14,2.340836);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(15,2.19601);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(16,2.022922);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(17,1.800361);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(18,1.168276);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(19,1.332227);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(20,0.9426081);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(22,0.9568572);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(23,0.8424663);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(24,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(25,0.8997762);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(26,0.7416542);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(28,0.2529913);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(29,0.4985287);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(30,0.7050261);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(31,0.6791308);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(33,0.2529913);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(34,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(36,0.2980476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(41,0.4985287);
   Zee_2bjet_pt_lep1_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_3 = new TH1D("Zee_2bjet_pt_lep1_all_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(8,2493.102);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(9,1906.839);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(10,1261.266);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(11,768.2187);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(12,433.0491);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(13,226.7467);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(14,116.3492);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(15,61.35125);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(16,30.81172);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(17,10.72345);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(18,7.085392);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(19,4.160549);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(20,3.903167);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(21,1.847578);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(22,1.538183);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(23,1.292663);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(24,0.5061489);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(25,0.593493);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(26,0.1604915);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(27,0.5754263);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(29,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(30,0.1651136);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(33,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(40,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(8,22.79727);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(9,19.88124);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(10,16.12851);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(11,12.5813);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(12,9.611648);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(13,6.863814);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(14,4.909631);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(15,3.579073);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(16,2.523328);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(17,1.451599);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(18,1.127976);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(19,0.8746501);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(20,0.8352712);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(21,0.4894452);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(22,0.5520896);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(23,0.6475926);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(24,0.2495118);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(25,0.2641875);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(26,0.1135317);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(27,0.4266002);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(29,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(30,0.116753);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(33,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(40,0.08255682);
   Zee_2bjet_pt_lep1_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_pt_lep1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_3,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_4 = new TH1D("Zee_2bjet_pt_lep1_all_stack_4","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(8,33.13715);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(9,27.69017);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(10,19.42148);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(11,14.01455);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(12,10.97022);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(13,8.692732);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(14,6.939515);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(15,5.586021);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(16,4.586218);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(17,3.788656);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(18,3.076842);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(19,2.501424);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(20,2.066484);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(21,1.688046);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(22,1.479017);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(23,1.215644);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(24,0.9760934);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(25,0.8419237);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(26,0.7225385);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(27,0.6000991);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(28,0.5425545);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(29,0.458963);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(30,0.3715758);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(31,0.3251351);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(32,0.2735038);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(33,0.2445752);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(34,0.2016059);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(35,0.1789269);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(36,0.1575469);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(37,0.1207213);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(38,0.1126102);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(39,0.1026126);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(40,0.08552682);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinContent(41,0.4591253);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(8,0.1353219);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(9,0.1235043);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(10,0.1034791);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(11,0.08801542);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(12,0.07783963);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(13,0.06926173);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(14,0.06193264);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(15,0.05550801);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(16,0.05036288);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(17,0.04587071);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(18,0.04125836);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(19,0.03716329);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(20,0.03381387);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(21,0.03054992);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(22,0.02857211);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(23,0.0259467);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(24,0.02312405);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(25,0.02156185);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(26,0.02001206);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(27,0.01822664);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(28,0.01743688);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(29,0.01594323);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(30,0.01438876);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(31,0.013443);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(32,0.01227542);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(33,0.01166256);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(34,0.01065767);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(35,0.009869108);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(36,0.009307771);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(37,0.008227329);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(38,0.007936738);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(39,0.007577324);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(40,0.006816335);
   Zee_2bjet_pt_lep1_all_stack_4->SetBinError(41,0.01597186);
   Zee_2bjet_pt_lep1_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_pt_lep1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_4->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_4,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_5 = new TH1D("Zee_2bjet_pt_lep1_all_stack_5","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(8,17100.45);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(9,13503.47);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(10,7629.928);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(11,4587.074);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(12,3040.063);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(13,1948.027);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(14,1316.182);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(15,984.1764);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(16,725.3028);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(17,521.8242);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(18,408.3069);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(19,295.4604);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(20,227.2631);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(21,160.0409);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(22,151.2227);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(23,121.0466);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(24,96.44093);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(25,60.09553);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(26,53.02161);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(27,48.35606);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(28,41.76108);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(29,29.68757);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(30,19.25518);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(31,22.54522);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(32,21.54554);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(33,12.30303);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(34,9.513772);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(35,5.641878);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(36,9.9512);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(37,5.037609);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(38,6.370164);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(39,4.185304);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(40,2.894629);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinContent(41,27.9157);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(8,127.3928);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(9,113.231);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(10,83.19485);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(11,64.18657);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(12,52.14361);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(13,41.55453);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(14,34.00858);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(15,29.46063);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(16,25.34682);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(17,21.51794);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(18,19.09149);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(19,15.91151);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(20,14.09651);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(21,11.85867);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(22,11.53813);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(23,10.43186);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(24,9.098568);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(25,7.246286);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(26,6.821596);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(27,6.647945);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(28,6.014382);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(29,5.093005);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(30,4.208424);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(31,4.479212);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(32,4.423082);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(33,3.273645);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(34,3.027177);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(35,2.139187);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(36,2.914299);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(37,2.151297);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(38,2.299387);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(39,1.775949);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(40,1.341961);
   Zee_2bjet_pt_lep1_all_stack_5->SetBinError(41,4.985061);
   Zee_2bjet_pt_lep1_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_pt_lep1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_5->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1_all__351 = new TH1D("Zee_2bjet_pt_lep1_all__351","",40,0,200);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(8,7144);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(9,5615);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(10,3301);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(11,2015);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(12,1232);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(13,811);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(14,542);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(15,397);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(16,267);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(17,189);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(18,129);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(19,101);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(20,104);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(21,76);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(22,55);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(23,44);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(24,41);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(25,29);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(26,30);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(27,22);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(28,13);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(29,16);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(30,11);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(31,12);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(32,14);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(33,7);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(34,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(35,4);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(36,5);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(37,5);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(38,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(39,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(40,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(41,10);
   Zee_2bjet_pt_lep1_all__351->SetBinError(8,84.52219);
   Zee_2bjet_pt_lep1_all__351->SetBinError(9,74.9333);
   Zee_2bjet_pt_lep1_all__351->SetBinError(10,57.45433);
   Zee_2bjet_pt_lep1_all__351->SetBinError(11,44.88875);
   Zee_2bjet_pt_lep1_all__351->SetBinError(12,35.09986);
   Zee_2bjet_pt_lep1_all__351->SetBinError(13,28.47806);
   Zee_2bjet_pt_lep1_all__351->SetBinError(14,23.28089);
   Zee_2bjet_pt_lep1_all__351->SetBinError(15,19.92486);
   Zee_2bjet_pt_lep1_all__351->SetBinError(16,16.34013);
   Zee_2bjet_pt_lep1_all__351->SetBinError(17,13.74773);
   Zee_2bjet_pt_lep1_all__351->SetBinError(18,11.35782);
   Zee_2bjet_pt_lep1_all__351->SetBinError(19,10.04988);
   Zee_2bjet_pt_lep1_all__351->SetBinError(20,10.19804);
   Zee_2bjet_pt_lep1_all__351->SetBinError(21,8.717798);
   Zee_2bjet_pt_lep1_all__351->SetBinError(22,7.416198);
   Zee_2bjet_pt_lep1_all__351->SetBinError(23,6.63325);
   Zee_2bjet_pt_lep1_all__351->SetBinError(24,6.403124);
   Zee_2bjet_pt_lep1_all__351->SetBinError(25,5.385165);
   Zee_2bjet_pt_lep1_all__351->SetBinError(26,5.477226);
   Zee_2bjet_pt_lep1_all__351->SetBinError(27,4.690416);
   Zee_2bjet_pt_lep1_all__351->SetBinError(28,3.605551);
   Zee_2bjet_pt_lep1_all__351->SetBinError(29,4);
   Zee_2bjet_pt_lep1_all__351->SetBinError(30,3.316625);
   Zee_2bjet_pt_lep1_all__351->SetBinError(31,3.464102);
   Zee_2bjet_pt_lep1_all__351->SetBinError(32,3.741657);
   Zee_2bjet_pt_lep1_all__351->SetBinError(33,2.645751);
   Zee_2bjet_pt_lep1_all__351->SetBinError(34,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(35,2);
   Zee_2bjet_pt_lep1_all__351->SetBinError(36,2.236068);
   Zee_2bjet_pt_lep1_all__351->SetBinError(37,2.236068);
   Zee_2bjet_pt_lep1_all__351->SetBinError(38,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(39,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(40,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(41,3.162278);
   Zee_2bjet_pt_lep1_all__351->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all__351->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all__351->SetLineWidth(2);
   Zee_2bjet_pt_lep1_all__351->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1_all__351->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_pt_lep1_all_fx1351[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_Zee_2bjet_pt_lep1_all_fy1351[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   19828.17,
   15588.55,
   9002.907,
   5428.151,
   3521.734,
   2207.671,
   1457.758,
   1064.971,
   772.7926,
   545.3403,
   422.4295,
   307.0465,
   235.6988,
   163.6252,
   156.8875,
   125.2019,
   98.22122,
   63.27952,
   55.3512,
   49.53158,
   42.55663,
   30.92408,
   20.78893,
   24.01887,
   21.81904,
   12.88316,
   10.01343,
   5.820804,
   10.40679,
   5.158331,
   6.482774,
   4.287917,
   3.062712};
   Double_t Graph_from_Zee_2bjet_pt_lep1_all_fex1351[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_Zee_2bjet_pt_lep1_all_fey1351[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   129.6959,
   115.1934,
   84.93805,
   65.56099,
   53.14463,
   42.22093,
   34.45761,
   29.76607,
   25.56148,
   21.64929,
   19.16499,
   15.99419,
   14.15548,
   11.86891,
   11.59093,
   10.48587,
   9.106896,
   7.306745,
   6.862763,
   6.661643,
   6.019726,
   5.121806,
   4.268692,
   4.530423,
   4.423099,
   3.284464,
   3.041833,
   2.139209,
   2.929515,
   2.151313,
   2.299401,
   1.775965,
   1.344515};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_pt_lep1_all_fx1351,Graph_from_Zee_2bjet_pt_lep1_all_fy1351,Graph_from_Zee_2bjet_pt_lep1_all_fex1351,Graph_from_Zee_2bjet_pt_lep1_all_fey1351);
   gre->SetName("Graph_from_Zee_2bjet_pt_lep1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_pt_lep1_all1351 = new TH1F("Graph_Graph_from_Zee_2bjet_pt_lep1_all1351","",100,0,220);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->SetMaximum(21953.65);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep1_all1351->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_pt_lep1_all1351);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_pt_lep1_all","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-30.64508,-0.2774193,210.4839,1.658065);
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
   
   TH1D *data_mc_ratio__352 = new TH1D("data_mc_ratio__352","",40,0,200);
   data_mc_ratio__352->SetBinContent(8,0.3602955);
   data_mc_ratio__352->SetBinContent(9,0.3602003);
   data_mc_ratio__352->SetBinContent(10,0.3666593);
   data_mc_ratio__352->SetBinContent(11,0.371213);
   data_mc_ratio__352->SetBinContent(12,0.3498277);
   data_mc_ratio__352->SetBinContent(13,0.3673555);
   data_mc_ratio__352->SetBinContent(14,0.3718038);
   data_mc_ratio__352->SetBinContent(15,0.37278);
   data_mc_ratio__352->SetBinContent(16,0.3455002);
   data_mc_ratio__352->SetBinContent(17,0.3465726);
   data_mc_ratio__352->SetBinContent(18,0.3053764);
   data_mc_ratio__352->SetBinContent(19,0.3289404);
   data_mc_ratio__352->SetBinContent(20,0.4412411);
   data_mc_ratio__352->SetBinContent(21,0.4644761);
   data_mc_ratio__352->SetBinContent(22,0.3505696);
   data_mc_ratio__352->SetBinContent(23,0.3514324);
   data_mc_ratio__352->SetBinContent(24,0.4174251);
   data_mc_ratio__352->SetBinContent(25,0.4582841);
   data_mc_ratio__352->SetBinContent(26,0.5419937);
   data_mc_ratio__352->SetBinContent(27,0.4441611);
   data_mc_ratio__352->SetBinContent(28,0.3054753);
   data_mc_ratio__352->SetBinContent(29,0.5173961);
   data_mc_ratio__352->SetBinContent(30,0.5291279);
   data_mc_ratio__352->SetBinContent(31,0.4996073);
   data_mc_ratio__352->SetBinContent(32,0.6416413);
   data_mc_ratio__352->SetBinContent(33,0.5433451);
   data_mc_ratio__352->SetBinContent(34,0.1997318);
   data_mc_ratio__352->SetBinContent(35,0.6871902);
   data_mc_ratio__352->SetBinContent(36,0.4804553);
   data_mc_ratio__352->SetBinContent(37,0.9693058);
   data_mc_ratio__352->SetBinContent(38,0.3085099);
   data_mc_ratio__352->SetBinContent(39,0.466427);
   data_mc_ratio__352->SetBinContent(40,0.653016);
   data_mc_ratio__352->SetBinContent(41,0.3463401);
   data_mc_ratio__352->SetBinError(8,0.004262733);
   data_mc_ratio__352->SetBinError(9,0.004806945);
   data_mc_ratio__352->SetBinError(10,0.006381753);
   data_mc_ratio__352->SetBinError(11,0.008269621);
   data_mc_ratio__352->SetBinError(12,0.009966641);
   data_mc_ratio__352->SetBinError(13,0.0128996);
   data_mc_ratio__352->SetBinError(14,0.01597034);
   data_mc_ratio__352->SetBinError(15,0.01870929);
   data_mc_ratio__352->SetBinError(16,0.02114427);
   data_mc_ratio__352->SetBinError(17,0.02520945);
   data_mc_ratio__352->SetBinError(18,0.02688689);
   data_mc_ratio__352->SetBinError(19,0.03273079);
   data_mc_ratio__352->SetBinError(20,0.04326725);
   data_mc_ratio__352->SetBinError(21,0.05327906);
   data_mc_ratio__352->SetBinError(22,0.0472708);
   data_mc_ratio__352->SetBinError(23,0.05298043);
   data_mc_ratio__352->SetBinError(24,0.06519084);
   data_mc_ratio__352->SetBinError(25,0.08510122);
   data_mc_ratio__352->SetBinError(26,0.09895406);
   data_mc_ratio__352->SetBinError(27,0.09469546);
   data_mc_ratio__352->SetBinError(28,0.08472361);
   data_mc_ratio__352->SetBinError(29,0.129349);
   data_mc_ratio__352->SetBinError(30,0.1595381);
   data_mc_ratio__352->SetBinError(31,0.1442242);
   data_mc_ratio__352->SetBinError(32,0.1714859);
   data_mc_ratio__352->SetBinError(33,0.2053652);
   data_mc_ratio__352->SetBinError(34,0.1412317);
   data_mc_ratio__352->SetBinError(35,0.3435951);
   data_mc_ratio__352->SetBinError(36,0.2148662);
   data_mc_ratio__352->SetBinError(37,0.4334867);
   data_mc_ratio__352->SetBinError(38,0.2181494);
   data_mc_ratio__352->SetBinError(39,0.3298137);
   data_mc_ratio__352->SetBinError(40,0.461752);
   data_mc_ratio__352->SetBinError(41,0.1249262);
   data_mc_ratio__352->SetMinimum(0.4);
   data_mc_ratio__352->SetMaximum(1.6);
   data_mc_ratio__352->SetEntries(151.5301);
   data_mc_ratio__352->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__352->SetLineColor(ci);
   data_mc_ratio__352->SetLineWidth(2);
   data_mc_ratio__352->SetMarkerStyle(20);
   data_mc_ratio__352->SetMarkerSize(1.2);
   data_mc_ratio__352->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__352->GetXaxis()->SetRange(1,40);
   data_mc_ratio__352->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__352->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__352->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__352->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__352->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__352->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__352->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__352->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__352->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__352->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__352->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__352->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__352->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__352->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1352[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_mc_statistical_error_fy1352[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1352[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_mc_statistical_error_fey1352[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006540995,
   0.007389617,
   0.009434514,
   0.01207796,
   0.01509047,
   0.01912465,
   0.0236374,
   0.02795012,
   0.03307677,
   0.03969869,
   0.04536849,
   0.05209044,
   0.06005747,
   0.07253717,
   0.0738805,
   0.08375172,
   0.09271821,
   0.1154678,
   0.1239858,
   0.1344928,
   0.1414521,
   0.1656251,
   0.2053349,
   0.1886194,
   0.2027174,
   0.2549425,
   0.3037754,
   0.3675109,
   0.2815002,
   0.4170561,
   0.354694,
   0.4141789,
   0.4389949};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1352,Graph_from_mc_statistical_error_fy1352,Graph_from_mc_statistical_error_fex1352,Graph_from_mc_statistical_error_fey1352);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1352 = new TH1F("Graph_Graph_from_mc_statistical_error1352","",100,0,220);
   Graph_Graph_from_mc_statistical_error1352->SetMinimum(0.4732062);
   Graph_Graph_from_mc_statistical_error1352->SetMaximum(1.526794);
   Graph_Graph_from_mc_statistical_error1352->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1352->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1352->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1352);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_All_amcnlo);
}
