void dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.287586,3.416482,2295.298);
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
   st->SetMaximum(1967.181);
   
   TH1F *st_stack_326 = new TH1F("st_stack_326","",30,0,3.141593);
   st_stack_326->SetMinimum(0.01);
   st_stack_326->SetMaximum(2065.54);
   st_stack_326->SetDirectory(0);
   st_stack_326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_326->SetLineColor(ci);
   st_stack_326->GetXaxis()->SetRange(1,31);
   st_stack_326->GetXaxis()->SetLabelFont(42);
   st_stack_326->GetXaxis()->SetLabelSize(0.035);
   st_stack_326->GetXaxis()->SetTitleSize(0.035);
   st_stack_326->GetXaxis()->SetTitleFont(42);
   st_stack_326->GetYaxis()->SetTitle("Events/0.105");
   st_stack_326->GetYaxis()->SetLabelFont(42);
   st_stack_326->GetYaxis()->SetLabelSize(0.05);
   st_stack_326->GetYaxis()->SetTitleSize(0.057);
   st_stack_326->GetYaxis()->SetTitleOffset(1.2);
   st_stack_326->GetYaxis()->SetTitleFont(42);
   st_stack_326->GetZaxis()->SetLabelFont(42);
   st_stack_326->GetZaxis()->SetLabelSize(0.035);
   st_stack_326->GetZaxis()->SetTitleSize(0.035);
   st_stack_326->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_326);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.213);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,1.47147);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,2.016958);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.753487);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,2.221479);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.227129);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.412812);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.94859);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,2.021667);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,1.008479);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.276368);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,2.348214);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,2.892875);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,1.612624);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,2.221479);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.885223);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,3.225249);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,1.612624);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,2.820915);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,3.502556);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,4.511035);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,3.843523);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,3.425061);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,4.847292);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,4.847292);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.489368);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,4.720266);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,5.777984);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,3.034856);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,3.425061);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.495239);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.5348013);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.6378598);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.5799003);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.6698464);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.5009733);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.5340285);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.6118047);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.6393507);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.451035);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.4979878);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.67391);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,1.125158);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.5701853);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.6698464);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.6095693);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.8063638);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.5701853);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.7539686);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.8358171);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.9497488);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.8818242);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.8307511);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.9895162);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.9895162);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.7023201);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.9724999);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,1.07061);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.7836493);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.8307511);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(407);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,4.377223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,2.012646);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,3.167378);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.463517);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.407724);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,1.055793);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,3.87124);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,1.759655);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.815447);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,2.463517);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,3.87124);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,3.87124);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,5.531955);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,6.235817);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,4.575102);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,3.87124);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,6.488808);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,8.347403);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,9.755126);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,10.206);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,7.29161);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,9.557247);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,10.206);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,7.995472);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,12.31758);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,6.840739);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,10.71198);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,6.334757);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,8.446342);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,5.883886);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.220827);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.8266084);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,1.055793);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.9311217);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.7038619);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.6095623);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,1.167223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.7869415);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.995411);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.9311217);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,1.167223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.167223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,1.386303);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.472938);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.268905);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.167223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.494507);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,1.706657);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.846104);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.895206);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.594087);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.813394);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.895206);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.669977);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,2.082051);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.535385);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.928682);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.493116);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.724102);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.430276);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(499);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,53.53317);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,58.69073);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,54.09935);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,56.15092);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,41.55617);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,53.84491);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,53.20079);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,64.04543);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,54.76411);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,63.92622);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,79.96969);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,80.92555);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,87.0023);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,100.444);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,101.5764);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,109.7414);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,111.1901);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,114.452);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,125.7849);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,127.7172);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,138.5045);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,145.4799);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,138.0163);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,132.5057);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,123.0273);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,126.1172);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,124.1436);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,128.6777);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,118.6537);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,118.3007);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,4.650655);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,4.864883);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,4.670021);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,4.759294);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,4.091476);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,4.653266);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,4.633174);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,5.098403);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,4.704642);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,5.070667);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,5.705571);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,5.724021);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,5.940007);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,6.379294);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,6.407526);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,6.644362);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,6.714069);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,6.803499);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,7.140688);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,7.179774);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,7.497231);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,7.685736);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,7.485589);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,7.327706);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,7.03897);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,7.152042);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,7.093377);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,7.232282);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,6.936514);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,6.914835);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(7536);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,0.7900078);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,0.8148356);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,0.8144908);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,0.8089735);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,0.7758697);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,0.8175943);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,0.8089735);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,0.8900088);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,0.8938019);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,0.9955271);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,1.105183);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,1.235874);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,1.377945);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,1.586912);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,1.787259);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,2.056917);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,2.297609);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,2.551404);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,2.890373);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,3.106927);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,3.370378);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,3.520035);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,3.588656);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,3.56969);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,3.527276);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,3.224515);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,2.963133);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,2.720716);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,2.459335);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,2.288298);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.01650513);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.01676248);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.01675893);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.01670207);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.01635677);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.01679083);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.01670207);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.01751864);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.01755593);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.01852805);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.01952182);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.02064383);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.02179812);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.02339266);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.02482544);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.02663247);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.02814759);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.02966148);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.0315704);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.03273171);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.03409121);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.03483988);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.03517783);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.03508475);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.0348757);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.03334535);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.03196529);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.03062984);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.02912138);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.0280905);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetEntries(172950);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,417.8169);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,450.0839);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,401.1776);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,404.273);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,471.0334);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,445.7105);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,434.0335);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,434.0847);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,496.561);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,456.1463);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,511.8572);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,522.5999);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,540.0452);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,545.6084);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,612.0494);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,662.5164);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,775.0625);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,757.7076);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,750.4561);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,867.9268);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,826.5149);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,879.642);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,924.0977);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,908.8657);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,938.23);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,906.7418);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,854.4583);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,891.1895);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,843.6518);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,910.4119);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(1,19.47193);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(2,20.5933);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(3,19.50871);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(4,19.01565);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(5,21.05116);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(6,20.23824);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(7,20.11056);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(8,20.11281);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(9,21.32967);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(10,20.46123);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(11,21.64985);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(12,22.11345);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(13,22.47224);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(14,22.21176);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(15,23.62937);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(16,24.78889);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(17,26.93874);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(18,26.34104);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(19,26.11408);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(20,28.15341);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(21,27.28861);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(22,28.34024);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(23,29.02932);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(24,28.70049);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(25,29.1522);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(26,28.84785);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(27,28.01927);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(28,28.60045);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(29,27.55616);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(30,29.18166);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetEntries(22004);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1__651 = new TH1D("Zmm_2bjet_dPhi_Zb1__651","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(1,168);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(2,184);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(3,183);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(4,164);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(5,176);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(6,187);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(7,199);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(8,167);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(9,200);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(10,203);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(11,223);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(12,242);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(13,254);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(14,277);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(15,259);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(16,280);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(17,330);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(18,301);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(19,344);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(20,369);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(21,374);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(22,364);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(23,381);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(24,382);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(25,393);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(26,411);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(27,407);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(28,400);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(29,441);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(30,409);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(1,12.96148);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(2,13.56466);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(3,13.52775);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(4,12.80625);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(5,13.2665);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(6,13.67479);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(7,14.10674);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(8,12.92285);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(9,14.14214);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(10,14.24781);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(11,14.93318);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(12,15.55635);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(13,15.93738);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(14,16.64332);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(15,16.09348);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(16,16.7332);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(17,18.1659);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(18,17.34935);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(19,18.54724);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(20,19.20937);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(21,19.33908);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(22,19.07878);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(23,19.51922);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(24,19.54482);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(25,19.82423);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(26,20.27313);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(27,20.17424);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(28,20);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(29,21);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(30,20.22375);
   Zmm_2bjet_dPhi_Zb1__651->SetEntries(8672);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__651->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__651->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__651->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__651->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fx1651[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fy1651[30] = {
   477.7303,
   513.0736,
   461.2758,
   465.4498,
   516.9947,
   502.6559,
   493.3273,
   502.7284,
   557.056,
   524.5401,
   598.0797,
   610.9808,
   636.8503,
   655.4878,
   722.2097,
   780.0712,
   898.2643,
   884.671,
   891.7073,
   1012.46,
   980.1925,
   1042.043,
   1079.334,
   1057.784,
   1081.949,
   1045.414,
   996.9973,
   1034.701,
   976.246,
   1040.31};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fex1651[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fey1651[30] = {
   20.06292,
   21.18303,
   20.09778,
   19.63286,
   21.46708,
   20.78129,
   20.67726,
   20.77289,
   21.87438,
   21.10555,
   22.42499,
   22.882,
   23.31251,
   23.16361,
   24.52474,
   25.69769,
   27.81472,
   27.26494,
   27.14612,
   29.12825,
   28.36055,
   29.4331,
   30.05027,
   29.68472,
   30.07845,
   29.76915,
   28.98382,
   29.55788,
   28.47885,
   30.03533};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb1_fx1651,Graph_from_Zmm_2bjet_dPhi_Zb1_fy1651,Graph_from_Zmm_2bjet_dPhi_Zb1_fex1651,Graph_from_Zmm_2bjet_dPhi_Zb1_fey1651);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->SetMinimum(374.093);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->SetMaximum(1179.113);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb11651);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__652 = new TH1D("data_mc_ratio__652","",30,0,3.141593);
   data_mc_ratio__652->SetBinContent(1,0.3516629);
   data_mc_ratio__652->SetBinContent(2,0.358623);
   data_mc_ratio__652->SetBinContent(3,0.3967258);
   data_mc_ratio__652->SetBinContent(4,0.3523473);
   data_mc_ratio__652->SetBinContent(5,0.340429);
   data_mc_ratio__652->SetBinContent(6,0.3720239);
   data_mc_ratio__652->SetBinContent(7,0.4033833);
   data_mc_ratio__652->SetBinContent(8,0.3321873);
   data_mc_ratio__652->SetBinContent(9,0.3590303);
   data_mc_ratio__652->SetBinContent(10,0.3870057);
   data_mc_ratio__652->SetBinContent(11,0.37286);
   data_mc_ratio__652->SetBinContent(12,0.3960845);
   data_mc_ratio__652->SetBinContent(13,0.3988379);
   data_mc_ratio__652->SetBinContent(14,0.422586);
   data_mc_ratio__652->SetBinContent(15,0.3586216);
   data_mc_ratio__652->SetBinContent(16,0.3589416);
   data_mc_ratio__652->SetBinContent(17,0.3673752);
   data_mc_ratio__652->SetBinContent(18,0.3402395);
   data_mc_ratio__652->SetBinContent(19,0.3857768);
   data_mc_ratio__652->SetBinContent(20,0.364459);
   data_mc_ratio__652->SetBinContent(21,0.3815577);
   data_mc_ratio__652->SetBinContent(22,0.3493139);
   data_mc_ratio__652->SetBinContent(23,0.3529956);
   data_mc_ratio__652->SetBinContent(24,0.3611324);
   data_mc_ratio__652->SetBinContent(25,0.3632333);
   data_mc_ratio__652->SetBinContent(26,0.3931458);
   data_mc_ratio__652->SetBinContent(27,0.4082258);
   data_mc_ratio__652->SetBinContent(28,0.3865852);
   data_mc_ratio__652->SetBinContent(29,0.4517304);
   data_mc_ratio__652->SetBinContent(30,0.3931521);
   data_mc_ratio__652->SetBinError(1,0.02713138);
   data_mc_ratio__652->SetBinError(2,0.02643804);
   data_mc_ratio__652->SetBinError(3,0.02932681);
   data_mc_ratio__652->SetBinError(4,0.0275137);
   data_mc_ratio__652->SetBinError(5,0.02566081);
   data_mc_ratio__652->SetBinError(6,0.02720508);
   data_mc_ratio__652->SetBinError(7,0.02859508);
   data_mc_ratio__652->SetBinError(8,0.02570543);
   data_mc_ratio__652->SetBinError(9,0.02538728);
   data_mc_ratio__652->SetBinError(10,0.02716248);
   data_mc_ratio__652->SetBinError(11,0.02496855);
   data_mc_ratio__652->SetBinError(12,0.02546127);
   data_mc_ratio__652->SetBinError(13,0.02502531);
   data_mc_ratio__652->SetBinError(14,0.02539073);
   data_mc_ratio__652->SetBinError(15,0.02228366);
   data_mc_ratio__652->SetBinError(16,0.02145086);
   data_mc_ratio__652->SetBinError(17,0.02022334);
   data_mc_ratio__652->SetBinError(18,0.01961108);
   data_mc_ratio__652->SetBinError(19,0.02079969);
   data_mc_ratio__652->SetBinError(20,0.01897298);
   data_mc_ratio__652->SetBinError(21,0.01972988);
   data_mc_ratio__652->SetBinError(22,0.01830902);
   data_mc_ratio__652->SetBinError(23,0.01808451);
   data_mc_ratio__652->SetBinError(24,0.01847714);
   data_mc_ratio__652->SetBinError(25,0.01832269);
   data_mc_ratio__652->SetBinError(26,0.01939245);
   data_mc_ratio__652->SetBinError(27,0.020235);
   data_mc_ratio__652->SetBinError(28,0.01932926);
   data_mc_ratio__652->SetBinError(29,0.02151097);
   data_mc_ratio__652->SetBinError(30,0.01944012);
   data_mc_ratio__652->SetMinimum(0.4);
   data_mc_ratio__652->SetMaximum(1.6);
   data_mc_ratio__652->SetEntries(5960.452);
   data_mc_ratio__652->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__652->SetLineColor(ci);
   data_mc_ratio__652->SetLineWidth(2);
   data_mc_ratio__652->SetMarkerStyle(20);
   data_mc_ratio__652->SetMarkerSize(1.2);
   data_mc_ratio__652->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__652->GetXaxis()->SetRange(1,31);
   data_mc_ratio__652->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__652->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__652->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__652->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__652->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__652->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__652->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__652->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__652->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__652->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__652->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__652->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__652->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__652->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1652[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1652[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1652[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1652[30] = {
   0.04199633,
   0.04128653,
   0.04356999,
   0.04218041,
   0.04152284,
   0.04134298,
   0.04191387,
   0.04132029,
   0.03926783,
   0.0402363,
   0.03749498,
   0.03745127,
   0.03660596,
   0.03533797,
   0.03395792,
   0.03294275,
   0.03096497,
   0.0308193,
   0.03044286,
   0.02876979,
   0.02893366,
   0.02824558,
   0.0278415,
   0.02806312,
   0.02780024,
   0.02847595,
   0.02907112,
   0.0285666,
   0.02917179,
   0.02887152};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1652,Graph_from_mc_statistical_error_fy1652,Graph_from_mc_statistical_error_fex1652,Graph_from_mc_statistical_error_fey1652);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1652 = new TH1F("Graph_Graph_from_mc_statistical_error1652","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1652->SetMinimum(0.947716);
   Graph_Graph_from_mc_statistical_error1652->SetMaximum(1.052284);
   Graph_Graph_from_mc_statistical_error1652->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1652->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1652->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1652);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo);
}
