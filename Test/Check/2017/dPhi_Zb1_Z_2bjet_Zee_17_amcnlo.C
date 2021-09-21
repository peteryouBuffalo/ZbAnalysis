void dPhi_Zb1_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_17_amcnlo/dPhi_Zb1_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_17_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_17_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.884848,3.416482,1892.963);
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
   st->SetMaximum(1622.36);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,3.141593);
   st_stack_238->SetMinimum(0.01);
   st_stack_238->SetMaximum(1703.478);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,31);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.105");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.422231);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,0.8133765);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,1.013188);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,0.4677005);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,0.872034);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,0.6135645);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,0.409043);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.817146);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.485599);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,0.6041455);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.626753);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,2.5522);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,1.21771);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,2.352923);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,1.417522);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,2.157821);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,2.026377);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,1.622043);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,2.630522);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,2.026377);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,2.21677);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,1.607915);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,3.838813);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.289556);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,3.112351);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.221479);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,2.635232);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,3.511975);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,3.42977);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,3.834104);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.5375824);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.4067087);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.453141);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.2906615);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.4077229);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.3542416);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.2892371);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.605756);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.5401158);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.3488248);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.5751729);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,1.102217);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.4971578);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.6753213);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.5358084);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.6465587);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.6408382);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.5735152);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.7296248);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.6408382);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.6684235);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.568513);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.8807438);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.6732968);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.7890177);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.6698464);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.7309285);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.8380923);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.8318964);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.8796621);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(289);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,3.42037);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,2.716508);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,1.055793);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.166697);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.055793);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,2.815447);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,2.969499);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,3.167378);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,1.407724);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,2.111586);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,2.815447);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,4.575102);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,4.575102);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,1.759655);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,5.630895);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,3.519309);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,4.982145);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,6.334757);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,6.939679);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,7.643541);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,7.896532);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,9.051265);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,8.347403);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,11.41584);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,8.501454);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,6.488808);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,7.673386);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,8.501454);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,4.055137);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,5.46286);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.085681);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.9648794);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.6095623);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.8291171);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.6095623);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.995411);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.9974953);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,1.055793);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.7038619);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.8620512);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.995411);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.268905);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,1.268905);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,0.7869415);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.407724);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.112903);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.295484);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,1.493116);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.554753);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.632473);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.65196);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.777748);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.706657);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.991865);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.707874);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.494507);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.697067);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.707874);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.25763);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.441199);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(429);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,45.38421);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,44.99454);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,45.05184);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,37.92065);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,44.17391);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,48.86386);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,43.48852);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,42.02378);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,47.12404);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,49.1756);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,58.08327);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,66.11301);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,62.85115);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,76.72384);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,80.39602);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,85.24184);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,92.27445);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,109.6428);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,95.96726);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,100.3455);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,99.2704);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,97.74374);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,103.4515);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,116.3843);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,103.5294);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,101.2028);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,96.80853);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,103.9397);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,102.5529);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,101.8881);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,4.25788);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,4.254313);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,4.238781);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,3.884978);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,4.214554);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,4.44573);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,4.159316);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,4.095927);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,4.352819);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,4.448462);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,4.817739);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,5.140778);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,5.021826);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,5.562085);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,5.684541);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,5.859028);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,6.087558);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,6.633513);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,6.210762);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,6.367992);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,6.329171);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,6.25469);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,6.461273);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,6.844511);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,6.461743);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,6.373236);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,6.248861);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,6.474757);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,6.434692);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,6.409422);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(6204);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_4 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,0.658972);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,0.6341442);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,0.6265579);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,0.6106957);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,0.6082819);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,0.642765);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,0.6696618);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,0.6369028);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,0.7131105);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,0.7817318);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,0.8638016);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,0.9572508);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,1.066907);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,1.244495);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,1.394841);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,1.586223);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,1.788983);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,1.995192);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,2.225194);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,2.421058);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,2.646233);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,2.769682);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,2.900029);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,2.811752);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,2.726923);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,2.64244);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,2.37623);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,2.156573);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,1.972088);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,1.856915);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.01507428);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.01478758);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.01469886);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.01451161);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.0144829);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.01488776);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.01519606);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.01481971);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.01568128);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.01641845);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.01725878);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.01816837);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.01918079);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.02071571);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.02193136);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.02338758);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.02483741);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.02622983);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.02770047);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.02889387);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.03020767);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.03090424);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.03162309);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.03113807);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.03066476);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.03018601);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.02862513);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.02727001);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.02607752);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.02530458);
   Zee_2bjet_dPhi_Zb1_stack_4->SetEntries(136257);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_4,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_5 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,338.8036);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,353.9081);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,376.6475);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,328.6365);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,323.4181);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,333.7775);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,324.8887);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,353.1405);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,340.3256);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,392.9796);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,414.8109);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,393.7985);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,440.0447);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,465.4826);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,485.7667);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,518.2135);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,584.5395);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,589.6167);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,608.0462);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,635.9399);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,723.5603);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,781.1253);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,706.6014);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,709.1079);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,685.1022);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,726.5265);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,716.1411);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,649.6488);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,692.5835);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,644.4444);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(1,17.55615);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(2,18.39639);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(3,18.64526);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(4,17.4629);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(5,17.63764);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(6,17.5885);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(7,17.51539);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(8,18.66877);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(9,18.05917);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(10,19.17791);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(11,20.09091);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(12,18.91526);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(13,19.97304);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(14,20.92907);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(15,21.10087);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(16,21.90479);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(17,23.2221);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(18,23.19956);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(19,23.89942);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(20,24.52779);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(21,25.97344);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(22,26.63836);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(23,25.24597);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(24,25.28729);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(25,24.96871);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(26,25.58551);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(27,25.82586);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(28,24.53365);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(29,24.98594);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(30,24.11179);
   Zee_2bjet_dPhi_Zb1_stack_5->SetEntries(17303);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1__475 = new TH1D("Zee_2bjet_dPhi_Zb1__475","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(1,133);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(2,121);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(3,136);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(4,133);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(5,133);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(6,118);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(7,125);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(8,143);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(9,119);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(10,160);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(11,160);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(12,156);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(13,163);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(14,199);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(15,187);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(16,190);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(17,194);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(18,224);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(19,234);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(20,210);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(21,247);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(22,283);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(23,313);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(24,299);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(25,283);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(26,276);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(27,300);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(28,309);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(29,292);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(30,271);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(1,11.53256);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(2,11);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(3,11.6619);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(4,11.53256);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(5,11.53256);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(6,10.86278);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(7,11.18034);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(8,11.95826);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(9,10.90871);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(10,12.64911);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(11,12.64911);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(12,12.49);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(13,12.76715);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(14,14.10674);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(15,13.67479);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(16,13.78405);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(17,13.92839);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(18,14.96663);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(19,15.29706);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(20,14.49138);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(21,15.71623);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(22,16.8226);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(23,17.69181);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(24,17.29162);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(25,16.8226);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(26,16.61325);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(27,17.32051);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(28,17.5784);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(29,17.08801);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(30,16.46208);
   Zee_2bjet_dPhi_Zb1__475->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__475->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__475->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__475->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__475->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fx1475[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fy1475[30] = {
   389.6894,
   403.0667,
   424.3949,
   369.8022,
   370.1281,
   386.7132,
   372.4255,
   400.7857,
   391.0561,
   445.6527,
   478.2002,
   467.9961,
   509.7556,
   547.5635,
   574.606,
   610.7187,
   685.6114,
   709.2115,
   715.8089,
   748.3763,
   835.5902,
   892.298,
   825.1391,
   842.0094,
   802.9723,
   839.082,
   825.6345,
   767.7586,
   804.5934,
   757.4864};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fex1475[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fey1475[30] = {
   18.10569,
   18.91093,
   19.1361,
   17.9114,
   18.14902,
   18.1724,
   18.0324,
   19.15154,
   18.59753,
   19.70904,
   20.69245,
   19.67333,
   20.63973,
   21.68037,
   21.90502,
   22.71135,
   24.05023,
   24.18226,
   24.7529,
   25.40158,
   26.79281,
   27.42641,
   26.13038,
   26.28148,
   25.85983,
   26.41817,
   26.63529,
   25.44489,
   25.84525,
   25.00621};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb1_fx1475,Graph_from_Zee_2bjet_dPhi_Zb1_fy1475,Graph_from_Zee_2bjet_dPhi_Zb1_fex1475,Graph_from_Zee_2bjet_dPhi_Zb1_fey1475);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb11475 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb11475","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->SetMinimum(295.1074);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->SetMaximum(976.5077);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__476 = new TH1D("data_mc_ratio__476","",30,0,3.141593);
   data_mc_ratio__476->SetBinContent(1,0.3412975);
   data_mc_ratio__476->SetBinContent(2,0.3001985);
   data_mc_ratio__476->SetBinContent(3,0.3204563);
   data_mc_ratio__476->SetBinContent(4,0.3596517);
   data_mc_ratio__476->SetBinContent(5,0.359335);
   data_mc_ratio__476->SetBinContent(6,0.3051357);
   data_mc_ratio__476->SetBinContent(7,0.3356376);
   data_mc_ratio__476->SetBinContent(8,0.3567992);
   data_mc_ratio__476->SetBinContent(9,0.3043042);
   data_mc_ratio__476->SetBinContent(10,0.359024);
   data_mc_ratio__476->SetBinContent(11,0.3345879);
   data_mc_ratio__476->SetBinContent(12,0.3333361);
   data_mc_ratio__476->SetBinContent(13,0.3197611);
   data_mc_ratio__476->SetBinContent(14,0.3634282);
   data_mc_ratio__476->SetBinContent(15,0.3254404);
   data_mc_ratio__476->SetBinContent(16,0.3111089);
   data_mc_ratio__476->SetBinContent(17,0.2829591);
   data_mc_ratio__476->SetBinContent(18,0.3158437);
   data_mc_ratio__476->SetBinContent(19,0.3269029);
   data_mc_ratio__476->SetBinContent(20,0.2806075);
   data_mc_ratio__476->SetBinContent(21,0.2955994);
   data_mc_ratio__476->SetBinContent(22,0.3171586);
   data_mc_ratio__476->SetBinContent(23,0.37933);
   data_mc_ratio__476->SetBinContent(24,0.3551029);
   data_mc_ratio__476->SetBinContent(25,0.3524406);
   data_mc_ratio__476->SetBinContent(26,0.3289309);
   data_mc_ratio__476->SetBinContent(27,0.3633569);
   data_mc_ratio__476->SetBinContent(28,0.4024703);
   data_mc_ratio__476->SetBinContent(29,0.3629162);
   data_mc_ratio__476->SetBinContent(30,0.3577622);
   data_mc_ratio__476->SetBinError(1,0.02959424);
   data_mc_ratio__476->SetBinError(2,0.02729077);
   data_mc_ratio__476->SetBinError(3,0.0274789);
   data_mc_ratio__476->SetBinError(4,0.03118576);
   data_mc_ratio__476->SetBinError(5,0.0311583);
   data_mc_ratio__476->SetBinError(6,0.02809002);
   data_mc_ratio__476->SetBinError(7,0.03002034);
   data_mc_ratio__476->SetBinError(8,0.02983705);
   data_mc_ratio__476->SetBinError(9,0.02789552);
   data_mc_ratio__476->SetBinError(10,0.02838334);
   data_mc_ratio__476->SetBinError(11,0.0264515);
   data_mc_ratio__476->SetBinError(12,0.02668825);
   data_mc_ratio__476->SetBinError(13,0.02504562);
   data_mc_ratio__476->SetBinError(14,0.02576274);
   data_mc_ratio__476->SetBinError(15,0.02379856);
   data_mc_ratio__476->SetBinError(16,0.02257021);
   data_mc_ratio__476->SetBinError(17,0.02031528);
   data_mc_ratio__476->SetBinError(18,0.0211032);
   data_mc_ratio__476->SetBinError(19,0.02137031);
   data_mc_ratio__476->SetBinError(20,0.01936376);
   data_mc_ratio__476->SetBinError(21,0.01880854);
   data_mc_ratio__476->SetBinError(22,0.01885312);
   data_mc_ratio__476->SetBinError(23,0.021441);
   data_mc_ratio__476->SetBinError(24,0.02053613);
   data_mc_ratio__476->SetBinError(25,0.02095042);
   data_mc_ratio__476->SetBinError(26,0.01979931);
   data_mc_ratio__476->SetBinError(27,0.02097842);
   data_mc_ratio__476->SetBinError(28,0.02289573);
   data_mc_ratio__476->SetBinError(29,0.02123807);
   data_mc_ratio__476->SetBinError(30,0.02173251);
   data_mc_ratio__476->SetMinimum(0.4);
   data_mc_ratio__476->SetMaximum(1.6);
   data_mc_ratio__476->SetEntries(4292.201);
   data_mc_ratio__476->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__476->SetLineColor(ci);
   data_mc_ratio__476->SetLineWidth(2);
   data_mc_ratio__476->SetMarkerStyle(20);
   data_mc_ratio__476->SetMarkerSize(1.2);
   data_mc_ratio__476->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__476->GetXaxis()->SetRange(1,31);
   data_mc_ratio__476->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__476->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__476->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__476->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__476->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__476->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.04646184,
   0.04691761,
   0.04509031,
   0.04843508,
   0.04903441,
   0.04699194,
   0.04841883,
   0.04778498,
   0.0475572,
   0.04422511,
   0.04327151,
   0.04203739,
   0.04048947,
   0.03959425,
   0.03812181,
   0.0371879,
   0.03507852,
   0.03409739,
   0.03458032,
   0.03394225,
   0.03206453,
   0.03073683,
   0.03166784,
   0.03121281,
   0.03220513,
   0.03148461,
   0.03226039,
   0.03314179,
   0.03212212,
   0.03301209};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.9411587);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(1.058841);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_17_amcnlo);
}
