void dPhi_Zb_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_16_amcnlo/dPhi_Zb_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_16_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_16_amcnlo", "dPhi_Zb_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-3.299357,3.416482,3306.058);
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
   st->SetMaximum(2833.449);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,3.141593);
   st_stack_233->SetMinimum(0.01);
   st_stack_233->SetMaximum(2975.122);
   st_stack_233->SetDirectory(0);
   st_stack_233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_233->SetLineColor(ci);
   st_stack_233->GetXaxis()->SetRange(1,31);
   st_stack_233->GetXaxis()->SetLabelFont(42);
   st_stack_233->GetXaxis()->SetLabelSize(0.035);
   st_stack_233->GetXaxis()->SetTitleSize(0.035);
   st_stack_233->GetXaxis()->SetTitleFont(42);
   st_stack_233->GetYaxis()->SetTitle("Events/0.105");
   st_stack_233->GetYaxis()->SetLabelFont(42);
   st_stack_233->GetYaxis()->SetLabelSize(0.05);
   st_stack_233->GetYaxis()->SetTitleSize(0.057);
   st_stack_233->GetYaxis()->SetTitleOffset(1.2);
   st_stack_233->GetYaxis()->SetTitleFont(42);
   st_stack_233->GetZaxis()->SetLabelFont(42);
   st_stack_233->GetZaxis()->SetLabelSize(0.035);
   st_stack_233->GetZaxis()->SetTitleSize(0.035);
   st_stack_233->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_233);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.1970237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.7880947);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.5893932);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.1964644);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.1970237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.3934881);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.3929288);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.08352164);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.1964644);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.7875354);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.4528714);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.5905117);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.7875354);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,0.3929288);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.591071);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,0.9845591);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,0.8469187);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(18,1.067521);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,0.9834405);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,0.5899525);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.966881);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,2.11592);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,1.968559);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,3.737857);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,3.933762);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,3.50269);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,2.493992);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,3.313829);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,3.738416);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,4.018402);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.1970237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.3940473);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.3402863);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.1964644);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.1970237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.2782384);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.2778426);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.08352164);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.1964644);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.393768);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.2845048);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.3409324);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.393768);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.2778426);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.341255);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.4403085);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.3982206);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.4479145);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.4398084);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.3406095);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.621983);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.6307397);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.6225135);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.8575241);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.8796168);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.8188417);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.6878813);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.7955151);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,0.8576524);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.8838222);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(221);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(2,0.5960952);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(3,0.2980476);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(4,0.8941428);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.5960952);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(6,0.7208484);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.8941428);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,1.19219);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.4228008);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,1.490238);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,0.2980476);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,1.614991);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.211086);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,1.490238);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,1.018896);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.931935);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,2.086333);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,1.788286);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,4.893515);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,4.172666);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,3.278524);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,5.787657);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,6.383753);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,8.047285);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,9.364229);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,10.02227);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,10.85447);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,10.85447);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,8.047285);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.4215029);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.2980476);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.5162336);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.4215029);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.5172938);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.5162336);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.5960952);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.4228008);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.6664547);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.2980476);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.7308146);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.8436556);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.6664547);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,0.5970136);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.9896199);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.7885598);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,0.7300645);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.229327);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.115192);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,0.988512);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.33332);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.398359);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,1.548701);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,1.686337);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.793895);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,1.813255);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,1.813255);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,1.548701);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(336);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,23.56358);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,19.47403);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,20.253);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,22.97936);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,18.88981);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,18.30559);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,20.64248);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,18.50033);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,21.03196);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,25.1215);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,28.23735);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,32.13216);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,32.52164);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,38.94807);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,40.70073);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,46.93242);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,51.99567);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,57.83788);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,68.15912);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,76.92244);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,83.15413);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,78.6751);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,82.76465);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,89.38582);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,98.73336);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,104.3808);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,102.0439);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,106.1335);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,101.0702);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,94.05959);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.142144);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,1.947403);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,1.98597);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,2.115422);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,1.91797);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,1.888078);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.004975);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,1.898094);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.023801);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.211825);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.344984);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.501485);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.5166);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.754044);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,2.815329);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.023183);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.182084);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.356094);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.643258);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.870388);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,4.02411);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,3.914233);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.014675);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.172173);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.384902);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.508565);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.45781);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.546259);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.436491);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,4.279859);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(8337);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_4 = new TH1D("Zee_2bjet_dPhi_Zb_stack_4","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.1663397);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.1709764);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.1477931);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.1524298);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.1512706);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.1796701);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.1773518);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.1808293);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.2144449);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.2069104);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.2318324);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.2480606);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.2770397);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.3170308);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.3842622);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(16,0.4358449);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(17,0.5471244);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(18,0.6166741);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(19,0.7441819);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(20,0.9626839);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(21,1.14757);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(22,1.486625);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(23,1.898707);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(24,2.459741);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(25,3.067722);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(26,3.672225);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(27,4.311503);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(28,4.528845);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(29,4.361926);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(30,3.92782);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.009818724);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.00995463);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.009255165);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.009399223);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.009363417);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.01020458);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.01013853);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.01023744);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.01114846);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.01095086);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.01159162);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.01199046);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.0126715);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.01355526);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.01492351);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.01589363);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.01780738);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.01890536);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.02076809);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.02362103);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.02578972);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.02935336);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.0331731);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.03775737);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.04216626);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.04613406);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.04998865);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.05123312);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.05028011);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.04771257);
   Zee_2bjet_dPhi_Zb_stack_4->SetEntries(64487);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_4->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_4,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_5 = new TH1D("Zee_2bjet_dPhi_Zb_stack_5","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(1,134.9984);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(2,125.022);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(3,120.7144);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(4,136.529);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(5,155.5427);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(6,122.2499);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(7,132.8031);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(8,142.7533);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(9,142.269);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(10,147.0101);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(11,180.0611);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(12,181.0043);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(13,184.014);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(14,220.5279);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(15,244.5817);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(16,278.6127);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(17,290.9492);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(18,358.9785);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(19,380.2816);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(20,451.0633);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(21,515.5066);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(22,618.3135);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(23,720.4985);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(24,831.1847);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(25,948.4157);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(26,1111.137);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(27,1262.336);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(28,1353.132);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(29,1438.372);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(30,1418.008);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(1,8.705116);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(2,8.656962);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(3,8.01767);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(4,8.310584);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(5,10.49421);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(6,8.090857);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(7,8.677492);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(8,9.565033);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(9,9.354605);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(10,8.834245);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(11,10.34485);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(12,10.14521);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(13,9.633319);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(14,11.0947);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(15,12.14772);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(16,12.0611);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(17,12.39879);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(18,14.55384);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(19,14.26748);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(20,15.47766);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(21,16.44059);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(22,18.71142);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(23,19.42469);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(24,21.04762);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(25,22.40101);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(26,24.2715);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(27,25.68407);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(28,26.62251);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(29,27.35645);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(30,27.30771);
   Zee_2bjet_dPhi_Zb_stack_5->SetEntries(27953);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_5->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb__465 = new TH1D("Zee_2bjet_dPhi_Zb__465","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(1,62);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(2,66);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(3,48);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(4,70);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(5,65);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(6,54);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(7,55);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(8,59);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(9,73);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(10,77);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(11,60);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(12,91);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(13,81);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(14,90);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(15,94);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(16,112);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(17,155);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(18,157);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(19,160);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(20,188);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(21,226);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(22,256);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(23,291);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(24,304);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(25,337);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(26,410);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(27,436);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(28,458);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(29,474);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(30,481);
   Zee_2bjet_dPhi_Zb__465->SetBinError(1,7.874008);
   Zee_2bjet_dPhi_Zb__465->SetBinError(2,8.124038);
   Zee_2bjet_dPhi_Zb__465->SetBinError(3,6.928203);
   Zee_2bjet_dPhi_Zb__465->SetBinError(4,8.3666);
   Zee_2bjet_dPhi_Zb__465->SetBinError(5,8.062258);
   Zee_2bjet_dPhi_Zb__465->SetBinError(6,7.348469);
   Zee_2bjet_dPhi_Zb__465->SetBinError(7,7.416198);
   Zee_2bjet_dPhi_Zb__465->SetBinError(8,7.681146);
   Zee_2bjet_dPhi_Zb__465->SetBinError(9,8.544004);
   Zee_2bjet_dPhi_Zb__465->SetBinError(10,8.774964);
   Zee_2bjet_dPhi_Zb__465->SetBinError(11,7.745967);
   Zee_2bjet_dPhi_Zb__465->SetBinError(12,9.539392);
   Zee_2bjet_dPhi_Zb__465->SetBinError(13,9);
   Zee_2bjet_dPhi_Zb__465->SetBinError(14,9.486833);
   Zee_2bjet_dPhi_Zb__465->SetBinError(15,9.69536);
   Zee_2bjet_dPhi_Zb__465->SetBinError(16,10.58301);
   Zee_2bjet_dPhi_Zb__465->SetBinError(17,12.4499);
   Zee_2bjet_dPhi_Zb__465->SetBinError(18,12.52996);
   Zee_2bjet_dPhi_Zb__465->SetBinError(19,12.64911);
   Zee_2bjet_dPhi_Zb__465->SetBinError(20,13.71131);
   Zee_2bjet_dPhi_Zb__465->SetBinError(21,15.0333);
   Zee_2bjet_dPhi_Zb__465->SetBinError(22,16);
   Zee_2bjet_dPhi_Zb__465->SetBinError(23,17.05872);
   Zee_2bjet_dPhi_Zb__465->SetBinError(24,17.4356);
   Zee_2bjet_dPhi_Zb__465->SetBinError(25,18.35756);
   Zee_2bjet_dPhi_Zb__465->SetBinError(26,20.24846);
   Zee_2bjet_dPhi_Zb__465->SetBinError(27,20.88061);
   Zee_2bjet_dPhi_Zb__465->SetBinError(28,21.40093);
   Zee_2bjet_dPhi_Zb__465->SetBinError(29,21.77154);
   Zee_2bjet_dPhi_Zb__465->SetBinError(30,21.93171);
   Zee_2bjet_dPhi_Zb__465->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__465->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__465->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__465->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__465->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fx1465[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fy1465[30] = {
   158.9253,
   146.0512,
   142.0026,
   160.7514,
   175.3769,
   141.8495,
   154.91,
   162.7102,
   163.7119,
   173.5489,
   210.4734,
   214.2731,
   219.2152,
   262.397,
   287.748,
   327.9845,
   347.2709,
   420.5869,
   451.9566,
   534.4319,
   605.9479,
   703.8697,
   812.9181,
   933.1518,
   1062.198,
   1232.057,
   1381.208,
   1477.963,
   1558.397,
   1528.061};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fex1465[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fey1465[30] = {
   8.96698,
   8.892041,
   8.272353,
   8.59337,
   10.67819,
   8.328981,
   8.92539,
   9.770109,
   9.573042,
   9.125239,
   10.63203,
   10.45887,
   9.991167,
   11.46587,
   12.49216,
   12.45633,
   12.84499,
   14.96331,
   14.74996,
   16.00517,
   16.97403,
   19.15239,
   19.88976,
   21.5198,
   22.89556,
   24.75781,
   26.13881,
   27.08043,
   27.7864,
   27.69856};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb_fx1465,Graph_from_Zee_2bjet_dPhi_Zb_fy1465,Graph_from_Zee_2bjet_dPhi_Zb_fex1465,Graph_from_Zee_2bjet_dPhi_Zb_fey1465);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb1465 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb1465","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->SetMinimum(120.1685);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->SetMaximum(1731.45);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb1465);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dPhi_Zb","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__466 = new TH1D("data_mc_ratio__466","",30,0,3.141593);
   data_mc_ratio__466->SetBinContent(1,0.3901203);
   data_mc_ratio__466->SetBinContent(2,0.4518963);
   data_mc_ratio__466->SetBinContent(3,0.3380219);
   data_mc_ratio__466->SetBinContent(4,0.435455);
   data_mc_ratio__466->SetBinContent(5,0.3706304);
   data_mc_ratio__466->SetBinContent(6,0.3806851);
   data_mc_ratio__466->SetBinContent(7,0.3550449);
   data_mc_ratio__466->SetBinContent(8,0.3626079);
   data_mc_ratio__466->SetBinContent(9,0.4459053);
   data_mc_ratio__466->SetBinContent(10,0.443679);
   data_mc_ratio__466->SetBinContent(11,0.2850716);
   data_mc_ratio__466->SetBinContent(12,0.4246916);
   data_mc_ratio__466->SetBinContent(13,0.3694999);
   data_mc_ratio__466->SetBinContent(14,0.3429917);
   data_mc_ratio__466->SetBinContent(15,0.3266747);
   data_mc_ratio__466->SetBinContent(16,0.3414796);
   data_mc_ratio__466->SetBinContent(17,0.4463375);
   data_mc_ratio__466->SetBinContent(18,0.3732879);
   data_mc_ratio__466->SetBinContent(19,0.3540163);
   data_mc_ratio__466->SetBinContent(20,0.3517754);
   data_mc_ratio__466->SetBinContent(21,0.3729694);
   data_mc_ratio__466->SetBinContent(22,0.3637037);
   data_mc_ratio__466->SetBinContent(23,0.3579697);
   data_mc_ratio__466->SetBinContent(24,0.3257776);
   data_mc_ratio__466->SetBinContent(25,0.3172667);
   data_mc_ratio__466->SetBinContent(26,0.3327769);
   data_mc_ratio__466->SetBinContent(27,0.3156657);
   data_mc_ratio__466->SetBinContent(28,0.3098861);
   data_mc_ratio__466->SetBinContent(29,0.3041587);
   data_mc_ratio__466->SetBinContent(30,0.3147781);
   data_mc_ratio__466->SetBinError(1,0.04954533);
   data_mc_ratio__466->SetBinError(2,0.05562459);
   data_mc_ratio__466->SetBinError(3,0.04878926);
   data_mc_ratio__466->SetBinError(4,0.05204683);
   data_mc_ratio__466->SetBinError(5,0.04597104);
   data_mc_ratio__466->SetBinError(6,0.05180468);
   data_mc_ratio__466->SetBinError(7,0.04787424);
   data_mc_ratio__466->SetBinError(8,0.04720753);
   data_mc_ratio__466->SetBinError(9,0.05218927);
   data_mc_ratio__466->SetBinError(10,0.05056191);
   data_mc_ratio__466->SetBinError(11,0.03680259);
   data_mc_ratio__466->SetBinError(12,0.04451978);
   data_mc_ratio__466->SetBinError(13,0.04105554);
   data_mc_ratio__466->SetBinError(14,0.0361545);
   data_mc_ratio__466->SetBinError(15,0.03369392);
   data_mc_ratio__466->SetBinError(16,0.03226679);
   data_mc_ratio__466->SetBinError(17,0.03585069);
   data_mc_ratio__466->SetBinError(18,0.02979161);
   data_mc_ratio__466->SetBinError(19,0.02798745);
   data_mc_ratio__466->SetBinError(20,0.02565586);
   data_mc_ratio__466->SetBinError(21,0.02480955);
   data_mc_ratio__466->SetBinError(22,0.02273148);
   data_mc_ratio__466->SetBinError(23,0.02098455);
   data_mc_ratio__466->SetBinError(24,0.01868463);
   data_mc_ratio__466->SetBinError(25,0.01728262);
   data_mc_ratio__466->SetBinError(26,0.01643468);
   data_mc_ratio__466->SetBinError(27,0.01511765);
   data_mc_ratio__466->SetBinError(28,0.01448003);
   data_mc_ratio__466->SetBinError(29,0.01397047);
   data_mc_ratio__466->SetBinError(30,0.01435264);
   data_mc_ratio__466->SetMinimum(0.4);
   data_mc_ratio__466->SetMaximum(1.6);
   data_mc_ratio__466->SetEntries(2439.188);
   data_mc_ratio__466->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__466->SetLineColor(ci);
   data_mc_ratio__466->SetLineWidth(2);
   data_mc_ratio__466->SetMarkerStyle(20);
   data_mc_ratio__466->SetMarkerSize(1.2);
   data_mc_ratio__466->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__466->GetXaxis()->SetRange(1,31);
   data_mc_ratio__466->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__466->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__466->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__466->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__466->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__466->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1466[30] = {
   0.0564226,
   0.06088304,
   0.05825493,
   0.05345751,
   0.06088709,
   0.05871701,
   0.05761661,
   0.06004608,
   0.05847493,
   0.05258022,
   0.05051483,
   0.04881093,
   0.04557697,
   0.04369665,
   0.04341353,
   0.03797843,
   0.03698839,
   0.0355772,
   0.03263578,
   0.02994802,
   0.02801236,
   0.02721014,
   0.02446712,
   0.02306141,
   0.02155489,
   0.0200947,
   0.0189246,
   0.01832281,
   0.01783011,
   0.01812661};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.9269355);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(1.073065);
   Graph_Graph_from_mc_statistical_error1466->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1466->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1466);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_16_amcnlo);
}
