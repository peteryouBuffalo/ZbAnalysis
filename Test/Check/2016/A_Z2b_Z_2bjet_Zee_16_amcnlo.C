void A_Z2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_16_amcnlo/A_Z2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_16_amcnlo", "A_Z2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5.360889,1.052419,5365.528);
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
   st->SetMaximum(4598.514);
   
   TH1F *st_stack_229 = new TH1F("st_stack_229","",25,0,1);
   st_stack_229->SetMinimum(0.01);
   st_stack_229->SetMaximum(4828.439);
   st_stack_229->SetDirectory(0);
   st_stack_229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_229->SetLineColor(ci);
   st_stack_229->GetXaxis()->SetRange(1,25);
   st_stack_229->GetXaxis()->SetLabelFont(42);
   st_stack_229->GetXaxis()->SetLabelSize(0.035);
   st_stack_229->GetXaxis()->SetTitleSize(0.035);
   st_stack_229->GetXaxis()->SetTitleFont(42);
   st_stack_229->GetYaxis()->SetTitle("Events/0.04");
   st_stack_229->GetYaxis()->SetLabelFont(42);
   st_stack_229->GetYaxis()->SetLabelSize(0.05);
   st_stack_229->GetYaxis()->SetTitleSize(0.057);
   st_stack_229->GetYaxis()->SetTitleOffset(1.2);
   st_stack_229->GetYaxis()->SetTitleFont(42);
   st_stack_229->GetZaxis()->SetLabelFont(42);
   st_stack_229->GetZaxis()->SetLabelSize(0.035);
   st_stack_229->GetZaxis()->SetTitleSize(0.035);
   st_stack_229->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_229);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,4.189051);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,5.424734);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,6.945145);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,3.541393);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,3.344928);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,4.095438);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,2.716273);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,2.124643);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,1.179346);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,0.7869761);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,2.163905);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,1.451728);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,0.7869761);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,1.181023);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,0.3940473);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,0.1970237);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,0.1970237);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(18,0.3934881);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.5899525);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(21,0.1964644);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,0.9031225);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,1.015209);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,1.165421);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,0.8347151);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,0.8112651);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,0.8874778);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,0.7182539);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,0.6318335);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,0.4814661);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.3934885);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,0.6524425);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.5257784);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.3934885);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.4821512);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.2786335);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.1970237);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.1970237);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(18,0.2782384);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.3406095);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(21,0.1964644);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(221);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_2 = new TH1D("Zee_2bjet_A_Z2b_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,21.95844);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,19.74735);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,14.72909);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,10.55642);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,7.339844);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,8.768133);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,4.470714);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,3.278524);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,3.278524);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,2.162545);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,0.5960952);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,0.5960952);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,1.490238);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(14,0.5960952);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(16,0.5960952);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(17,0.8941428);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(19,0.2980476);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(20,0.5960952);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(21,0.2980476);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,2.599162);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,2.458432);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,2.107775);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,1.788592);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,1.555174);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,1.632809);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,1.154333);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,0.988512);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,0.988512);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,0.8959791);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,0.4215029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,0.4215029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,0.6664547);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(14,0.4215029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(16,0.4215029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(17,0.5162336);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(19,0.2980476);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(20,0.4215029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(21,0.2980476);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(336);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_3 = new TH1D("Zee_2bjet_A_Z2b_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,223.3672);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,218.8882);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,191.4298);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,161.8292);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,137.6814);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,130.2813);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,98.14914);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,84.90679);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,67.38016);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,55.30626);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,46.54294);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,41.28495);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,27.45839);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,29.21105);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,24.73202);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,20.83722);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,13.82656);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,15.96871);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,11.29494);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,8.568575);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,6.036951);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,3.700067);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,2.726365);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,1.947403);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,0.1947403);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,6.595347);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,6.528886);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,6.105661);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,5.613794);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,5.178043);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,5.036966);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,4.37191);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,4.066298);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,3.62238);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,3.281823);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,3.010613);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,2.835462);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,2.312414);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,2.385072);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,2.194612);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,2.01441);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,1.640911);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,1.763449);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,1.483098);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,1.291761);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,1.084268);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,0.8488535);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,0.7286517);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,0.6158231);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.1947403);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(8337);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_4 = new TH1D("Zee_2bjet_A_Z2b_stack_4","",25,0,1);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(1,8.443335);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(2,6.761971);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(3,4.974543);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(4,3.730762);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(5,2.772715);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(6,2.162416);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(7,1.699911);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(8,1.370129);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(9,1.044984);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(10,0.9116808);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(11,0.6815872);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(12,0.5552385);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(13,0.4393224);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(14,0.3668747);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(15,0.3315203);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(16,0.2474811);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(17,0.2237182);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(18,0.182568);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(19,0.1367811);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(20,0.1066429);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(21,0.08751672);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(22,0.06317432);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(23,0.04346857);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(24,0.02608114);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(25,0.01101204);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(1,0.06995424);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(2,0.06260279);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(3,0.05369498);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(4,0.04650031);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(5,0.04008757);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(6,0.03540191);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(7,0.03138847);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(8,0.02817979);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(9,0.02461002);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(10,0.0229868);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(11,0.01987549);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(12,0.01793894);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(13,0.01595691);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(14,0.01458196);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(15,0.01386156);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(16,0.01197645);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(17,0.01138696);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(18,0.01028654);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(19,0.008903691);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(20,0.007861818);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(21,0.00712201);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(22,0.006051003);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(23,0.005019318);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(24,0.003887947);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(25,0.002526335);
   Zee_2bjet_A_Z2b_stack_4->SetEntries(64487);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_5 = new TH1D("Zee_2bjet_A_Z2b_stack_5","",25,0,1);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(1,2271.224);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(2,2109.025);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(3,1858.667);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(4,1452.179);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(5,1235.432);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(6,946.5293);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(7,765.8603);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(8,639.0962);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(9,542.5754);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(10,429.1987);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(11,376.6383);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(12,332.5597);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(13,248.4263);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(14,240.8411);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(15,177.5161);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(16,156.0793);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(17,137.6007);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(18,112.2686);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(19,89.5078);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(20,77.81552);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(21,52.75138);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(22,40.75516);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(23,26.52766);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(24,23.29669);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(25,4.498582);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(1,35.52153);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(2,33.94917);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(3,31.4193);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(4,27.75199);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(5,25.93927);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(6,22.58288);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(7,20.03578);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(8,18.3699);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(9,17.13478);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(10,15.29751);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(11,14.10778);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(12,13.11578);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(13,11.44547);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(14,11.40718);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(15,9.463239);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(16,9.132353);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(17,8.39192);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(18,7.532181);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(19,6.719465);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(20,6.318546);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(21,5.154909);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(22,4.536173);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(23,3.69744);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(24,3.501684);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(25,1.499527);
   Zee_2bjet_A_Z2b_stack_5->SetEntries(27953);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b__457 = new TH1D("Zee_2bjet_A_Z2b__457","",25,0,1);
   Zee_2bjet_A_Z2b__457->SetBinContent(1,849);
   Zee_2bjet_A_Z2b__457->SetBinContent(2,810);
   Zee_2bjet_A_Z2b__457->SetBinContent(3,646);
   Zee_2bjet_A_Z2b__457->SetBinContent(4,616);
   Zee_2bjet_A_Z2b__457->SetBinContent(5,473);
   Zee_2bjet_A_Z2b__457->SetBinContent(6,388);
   Zee_2bjet_A_Z2b__457->SetBinContent(7,305);
   Zee_2bjet_A_Z2b__457->SetBinContent(8,256);
   Zee_2bjet_A_Z2b__457->SetBinContent(9,210);
   Zee_2bjet_A_Z2b__457->SetBinContent(10,171);
   Zee_2bjet_A_Z2b__457->SetBinContent(11,132);
   Zee_2bjet_A_Z2b__457->SetBinContent(12,136);
   Zee_2bjet_A_Z2b__457->SetBinContent(13,97);
   Zee_2bjet_A_Z2b__457->SetBinContent(14,81);
   Zee_2bjet_A_Z2b__457->SetBinContent(15,70);
   Zee_2bjet_A_Z2b__457->SetBinContent(16,69);
   Zee_2bjet_A_Z2b__457->SetBinContent(17,35);
   Zee_2bjet_A_Z2b__457->SetBinContent(18,44);
   Zee_2bjet_A_Z2b__457->SetBinContent(19,34);
   Zee_2bjet_A_Z2b__457->SetBinContent(20,15);
   Zee_2bjet_A_Z2b__457->SetBinContent(21,16);
   Zee_2bjet_A_Z2b__457->SetBinContent(22,22);
   Zee_2bjet_A_Z2b__457->SetBinContent(23,11);
   Zee_2bjet_A_Z2b__457->SetBinContent(24,4);
   Zee_2bjet_A_Z2b__457->SetBinError(1,29.1376);
   Zee_2bjet_A_Z2b__457->SetBinError(2,28.4605);
   Zee_2bjet_A_Z2b__457->SetBinError(3,25.41653);
   Zee_2bjet_A_Z2b__457->SetBinError(4,24.81935);
   Zee_2bjet_A_Z2b__457->SetBinError(5,21.74856);
   Zee_2bjet_A_Z2b__457->SetBinError(6,19.69772);
   Zee_2bjet_A_Z2b__457->SetBinError(7,17.46425);
   Zee_2bjet_A_Z2b__457->SetBinError(8,16);
   Zee_2bjet_A_Z2b__457->SetBinError(9,14.49138);
   Zee_2bjet_A_Z2b__457->SetBinError(10,13.0767);
   Zee_2bjet_A_Z2b__457->SetBinError(11,11.48913);
   Zee_2bjet_A_Z2b__457->SetBinError(12,11.6619);
   Zee_2bjet_A_Z2b__457->SetBinError(13,9.848858);
   Zee_2bjet_A_Z2b__457->SetBinError(14,9);
   Zee_2bjet_A_Z2b__457->SetBinError(15,8.3666);
   Zee_2bjet_A_Z2b__457->SetBinError(16,8.306624);
   Zee_2bjet_A_Z2b__457->SetBinError(17,5.91608);
   Zee_2bjet_A_Z2b__457->SetBinError(18,6.63325);
   Zee_2bjet_A_Z2b__457->SetBinError(19,5.830952);
   Zee_2bjet_A_Z2b__457->SetBinError(20,3.872983);
   Zee_2bjet_A_Z2b__457->SetBinError(21,4);
   Zee_2bjet_A_Z2b__457->SetBinError(22,4.690416);
   Zee_2bjet_A_Z2b__457->SetBinError(23,3.316625);
   Zee_2bjet_A_Z2b__457->SetBinError(24,2);
   Zee_2bjet_A_Z2b__457->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__457->SetLineColor(ci);
   Zee_2bjet_A_Z2b__457->SetLineWidth(2);
   Zee_2bjet_A_Z2b__457->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__457->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_A_Z2b_fx1457[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fy1457[25] = {
   2529.182,
   2359.847,
   2076.746,
   1631.836,
   1386.571,
   1091.837,
   872.8963,
   730.7763,
   615.4584,
   488.3662,
   426.6229,
   376.4477,
   278.6012,
   272.1961,
   202.9737,
   177.9571,
   152.7422,
   128.8134,
   101.8275,
   87.08684,
   59.37036,
   44.5184,
   29.29749,
   25.27017,
   4.704334};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fex1457[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fey1457[25] = {
   36.23332,
   34.67349,
   32.09759,
   28.38284,
   26.50917,
   23.21233,
   20.55226,
   18.85113,
   17.54799,
   15.67617,
   14.44635,
   13.4357,
   11.70236,
   11.67144,
   9.718387,
   9.363458,
   8.568684,
   7.740867,
   6.896065,
   6.463003,
   5.279792,
   4.614916,
   3.768557,
   3.555425,
   1.512122};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_A_Z2b_fx1457,Graph_from_Zee_2bjet_A_Z2b_fy1457,Graph_from_Zee_2bjet_A_Z2b_fex1457,Graph_from_Zee_2bjet_A_Z2b_fey1457);
   gre->SetName("Graph_from_Zee_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_A_Z2b1457 = new TH1F("Graph_Graph_from_Zee_2bjet_A_Z2b1457","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->SetMinimum(2.872991);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->SetMaximum(2821.638);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1457->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_A_Z2b1457);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__458 = new TH1D("data_mc_ratio__458","",25,0,1);
   data_mc_ratio__458->SetBinContent(1,0.3356816);
   data_mc_ratio__458->SetBinContent(2,0.3432426);
   data_mc_ratio__458->SetBinContent(3,0.3110636);
   data_mc_ratio__458->SetBinContent(4,0.3774888);
   data_mc_ratio__458->SetBinContent(5,0.3411293);
   data_mc_ratio__458->SetBinContent(6,0.3553645);
   data_mc_ratio__458->SetBinContent(7,0.3494115);
   data_mc_ratio__458->SetBinContent(8,0.3503124);
   data_mc_ratio__458->SetBinContent(9,0.3412091);
   data_mc_ratio__458->SetBinContent(10,0.3501471);
   data_mc_ratio__458->SetBinContent(11,0.3094068);
   data_mc_ratio__458->SetBinContent(12,0.3612719);
   data_mc_ratio__458->SetBinContent(13,0.3481679);
   data_mc_ratio__458->SetBinContent(14,0.2975795);
   data_mc_ratio__458->SetBinContent(15,0.3448723);
   data_mc_ratio__458->SetBinContent(16,0.3877338);
   data_mc_ratio__458->SetBinContent(17,0.2291443);
   data_mc_ratio__458->SetBinContent(18,0.3415794);
   data_mc_ratio__458->SetBinContent(19,0.3338979);
   data_mc_ratio__458->SetBinContent(20,0.1722419);
   data_mc_ratio__458->SetBinContent(21,0.2694948);
   data_mc_ratio__458->SetBinContent(22,0.4941777);
   data_mc_ratio__458->SetBinContent(23,0.3754588);
   data_mc_ratio__458->SetBinContent(24,0.1582894);
   data_mc_ratio__458->SetBinError(1,0.01152056);
   data_mc_ratio__458->SetBinError(2,0.01206032);
   data_mc_ratio__458->SetBinError(3,0.01223863);
   data_mc_ratio__458->SetBinError(4,0.01520946);
   data_mc_ratio__458->SetBinError(5,0.01568514);
   data_mc_ratio__458->SetBinError(6,0.0180409);
   data_mc_ratio__458->SetBinError(7,0.02000724);
   data_mc_ratio__458->SetBinError(8,0.02189452);
   data_mc_ratio__458->SetBinError(9,0.02354566);
   data_mc_ratio__458->SetBinError(10,0.02677642);
   data_mc_ratio__458->SetBinError(11,0.0269304);
   data_mc_ratio__458->SetBinError(12,0.03097881);
   data_mc_ratio__458->SetBinError(13,0.03535109);
   data_mc_ratio__458->SetBinError(14,0.03306439);
   data_mc_ratio__458->SetBinError(15,0.04122013);
   data_mc_ratio__458->SetBinError(16,0.04667766);
   data_mc_ratio__458->SetBinError(17,0.03873246);
   data_mc_ratio__458->SetBinError(18,0.05149503);
   data_mc_ratio__458->SetBinError(19,0.05726302);
   data_mc_ratio__458->SetBinError(20,0.04447266);
   data_mc_ratio__458->SetBinError(21,0.06737369);
   data_mc_ratio__458->SetBinError(22,0.105359);
   data_mc_ratio__458->SetBinError(23,0.1132051);
   data_mc_ratio__458->SetBinError(24,0.07914469);
   data_mc_ratio__458->SetMinimum(0.4);
   data_mc_ratio__458->SetMaximum(1.6);
   data_mc_ratio__458->SetEntries(960.3667);
   data_mc_ratio__458->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__458->SetLineColor(ci);
   data_mc_ratio__458->SetLineWidth(2);
   data_mc_ratio__458->SetMarkerStyle(20);
   data_mc_ratio__458->SetMarkerSize(1.2);
   data_mc_ratio__458->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__458->GetXaxis()->SetRange(1,25);
   data_mc_ratio__458->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__458->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__458->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__458->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__458->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__458->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__458->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__458->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__458->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__458->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__458->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__458->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__458->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__458->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1458[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1458[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1458[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1458[25] = {
   0.0143261,
   0.01469311,
   0.01545571,
   0.01739319,
   0.01911851,
   0.02125989,
   0.0235449,
   0.02579603,
   0.02851206,
   0.03209922,
   0.0338621,
   0.03569074,
   0.04200398,
   0.0428788,
   0.04788004,
   0.05261636,
   0.05609901,
   0.06009364,
   0.067723,
   0.07421331,
   0.08892976,
   0.1036631,
   0.1286307,
   0.1406965,
   0.3214316};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1458,Graph_from_mc_statistical_error_fy1458,Graph_from_mc_statistical_error_fex1458,Graph_from_mc_statistical_error_fey1458);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1458 = new TH1F("Graph_Graph_from_mc_statistical_error1458","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1458->SetMinimum(0.6142821);
   Graph_Graph_from_mc_statistical_error1458->SetMaximum(1.385718);
   Graph_Graph_from_mc_statistical_error1458->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1458->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1458->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1458);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_16_amcnlo);
}
