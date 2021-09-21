void A_Z2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_18_amcnlo/A_Z2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:39 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_18_amcnlo", "A_Z2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-11.56773,1.052419,11566.16);
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
   st->SetMaximum(9912.75);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",25,0,1);
   st_stack_319->SetMinimum(0.01);
   st_stack_319->SetMaximum(10408.39);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetRange(1,25);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetLabelSize(0.035);
   st_stack_319->GetXaxis()->SetTitleSize(0.035);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.04");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetLabelSize(0.05);
   st_stack_319->GetYaxis()->SetTitleSize(0.057);
   st_stack_319->GetYaxis()->SetTitleOffset(1.2);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetLabelSize(0.035);
   st_stack_319->GetZaxis()->SetTitleSize(0.035);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,20.14738);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,13.7704);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,9.746027);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,9.905389);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,11.09167);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,9.514249);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,6.193624);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,5.912056);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,5.075788);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,4.264903);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,2.927803);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,1.624802);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,0.8283264);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,1.148692);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,2.885476);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,0.5324734);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.7141642);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(18,1.255765);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,0.7796553);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,1.131872);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(21,0.2380547);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,2.31792);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,1.912304);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,1.623558);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,1.632323);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,1.695924);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,1.585677);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,1.308968);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,1.223018);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,1.184848);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,1.069391);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.8579828);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.6681545);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.4559047);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.5771398);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.8505382);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.3413459);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.4123229);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(18,0.5646418);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.4532992);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.5477127);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(21,0.2380547);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,55.46834);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,44.04949);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,35.89407);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,33.58038);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,19.39575);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,12.96175);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,13.9588);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,8.973517);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,7.158362);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,7.205232);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,3.98823);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,4.486758);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,2.991172);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,2.991172);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,1.495586);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(16,1.495586);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,1.495586);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(18,0.9970574);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(19,1.495586);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(20,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(21,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(23,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(24,0.9970574);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,5.308598);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,4.738215);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,4.230156);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,4.151088);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,3.161725);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,2.542008);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,2.637966);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,2.115078);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,2.014794);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,1.937936);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,1.410052);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,1.495586);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,1.221141);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,1.221141);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.8634771);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(16,0.8634771);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.8634771);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(18,0.7050261);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(19,0.8634771);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(20,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(21,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(23,0.4985287);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(24,0.7050261);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,611.6055);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,576.2138);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,507.2622);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,456.891);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,380.7047);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,322.9474);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,258.6942);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,220.9302);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,179.9915);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,149.5844);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,124.2228);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,103.0883);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,80.82615);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,68.79168);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,61.0972);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,51.52061);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,42.21051);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,32.7447);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,27.67323);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,20.06131);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,17.41008);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,11.27265);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,10.22764);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,4.531216);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,1.403466);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,7.099536);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,6.892137);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,6.46637);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,6.135843);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,5.601067);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,5.159278);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,4.617785);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,4.267283);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,3.851054);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,3.510618);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,3.199294);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,2.913877);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,2.579701);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,2.379644);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,2.243277);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,2.059533);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,1.863985);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,1.641657);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,1.509899);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,1.286933);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,1.198596);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,0.9632657);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,0.9185167);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,0.6110601);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,0.3403905);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_4 = new TH1D("Zmm_2bjet_A_Z2b_stack_4","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(1,19.65884);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(2,16.20662);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(3,12.01121);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(4,9.035022);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(5,7.044117);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(6,5.479059);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(7,4.17846);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(8,3.336259);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(9,2.687316);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(10,2.174671);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(11,1.681013);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(12,1.405704);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(13,1.155485);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(14,0.9296769);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(15,0.7743917);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(16,0.6611488);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(17,0.5451935);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(18,0.4583965);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(19,0.3465098);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(20,0.3126047);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(21,0.2183486);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(22,0.1546071);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(23,0.1051057);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(24,0.06577583);
   Zmm_2bjet_A_Z2b_stack_4->SetBinContent(25,0.02576785);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(1,0.1154586);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(2,0.1048319);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(3,0.09024864);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(4,0.07827299);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(5,0.06911313);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(6,0.06095373);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(7,0.05322988);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(8,0.04756387);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(9,0.04268808);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(10,0.03840114);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(11,0.03376237);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(12,0.0308741);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(13,0.02799171);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(14,0.02510807);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(15,0.02291541);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(16,0.02117371);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(17,0.01922749);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(18,0.01763063);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(19,0.01532869);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(20,0.01455945);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(21,0.01216809);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(22,0.01023911);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(23,0.008442294);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(24,0.006678524);
   Zmm_2bjet_A_Z2b_stack_4->SetBinError(25,0.004180097);
   Zmm_2bjet_A_Z2b_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_5 = new TH1D("Zmm_2bjet_A_Z2b_stack_5","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(1,4745.133);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(2,4492.354);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(3,3896.229);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(4,3126.901);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(5,2509.742);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(6,2032.753);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(7,1610.283);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(8,1409.138);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(9,1077.763);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(10,845.3081);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(11,720.3663);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(12,642.1986);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(13,510.2799);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(14,441.1592);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(15,388.3452);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(16,289.7401);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(17,296.2715);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(18,200.4407);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(19,168.7662);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(20,164.9276);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(21,131.684);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(22,67.52756);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(23,49.54831);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(24,33.00887);
   Zmm_2bjet_A_Z2b_stack_5->SetBinContent(25,12.36074);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(1,74.29115);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(2,71.95051);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(3,67.28463);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(4,60.34073);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(5,54.27538);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(6,49.16819);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(7,43.20225);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(8,40.12275);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(9,35.43574);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(10,31.3617);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(11,29.03274);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(12,27.46426);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(13,24.40842);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(14,22.31443);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(15,20.94245);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(16,18.07616);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(17,18.27096);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(18,15.02511);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(19,13.7805);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(20,14.00446);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(21,12.17509);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(22,8.718397);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(23,7.470415);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(24,6.132715);
   Zmm_2bjet_A_Z2b_stack_5->SetBinError(25,3.726902);
   Zmm_2bjet_A_Z2b_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b__637 = new TH1D("Zmm_2bjet_A_Z2b__637","",25,0,1);
   Zmm_2bjet_A_Z2b__637->SetBinContent(1,2364);
   Zmm_2bjet_A_Z2b__637->SetBinContent(2,2168);
   Zmm_2bjet_A_Z2b__637->SetBinContent(3,1878);
   Zmm_2bjet_A_Z2b__637->SetBinContent(4,1545);
   Zmm_2bjet_A_Z2b__637->SetBinContent(5,1225);
   Zmm_2bjet_A_Z2b__637->SetBinContent(6,1025);
   Zmm_2bjet_A_Z2b__637->SetBinContent(7,726);
   Zmm_2bjet_A_Z2b__637->SetBinContent(8,636);
   Zmm_2bjet_A_Z2b__637->SetBinContent(9,590);
   Zmm_2bjet_A_Z2b__637->SetBinContent(10,427);
   Zmm_2bjet_A_Z2b__637->SetBinContent(11,387);
   Zmm_2bjet_A_Z2b__637->SetBinContent(12,287);
   Zmm_2bjet_A_Z2b__637->SetBinContent(13,263);
   Zmm_2bjet_A_Z2b__637->SetBinContent(14,218);
   Zmm_2bjet_A_Z2b__637->SetBinContent(15,159);
   Zmm_2bjet_A_Z2b__637->SetBinContent(16,155);
   Zmm_2bjet_A_Z2b__637->SetBinContent(17,132);
   Zmm_2bjet_A_Z2b__637->SetBinContent(18,107);
   Zmm_2bjet_A_Z2b__637->SetBinContent(19,95);
   Zmm_2bjet_A_Z2b__637->SetBinContent(20,71);
   Zmm_2bjet_A_Z2b__637->SetBinContent(21,59);
   Zmm_2bjet_A_Z2b__637->SetBinContent(22,45);
   Zmm_2bjet_A_Z2b__637->SetBinContent(23,32);
   Zmm_2bjet_A_Z2b__637->SetBinContent(24,21);
   Zmm_2bjet_A_Z2b__637->SetBinContent(25,4);
   Zmm_2bjet_A_Z2b__637->SetBinError(1,48.62098);
   Zmm_2bjet_A_Z2b__637->SetBinError(2,46.56179);
   Zmm_2bjet_A_Z2b__637->SetBinError(3,43.3359);
   Zmm_2bjet_A_Z2b__637->SetBinError(4,39.30649);
   Zmm_2bjet_A_Z2b__637->SetBinError(5,35);
   Zmm_2bjet_A_Z2b__637->SetBinError(6,32.01562);
   Zmm_2bjet_A_Z2b__637->SetBinError(7,26.94439);
   Zmm_2bjet_A_Z2b__637->SetBinError(8,25.21904);
   Zmm_2bjet_A_Z2b__637->SetBinError(9,24.28992);
   Zmm_2bjet_A_Z2b__637->SetBinError(10,20.66398);
   Zmm_2bjet_A_Z2b__637->SetBinError(11,19.67232);
   Zmm_2bjet_A_Z2b__637->SetBinError(12,16.94107);
   Zmm_2bjet_A_Z2b__637->SetBinError(13,16.21727);
   Zmm_2bjet_A_Z2b__637->SetBinError(14,14.76482);
   Zmm_2bjet_A_Z2b__637->SetBinError(15,12.60952);
   Zmm_2bjet_A_Z2b__637->SetBinError(16,12.4499);
   Zmm_2bjet_A_Z2b__637->SetBinError(17,11.48913);
   Zmm_2bjet_A_Z2b__637->SetBinError(18,10.34408);
   Zmm_2bjet_A_Z2b__637->SetBinError(19,9.746794);
   Zmm_2bjet_A_Z2b__637->SetBinError(20,8.42615);
   Zmm_2bjet_A_Z2b__637->SetBinError(21,7.681146);
   Zmm_2bjet_A_Z2b__637->SetBinError(22,6.708204);
   Zmm_2bjet_A_Z2b__637->SetBinError(23,5.656854);
   Zmm_2bjet_A_Z2b__637->SetBinError(24,4.582576);
   Zmm_2bjet_A_Z2b__637->SetBinError(25,2);
   Zmm_2bjet_A_Z2b__637->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__637->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__637->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__637->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__637->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fx1637[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fy1637[25] = {
   5452.013,
   5142.594,
   4461.143,
   3636.313,
   2927.978,
   2383.656,
   1893.308,
   1648.29,
   1272.676,
   1008.537,
   853.1862,
   752.8041,
   596.081,
   515.0205,
   454.5978,
   343.9499,
   341.237,
   235.8966,
   199.0612,
   186.9319,
   150.049,
   78.95482,
   60.37958,
   38.60292,
   13.78997};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fex1637[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_fey1637[25] = {
   74.85416,
   72.46031,
   67.74639,
   60.81575,
   54.6815,
   49.52887,
   43.54806,
   40.42297,
   35.72097,
   31.63513,
   29.2551,
   27.66695,
   24.57896,
   22.48158,
   21.09711,
   18.2168,
   18.39071,
   15.1415,
   13.89724,
   14.08296,
   12.24642,
   8.771456,
   7.543168,
   6.203281,
   3.742417};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_A_Z2b_fx1637,Graph_from_Zmm_2bjet_A_Z2b_fy1637,Graph_from_Zmm_2bjet_A_Z2b_fex1637,Graph_from_Zmm_2bjet_A_Z2b_fey1637);
   gre->SetName("Graph_from_Zmm_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_A_Z2b1637 = new TH1F("Graph_Graph_from_Zmm_2bjet_A_Z2b1637","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->SetMinimum(9.042798);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->SetMaximum(6078.549);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b1637->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_A_Z2b1637);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__638 = new TH1D("data_mc_ratio__638","",25,0,1);
   data_mc_ratio__638->SetBinContent(1,0.4336013);
   data_mc_ratio__638->SetBinContent(2,0.4215771);
   data_mc_ratio__638->SetBinContent(3,0.4209684);
   data_mc_ratio__638->SetBinContent(4,0.424881);
   data_mc_ratio__638->SetBinContent(5,0.4183775);
   data_mc_ratio__638->SetBinContent(6,0.4300118);
   data_mc_ratio__638->SetBinContent(7,0.3834559);
   data_mc_ratio__638->SetBinContent(8,0.3858545);
   data_mc_ratio__638->SetBinContent(9,0.46359);
   data_mc_ratio__638->SetBinContent(10,0.4233854);
   data_mc_ratio__638->SetBinContent(11,0.4535938);
   data_mc_ratio__638->SetBinContent(12,0.3812413);
   data_mc_ratio__638->SetBinContent(13,0.4412152);
   data_mc_ratio__638->SetBinContent(14,0.4232842);
   data_mc_ratio__638->SetBinContent(15,0.3497597);
   data_mc_ratio__638->SetBinContent(16,0.4506471);
   data_mc_ratio__638->SetBinContent(17,0.3868279);
   data_mc_ratio__638->SetBinContent(18,0.4535886);
   data_mc_ratio__638->SetBinContent(19,0.4772402);
   data_mc_ratio__638->SetBinContent(20,0.3798175);
   data_mc_ratio__638->SetBinContent(21,0.3932048);
   data_mc_ratio__638->SetBinContent(22,0.5699462);
   data_mc_ratio__638->SetBinContent(23,0.5299805);
   data_mc_ratio__638->SetBinContent(24,0.5440003);
   data_mc_ratio__638->SetBinContent(25,0.2900659);
   data_mc_ratio__638->SetBinError(1,0.008917988);
   data_mc_ratio__638->SetBinError(2,0.009054144);
   data_mc_ratio__638->SetBinError(3,0.00971408);
   data_mc_ratio__638->SetBinError(4,0.01080944);
   data_mc_ratio__638->SetBinError(5,0.01195364);
   data_mc_ratio__638->SetBinError(6,0.01343131);
   data_mc_ratio__638->SetBinError(7,0.01423138);
   data_mc_ratio__638->SetBinError(8,0.01530012);
   data_mc_ratio__638->SetBinError(9,0.0190857);
   data_mc_ratio__638->SetBinError(10,0.02048906);
   data_mc_ratio__638->SetBinError(11,0.02305747);
   data_mc_ratio__638->SetBinError(12,0.02250396);
   data_mc_ratio__638->SetBinError(13,0.02720649);
   data_mc_ratio__638->SetBinError(14,0.02866842);
   data_mc_ratio__638->SetBinError(15,0.02773775);
   data_mc_ratio__638->SetBinError(16,0.03619684);
   data_mc_ratio__638->SetBinError(17,0.03366905);
   data_mc_ratio__638->SetBinError(18,0.04385007);
   data_mc_ratio__638->SetBinError(19,0.04896381);
   data_mc_ratio__638->SetBinError(20,0.04507604);
   data_mc_ratio__638->SetBinError(21,0.05119091);
   data_mc_ratio__638->SetBinError(22,0.08496257);
   data_mc_ratio__638->SetBinError(23,0.0936882);
   data_mc_ratio__638->SetBinError(24,0.1187106);
   data_mc_ratio__638->SetBinError(25,0.1450329);
   data_mc_ratio__638->SetMinimum(0.4);
   data_mc_ratio__638->SetMaximum(1.6);
   data_mc_ratio__638->SetEntries(1186.253);
   data_mc_ratio__638->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__638->SetLineColor(ci);
   data_mc_ratio__638->SetLineWidth(2);
   data_mc_ratio__638->SetMarkerStyle(20);
   data_mc_ratio__638->SetMarkerSize(1.2);
   data_mc_ratio__638->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__638->GetXaxis()->SetRange(1,25);
   data_mc_ratio__638->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__638->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__638->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__638->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__638->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__638->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__638->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__638->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__638->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__638->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__638->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__638->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__638->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__638->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1638[25] = {
   0.01372964,
   0.01409022,
   0.01518588,
   0.01672456,
   0.01867552,
   0.02077853,
   0.02300105,
   0.02452419,
   0.0280676,
   0.03136734,
   0.03428923,
   0.03675186,
   0.04123427,
   0.04365181,
   0.0464083,
   0.05296352,
   0.05389425,
   0.06418703,
   0.0698139,
   0.07533741,
   0.08161611,
   0.1110946,
   0.1249291,
   0.1606946,
   0.2713869};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1638,Graph_from_mc_statistical_error_fy1638,Graph_from_mc_statistical_error_fex1638,Graph_from_mc_statistical_error_fey1638);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1638 = new TH1F("Graph_Graph_from_mc_statistical_error1638","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1638->SetMinimum(0.6743358);
   Graph_Graph_from_mc_statistical_error1638->SetMaximum(1.325664);
   Graph_Graph_from_mc_statistical_error1638->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1638->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1638->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1638);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_18_amcnlo);
}
