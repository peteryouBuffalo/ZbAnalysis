void A_Z2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_All_amcnlo/A_Z2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_All_amcnlo", "A_Z2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-20.23844,1.052419,20228.2);
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
   st->SetMaximum(17336.53);
   
   TH1F *st_stack_232 = new TH1F("st_stack_232","",25,0,1);
   st_stack_232->SetMinimum(0.01);
   st_stack_232->SetMaximum(18203.36);
   st_stack_232->SetDirectory(0);
   st_stack_232->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_232->SetLineColor(ci);
   st_stack_232->GetXaxis()->SetRange(1,25);
   st_stack_232->GetXaxis()->SetLabelFont(42);
   st_stack_232->GetXaxis()->SetLabelSize(0.035);
   st_stack_232->GetXaxis()->SetTitleSize(0.035);
   st_stack_232->GetXaxis()->SetTitleFont(42);
   st_stack_232->GetYaxis()->SetTitle("Events/0.04");
   st_stack_232->GetYaxis()->SetLabelFont(42);
   st_stack_232->GetYaxis()->SetLabelSize(0.05);
   st_stack_232->GetYaxis()->SetTitleSize(0.057);
   st_stack_232->GetYaxis()->SetTitleOffset(1.2);
   st_stack_232->GetYaxis()->SetTitleFont(42);
   st_stack_232->GetZaxis()->SetLabelFont(42);
   st_stack_232->GetZaxis()->SetLabelSize(0.035);
   st_stack_232->GetZaxis()->SetTitleSize(0.035);
   st_stack_232->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_232);
   
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_1 = new TH1D("Zee_2bjet_A_Z2b_all_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(1,26.96666);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(2,28.08752);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(3,25.82856);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(4,20.40223);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(5,16.03423);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(6,14.1099);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(7,9.626409);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(8,9.335618);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(9,8.107307);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(10,5.800796);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(11,7.376587);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(12,4.736443);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(13,3.595767);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(14,3.063764);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(15,2.324158);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(16,2.491462);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(17,2.067362);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(18,1.205101);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(19,1.232341);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(20,0.5080674);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(21,0.4345191);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(22,0.608855);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(1,2.497686);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(2,2.554653);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(3,2.440727);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(4,2.34908);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(5,1.906013);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(6,1.803613);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(7,1.50462);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(8,1.465312);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(9,1.370612);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(10,1.129074);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(11,1.338655);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(12,1.018483);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(13,0.9426016);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(14,0.8132064);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(15,0.7453254);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(16,0.8014971);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(17,0.6818658);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(18,0.5509318);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(19,0.5044192);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(20,0.366018);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(21,0.3086557);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(22,0.3515436);
   Zee_2bjet_A_Z2b_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_2 = new TH1D("Zee_2bjet_A_Z2b_all_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(1,98.09157);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(2,78.86847);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(3,59.25795);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(4,49.41255);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(5,41.29469);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(6,32.06277);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(7,17.74663);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(8,14.41373);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(9,13.98257);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(10,11.1842);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(11,5.746511);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(12,5.200324);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(13,6.965423);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(14,2.051477);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(15,3.75377);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(16,1.593153);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(17,1.645663);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(18,1.202391);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(19,0.6499785);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(20,1.818982);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(21,0.6499785);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(22,0.3519309);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(1,6.351264);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(2,5.679963);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(3,4.796674);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(4,4.577354);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(5,4.158137);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(6,3.596664);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(7,2.728332);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(8,2.44329);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(9,2.386278);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(10,2.112896);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(11,1.573787);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(12,1.470868);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(13,1.754799);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(14,0.8590174);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(15,1.270197);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(16,0.8214174);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(17,0.7609419);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(18,0.7044442);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(19,0.4611808);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(20,0.9751362);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(21,0.4611808);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(22,0.3519309);
   Zee_2bjet_A_Z2b_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_3 = new TH1D("Zee_2bjet_A_Z2b_all_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(1,1015.947);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(2,949.4032);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(3,870.1196);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(4,756.0609);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(5,631.6496);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(6,554.2372);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(7,453.137);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(8,375.3834);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(9,305.6368);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(10,258.4272);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(11,207.9956);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(12,174.0192);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(13,149.084);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(14,121.6291);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(15,108.1027);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(16,89.7914);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(17,79.15765);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(18,63.98556);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(19,50.21359);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(20,40.02225);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(21,30.2591);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(22,20.6821);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(23,13.50273);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(24,9.504206);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(25,2.581474);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(1,14.4565);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(2,13.95727);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(3,13.45909);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(4,12.57169);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(5,11.4323);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(6,10.77527);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(7,9.762264);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(8,8.83132);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(9,7.946056);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(10,7.32115);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(11,6.552812);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(12,5.798826);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(13,5.766925);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(14,4.960062);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(15,4.722938);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(16,4.375839);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(17,4.198201);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(18,3.784861);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(19,3.179642);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(20,2.90305);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(21,2.555815);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(22,2.033354);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(23,1.66263);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(24,1.441372);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(25,0.7990069);
   Zee_2bjet_A_Z2b_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_A_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_4 = new TH1D("Zee_2bjet_A_Z2b_all_stack_4","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(1,33.88838);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(2,27.40538);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(3,20.54141);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(4,15.26708);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(5,11.6223);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(6,9.004743);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(7,7.122788);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(8,5.675142);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(9,4.462577);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(10,3.686798);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(11,2.864781);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(12,2.30758);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(13,1.901274);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(14,1.564403);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(15,1.37024);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(16,1.097875);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(17,0.9463035);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(18,0.7901707);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(19,0.5911847);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(20,0.4883816);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(21,0.3914799);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(22,0.2950834);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(23,0.1939899);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(24,0.112778);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinContent(25,0.03767764);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(1,0.1368363);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(2,0.1230475);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(3,0.1065305);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(4,0.09179096);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(5,0.08013194);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(6,0.07045525);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(7,0.06265566);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(8,0.05590318);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(9,0.04965388);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(10,0.04516299);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(11,0.03972315);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(12,0.03565961);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(13,0.03242193);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(14,0.02937463);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(15,0.0275238);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(16,0.0247213);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(17,0.02288927);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(18,0.02089173);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(19,0.01803426);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(20,0.01655664);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(21,0.01459249);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(22,0.01265703);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(23,0.01036247);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(24,0.007900204);
   Zee_2bjet_A_Z2b_all_stack_4->SetBinError(25,0.004483003);
   Zee_2bjet_A_Z2b_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_A_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_5 = new TH1D("Zee_2bjet_A_Z2b_all_stack_5","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(1,8360.2);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(2,7954.325);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(3,6946.721);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(4,5546.54);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(5,4409.895);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(6,3548.407);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(7,2832.891);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(8,2408.673);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(9,1983.709);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(10,1623.957);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(11,1358.061);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(12,1157.064);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(13,948.4548);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(14,819.7687);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(15,656.1033);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(16,590.4401);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(17,478.7012);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(18,430.0912);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(19,356.2204);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(20,268.7183);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(21,196.9859);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(22,132.9962);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(23,112.344);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(24,61.41082);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinContent(25,13.68043);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(1,88.06534);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(2,86.71073);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(3,80.60153);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(4,71.93165);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(5,63.94467);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(6,57.45087);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(7,50.50956);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(8,47.56451);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(9,42.44966);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(10,38.49477);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(11,35.03427);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(12,32.33199);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(13,29.53385);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(14,27.23902);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(15,24.21686);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(16,23.43386);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(17,20.5765);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(18,19.72524);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(19,18.00875);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(20,15.40664);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(21,13.22614);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(22,10.6913);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(23,10.17537);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(24,7.145273);
   Zee_2bjet_A_Z2b_all_stack_5->SetBinError(25,3.435502);
   Zee_2bjet_A_Z2b_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_A_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b_all__463 = new TH1D("Zee_2bjet_A_Z2b_all__463","",25,0,1);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(1,3510);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(2,3286);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(3,2823);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(4,2354);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(5,1809);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(6,1516);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(7,1236);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(8,1081);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(9,853);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(10,702);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(11,522);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(12,482);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(13,416);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(14,315);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(15,285);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(16,251);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(17,185);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(18,156);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(19,144);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(20,100);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(21,85);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(22,68);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(23,45);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(24,21);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(25,4);
   Zee_2bjet_A_Z2b_all__463->SetBinError(1,59.24525);
   Zee_2bjet_A_Z2b_all__463->SetBinError(2,57.32364);
   Zee_2bjet_A_Z2b_all__463->SetBinError(3,53.13191);
   Zee_2bjet_A_Z2b_all__463->SetBinError(4,48.51804);
   Zee_2bjet_A_Z2b_all__463->SetBinError(5,42.53234);
   Zee_2bjet_A_Z2b_all__463->SetBinError(6,38.93584);
   Zee_2bjet_A_Z2b_all__463->SetBinError(7,35.15679);
   Zee_2bjet_A_Z2b_all__463->SetBinError(8,32.87856);
   Zee_2bjet_A_Z2b_all__463->SetBinError(9,29.20616);
   Zee_2bjet_A_Z2b_all__463->SetBinError(10,26.49528);
   Zee_2bjet_A_Z2b_all__463->SetBinError(11,22.84732);
   Zee_2bjet_A_Z2b_all__463->SetBinError(12,21.9545);
   Zee_2bjet_A_Z2b_all__463->SetBinError(13,20.39608);
   Zee_2bjet_A_Z2b_all__463->SetBinError(14,17.74824);
   Zee_2bjet_A_Z2b_all__463->SetBinError(15,16.88194);
   Zee_2bjet_A_Z2b_all__463->SetBinError(16,15.84298);
   Zee_2bjet_A_Z2b_all__463->SetBinError(17,13.60147);
   Zee_2bjet_A_Z2b_all__463->SetBinError(18,12.49);
   Zee_2bjet_A_Z2b_all__463->SetBinError(19,12);
   Zee_2bjet_A_Z2b_all__463->SetBinError(20,10);
   Zee_2bjet_A_Z2b_all__463->SetBinError(21,9.219544);
   Zee_2bjet_A_Z2b_all__463->SetBinError(22,8.246211);
   Zee_2bjet_A_Z2b_all__463->SetBinError(23,6.708204);
   Zee_2bjet_A_Z2b_all__463->SetBinError(24,4.582576);
   Zee_2bjet_A_Z2b_all__463->SetBinError(25,2);
   Zee_2bjet_A_Z2b_all__463->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all__463->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all__463->SetLineWidth(2);
   Zee_2bjet_A_Z2b_all__463->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b_all__463->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_A_Z2b_all_fx1463[25] = {
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
   Double_t Graph_from_Zee_2bjet_A_Z2b_all_fy1463[25] = {
   9535.094,
   9038.09,
   7922.469,
   6387.683,
   5110.496,
   4157.822,
   3320.524,
   2813.481,
   2315.898,
   1903.056,
   1582.044,
   1343.328,
   1110.001,
   948.0775,
   771.6542,
   685.414,
   562.5182,
   497.2744,
   408.9075,
   311.556,
   228.721,
   154.9342,
   126.0407,
   71.0278,
   16.29958};
   Double_t Graph_from_Zee_2bjet_A_Z2b_all_fex1463[25] = {
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
   Double_t Graph_from_Zee_2bjet_A_Z2b_all_fey1463[25] = {
   89.50469,
   88.04748,
   81.89463,
   73.20306,
   65.11949,
   58.59098,
   51.53861,
   48.46127,
   43.27457,
   39.25797,
   35.70168,
   32.8966,
   30.15749,
   27.7122,
   24.71704,
   23.86654,
   21.02526,
   20.10499,
   18.30007,
   15.71233,
   13.48225,
   10.89431,
   10.31031,
   7.289207,
   3.527196};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_A_Z2b_all_fx1463,Graph_from_Zee_2bjet_A_Z2b_all_fy1463,Graph_from_Zee_2bjet_A_Z2b_all_fex1463,Graph_from_Zee_2bjet_A_Z2b_all_fey1463);
   gre->SetName("Graph_from_Zee_2bjet_A_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_A_Z2b_all1463 = new TH1F("Graph_Graph_from_Zee_2bjet_A_Z2b_all1463","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->SetMinimum(11.49514);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->SetMaximum(10585.78);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b_all1463->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_A_Z2b_all1463);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_A_Z2b_all","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__464 = new TH1D("data_mc_ratio__464","",25,0,1);
   data_mc_ratio__464->SetBinContent(1,0.3681138);
   data_mc_ratio__464->SetBinContent(2,0.3635724);
   data_mc_ratio__464->SetBinContent(3,0.3563283);
   data_mc_ratio__464->SetBinContent(4,0.3685217);
   data_mc_ratio__464->SetBinContent(5,0.3539774);
   data_mc_ratio__464->SetBinContent(6,0.364614);
   data_mc_ratio__464->SetBinContent(7,0.3722304);
   data_mc_ratio__464->SetBinContent(8,0.3842215);
   data_mc_ratio__464->SetBinContent(9,0.3683237);
   data_mc_ratio__464->SetBinContent(10,0.3688803);
   data_mc_ratio__464->SetBinContent(11,0.3299529);
   data_mc_ratio__464->SetBinContent(12,0.3588104);
   data_mc_ratio__464->SetBinContent(13,0.3747743);
   data_mc_ratio__464->SetBinContent(14,0.3322513);
   data_mc_ratio__464->SetBinContent(15,0.3693364);
   data_mc_ratio__464->SetBinContent(16,0.366202);
   data_mc_ratio__464->SetBinContent(17,0.3288783);
   data_mc_ratio__464->SetBinContent(18,0.3137101);
   data_mc_ratio__464->SetBinContent(19,0.3521579);
   data_mc_ratio__464->SetBinContent(20,0.3209696);
   data_mc_ratio__464->SetBinContent(21,0.3716319);
   data_mc_ratio__464->SetBinContent(22,0.438896);
   data_mc_ratio__464->SetBinContent(23,0.3570274);
   data_mc_ratio__464->SetBinContent(24,0.2956589);
   data_mc_ratio__464->SetBinContent(25,0.2454051);
   data_mc_ratio__464->SetBinError(1,0.00621339);
   data_mc_ratio__464->SetBinError(2,0.006342451);
   data_mc_ratio__464->SetBinError(3,0.006706484);
   data_mc_ratio__464->SetBinError(4,0.007595562);
   data_mc_ratio__464->SetBinError(5,0.008322546);
   data_mc_ratio__464->SetBinError(6,0.009364481);
   data_mc_ratio__464->SetBinError(7,0.01058772);
   data_mc_ratio__464->SetBinError(8,0.01168608);
   data_mc_ratio__464->SetBinError(9,0.01261116);
   data_mc_ratio__464->SetBinError(10,0.01392249);
   data_mc_ratio__464->SetBinError(11,0.01444164);
   data_mc_ratio__464->SetBinError(12,0.01634337);
   data_mc_ratio__464->SetBinError(13,0.01837482);
   data_mc_ratio__464->SetBinError(14,0.01872024);
   data_mc_ratio__464->SetBinError(15,0.0218776);
   data_mc_ratio__464->SetBinError(16,0.02311447);
   data_mc_ratio__464->SetBinError(17,0.02417961);
   data_mc_ratio__464->SetBinError(18,0.02511691);
   data_mc_ratio__464->SetBinError(19,0.02934649);
   data_mc_ratio__464->SetBinError(20,0.03209696);
   data_mc_ratio__464->SetBinError(21,0.04030914);
   data_mc_ratio__464->SetBinError(22,0.05322395);
   data_mc_ratio__464->SetBinError(23,0.0532225);
   data_mc_ratio__464->SetBinError(24,0.06451805);
   data_mc_ratio__464->SetBinError(25,0.1227026);
   data_mc_ratio__464->SetMinimum(0.4);
   data_mc_ratio__464->SetMaximum(1.6);
   data_mc_ratio__464->SetEntries(1922.781);
   data_mc_ratio__464->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__464->SetLineColor(ci);
   data_mc_ratio__464->SetLineWidth(2);
   data_mc_ratio__464->SetMarkerStyle(20);
   data_mc_ratio__464->SetMarkerSize(1.2);
   data_mc_ratio__464->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__464->GetXaxis()->SetRange(1,25);
   data_mc_ratio__464->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__464->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__464->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__464->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__464->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__464->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__464->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__464->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__464->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__464->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__464->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__464->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__464->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__464->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1464[25] = {
   0.009386871,
   0.009741824,
   0.01033701,
   0.01146003,
   0.0127423,
   0.01409175,
   0.01552123,
   0.01722467,
   0.01868587,
   0.02062891,
   0.0225668,
   0.02448888,
   0.02716888,
   0.02922989,
   0.03203124,
   0.03482062,
   0.03737704,
   0.04043037,
   0.04475357,
   0.05043181,
   0.0589463,
   0.0703157,
   0.08180144,
   0.1026247,
   0.216398};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1464,Graph_from_mc_statistical_error_fy1464,Graph_from_mc_statistical_error_fex1464,Graph_from_mc_statistical_error_fey1464);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1464 = new TH1F("Graph_Graph_from_mc_statistical_error1464","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1464->SetMinimum(0.7403224);
   Graph_Graph_from_mc_statistical_error1464->SetMaximum(1.259678);
   Graph_Graph_from_mc_statistical_error1464->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1464->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1464->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1464);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_All_amcnlo);
}
