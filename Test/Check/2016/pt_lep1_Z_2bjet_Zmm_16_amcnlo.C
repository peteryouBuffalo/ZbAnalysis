void pt_lep1_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_16_amcnlo/pt_lep1_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:28 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_16_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_16_amcnlo", "pt_lep1_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-15.12898,210.4839,15123.85);
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
   st->SetMaximum(12961.86);
   
   TH1F *st_stack_261 = new TH1F("st_stack_261","",40,0,200);
   st_stack_261->SetMinimum(0.01);
   st_stack_261->SetMaximum(13609.95);
   st_stack_261->SetDirectory(0);
   st_stack_261->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_261->SetLineColor(ci);
   st_stack_261->GetXaxis()->SetRange(1,40);
   st_stack_261->GetXaxis()->SetLabelFont(42);
   st_stack_261->GetXaxis()->SetLabelSize(0.035);
   st_stack_261->GetXaxis()->SetTitleSize(0.035);
   st_stack_261->GetXaxis()->SetTitleFont(42);
   st_stack_261->GetYaxis()->SetTitle("Events/5.0");
   st_stack_261->GetYaxis()->SetLabelFont(42);
   st_stack_261->GetYaxis()->SetLabelSize(0.05);
   st_stack_261->GetYaxis()->SetTitleSize(0.057);
   st_stack_261->GetYaxis()->SetTitleOffset(1.2);
   st_stack_261->GetYaxis()->SetTitleFont(42);
   st_stack_261->GetZaxis()->SetLabelFont(42);
   st_stack_261->GetZaxis()->SetLabelSize(0.035);
   st_stack_261->GetZaxis()->SetTitleSize(0.035);
   st_stack_261->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_261);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,23.05264);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,13.20919);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,7.339751);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,5.313487);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,2.557952);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,2.35981);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,1.179346);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,0.9828813);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.5893932);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(20,0.1964644);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(21,0.1970237);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,2.093984);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,1.595774);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,1.198359);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,1.022582);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,0.709449);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.681219);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.4814661);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.4395581);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.3402863);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(20,0.1964644);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(21,0.1970237);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(305);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,42.22568);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,29.63146);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,18.85321);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,12.10861);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,8.768133);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,6.806553);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,3.936567);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,3.999372);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,4.075584);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,1.490238);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,1.19219);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,1.490238);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(20,0.8941428);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(21,0.8941428);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(23,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(25,0.5960952);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(26,0.8941428);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(27,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(28,0.5960952);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(29,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(33,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(35,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(39,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(40,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,3.577184);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,2.98066);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,2.40362);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,1.959562);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,1.632809);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,1.460879);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,1.162533);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,1.115683);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,1.194027);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,0.6664547);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.5960952);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,0.6664547);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(20,0.5162336);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(21,0.5162336);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(23,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(25,0.4215029);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(26,0.5162336);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(27,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(28,0.4215029);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(29,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(33,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(35,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(39,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(40,0.2980476);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(463);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,707.6864);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,548.7783);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,373.512);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,229.2094);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,122.2969);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,65.04328);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,38.55859);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,16.74767);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,7.010653);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,5.257989);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,1.168442);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,0.9737017);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,1.363182);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(23,0.3894807);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(24,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(25,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(26,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,11.73947);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,10.33776);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,8.528649);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,6.681042);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,4.880179);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,3.55901);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,2.74024);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,1.805948);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,1.168442);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,1.011901);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.4770145);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.4354527);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.5152345);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(23,0.2754044);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(24,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(25,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(26,0.1947403);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(10880);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_4 = new TH1D("Zmm_2bjet_pt_lep1_stack_4","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(8,10.82136);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(9,9.099421);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(10,6.487829);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(11,4.768792);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(12,3.669327);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(13,2.830673);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(14,2.284708);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(15,1.774677);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(16,1.45185);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(17,1.245519);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(18,1.018324);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(19,0.7998217);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(20,0.7099866);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(21,0.5900134);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(22,0.4723585);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(23,0.4033883);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(24,0.3170308);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(25,0.297325);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(26,0.2492198);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(27,0.1918413);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(28,0.1721355);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(29,0.1547481);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1205528);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(31,0.1054837);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(32,0.08693714);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(33,0.08345965);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(34,0.06839055);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(35,0.07128846);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(36,0.05332145);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(37,0.04230941);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(38,0.04115025);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(39,0.02897905);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(40,0.03071779);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(41,0.1843067);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(8,0.07919502);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(9,0.07262128);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(10,0.06132065);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(11,0.05257282);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(12,0.04611585);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(13,0.04050437);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(14,0.03638919);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(15,0.03207131);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(16,0.02900801);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(17,0.02686781);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(18,0.02429405);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(19,0.02153048);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(20,0.02028533);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(21,0.01849217);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(22,0.016546);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(23,0.0152904);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(24,0.01355526);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(25,0.01312722);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(26,0.01201845);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(27,0.01054455);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(28,0.009988317);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(29,0.009470431);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(30,0.008358835);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(31,0.007818974);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(32,0.007098388);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(33,0.006954971);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(34,0.00629586);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(35,0.006427864);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(36,0.005559145);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(37,0.004951942);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(38,0.004883636);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(39,0.004098256);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(40,0.004219413);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(41,0.01033541);
   Zmm_2bjet_pt_lep1_stack_4->SetEntries(87524);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_4,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_5 = new TH1D("Zmm_2bjet_pt_lep1_stack_5","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(8,6345.236);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(9,4904.393);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(10,2858.685);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(11,1727.597);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(12,1096.127);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(13,732.1654);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(14,489.4019);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(15,346.5708);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(16,258.9904);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(17,192.4393);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(18,141.9552);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(19,99.23672);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(20,92.73877);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(21,67.47872);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(22,60.48093);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(23,39.25563);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(24,37.48818);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(25,25.26005);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(26,17.49448);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(27,15.49511);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(28,12.9959);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(29,13.99559);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(30,10.99653);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(31,13.99559);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(32,5.498266);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(33,4.498582);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(34,4.498582);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(35,5.998109);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(36,4.498582);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(37,4.498582);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(38,2.999054);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(39,0.4998424);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(40,1.99937);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(41,10.99653);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(8,58.48839);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(9,51.81526);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(10,38.77255);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(11,29.76895);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(12,23.64316);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(13,19.24819);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(14,15.75185);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(15,13.23963);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(16,11.4139);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(17,9.807616);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(18,8.423494);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(19,7.057509);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(20,6.823524);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(21,5.807644);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(22,5.498266);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(23,4.45279);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(24,4.328762);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(25,3.582143);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(26,2.957108);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(27,2.783005);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(28,2.548706);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(29,2.644917);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(30,2.344469);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(31,2.644917);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(32,1.65779);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(33,1.499527);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(34,1.499527);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(35,1.731505);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(36,1.499527);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(37,1.499527);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(38,1.224359);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(39,0.4998424);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(40,0.9996848);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(41,2.344469);
   Zmm_2bjet_pt_lep1_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1__521 = new TH1D("Zmm_2bjet_pt_lep1__521","",40,0,200);
   Zmm_2bjet_pt_lep1__521->SetBinContent(8,2391);
   Zmm_2bjet_pt_lep1__521->SetBinContent(9,1901);
   Zmm_2bjet_pt_lep1__521->SetBinContent(10,1130);
   Zmm_2bjet_pt_lep1__521->SetBinContent(11,711);
   Zmm_2bjet_pt_lep1__521->SetBinContent(12,408);
   Zmm_2bjet_pt_lep1__521->SetBinContent(13,300);
   Zmm_2bjet_pt_lep1__521->SetBinContent(14,183);
   Zmm_2bjet_pt_lep1__521->SetBinContent(15,119);
   Zmm_2bjet_pt_lep1__521->SetBinContent(16,89);
   Zmm_2bjet_pt_lep1__521->SetBinContent(17,76);
   Zmm_2bjet_pt_lep1__521->SetBinContent(18,42);
   Zmm_2bjet_pt_lep1__521->SetBinContent(19,43);
   Zmm_2bjet_pt_lep1__521->SetBinContent(20,23);
   Zmm_2bjet_pt_lep1__521->SetBinContent(21,14);
   Zmm_2bjet_pt_lep1__521->SetBinContent(22,25);
   Zmm_2bjet_pt_lep1__521->SetBinContent(23,14);
   Zmm_2bjet_pt_lep1__521->SetBinContent(24,9);
   Zmm_2bjet_pt_lep1__521->SetBinContent(25,9);
   Zmm_2bjet_pt_lep1__521->SetBinContent(26,8);
   Zmm_2bjet_pt_lep1__521->SetBinContent(27,11);
   Zmm_2bjet_pt_lep1__521->SetBinContent(28,5);
   Zmm_2bjet_pt_lep1__521->SetBinContent(29,2);
   Zmm_2bjet_pt_lep1__521->SetBinContent(30,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(31,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(32,3);
   Zmm_2bjet_pt_lep1__521->SetBinContent(33,4);
   Zmm_2bjet_pt_lep1__521->SetBinContent(34,2);
   Zmm_2bjet_pt_lep1__521->SetBinContent(36,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(38,2);
   Zmm_2bjet_pt_lep1__521->SetBinContent(40,2);
   Zmm_2bjet_pt_lep1__521->SetBinContent(41,7);
   Zmm_2bjet_pt_lep1__521->SetBinError(8,48.89785);
   Zmm_2bjet_pt_lep1__521->SetBinError(9,43.60046);
   Zmm_2bjet_pt_lep1__521->SetBinError(10,33.61547);
   Zmm_2bjet_pt_lep1__521->SetBinError(11,26.66458);
   Zmm_2bjet_pt_lep1__521->SetBinError(12,20.19901);
   Zmm_2bjet_pt_lep1__521->SetBinError(13,17.32051);
   Zmm_2bjet_pt_lep1__521->SetBinError(14,13.52775);
   Zmm_2bjet_pt_lep1__521->SetBinError(15,10.90871);
   Zmm_2bjet_pt_lep1__521->SetBinError(16,9.433981);
   Zmm_2bjet_pt_lep1__521->SetBinError(17,8.717798);
   Zmm_2bjet_pt_lep1__521->SetBinError(18,6.480741);
   Zmm_2bjet_pt_lep1__521->SetBinError(19,6.557439);
   Zmm_2bjet_pt_lep1__521->SetBinError(20,4.795832);
   Zmm_2bjet_pt_lep1__521->SetBinError(21,3.741657);
   Zmm_2bjet_pt_lep1__521->SetBinError(22,5);
   Zmm_2bjet_pt_lep1__521->SetBinError(23,3.741657);
   Zmm_2bjet_pt_lep1__521->SetBinError(24,3);
   Zmm_2bjet_pt_lep1__521->SetBinError(25,3);
   Zmm_2bjet_pt_lep1__521->SetBinError(26,2.828427);
   Zmm_2bjet_pt_lep1__521->SetBinError(27,3.316625);
   Zmm_2bjet_pt_lep1__521->SetBinError(28,2.236068);
   Zmm_2bjet_pt_lep1__521->SetBinError(29,1.414214);
   Zmm_2bjet_pt_lep1__521->SetBinError(30,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(31,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(32,1.732051);
   Zmm_2bjet_pt_lep1__521->SetBinError(33,2);
   Zmm_2bjet_pt_lep1__521->SetBinError(34,1.414214);
   Zmm_2bjet_pt_lep1__521->SetBinError(36,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(38,1.414214);
   Zmm_2bjet_pt_lep1__521->SetBinError(40,1.414214);
   Zmm_2bjet_pt_lep1__521->SetBinError(41,2.645751);
   Zmm_2bjet_pt_lep1__521->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__521->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__521->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__521->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__521->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fx1521[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fy1521[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7129.022,
   5505.111,
   3264.878,
   1978.997,
   1233.419,
   809.2057,
   535.3611,
   370.0754,
   271.5285,
   200.4331,
   145.9236,
   102.5005,
   95.90255,
   69.35464,
   61.25134,
   40.34655,
   37.99995,
   26.34821,
   18.83259,
   15.985,
   13.76413,
   14.44838,
   11.11709,
   14.10107,
   5.585204,
   4.880089,
   4.566972,
   6.367445,
   4.551903,
   4.540891,
   3.040205,
   0.826869,
   2.328135};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fex1521[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fey1521[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   59.79878,
   52.94456,
   39.79027,
   30.58946,
   24.20716,
   19.64076,
   16.0379,
   13.41597,
   11.53555,
   9.882214,
   8.464898,
   7.1023,
   6.865235,
   5.837149,
   5.506364,
   4.471269,
   4.333162,
   3.612134,
   3.008164,
   2.798939,
   2.583344,
   2.661674,
   2.344484,
   2.644929,
   1.657805,
   1.528876,
   1.49954,
   1.756981,
   1.499537,
   1.499535,
   1.224369,
   0.5819722,
   1.043178};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_pt_lep1_fx1521,Graph_from_Zmm_2bjet_pt_lep1_fy1521,Graph_from_Zmm_2bjet_pt_lep1_fex1521,Graph_from_Zmm_2bjet_pt_lep1_fey1521);
   gre->SetName("Graph_from_Zmm_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_pt_lep11521 = new TH1F("Graph_Graph_from_Zmm_2bjet_pt_lep11521","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->SetMaximum(7907.703);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11521->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_pt_lep11521);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__522 = new TH1D("data_mc_ratio__522","",40,0,200);
   data_mc_ratio__522->SetBinContent(8,0.3353896);
   data_mc_ratio__522->SetBinContent(9,0.3453154);
   data_mc_ratio__522->SetBinContent(10,0.3461079);
   data_mc_ratio__522->SetBinContent(11,0.3592729);
   data_mc_ratio__522->SetBinContent(12,0.3307877);
   data_mc_ratio__522->SetBinContent(13,0.3707339);
   data_mc_ratio__522->SetBinContent(14,0.3418254);
   data_mc_ratio__522->SetBinContent(15,0.3215561);
   data_mc_ratio__522->SetBinContent(16,0.3277741);
   data_mc_ratio__522->SetBinContent(17,0.3791789);
   data_mc_ratio__522->SetBinContent(18,0.2878219);
   data_mc_ratio__522->SetBinContent(19,0.4195102);
   data_mc_ratio__522->SetBinContent(20,0.2398268);
   data_mc_ratio__522->SetBinContent(21,0.201861);
   data_mc_ratio__522->SetBinContent(22,0.4081544);
   data_mc_ratio__522->SetBinContent(23,0.3469937);
   data_mc_ratio__522->SetBinContent(24,0.2368424);
   data_mc_ratio__522->SetBinContent(25,0.3415792);
   data_mc_ratio__522->SetBinContent(26,0.4247956);
   data_mc_ratio__522->SetBinContent(27,0.688145);
   data_mc_ratio__522->SetBinContent(28,0.363263);
   data_mc_ratio__522->SetBinContent(29,0.1384238);
   data_mc_ratio__522->SetBinContent(30,0.08995163);
   data_mc_ratio__522->SetBinContent(31,0.0709166);
   data_mc_ratio__522->SetBinContent(32,0.5371335);
   data_mc_ratio__522->SetBinContent(33,0.8196572);
   data_mc_ratio__522->SetBinContent(34,0.4379269);
   data_mc_ratio__522->SetBinContent(36,0.2196883);
   data_mc_ratio__522->SetBinContent(38,0.6578505);
   data_mc_ratio__522->SetBinContent(40,0.8590567);
   data_mc_ratio__522->SetBinContent(41,0.6260711);
   data_mc_ratio__522->SetBinError(8,0.006858985);
   data_mc_ratio__522->SetBinError(9,0.007919996);
   data_mc_ratio__522->SetBinError(10,0.01029609);
   data_mc_ratio__522->SetBinError(11,0.01347379);
   data_mc_ratio__522->SetBinError(12,0.01637643);
   data_mc_ratio__522->SetBinError(13,0.02140433);
   data_mc_ratio__522->SetBinError(14,0.02526846);
   data_mc_ratio__522->SetBinError(15,0.029477);
   data_mc_ratio__522->SetBinError(16,0.03474398);
   data_mc_ratio__522->SetBinError(17,0.04349481);
   data_mc_ratio__522->SetBinError(18,0.04441188);
   data_mc_ratio__522->SetBinError(19,0.06397471);
   data_mc_ratio__522->SetBinError(20,0.05000734);
   data_mc_ratio__522->SetBinError(21,0.05394963);
   data_mc_ratio__522->SetBinError(22,0.08163087);
   data_mc_ratio__522->SetBinError(23,0.09273797);
   data_mc_ratio__522->SetBinError(24,0.07894747);
   data_mc_ratio__522->SetBinError(25,0.1138597);
   data_mc_ratio__522->SetBinError(26,0.1501879);
   data_mc_ratio__522->SetBinError(27,0.2074835);
   data_mc_ratio__522->SetBinError(28,0.1624561);
   data_mc_ratio__522->SetBinError(29,0.0978804);
   data_mc_ratio__522->SetBinError(30,0.08995163);
   data_mc_ratio__522->SetBinError(31,0.0709166);
   data_mc_ratio__522->SetBinError(32,0.3101142);
   data_mc_ratio__522->SetBinError(33,0.4098286);
   data_mc_ratio__522->SetBinError(34,0.3096611);
   data_mc_ratio__522->SetBinError(36,0.2196883);
   data_mc_ratio__522->SetBinError(38,0.4651705);
   data_mc_ratio__522->SetBinError(40,0.6074448);
   data_mc_ratio__522->SetBinError(41,0.2706093);
   data_mc_ratio__522->SetMinimum(0.4);
   data_mc_ratio__522->SetMaximum(1.6);
   data_mc_ratio__522->SetEntries(82.73358);
   data_mc_ratio__522->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__522->SetLineColor(ci);
   data_mc_ratio__522->SetLineWidth(2);
   data_mc_ratio__522->SetMarkerStyle(20);
   data_mc_ratio__522->SetMarkerSize(1.2);
   data_mc_ratio__522->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__522->GetXaxis()->SetRange(1,40);
   data_mc_ratio__522->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__522->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__522->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__522->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__522->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__522->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__522->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__522->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__522->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__522->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__522->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__522->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__522->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__522->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1522[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008388076,
   0.009617346,
   0.01218737,
   0.01545705,
   0.01962606,
   0.02427165,
   0.02995717,
   0.03625199,
   0.04248377,
   0.04930431,
   0.05800912,
   0.06929041,
   0.07158553,
   0.08416378,
   0.08989785,
   0.1108216,
   0.1140307,
   0.1370922,
   0.1597318,
   0.1750978,
   0.1876867,
   0.1842195,
   0.2108901,
   0.1875694,
   0.2968209,
   0.3132886,
   0.3283446,
   0.2759319,
   0.3294309,
   0.3302293,
   0.4027257,
   0.7038263,
   0.4480744};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1522,Graph_from_mc_statistical_error_fy1522,Graph_from_mc_statistical_error_fex1522,Graph_from_mc_statistical_error_fey1522);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1522 = new TH1F("Graph_Graph_from_mc_statistical_error1522","",100,0,220);
   Graph_Graph_from_mc_statistical_error1522->SetMinimum(0.1554085);
   Graph_Graph_from_mc_statistical_error1522->SetMaximum(1.844592);
   Graph_Graph_from_mc_statistical_error1522->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1522->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1522->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1522);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_16_amcnlo);
}
