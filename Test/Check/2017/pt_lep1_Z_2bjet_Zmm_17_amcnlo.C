void pt_lep1_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_17_amcnlo/pt_lep1_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_17_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_17_amcnlo", "pt_lep1_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-16.06886,210.4839,16062.79);
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
   st->SetMaximum(13766.57);
   
   TH1F *st_stack_262 = new TH1F("st_stack_262","",40,0,200);
   st_stack_262->SetMinimum(0.01);
   st_stack_262->SetMaximum(14454.9);
   st_stack_262->SetDirectory(0);
   st_stack_262->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_262->SetLineColor(ci);
   st_stack_262->GetXaxis()->SetRange(1,40);
   st_stack_262->GetXaxis()->SetLabelFont(42);
   st_stack_262->GetXaxis()->SetLabelSize(0.035);
   st_stack_262->GetXaxis()->SetTitleSize(0.035);
   st_stack_262->GetXaxis()->SetTitleFont(42);
   st_stack_262->GetYaxis()->SetTitle("Events/5.0");
   st_stack_262->GetYaxis()->SetLabelFont(42);
   st_stack_262->GetYaxis()->SetLabelSize(0.05);
   st_stack_262->GetYaxis()->SetTitleSize(0.057);
   st_stack_262->GetYaxis()->SetTitleOffset(1.2);
   st_stack_262->GetYaxis()->SetTitleFont(42);
   st_stack_262->GetZaxis()->SetLabelFont(42);
   st_stack_262->GetZaxis()->SetLabelSize(0.035);
   st_stack_262->GetZaxis()->SetTitleSize(0.035);
   st_stack_262->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_262);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,26.45624);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,19.87785);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,12.9478);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,9.957764);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,5.65125);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,2.221479);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,1.281077);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,1.013188);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(16,0.4043335);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.4043335);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(19,0.199812);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(20,0.199812);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,2.43959);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,1.996659);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,1.609971);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,1.414546);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,1.068057);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.6698464);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.499896);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.453141);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(16,0.2859263);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.2859263);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(19,0.199812);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(20,0.199812);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(407);

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
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,55.81425);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,46.11424);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,21.17097);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,11.51478);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,8.446342);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,5.278964);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,3.87124);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,5.784946);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,3.167378);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,2.111586);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,2.364577);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,1.759655);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(20,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,1.055793);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(23,0.7038619);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(24,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(26,0.7038619);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(27,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(28,0.7038619);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(29,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(30,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(35,0.7038619);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(41,0.7038619);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,4.417874);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,4.006721);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,2.71581);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,2.006833);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,1.724102);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,1.363023);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,1.167223);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,1.409198);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,1.055793);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,0.8620512);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.898408);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,0.7869415);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(20,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,0.6095623);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(23,0.4977055);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(24,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(26,0.4977055);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(27,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(28,0.4977055);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(29,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(30,0.3519309);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(35,0.4977055);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(41,0.4977055);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(499);

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
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,1001.845);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,744.4513);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,510.6236);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,290.5701);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,167.8705);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,77.48717);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,42.78711);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,24.67605);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,10.49162);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,7.541497);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,2.051563);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,1.641251);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,0.566182);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,1.230938);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(22,0.8206253);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(23,0.07793469);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(24,0.4103127);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(26,0.8206253);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(29,0.07793469);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,20.10035);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,17.37031);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,14.39209);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,10.86788);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,8.257119);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,5.604053);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,4.15274);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,3.157448);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,2.055999);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,1.744295);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.917487);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.8206253);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.4248578);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.7106824);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(22,0.5802697);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(23,0.07793469);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(24,0.4103127);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(26,0.5802697);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(29,0.07793469);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(7536);

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
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(8,13.06392);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(9,10.94045);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(10,7.620765);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(11,5.549365);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(12,4.285215);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(13,3.342792);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(14,2.640371);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(15,2.181401);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(16,1.732431);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(17,1.397945);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(18,1.13208);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(19,0.9375955);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(20,0.8010424);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(21,0.6317304);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(22,0.5434536);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(23,0.4375905);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(24,0.3520724);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(25,0.3048306);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(26,0.2520715);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(27,0.2196573);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(28,0.1993123);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(29,0.1620706);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1289668);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(31,0.1120701);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(32,0.09517335);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(33,0.07482832);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(34,0.073449);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(35,0.06379373);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(36,0.05172465);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(37,0.04103489);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(38,0.03827624);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(39,0.03517276);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(40,0.02344851);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(41,0.1724155);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(8,0.06711814);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(9,0.06142155);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(10,0.05126281);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(11,0.04374463);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(12,0.03844054);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(13,0.03395141);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(14,0.03017419);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(15,0.02742653);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(16,0.02444168);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(17,0.02195574);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(18,0.01975794);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(19,0.01798088);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(20,0.01662);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(21,0.01475941);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(22,0.0136894);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(23,0.01228392);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(24,0.01101842);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(25,0.01025256);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(26,0.009323199);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(27,0.008703141);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(28,0.008290299);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(29,0.007475758);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(30,0.006668714);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(31,0.006216529);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(32,0.005728763);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(33,0.005079678);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(34,0.005032643);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(35,0.004690208);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(36,0.0042233);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(37,0.003761662);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(38,0.00363302);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(39,0.003482622);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(40,0.002843549);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(41,0.007710655);
   Zmm_2bjet_pt_lep1_stack_4->SetEntries(172950);

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
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(8,6474.435);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(9,5093.335);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(10,2892.474);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(11,1724.995);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(12,1069.705);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(13,709.249);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(14,503.5443);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(15,339.1239);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(16,255.9673);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(17,196.8802);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(18,116.3325);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(19,117.2021);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(20,71.62072);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(21,59.95675);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(22,50.13451);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(23,31.33407);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(24,26.85777);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(25,16.11466);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(26,13.40328);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(27,11.63837);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(28,8.95259);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(29,9.847849);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(30,8.057331);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(31,6.266813);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(32,1.790518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(33,6.266813);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(34,3.581036);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(35,2.685777);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(36,0.895259);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(37,2.685777);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(38,3.581036);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(39,1.790518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(40,2.685777);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(41,7.162072);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(8,77.67387);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(9,68.95743);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(10,51.06515);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(11,39.34399);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(12,30.93174);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(13,25.18651);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(14,21.22214);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(15,17.41975);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(16,15.13573);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(17,13.27373);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(18,10.20309);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(19,10.24009);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(20,8.00744);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(21,7.324926);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(22,6.699505);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(23,5.296424);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(24,4.903536);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(25,3.798262);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(26,3.4608);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(27,3.227902);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(28,2.831058);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(29,2.969238);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(30,2.685777);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(31,2.368633);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(32,1.266087);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(33,2.368633);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(34,1.790518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(35,1.550634);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(36,0.895259);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(37,1.550634);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(38,1.790518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(39,1.266087);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(40,1.550634);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(41,2.532175);
   Zmm_2bjet_pt_lep1_stack_5->SetEntries(22004);

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
   
   TH1D *Zmm_2bjet_pt_lep1__523 = new TH1D("Zmm_2bjet_pt_lep1__523","",40,0,200);
   Zmm_2bjet_pt_lep1__523->SetBinContent(8,2806);
   Zmm_2bjet_pt_lep1__523->SetBinContent(9,2258);
   Zmm_2bjet_pt_lep1__523->SetBinContent(10,1284);
   Zmm_2bjet_pt_lep1__523->SetBinContent(11,765);
   Zmm_2bjet_pt_lep1__523->SetBinContent(12,467);
   Zmm_2bjet_pt_lep1__523->SetBinContent(13,289);
   Zmm_2bjet_pt_lep1__523->SetBinContent(14,230);
   Zmm_2bjet_pt_lep1__523->SetBinContent(15,143);
   Zmm_2bjet_pt_lep1__523->SetBinContent(16,98);
   Zmm_2bjet_pt_lep1__523->SetBinContent(17,82);
   Zmm_2bjet_pt_lep1__523->SetBinContent(18,65);
   Zmm_2bjet_pt_lep1__523->SetBinContent(19,39);
   Zmm_2bjet_pt_lep1__523->SetBinContent(20,25);
   Zmm_2bjet_pt_lep1__523->SetBinContent(21,23);
   Zmm_2bjet_pt_lep1__523->SetBinContent(22,13);
   Zmm_2bjet_pt_lep1__523->SetBinContent(23,13);
   Zmm_2bjet_pt_lep1__523->SetBinContent(24,15);
   Zmm_2bjet_pt_lep1__523->SetBinContent(25,10);
   Zmm_2bjet_pt_lep1__523->SetBinContent(26,3);
   Zmm_2bjet_pt_lep1__523->SetBinContent(27,10);
   Zmm_2bjet_pt_lep1__523->SetBinContent(28,5);
   Zmm_2bjet_pt_lep1__523->SetBinContent(29,7);
   Zmm_2bjet_pt_lep1__523->SetBinContent(30,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(31,3);
   Zmm_2bjet_pt_lep1__523->SetBinContent(32,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(33,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(34,5);
   Zmm_2bjet_pt_lep1__523->SetBinContent(35,1);
   Zmm_2bjet_pt_lep1__523->SetBinContent(36,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(37,1);
   Zmm_2bjet_pt_lep1__523->SetBinContent(38,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(41,2);
   Zmm_2bjet_pt_lep1__523->SetBinError(8,52.97169);
   Zmm_2bjet_pt_lep1__523->SetBinError(9,47.51842);
   Zmm_2bjet_pt_lep1__523->SetBinError(10,35.83295);
   Zmm_2bjet_pt_lep1__523->SetBinError(11,27.65863);
   Zmm_2bjet_pt_lep1__523->SetBinError(12,21.61018);
   Zmm_2bjet_pt_lep1__523->SetBinError(13,17);
   Zmm_2bjet_pt_lep1__523->SetBinError(14,15.16575);
   Zmm_2bjet_pt_lep1__523->SetBinError(15,11.95826);
   Zmm_2bjet_pt_lep1__523->SetBinError(16,9.899495);
   Zmm_2bjet_pt_lep1__523->SetBinError(17,9.055385);
   Zmm_2bjet_pt_lep1__523->SetBinError(18,8.062258);
   Zmm_2bjet_pt_lep1__523->SetBinError(19,6.244998);
   Zmm_2bjet_pt_lep1__523->SetBinError(20,5);
   Zmm_2bjet_pt_lep1__523->SetBinError(21,4.795832);
   Zmm_2bjet_pt_lep1__523->SetBinError(22,3.605551);
   Zmm_2bjet_pt_lep1__523->SetBinError(23,3.605551);
   Zmm_2bjet_pt_lep1__523->SetBinError(24,3.872983);
   Zmm_2bjet_pt_lep1__523->SetBinError(25,3.162278);
   Zmm_2bjet_pt_lep1__523->SetBinError(26,1.732051);
   Zmm_2bjet_pt_lep1__523->SetBinError(27,3.162278);
   Zmm_2bjet_pt_lep1__523->SetBinError(28,2.236068);
   Zmm_2bjet_pt_lep1__523->SetBinError(29,2.645751);
   Zmm_2bjet_pt_lep1__523->SetBinError(30,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(31,1.732051);
   Zmm_2bjet_pt_lep1__523->SetBinError(32,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(33,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(34,2.236068);
   Zmm_2bjet_pt_lep1__523->SetBinError(35,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(36,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(37,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(38,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(41,1.414214);
   Zmm_2bjet_pt_lep1__523->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__523->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__523->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__523->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__523->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fx1523[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fy1523[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7571.615,
   5914.719,
   3444.838,
   2042.587,
   1255.959,
   797.5794,
   554.1241,
   372.7795,
   271.763,
   207.9312,
   122.285,
   121.7404,
   73.53969,
   61.81941,
   52.55438,
   32.55345,
   27.97209,
   16.41949,
   15.17984,
   12.20996,
   9.855764,
   10.43979,
   8.538229,
   6.378883,
   1.885691,
   6.341641,
   3.654485,
   3.453433,
   0.9469837,
   2.726812,
   3.619312,
   1.825691,
   2.709226};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fex1523[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fey1523[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   80.39109,
   71.25236,
   53.1484,
   40.89121,
   32.07908,
   25.84711,
   21.6619,
   17.76539,
   15.31386,
   13.41559,
   10.28758,
   10.30497,
   8.028926,
   7.359337,
   6.752173,
   5.320342,
   4.933254,
   3.798276,
   3.544241,
   3.247042,
   2.874485,
   2.991047,
   2.708745,
   2.368641,
   1.2661,
   2.368638,
   1.790525,
   1.628557,
   0.895269,
   1.550639,
   1.790522,
   1.266092,
   1.550637};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_pt_lep1_fx1523,Graph_from_Zmm_2bjet_pt_lep1_fy1523,Graph_from_Zmm_2bjet_pt_lep1_fex1523,Graph_from_Zmm_2bjet_pt_lep1_fey1523);
   gre->SetName("Graph_from_Zmm_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_pt_lep11523 = new TH1F("Graph_Graph_from_Zmm_2bjet_pt_lep11523","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->SetMaximum(8417.207);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11523->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_pt_lep11523);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__524 = new TH1D("data_mc_ratio__524","",40,0,200);
   data_mc_ratio__524->SetBinContent(8,0.3705946);
   data_mc_ratio__524->SetBinContent(9,0.3817595);
   data_mc_ratio__524->SetBinContent(10,0.3727316);
   data_mc_ratio__524->SetBinContent(11,0.374525);
   data_mc_ratio__524->SetBinContent(12,0.3718275);
   data_mc_ratio__524->SetBinContent(13,0.3623464);
   data_mc_ratio__524->SetBinContent(14,0.4150695);
   data_mc_ratio__524->SetBinContent(15,0.3836048);
   data_mc_ratio__524->SetBinContent(16,0.3606083);
   data_mc_ratio__524->SetBinContent(17,0.3943612);
   data_mc_ratio__524->SetBinContent(18,0.5315451);
   data_mc_ratio__524->SetBinContent(19,0.3203538);
   data_mc_ratio__524->SetBinContent(20,0.3399525);
   data_mc_ratio__524->SetBinContent(21,0.3720514);
   data_mc_ratio__524->SetBinContent(22,0.2473628);
   data_mc_ratio__524->SetBinContent(23,0.3993432);
   data_mc_ratio__524->SetBinContent(24,0.5362489);
   data_mc_ratio__524->SetBinContent(25,0.6090322);
   data_mc_ratio__524->SetBinContent(26,0.1976306);
   data_mc_ratio__524->SetBinContent(27,0.8190038);
   data_mc_ratio__524->SetBinContent(28,0.5073173);
   data_mc_ratio__524->SetBinContent(29,0.6705119);
   data_mc_ratio__524->SetBinContent(30,0.2342406);
   data_mc_ratio__524->SetBinContent(31,0.4703018);
   data_mc_ratio__524->SetBinContent(32,1.060619);
   data_mc_ratio__524->SetBinContent(33,0.3153758);
   data_mc_ratio__524->SetBinContent(34,1.368182);
   data_mc_ratio__524->SetBinContent(35,0.289567);
   data_mc_ratio__524->SetBinContent(36,2.111969);
   data_mc_ratio__524->SetBinContent(37,0.3667286);
   data_mc_ratio__524->SetBinContent(38,0.5525912);
   data_mc_ratio__524->SetBinContent(41,0.2488073);
   data_mc_ratio__524->SetBinError(8,0.006996089);
   data_mc_ratio__524->SetBinError(9,0.008033927);
   data_mc_ratio__524->SetBinError(10,0.01040193);
   data_mc_ratio__524->SetBinError(11,0.01354098);
   data_mc_ratio__524->SetBinError(12,0.01720612);
   data_mc_ratio__524->SetBinError(13,0.02131449);
   data_mc_ratio__524->SetBinError(14,0.02736887);
   data_mc_ratio__524->SetBinError(15,0.03207864);
   data_mc_ratio__524->SetBinError(16,0.03642694);
   data_mc_ratio__524->SetBinError(17,0.04354991);
   data_mc_ratio__524->SetBinError(18,0.06593006);
   data_mc_ratio__524->SetBinError(19,0.05129765);
   data_mc_ratio__524->SetBinError(20,0.0679905);
   data_mc_ratio__524->SetBinError(21,0.07757808);
   data_mc_ratio__524->SetBinError(22,0.06860611);
   data_mc_ratio__524->SetBinError(23,0.1107579);
   data_mc_ratio__524->SetBinError(24,0.1384589);
   data_mc_ratio__524->SetBinError(25,0.1925929);
   data_mc_ratio__524->SetBinError(26,0.1141021);
   data_mc_ratio__524->SetBinError(27,0.2589917);
   data_mc_ratio__524->SetBinError(28,0.2268792);
   data_mc_ratio__524->SetBinError(29,0.2534297);
   data_mc_ratio__524->SetBinError(30,0.1656331);
   data_mc_ratio__524->SetBinError(31,0.2715288);
   data_mc_ratio__524->SetBinError(32,0.7499708);
   data_mc_ratio__524->SetBinError(33,0.2230043);
   data_mc_ratio__524->SetBinError(34,0.6118695);
   data_mc_ratio__524->SetBinError(35,0.289567);
   data_mc_ratio__524->SetBinError(36,1.493387);
   data_mc_ratio__524->SetBinError(37,0.3667286);
   data_mc_ratio__524->SetBinError(38,0.390741);
   data_mc_ratio__524->SetBinError(41,0.1932172);
   data_mc_ratio__524->SetMinimum(0.4);
   data_mc_ratio__524->SetMaximum(1.6);
   data_mc_ratio__524->SetEntries(28.01173);
   data_mc_ratio__524->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__524->SetLineColor(ci);
   data_mc_ratio__524->SetLineWidth(2);
   data_mc_ratio__524->SetMarkerStyle(20);
   data_mc_ratio__524->SetMarkerSize(1.2);
   data_mc_ratio__524->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__524->GetXaxis()->SetRange(1,40);
   data_mc_ratio__524->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__524->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__524->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__524->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__524->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__524->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__524->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__524->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__524->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__524->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__524->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__524->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__524->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__524->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1524[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1524[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1524[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1524[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01061743,
   0.01204662,
   0.01542842,
   0.02001932,
   0.02554151,
   0.03240695,
   0.03909215,
   0.04765658,
   0.05635006,
   0.06451938,
   0.08412785,
   0.08464706,
   0.1091781,
   0.1190457,
   0.1284797,
   0.163434,
   0.1763635,
   0.2313273,
   0.2334835,
   0.265934,
   0.2916553,
   0.2865046,
   0.317249,
   0.3713253,
   0.671425,
   0.3735055,
   0.4899528,
   0.4715764,
   0.9453901,
   0.5686636,
   0.4947132,
   0.6934867,
   0.5723542};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1524,Graph_from_mc_statistical_error_fy1524,Graph_from_mc_statistical_error_fex1524,Graph_from_mc_statistical_error_fey1524);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1524 = new TH1F("Graph_Graph_from_mc_statistical_error1524","",100,0,220);
   Graph_Graph_from_mc_statistical_error1524->SetMinimum(0.04914891);
   Graph_Graph_from_mc_statistical_error1524->SetMaximum(2.134468);
   Graph_Graph_from_mc_statistical_error1524->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1524->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1524->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1524);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_17_amcnlo);
}
