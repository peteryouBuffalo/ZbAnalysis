void pt_lep1_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_17_amcnlo/pt_lep1_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:16 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_17_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_17_amcnlo", "pt_lep1_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-12.36603,210.4839,12363.67);
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
   st->SetMaximum(10596.25);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",40,0,200);
   st_stack_174->SetMinimum(0.01);
   st_stack_174->SetMaximum(11126.06);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetRange(1,40);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetLabelSize(0.035);
   st_stack_174->GetXaxis()->SetTitleSize(0.035);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Events/5.0");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetLabelSize(0.05);
   st_stack_174->GetYaxis()->SetTitleSize(0.057);
   st_stack_174->GetYaxis()->SetTitleOffset(1.2);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetLabelSize(0.035);
   st_stack_174->GetZaxis()->SetTitleSize(0.035);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,18.0907);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,16.82643);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,8.232242);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,6.323472);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,2.498787);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(13,2.635232);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,0.808667);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(15,0.8133765);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(16,0.8133765);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(17,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(18,0.2045215);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(19,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(20,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,2.084714);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,1.833283);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,1.283805);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,1.125637);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,0.7050262);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(13,0.7309285);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.4043609);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(15,0.4067087);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(16,0.4067087);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(17,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(18,0.2045215);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(19,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(20,0.199812);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(289);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_2 = new TH1D("Zee_2bjet_pt_lep1_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,52.63289);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,35.14927);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,19.92187);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,12.87868);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,8.699334);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,3.673361);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,2.364577);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,2.969499);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,3.068439);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,2.111586);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(18,1.759655);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(19,0.7038619);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(22,0.9568531);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(25,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(26,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(28,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(31,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(33,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,4.301445);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,3.502855);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,2.71481);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,2.099345);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,1.742565);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,1.114768);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,0.898408);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,0.9974953);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,1.027058);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,0.8620512);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(18,0.7869415);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(19,0.4977055);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(22,0.5583147);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(25,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(26,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(28,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(31,0.3519309);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(33,0.2529913);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(429);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_3 = new TH1D("Zee_2bjet_pt_lep1_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,793.7803);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,595.2235);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,391.7842);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,231.4231);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,143.8546);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,71.89867);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,36.45591);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,20.0434);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,9.338617);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,3.339797);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,1.79712);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(19,0.89856);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(20,0.8206253);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(21,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(22,0.4882473);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(23,0.8206253);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(25,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(26,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(27,0.4103127);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,17.85881);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,15.46701);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,12.56086);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,9.667131);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,7.615066);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,5.390786);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,3.817036);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,2.799197);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,1.930839);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,1.102242);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.8279937);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(19,0.5854799);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(20,0.5802697);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(21,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(22,0.4176485);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(23,0.5802697);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(25,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(26,0.07793469);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(27,0.4103127);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(6204);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_4 = new TH1D("Zee_2bjet_pt_lep1_stack_4","",40,0,200);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(8,10.15596);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(9,8.624913);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(10,5.995576);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(11,4.282456);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(12,3.369344);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(13,2.65313);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(14,2.103814);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(15,1.701051);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(16,1.384841);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(17,1.120356);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(18,0.9217332);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(19,0.7506971);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(20,0.6206958);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(21,0.5106947);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(22,0.4420733);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(23,0.3600035);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(24,0.3031064);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(25,0.2541404);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(26,0.216209);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(27,0.1782776);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(28,0.1479325);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(29,0.1334496);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1051735);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(31,0.09069055);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(32,0.0834491);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(33,0.06655238);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(34,0.0534488);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(35,0.05758677);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(36,0.04724185);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(37,0.03275894);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(38,0.03103479);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(39,0.0289658);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(40,0.02689682);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(41,0.1313806);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(8,0.05917846);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(9,0.05453565);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(10,0.04546934);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(11,0.03842816);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(12,0.03408598);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(13,0.030247);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(14,0.02693437);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(15,0.02421931);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(16,0.0218526);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(17,0.01965537);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(18,0.01782813);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(19,0.01608924);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(20,0.01462994);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(21,0.01327039);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(22,0.01234668);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(23,0.01114183);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(24,0.01022353);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(25,0.009361383);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(26,0.008634557);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(27,0.007840641);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(28,0.007142248);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(29,0.006783624);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(30,0.006022214);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(31,0.005592219);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(32,0.005364311);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(33,0.004790545);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(34,0.004293111);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(35,0.004456198);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(36,0.004036143);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(37,0.003360997);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(38,0.003271354);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(39,0.003160428);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(40,0.003045465);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(41,0.006730832);
   Zee_2bjet_pt_lep1_stack_4->SetEntries(136257);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_4,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_5 = new TH1D("Zee_2bjet_pt_lep1_stack_5","",40,0,200);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(8,4953.278);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(9,3977.128);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(10,2311.312);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(11,1365.383);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(12,907.638);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(13,587.7754);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(14,428.4193);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(15,273.77);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(16,178.975);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(17,146.6944);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(18,103.7476);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(19,90.36994);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(20,61.77287);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(21,46.52786);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(22,39.31457);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(23,34.88949);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(24,25.01604);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(25,17.87957);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(26,13.42889);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(27,11.63837);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(28,8.057331);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(29,9.847849);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(30,6.266813);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(31,8.057331);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(32,8.057331);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(33,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(34,1.790518);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(35,0.895259);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(36,3.581036);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(37,1.790518);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(39,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(40,0.895259);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(41,8.057331);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(8,68.1629);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(9,61.38582);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(10,45.87813);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(11,35.01783);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(12,28.48961);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(13,22.93153);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(14,19.57524);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(15,15.65053);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(16,12.65552);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(17,11.45505);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(18,9.632856);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(19,8.992217);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(20,7.43658);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(21,6.452303);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(22,5.927049);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(23,5.586847);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(24,4.727715);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(25,3.998072);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(26,3.467323);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(27,3.227902);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(28,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(29,2.969238);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(30,2.368633);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(31,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(32,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(33,1.550634);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(34,1.266087);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(35,0.895259);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(36,1.790518);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(37,1.266087);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(39,1.550634);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(40,0.895259);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(41,2.685777);
   Zee_2bjet_pt_lep1_stack_5->SetEntries(17303);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1__347 = new TH1D("Zee_2bjet_pt_lep1__347","",40,0,200);
   Zee_2bjet_pt_lep1__347->SetBinContent(8,1935);
   Zee_2bjet_pt_lep1__347->SetBinContent(9,1598);
   Zee_2bjet_pt_lep1__347->SetBinContent(10,883);
   Zee_2bjet_pt_lep1__347->SetBinContent(11,541);
   Zee_2bjet_pt_lep1__347->SetBinContent(12,313);
   Zee_2bjet_pt_lep1__347->SetBinContent(13,236);
   Zee_2bjet_pt_lep1__347->SetBinContent(14,172);
   Zee_2bjet_pt_lep1__347->SetBinContent(15,105);
   Zee_2bjet_pt_lep1__347->SetBinContent(16,80);
   Zee_2bjet_pt_lep1__347->SetBinContent(17,49);
   Zee_2bjet_pt_lep1__347->SetBinContent(18,37);
   Zee_2bjet_pt_lep1__347->SetBinContent(19,28);
   Zee_2bjet_pt_lep1__347->SetBinContent(20,25);
   Zee_2bjet_pt_lep1__347->SetBinContent(21,16);
   Zee_2bjet_pt_lep1__347->SetBinContent(22,15);
   Zee_2bjet_pt_lep1__347->SetBinContent(23,14);
   Zee_2bjet_pt_lep1__347->SetBinContent(24,11);
   Zee_2bjet_pt_lep1__347->SetBinContent(25,7);
   Zee_2bjet_pt_lep1__347->SetBinContent(26,8);
   Zee_2bjet_pt_lep1__347->SetBinContent(27,7);
   Zee_2bjet_pt_lep1__347->SetBinContent(28,5);
   Zee_2bjet_pt_lep1__347->SetBinContent(29,3);
   Zee_2bjet_pt_lep1__347->SetBinContent(30,4);
   Zee_2bjet_pt_lep1__347->SetBinContent(31,5);
   Zee_2bjet_pt_lep1__347->SetBinContent(32,3);
   Zee_2bjet_pt_lep1__347->SetBinContent(33,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(35,1);
   Zee_2bjet_pt_lep1__347->SetBinContent(37,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(38,1);
   Zee_2bjet_pt_lep1__347->SetBinContent(40,1);
   Zee_2bjet_pt_lep1__347->SetBinContent(41,4);
   Zee_2bjet_pt_lep1__347->SetBinError(8,43.98863);
   Zee_2bjet_pt_lep1__347->SetBinError(9,39.97499);
   Zee_2bjet_pt_lep1__347->SetBinError(10,29.71532);
   Zee_2bjet_pt_lep1__347->SetBinError(11,23.25941);
   Zee_2bjet_pt_lep1__347->SetBinError(12,17.69181);
   Zee_2bjet_pt_lep1__347->SetBinError(13,15.36229);
   Zee_2bjet_pt_lep1__347->SetBinError(14,13.11488);
   Zee_2bjet_pt_lep1__347->SetBinError(15,10.24695);
   Zee_2bjet_pt_lep1__347->SetBinError(16,8.944272);
   Zee_2bjet_pt_lep1__347->SetBinError(17,7);
   Zee_2bjet_pt_lep1__347->SetBinError(18,6.082763);
   Zee_2bjet_pt_lep1__347->SetBinError(19,5.291503);
   Zee_2bjet_pt_lep1__347->SetBinError(20,5);
   Zee_2bjet_pt_lep1__347->SetBinError(21,4);
   Zee_2bjet_pt_lep1__347->SetBinError(22,3.872983);
   Zee_2bjet_pt_lep1__347->SetBinError(23,3.741657);
   Zee_2bjet_pt_lep1__347->SetBinError(24,3.316625);
   Zee_2bjet_pt_lep1__347->SetBinError(25,2.645751);
   Zee_2bjet_pt_lep1__347->SetBinError(26,2.828427);
   Zee_2bjet_pt_lep1__347->SetBinError(27,2.645751);
   Zee_2bjet_pt_lep1__347->SetBinError(28,2.236068);
   Zee_2bjet_pt_lep1__347->SetBinError(29,1.732051);
   Zee_2bjet_pt_lep1__347->SetBinError(30,2);
   Zee_2bjet_pt_lep1__347->SetBinError(31,2.236068);
   Zee_2bjet_pt_lep1__347->SetBinError(32,1.732051);
   Zee_2bjet_pt_lep1__347->SetBinError(33,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(35,1);
   Zee_2bjet_pt_lep1__347->SetBinError(37,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(38,1);
   Zee_2bjet_pt_lep1__347->SetBinError(40,1);
   Zee_2bjet_pt_lep1__347->SetBinError(41,2);
   Zee_2bjet_pt_lep1__347->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__347->SetLineColor(ci);
   Zee_2bjet_pt_lep1__347->SetLineWidth(2);
   Zee_2bjet_pt_lep1__347->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__347->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_pt_lep1_fx1347[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fy1347[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5827.938,
   4632.952,
   2737.246,
   1620.291,
   1066.06,
   668.6358,
   470.1523,
   299.2973,
   193.5803,
   153.466,
   108.4306,
   92.92288,
   63.76594,
   47.11649,
   41.20175,
   36.42205,
   25.31914,
   18.46464,
   14.07496,
   12.22696,
   8.458255,
   9.981299,
   6.371987,
   8.499953,
   8.14078,
   3.005321,
   1.843967,
   0.9528458,
   3.628278,
   1.823277,
   0.03103479,
   2.714743,
   0.9221558};
   Double_t Graph_from_Zee_2bjet_pt_lep1_fex1347[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fey1347[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   70.62556,
   63.42776,
   47.66128,
   36.40574,
   29.54965,
   23.59435,
   19.96825,
   15.93536,
   12.84955,
   11.54195,
   9.70252,
   9.027217,
   7.470169,
   6.452788,
   5.967932,
   5.627926,
   4.727726,
   4.006837,
   3.48602,
   3.253886,
   2.697676,
   2.969246,
   2.36864,
   2.708742,
   2.685782,
   1.571144,
   1.266095,
   0.8952701,
   1.790523,
   1.266092,
   0.003271354,
   1.550637,
   0.8952642};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_pt_lep1_fx1347,Graph_from_Zee_2bjet_pt_lep1_fy1347,Graph_from_Zee_2bjet_pt_lep1_fex1347,Graph_from_Zee_2bjet_pt_lep1_fey1347);
   gre->SetName("Graph_from_Zee_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_pt_lep11347 = new TH1F("Graph_Graph_from_Zee_2bjet_pt_lep11347","",100,0,220);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->SetMaximum(6488.42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_pt_lep11347->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11347->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_pt_lep11347);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__348 = new TH1D("data_mc_ratio__348","",40,0,200);
   data_mc_ratio__348->SetBinContent(8,0.3320214);
   data_mc_ratio__348->SetBinContent(9,0.3449205);
   data_mc_ratio__348->SetBinContent(10,0.322587);
   data_mc_ratio__348->SetBinContent(11,0.3338907);
   data_mc_ratio__348->SetBinContent(12,0.2936045);
   data_mc_ratio__348->SetBinContent(13,0.3529575);
   data_mc_ratio__348->SetBinContent(14,0.3658389);
   data_mc_ratio__348->SetBinContent(15,0.3508217);
   data_mc_ratio__348->SetBinContent(16,0.4132653);
   data_mc_ratio__348->SetBinContent(17,0.319289);
   data_mc_ratio__348->SetBinContent(18,0.341232);
   data_mc_ratio__348->SetBinContent(19,0.3013252);
   data_mc_ratio__348->SetBinContent(20,0.3920589);
   data_mc_ratio__348->SetBinContent(21,0.3395839);
   data_mc_ratio__348->SetBinContent(22,0.3640622);
   data_mc_ratio__348->SetBinContent(23,0.3843825);
   data_mc_ratio__348->SetBinContent(24,0.4344539);
   data_mc_ratio__348->SetBinContent(25,0.379103);
   data_mc_ratio__348->SetBinContent(26,0.5683853);
   data_mc_ratio__348->SetBinContent(27,0.5725055);
   data_mc_ratio__348->SetBinContent(28,0.5911385);
   data_mc_ratio__348->SetBinContent(29,0.3005621);
   data_mc_ratio__348->SetBinContent(30,0.6277477);
   data_mc_ratio__348->SetBinContent(31,0.5882386);
   data_mc_ratio__348->SetBinContent(32,0.368515);
   data_mc_ratio__348->SetBinContent(33,0.6654864);
   data_mc_ratio__348->SetBinContent(35,1.049488);
   data_mc_ratio__348->SetBinContent(37,1.096926);
   data_mc_ratio__348->SetBinContent(38,32.2219);
   data_mc_ratio__348->SetBinContent(40,1.084415);
   data_mc_ratio__348->SetBinContent(41,0.4884773);
   data_mc_ratio__348->SetBinError(8,0.00754789);
   data_mc_ratio__348->SetBinError(9,0.008628406);
   data_mc_ratio__348->SetBinError(10,0.01085592);
   data_mc_ratio__348->SetBinError(11,0.01435508);
   data_mc_ratio__348->SetBinError(12,0.01659551);
   data_mc_ratio__348->SetBinError(13,0.02297557);
   data_mc_ratio__348->SetBinError(14,0.02789495);
   data_mc_ratio__348->SetBinError(15,0.03423669);
   data_mc_ratio__348->SetBinError(16,0.04620446);
   data_mc_ratio__348->SetBinError(17,0.04561271);
   data_mc_ratio__348->SetBinError(18,0.05609819);
   data_mc_ratio__348->SetBinError(19,0.0569451);
   data_mc_ratio__348->SetBinError(20,0.07841177);
   data_mc_ratio__348->SetBinError(21,0.08489597);
   data_mc_ratio__348->SetBinError(22,0.09400047);
   data_mc_ratio__348->SetBinError(23,0.1027305);
   data_mc_ratio__348->SetBinError(24,0.1309928);
   data_mc_ratio__348->SetBinError(25,0.1432875);
   data_mc_ratio__348->SetBinError(26,0.2009545);
   data_mc_ratio__348->SetBinError(27,0.2163867);
   data_mc_ratio__348->SetBinError(28,0.2643652);
   data_mc_ratio__348->SetBinError(29,0.1735296);
   data_mc_ratio__348->SetBinError(30,0.3138739);
   data_mc_ratio__348->SetBinError(31,0.2630683);
   data_mc_ratio__348->SetBinError(32,0.2127623);
   data_mc_ratio__348->SetBinError(33,0.4705699);
   data_mc_ratio__348->SetBinError(35,1.049488);
   data_mc_ratio__348->SetBinError(37,0.7756438);
   data_mc_ratio__348->SetBinError(38,32.2219);
   data_mc_ratio__348->SetBinError(40,1.084415);
   data_mc_ratio__348->SetBinError(41,0.2920976);
   data_mc_ratio__348->SetMinimum(0.4);
   data_mc_ratio__348->SetMaximum(1.6);
   data_mc_ratio__348->SetEntries(2.011861);
   data_mc_ratio__348->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__348->SetLineColor(ci);
   data_mc_ratio__348->SetLineWidth(2);
   data_mc_ratio__348->SetMarkerStyle(20);
   data_mc_ratio__348->SetMarkerSize(1.2);
   data_mc_ratio__348->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__348->GetXaxis()->SetRange(1,40);
   data_mc_ratio__348->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__348->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__348->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__348->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__348->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__348->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__348->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__348->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__348->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__348->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__348->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__348->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__348->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__348->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1348[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01211845,
   0.01369057,
   0.01741213,
   0.02246865,
   0.02771856,
   0.0352873,
   0.04247188,
   0.05324257,
   0.06637843,
   0.0752085,
   0.08948135,
   0.09714741,
   0.1171498,
   0.1369539,
   0.1448466,
   0.1545197,
   0.1867254,
   0.2170006,
   0.2476753,
   0.2661239,
   0.31894,
   0.2974809,
   0.3717271,
   0.3186773,
   0.3299171,
   0.5227875,
   0.6866147,
   0.939575,
   0.493491,
   0.6944046,
   0.1054093,
   0.5711912,
   0.9708383};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1348,Graph_from_mc_statistical_error_fy1348,Graph_from_mc_statistical_error_fex1348,Graph_from_mc_statistical_error_fey1348);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1348 = new TH1F("Graph_Graph_from_mc_statistical_error1348","",100,0,220);
   Graph_Graph_from_mc_statistical_error1348->SetMinimum(0.02624554);
   Graph_Graph_from_mc_statistical_error1348->SetMaximum(2.165006);
   Graph_Graph_from_mc_statistical_error1348->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1348->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1348->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1348);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_17_amcnlo);
}
