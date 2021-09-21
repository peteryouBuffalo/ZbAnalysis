void dPhi_Zb_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_All_amcnlo/dPhi_Zb_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_All_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_All_amcnlo", "dPhi_Zb_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-12.71875,3.416482,12716.03);
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
   st->SetMaximum(10898.25);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,3.141593);
   st_stack_236->SetMinimum(0.01);
   st_stack_236->SetMaximum(11443.16);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetRange(1,31);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetLabelSize(0.035);
   st_stack_236->GetXaxis()->SetTitleSize(0.035);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/0.105");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetLabelSize(0.05);
   st_stack_236->GetYaxis()->SetTitleSize(0.057);
   st_stack_236->GetYaxis()->SetTitleOffset(1.2);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetLabelSize(0.035);
   st_stack_236->GetZaxis()->SetTitleSize(0.035);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(1,1.147294);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(2,1.594998);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(3,2.342231);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(4,1.147108);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(5,1.408261);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(6,1.642595);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(7,2.290808);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(8,2.75347);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(9,1.81832);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(10,2.102507);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(11,3.826553);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(12,2.550456);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(13,3.583126);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(14,3.708211);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(15,4.365114);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(16,4.213668);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(17,4.145418);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(18,8.024843);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(19,4.861784);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(20,5.55326);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(21,7.255811);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(22,9.316537);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(23,11.93442);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(24,11.76961);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(25,14.01371);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(26,14.35182);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(27,14.62423);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(28,13.41695);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(29,17.54842);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(30,16.63213);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(1,0.489956);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(2,0.6160181);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(3,0.7553568);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(4,0.5206405);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(5,0.5871773);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(6,0.607364);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(7,0.7025378);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(8,0.8242403);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(9,0.649944);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(10,0.7163989);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(11,1.234656);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(12,0.7628875);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(13,0.8934445);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(14,0.9749965);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(15,0.9970061);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(16,1.012516);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(17,0.9670587);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(18,1.382577);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(19,1.06565);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(20,1.138032);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(21,1.299597);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(22,1.508374);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(23,1.667898);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(24,1.636453);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(25,1.763126);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(26,1.815517);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(27,1.849429);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(28,1.759051);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(29,2.017986);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(30,1.947335);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(1,2.219945);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(2,1.593153);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(3,3.347955);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(4,2.701456);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(5,2.502348);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(6,2.627101);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(7,3.240189);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(8,3.948902);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(9,2.060304);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(10,3.080573);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(11,4.833341);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(12,6.623693);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(13,6.530947);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(14,5.719318);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(15,8.587111);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(16,6.326987);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(17,9.178348);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(18,9.388539);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(19,12.38673);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(20,13.62198);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(21,13.73306);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(22,16.67097);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(23,26.56915);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(24,33.40499);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(25,35.51953);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(26,37.59453);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(27,47.49015);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(28,41.40748);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(29,42.62118);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(30,42.41477);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(1,1.12707);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(2,0.8214174);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(3,1.206036);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(4,0.9749865);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(5,0.9600089);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(6,1.005756);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(7,1.176638);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(8,1.213123);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(9,0.8649313);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(10,1.111417);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(11,1.434992);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(12,1.759652);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(13,1.567924);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(14,1.463089);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(15,1.916404);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(16,1.609324);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(17,1.958418);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(18,1.962001);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(19,2.38316);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(20,2.218884);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(21,2.310645);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(22,2.708228);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(23,3.244692);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(24,3.748452);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(25,3.763976);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(26,3.866046);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(27,4.434848);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(28,4.082878);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(29,4.206191);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(30,4.22566);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(1,98.79807);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(2,94.36971);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(3,97.63739);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(4,101.0487);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(5,91.16113);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(6,93.1755);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(7,94.79823);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(8,97.36086);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(9,100.7491);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(10,107.6941);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(11,115.9954);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(12,135.5984);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(13,148.0597);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(14,164.4169);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(15,191.75);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(16,206.5455);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(17,233.7508);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(18,255.5979);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(19,292.4613);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(20,319.1679);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(21,353.6183);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(22,371.9533);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(23,407.7294);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(24,422.4316);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(25,438.3946);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(26,446.2874);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(27,470.363);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(28,462.7208);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(29,463.0356);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(30,453.8624);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(1,4.627071);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(2,4.46155);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(3,4.441942);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(4,4.697946);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(5,4.363882);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(6,4.46644);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(7,4.389773);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(8,4.477648);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(9,4.598668);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(10,4.535137);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(11,4.762212);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(12,5.236083);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(13,5.547955);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(14,5.730692);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(15,6.492204);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(16,6.526278);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(17,6.935466);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(18,7.213483);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(19,7.823607);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(20,8.09892);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(21,8.531273);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(22,8.927987);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(23,9.233777);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(24,9.403415);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(25,9.556374);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(26,9.622791);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(27,9.815472);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(28,9.792919);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(29,9.888583);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(30,9.678554);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dPhi_Zb_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_3,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_4 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_4","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(1,0.6476035);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(2,0.697698);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(3,0.6485157);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(4,0.6365909);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(5,0.6516599);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(6,0.6689112);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(7,0.7472427);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(8,0.768295);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(9,0.8037504);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(10,0.8872222);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(11,0.9398327);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(12,1.040562);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(13,1.135987);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(14,1.288376);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(15,1.501738);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(16,1.797031);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(17,2.097177);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(18,2.518331);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(19,3.081093);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(20,3.884358);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(21,4.936295);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(22,6.288448);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(23,8.115921);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(24,10.28079);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(25,12.75518);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(26,15.25398);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(27,17.52192);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(28,18.45113);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(29,17.71302);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinContent(30,15.87114);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(1,0.01894957);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(2,0.01963055);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(3,0.01894436);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(4,0.01868988);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(5,0.01898851);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(6,0.0192005);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(7,0.02039959);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(8,0.02060206);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(9,0.02103099);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(10,0.0221384);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(11,0.0227782);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(12,0.02402661);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(13,0.02501599);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(14,0.02661393);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(15,0.02874252);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(16,0.03155411);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(17,0.03397368);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(18,0.03722359);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(19,0.04117875);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(20,0.04633234);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(21,0.05220402);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(22,0.05899479);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(23,0.06698052);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(24,0.07528236);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(25,0.08380847);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(26,0.09180968);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(27,0.09827215);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(28,0.1010014);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(29,0.09897446);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetBinError(30,0.09369817);
   Zee_2bjet_dPhi_Zb_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dPhi_Zb_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_4->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_4,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_5 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_5","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(1,444.6533);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(2,457.7234);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(3,442.7713);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(4,452.1536);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(5,491.9593);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(6,424.1738);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(7,472.7907);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(8,481.762);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(9,530.537);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(10,487.297);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(11,609.0712);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(12,605.7882);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(13,649.6063);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(14,737.0837);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(15,845.6899);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(16,963.7293);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(17,1054.017);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(18,1231.941);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(19,1428.614);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(20,1635.126);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(21,1928.888);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(22,2368.62);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(23,2699.909);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(24,3185.597);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(25,3654.862);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(26,4220.976);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(27,4789.68);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(28,5081.533);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(29,5453.118);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinContent(30,5366.69);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(1,21.09378);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(2,21.54529);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(3,20.92597);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(4,21.36144);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(5,22.79196);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(6,20.45454);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(7,21.32971);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(8,22.07834);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(9,23.55471);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(10,21.50844);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(11,24.25081);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(12,23.97258);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(13,24.43901);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(14,26.16365);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(15,28.83724);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(16,29.9683);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(17,30.86673);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(18,34.11937);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(19,37.18298);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(20,39.1725);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(21,41.92573);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(22,46.85343);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(23,49.83824);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(24,54.05969);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(25,57.63174);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(26,62.09807);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(27,66.04466);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(28,68.11585);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(29,70.26099);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetBinError(30,69.99908);
   Zee_2bjet_dPhi_Zb_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dPhi_Zb_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_5->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb_all__471 = new TH1D("Zee_2bjet_dPhi_Zb_all__471","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(1,251);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(2,244);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(3,237);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(4,250);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(5,239);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(6,233);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(7,232);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(8,229);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(9,279);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(10,296);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(11,261);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(12,305);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(13,344);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(14,370);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(15,392);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(16,466);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(17,571);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(18,601);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(19,682);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(20,787);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(21,880);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(22,1016);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(23,1145);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(24,1260);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(25,1364);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(26,1639);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(27,1750);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(28,1917);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(29,1967);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(30,2042);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(1,15.84298);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(2,15.6205);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(3,15.3948);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(4,15.81139);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(5,15.45962);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(6,15.26434);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(7,15.23155);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(8,15.13275);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(9,16.70329);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(10,17.20465);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(11,16.15549);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(12,17.46425);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(13,18.54724);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(14,19.23538);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(15,19.79899);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(16,21.58703);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(17,23.89561);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(18,24.5153);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(19,26.11513);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(20,28.05352);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(21,29.66479);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(22,31.87475);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(23,33.83785);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(24,35.49648);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(25,36.93237);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(26,40.48456);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(27,41.833);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(28,43.78356);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(29,44.35087);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(30,45.18849);
   Zee_2bjet_dPhi_Zb_all__471->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all__471->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all__471->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb_all__471->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb_all__471->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_all_fx1471[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_all_fy1471[30] = {
   547.4662,
   555.979,
   546.7474,
   557.6874,
   587.6827,
   522.2879,
   573.8671,
   586.5935,
   635.9685,
   601.0614,
   734.6663,
   751.6013,
   808.9161,
   912.2165,
   1051.894,
   1182.613,
   1303.189,
   1507.471,
   1741.404,
   1977.353,
   2308.431,
   2772.849,
   3154.258,
   3663.484,
   4155.545,
   4734.463,
   5339.679,
   5617.53,
   5994.036,
   5895.47};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_all_fex1471[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_all_fey1471[30] = {
   21.63026,
   22.02634,
   21.4395,
   21.89986,
   23.23324,
   20.96946,
   21.81983,
   22.57551,
   24.0238,
   22.02111,
   24.78638,
   24.6126,
   25.12573,
   26.84156,
   29.63785,
   30.72959,
   31.71163,
   34.95609,
   38.08674,
   40.07865,
   42.86701,
   47.79714,
   50.81759,
   55.02371,
   58.56642,
   62.98428,
   66.9428,
   68.95973,
   71.10671,
   70.8181};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb_all_fx1471,Graph_from_Zee_2bjet_dPhi_Zb_all_fy1471,Graph_from_Zee_2bjet_dPhi_Zb_all_fex1471,Graph_from_Zee_2bjet_dPhi_Zb_all_fey1471);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->SetMinimum(451.1866);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->SetMaximum(6621.525);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb_all1471);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dPhi_Zb_all","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__472 = new TH1D("data_mc_ratio__472","",30,0,3.141593);
   data_mc_ratio__472->SetBinContent(1,0.4584758);
   data_mc_ratio__472->SetBinContent(2,0.4388655);
   data_mc_ratio__472->SetBinContent(3,0.4334726);
   data_mc_ratio__472->SetBinContent(4,0.4482798);
   data_mc_ratio__472->SetBinContent(5,0.4066821);
   data_mc_ratio__472->SetBinContent(6,0.4461141);
   data_mc_ratio__472->SetBinContent(7,0.4042748);
   data_mc_ratio__472->SetBinContent(8,0.3903896);
   data_mc_ratio__472->SetBinContent(9,0.438701);
   data_mc_ratio__472->SetBinContent(10,0.4924621);
   data_mc_ratio__472->SetBinContent(11,0.3552634);
   data_mc_ratio__472->SetBinContent(12,0.4058003);
   data_mc_ratio__472->SetBinContent(13,0.4252604);
   data_mc_ratio__472->SetBinContent(14,0.4056055);
   data_mc_ratio__472->SetBinContent(15,0.3726612);
   data_mc_ratio__472->SetBinContent(16,0.3940428);
   data_mc_ratio__472->SetBinContent(17,0.4381559);
   data_mc_ratio__472->SetBinContent(18,0.398681);
   data_mc_ratio__472->SetBinContent(19,0.3916379);
   data_mc_ratio__472->SetBinContent(20,0.3980068);
   data_mc_ratio__472->SetBinContent(21,0.3812113);
   data_mc_ratio__472->SetBinContent(22,0.3664102);
   data_mc_ratio__472->SetBinContent(23,0.3630014);
   data_mc_ratio__472->SetBinContent(24,0.3439349);
   data_mc_ratio__472->SetBinContent(25,0.3282361);
   data_mc_ratio__472->SetBinContent(26,0.346185);
   data_mc_ratio__472->SetBinContent(27,0.327735);
   data_mc_ratio__472->SetBinContent(28,0.3412532);
   data_mc_ratio__472->SetBinContent(29,0.3281595);
   data_mc_ratio__472->SetBinContent(30,0.3463676);
   data_mc_ratio__472->SetBinError(1,0.02893874);
   data_mc_ratio__472->SetBinError(2,0.02809549);
   data_mc_ratio__472->SetBinError(3,0.02815707);
   data_mc_ratio__472->SetBinError(4,0.0283517);
   data_mc_ratio__472->SetBinError(5,0.02630608);
   data_mc_ratio__472->SetBinError(6,0.02922591);
   data_mc_ratio__472->SetBinError(7,0.02654194);
   data_mc_ratio__472->SetBinError(8,0.02579767);
   data_mc_ratio__472->SetBinError(9,0.02626434);
   data_mc_ratio__472->SetBinError(10,0.02862378);
   data_mc_ratio__472->SetBinError(11,0.02199025);
   data_mc_ratio__472->SetBinError(12,0.02323606);
   data_mc_ratio__472->SetBinError(13,0.02292851);
   data_mc_ratio__472->SetBinError(14,0.02108642);
   data_mc_ratio__472->SetBinError(15,0.01882223);
   data_mc_ratio__472->SetBinError(16,0.01825368);
   data_mc_ratio__472->SetBinError(17,0.01833625);
   data_mc_ratio__472->SetBinError(18,0.01626254);
   data_mc_ratio__472->SetBinError(19,0.01499659);
   data_mc_ratio__472->SetBinError(20,0.01418741);
   data_mc_ratio__472->SetBinError(21,0.01285063);
   data_mc_ratio__472->SetBinError(22,0.01149531);
   data_mc_ratio__472->SetBinError(23,0.01072767);
   data_mc_ratio__472->SetBinError(24,0.009689267);
   data_mc_ratio__472->SetBinError(25,0.008887491);
   data_mc_ratio__472->SetBinError(26,0.008551036);
   data_mc_ratio__472->SetBinError(27,0.007834366);
   data_mc_ratio__472->SetBinError(28,0.007794094);
   data_mc_ratio__472->SetBinError(29,0.007399167);
   data_mc_ratio__472->SetBinError(30,0.007664952);
   data_mc_ratio__472->SetMinimum(0.4);
   data_mc_ratio__472->SetMaximum(1.6);
   data_mc_ratio__472->SetEntries(8424.041);
   data_mc_ratio__472->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__472->SetLineColor(ci);
   data_mc_ratio__472->SetLineWidth(2);
   data_mc_ratio__472->SetMarkerStyle(20);
   data_mc_ratio__472->SetMarkerSize(1.2);
   data_mc_ratio__472->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__472->GetXaxis()->SetRange(1,31);
   data_mc_ratio__472->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__472->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__472->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__472->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__472->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__472->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1472[30] = {
   0.03950977,
   0.03961722,
   0.03921282,
   0.03926905,
   0.03953365,
   0.04014923,
   0.03802245,
   0.03848578,
   0.03777515,
   0.03663705,
   0.03373828,
   0.03274689,
   0.03106099,
   0.02942455,
   0.02817571,
   0.02598449,
   0.02433387,
   0.02318857,
   0.02187128,
   0.02026884,
   0.01856976,
   0.01723756,
   0.01611079,
   0.0150195,
   0.01409356,
   0.01330336,
   0.01253686,
   0.01227581,
   0.01186291,
   0.01201229};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.9518209);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(1.048179);
   Graph_Graph_from_mc_statistical_error1472->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1472->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1472);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_All_amcnlo);
}
