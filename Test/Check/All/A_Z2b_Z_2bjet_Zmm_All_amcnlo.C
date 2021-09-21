void A_Z2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_All_amcnlo/A_Z2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:39 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_All_amcnlo", "A_Z2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-26.71482,1.052419,26698.11);
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
   st->SetMaximum(22881.55);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",25,0,1);
   st_stack_320->SetMinimum(0.01);
   st_stack_320->SetMaximum(24025.62);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetRange(1,25);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetLabelSize(0.035);
   st_stack_320->GetXaxis()->SetTitleSize(0.035);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.04");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetLabelSize(0.05);
   st_stack_320->GetYaxis()->SetTitleSize(0.057);
   st_stack_320->GetYaxis()->SetTitleOffset(1.2);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetLabelSize(0.035);
   st_stack_320->GetZaxis()->SetTitleSize(0.035);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(1,37.57864);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(2,36.85128);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(3,23.60339);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(4,22.94091);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(5,25.42931);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(6,18.70596);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(7,14.51217);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(8,12.35008);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(9,11.71093);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(10,7.726474);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(11,7.384855);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(12,5.645019);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(13,3.214293);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(14,4.216775);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(15,5.091895);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(16,2.721417);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(17,1.510065);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(18,1.923277);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(19,1.441591);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(20,1.61167);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(21,0.7104648);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(22,0.1964644);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(23,0.2045215);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(1,2.967344);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(2,2.872269);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(3,2.315475);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(4,2.280867);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(5,2.532691);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(6,2.079919);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(7,1.827386);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(8,1.656479);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(9,1.648629);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(10,1.352111);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(11,1.271459);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(12,1.120163);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(13,0.8260446);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(14,0.9696812);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(15,1.079878);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(16,0.7431012);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(17,0.573047);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(18,0.6657546);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(19,0.57243);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(20,0.6208769);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(21,0.3782305);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(22,0.1964644);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(23,0.2045215);
   Zmm_2bjet_A_Z2b_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(1,119.8949);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(2,104.0817);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(3,84.46757);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(4,69.18172);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(5,46.92793);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(6,30.39176);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(7,28.5378);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(8,17.96545);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(9,16.31194);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(10,14.36034);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(11,10.04597);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(12,8.034699);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(13,5.591086);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(14,3.939198);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(15,3.760556);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(16,1.918387);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(17,3.445522);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(18,1.8912);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(19,1.495586);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(20,0.8504596);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(21,0.8504596);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(22,1.001909);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(23,0.4985287);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(24,1.348988);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(25,0.3519309);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(1,7.016895);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(2,6.536339);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(3,5.820012);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(4,5.381499);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(5,4.358685);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(6,3.498641);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(7,3.425286);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(8,2.716825);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(9,2.659332);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(10,2.494235);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(11,1.98535);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(12,1.840937);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(13,1.530339);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(14,1.338919);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(15,1.221626);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(16,0.9614329);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(17,1.176289);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(18,0.8738186);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(19,0.8634771);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(20,0.6102346);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(21,0.6102346);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(22,0.5801234);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(23,0.4985287);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(24,0.787983);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(25,0.3519309);
   Zmm_2bjet_A_Z2b_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(1,1296.374);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(2,1239.169);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(3,1109.856);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(4,973.6126);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(5,828.7012);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(6,687.2626);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(7,557.2469);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(8,486.2675);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(9,405.7361);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(10,312.7096);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(11,268.8086);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(12,221.7399);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(13,182.1416);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(14,154.7576);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(15,130.0491);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(16,104.9386);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(17,87.84598);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(18,71.00552);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(19,62.65135);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(20,45.73282);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(21,41.17566);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(22,24.15007);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(23,19.98103);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(24,10.57635);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(25,4.233991);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(1,16.29336);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(2,16.06327);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(3,15.20906);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(4,14.25726);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(5,13.17785);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(6,11.87961);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(7,10.74906);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(8,10.06778);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(9,9.30088);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(10,7.89293);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(11,7.525047);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(12,6.813735);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(13,6.191125);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(14,5.738994);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(15,5.185333);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(16,4.575034);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(17,4.230553);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(18,3.843202);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(19,3.612974);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(20,3.071046);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(21,3.010484);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(22,2.236171);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(23,1.945834);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(24,1.439526);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(25,1.053254);
   Zmm_2bjet_A_Z2b_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_A_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_4 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_4","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(1,43.83226);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(2,35.88836);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(3,26.84713);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(4,20.19151);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(5,15.56804);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(6,11.98488);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(7,9.34541);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(8,7.40849);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(9,5.909823);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(10,4.727809);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(11,3.71988);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(12,3.074774);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(13,2.481074);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(14,2.027565);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(15,1.690756);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(16,1.432408);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(17,1.180145);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(18,0.9939361);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(19,0.7821903);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(20,0.6552274);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(21,0.4941192);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(22,0.3581409);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(23,0.2361826);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(24,0.1371691);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinContent(25,0.04977339);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(1,0.1559346);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(2,0.1411495);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(3,0.1219012);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(4,0.1058026);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(5,0.09291885);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(6,0.0815513);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(7,0.07184675);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(8,0.06401341);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(9,0.05718119);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(10,0.05120804);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(11,0.04536893);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(12,0.04125148);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(13,0.03711303);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(14,0.0335155);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(15,0.03063533);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(16,0.02824087);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(17,0.02561772);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(18,0.02353462);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(19,0.02077172);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(20,0.01910024);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(21,0.01651306);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(22,0.01402345);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(23,0.01142303);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(24,0.008719181);
   Zmm_2bjet_A_Z2b_all_stack_4->SetBinError(25,0.005335935);
   Zmm_2bjet_A_Z2b_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_A_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_5 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_5","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(1,11087.17);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(2,10438.53);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(3,8965.006);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(4,7234.561);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(5,5850.023);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(6,4683.406);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(7,3806.695);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(8,3184.25);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(9,2512.443);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(10,2024.438);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(11,1730.01);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(12,1486.132);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(13,1184.178);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(14,1012.116);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(15,875.3581);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(16,709.3685);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(17,633.157);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(18,496.2494);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(19,393.3875);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(20,340.1363);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(21,285.8727);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(22,187.108);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(23,131.3658);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(24,75.83521);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinContent(25,22.43972);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(1,100.7499);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(2,97.71137);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(3,90.57616);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(4,81.48303);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(5,73.40433);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(6,65.82527);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(7,58.67795);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(8,53.73011);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(9,47.58416);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(10,42.68701);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(11,39.77575);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(12,36.90969);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(13,32.75925);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(14,29.90803);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(15,28.26021);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(16,24.99155);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(17,24.0178);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(18,20.79233);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(19,18.57895);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(20,17.75979);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(21,16.38258);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(22,12.61116);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(23,10.67208);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(24,8.205604);
   Zmm_2bjet_A_Z2b_all_stack_5->SetBinError(25,4.5104);
   Zmm_2bjet_A_Z2b_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_A_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b_all__639 = new TH1D("Zmm_2bjet_A_Z2b_all__639","",25,0,1);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(1,5000);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(2,4587);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(3,3930);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(4,3218);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(5,2588);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(6,2115);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(7,1632);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(8,1347);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(9,1200);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(10,933);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(11,803);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(12,649);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(13,549);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(14,432);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(15,351);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(16,347);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(17,280);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(18,216);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(19,205);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(20,147);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(21,115);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(22,77);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(23,60);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(24,38);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(25,8);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(1,70.71068);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(2,67.72739);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(3,62.68971);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(4,56.72742);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(5,50.87239);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(6,45.98913);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(7,40.39802);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(8,36.7015);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(9,34.64102);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(10,30.54505);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(11,28.33725);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(12,25.47548);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(13,23.43075);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(14,20.78461);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(15,18.73499);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(16,18.62794);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(17,16.7332);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(18,14.69694);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(19,14.31782);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(20,12.12436);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(21,10.72381);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(22,8.774964);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(23,7.745967);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(24,6.164414);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(25,2.828427);
   Zmm_2bjet_A_Z2b_all__639->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all__639->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all__639->SetLineWidth(2);
   Zmm_2bjet_A_Z2b_all__639->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b_all__639->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_A_Z2b_all_fx1639[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_all_fy1639[25] = {
   12584.85,
   11854.52,
   10209.78,
   8320.487,
   6766.65,
   5431.751,
   4416.338,
   3708.241,
   2952.112,
   2363.962,
   2019.97,
   1724.626,
   1377.607,
   1177.057,
   1015.95,
   820.3793,
   727.1387,
   572.0633,
   459.7583,
   388.9865,
   329.1034,
   212.8146,
   152.286,
   87.89772,
   27.07542};
   Double_t Graph_from_Zmm_2bjet_A_Z2b_all_fex1639[25] = {
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
   Double_t Graph_from_Zmm_2bjet_A_Z2b_all_fey1639[25] = {
   102.343,
   99.28008,
   92.05762,
   82.92724,
   74.74806,
   67.01242,
   59.78061,
   54.75778,
   48.58552,
   43.50323,
   40.54993,
   37.59518,
   33.38449,
   30.49853,
   28.77823,
   25.43592,
   24.42264,
   21.17306,
   18.95533,
   18.04438,
   16.67236,
   12.82252,
   10.8614,
   8.368104,
   4.645098};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_A_Z2b_all_fx1639,Graph_from_Zmm_2bjet_A_Z2b_all_fy1639,Graph_from_Zmm_2bjet_A_Z2b_all_fex1639,Graph_from_Zmm_2bjet_A_Z2b_all_fey1639);
   gre->SetName("Graph_from_Zmm_2bjet_A_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639 = new TH1F("Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->SetMinimum(20.18729);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->SetMaximum(13953.67);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_A_Z2b_all1639);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_A_Z2b_all","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__640 = new TH1D("data_mc_ratio__640","",25,0,1);
   data_mc_ratio__640->SetBinContent(1,0.3973031);
   data_mc_ratio__640->SetBinContent(2,0.3869409);
   data_mc_ratio__640->SetBinContent(3,0.3849251);
   data_mc_ratio__640->SetBinContent(4,0.3867562);
   data_mc_ratio__640->SetBinContent(5,0.382464);
   data_mc_ratio__640->SetBinContent(6,0.3893772);
   data_mc_ratio__640->SetBinContent(7,0.369537);
   data_mc_ratio__640->SetBinContent(8,0.363245);
   data_mc_ratio__640->SetBinContent(9,0.4064886);
   data_mc_ratio__640->SetBinContent(10,0.3946764);
   data_mc_ratio__640->SetBinContent(11,0.3975307);
   data_mc_ratio__640->SetBinContent(12,0.3763135);
   data_mc_ratio__640->SetBinContent(13,0.3985173);
   data_mc_ratio__640->SetBinContent(14,0.3670171);
   data_mc_ratio__640->SetBinContent(15,0.3454893);
   data_mc_ratio__640->SetBinContent(16,0.4229751);
   data_mc_ratio__640->SetBinContent(17,0.3850709);
   data_mc_ratio__640->SetBinContent(18,0.3775806);
   data_mc_ratio__640->SetBinContent(19,0.4458865);
   data_mc_ratio__640->SetBinContent(20,0.3779051);
   data_mc_ratio__640->SetBinContent(21,0.3494342);
   data_mc_ratio__640->SetBinContent(22,0.3618173);
   data_mc_ratio__640->SetBinContent(23,0.3939955);
   data_mc_ratio__640->SetBinContent(24,0.4323207);
   data_mc_ratio__640->SetBinContent(25,0.295471);
   data_mc_ratio__640->SetBinError(1,0.005618714);
   data_mc_ratio__640->SetBinError(2,0.005713211);
   data_mc_ratio__640->SetBinError(3,0.006140163);
   data_mc_ratio__640->SetBinError(4,0.0068178);
   data_mc_ratio__640->SetBinError(5,0.007518106);
   data_mc_ratio__640->SetBinError(6,0.008466723);
   data_mc_ratio__640->SetBinError(7,0.009147403);
   data_mc_ratio__640->SetBinError(8,0.009897279);
   data_mc_ratio__640->SetBinError(9,0.01173432);
   data_mc_ratio__640->SetBinError(10,0.01292113);
   data_mc_ratio__640->SetBinError(11,0.01402855);
   data_mc_ratio__640->SetBinError(12,0.0147716);
   data_mc_ratio__640->SetBinError(13,0.0170083);
   data_mc_ratio__640->SetBinError(14,0.01765812);
   data_mc_ratio__640->SetBinError(15,0.01844085);
   data_mc_ratio__640->SetBinError(16,0.02270649);
   data_mc_ratio__640->SetBinError(17,0.02301239);
   data_mc_ratio__640->SetBinError(18,0.0256911);
   data_mc_ratio__640->SetBinError(19,0.03114206);
   data_mc_ratio__640->SetBinError(20,0.03116909);
   data_mc_ratio__640->SetBinError(21,0.03258491);
   data_mc_ratio__640->SetBinError(22,0.04123291);
   data_mc_ratio__640->SetBinError(23,0.0508646);
   data_mc_ratio__640->SetBinError(24,0.07013167);
   data_mc_ratio__640->SetBinError(25,0.1044648);
   data_mc_ratio__640->SetMinimum(0.4);
   data_mc_ratio__640->SetMaximum(1.6);
   data_mc_ratio__640->SetEntries(2656.102);
   data_mc_ratio__640->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__640->SetLineColor(ci);
   data_mc_ratio__640->SetLineWidth(2);
   data_mc_ratio__640->SetMarkerStyle(20);
   data_mc_ratio__640->SetMarkerSize(1.2);
   data_mc_ratio__640->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__640->GetXaxis()->SetRange(1,25);
   data_mc_ratio__640->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__640->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__640->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__640->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__640->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__640->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1640[25] = {
   0.008132234,
   0.008374868,
   0.009016612,
   0.009966633,
   0.01104654,
   0.01233717,
   0.01353624,
   0.01476651,
   0.01645788,
   0.01840268,
   0.02007452,
   0.02179904,
   0.02423369,
   0.02591084,
   0.02832641,
   0.03100507,
   0.03358731,
   0.03701175,
   0.04122891,
   0.04638818,
   0.05065993,
   0.06025209,
   0.07132238,
   0.09520274,
   0.1715614};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1640,Graph_from_mc_statistical_error_fy1640,Graph_from_mc_statistical_error_fex1640,Graph_from_mc_statistical_error_fey1640);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1640 = new TH1F("Graph_Graph_from_mc_statistical_error1640","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1640->SetMinimum(0.7941263);
   Graph_Graph_from_mc_statistical_error1640->SetMaximum(1.205874);
   Graph_Graph_from_mc_statistical_error1640->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1640->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1640->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1640);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_All_amcnlo);
}
