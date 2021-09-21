void A_Z2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_17_amcnlo/A_Z2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_17_amcnlo", "A_Z2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5.914796,1.052419,5918.881);
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
   st->SetMaximum(5072.763);
   
   TH1F *st_stack_230 = new TH1F("st_stack_230","",25,0,1);
   st_stack_230->SetMinimum(0.01);
   st_stack_230->SetMaximum(5326.401);
   st_stack_230->SetDirectory(0);
   st_stack_230->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_230->SetLineColor(ci);
   st_stack_230->GetXaxis()->SetRange(1,25);
   st_stack_230->GetXaxis()->SetLabelFont(42);
   st_stack_230->GetXaxis()->SetLabelSize(0.035);
   st_stack_230->GetXaxis()->SetTitleSize(0.035);
   st_stack_230->GetXaxis()->SetTitleFont(42);
   st_stack_230->GetYaxis()->SetTitle("Events/0.04");
   st_stack_230->GetYaxis()->SetLabelFont(42);
   st_stack_230->GetYaxis()->SetLabelSize(0.05);
   st_stack_230->GetYaxis()->SetTitleSize(0.057);
   st_stack_230->GetYaxis()->SetTitleOffset(1.2);
   st_stack_230->GetYaxis()->SetTitleFont(42);
   st_stack_230->GetZaxis()->SetLabelFont(42);
   st_stack_230->GetZaxis()->SetLabelSize(0.035);
   st_stack_230->GetZaxis()->SetTitleSize(0.035);
   st_stack_230->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_230);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,10.52209);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,8.972541);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,7.278003);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,5.264928);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,5.587591);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,3.229958);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,1.276368);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,2.421291);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,2.90783);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,3.020727);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,1.290496);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,1.422231);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,0.4043335);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,0.808667);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,0.608855);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,0.6041455);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,0.8039575);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(18,0.2045215);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.4043335);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(20,0.2045215);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(22,0.608855);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,1.45925);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,1.33383);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,1.213083);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,1.325738);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,1.053608);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,0.8075437);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,0.4979878);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,0.6990129);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,0.7620498);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.7799959);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,0.5036908);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.5375824);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.2859263);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.4043609);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.3515436);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.3488248);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.4019994);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(18,0.2045215);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.2859263);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(20,0.2045215);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(22,0.3515436);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(289);

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
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,33.30653);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,25.04221);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,23.59066);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,13.20534);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,14.2864);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,10.10706);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,4.575102);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,4.927033);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,4.223171);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,5.531955);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,1.660715);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,2.111586);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,1.759655);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(14,0.9568531);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(15,1.759655);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(17,0.2529913);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(18,0.7038619);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(19,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(21,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(22,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,3.450428);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,2.956017);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,2.850801);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,2.191317);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,2.214198);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,1.87935);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,1.268905);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,1.316805);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,1.219125);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,1.386303);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,0.7479479);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,0.8620512);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,0.7869415);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(14,0.5583147);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(15,0.7869415);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(17,0.2529913);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(18,0.4977055);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(19,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(21,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(22,0.3519309);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(429);

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
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,312.9309);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,287.4342);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,275.7483);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,242.2058);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,199.2376);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,174.6441);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,145.693);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,117.4387);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,95.22457);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,81.86076);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,64.4924);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,45.73723);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,55.273);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,35.55735);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,33.58372);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,29.26743);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,29.98948);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,22.54656);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,14.59475);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,13.10937);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,10.49162);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,6.544363);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,4.336931);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,3.438371);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,1.230938);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,11.22455);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,10.75566);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,10.52056);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,9.877594);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,8.923318);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,8.379026);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,7.677941);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,6.87039);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,6.184086);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,5.730384);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,5.088434);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,4.292996);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,4.737729);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,3.771867);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,3.659408);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,3.439109);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,3.467005);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,3.020202);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,2.431193);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,2.291161);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,2.055999);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,1.598661);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,1.304525);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,1.165761);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.7106824);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(6204);

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
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(1,10.2732);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(2,8.331806);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(3,6.272131);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(4,4.679356);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(5,3.56107);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(6,2.787959);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(7,2.210711);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(8,1.764845);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(9,1.373117);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(10,1.111735);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(11,0.8927674);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(12,0.7155243);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(13,0.5844885);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(14,0.485522);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(15,0.4169007);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(16,0.3268998);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(17,0.2872442);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(18,0.2441403);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(19,0.1865536);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(20,0.1396565);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(21,0.1317254);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(22,0.1010355);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(23,0.05965576);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(24,0.0344831);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(25,0.01310358);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(1,0.05951907);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(2,0.05360098);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(3,0.04650618);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(4,0.04016948);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(5,0.03504236);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(6,0.03100604);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(7,0.02761018);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(8,0.02466928);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(9,0.0217599);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(10,0.0195796);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(11,0.01754577);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(12,0.0157078);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(13,0.01419682);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(14,0.01293921);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(15,0.01199001);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(16,0.01061721);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(17,0.009952422);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(18,0.009175356);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(19,0.008020564);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(20,0.00693959);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(21,0.00673966);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(22,0.005902556);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(23,0.004535543);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(24,0.00344831);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(25,0.002125681);
   Zee_2bjet_A_Z2b_stack_4->SetEntries(136257);

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
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(1,2422.987);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(2,2350.062);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(3,2041.916);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(4,1670.256);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(5,1306.475);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(6,1082.251);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(7,842.4503);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(8,709.9903);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(9,548.256);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(10,494.9367);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(11,406.3317);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(12,311.6391);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(13,298.0696);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(14,220.8985);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(15,184.1417);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(16,148.4593);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(17,135.8489);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(18,136.1688);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(19,93.03011);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(20,75.96898);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(21,59.95675);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(22,43.81648);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(23,30.43881);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(24,18.80044);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(25,4.476295);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(1,47.17143);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(2,46.71619);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(3,43.54863);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(4,39.55275);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(5,34.89859);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(6,31.71979);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(7,27.54594);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(8,25.83958);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(9,22.14415);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(10,21.42385);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(11,19.48535);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(12,17.17798);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(13,16.65762);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(14,14.05564);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(15,12.83002);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(16,11.52284);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(17,11.01905);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(18,11.28362);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(19,9.122458);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(20,8.24018);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(21,7.324926);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(22,6.259597);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(23,5.220212);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(24,4.102592);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(25,2.00186);
   Zee_2bjet_A_Z2b_stack_5->SetEntries(17303);

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
   
   TH1D *Zee_2bjet_A_Z2b__459 = new TH1D("Zee_2bjet_A_Z2b__459","",25,0,1);
   Zee_2bjet_A_Z2b__459->SetBinContent(1,954);
   Zee_2bjet_A_Z2b__459->SetBinContent(2,902);
   Zee_2bjet_A_Z2b__459->SetBinContent(3,768);
   Zee_2bjet_A_Z2b__459->SetBinContent(4,633);
   Zee_2bjet_A_Z2b__459->SetBinContent(5,496);
   Zee_2bjet_A_Z2b__459->SetBinContent(6,411);
   Zee_2bjet_A_Z2b__459->SetBinContent(7,358);
   Zee_2bjet_A_Z2b__459->SetBinContent(8,294);
   Zee_2bjet_A_Z2b__459->SetBinContent(9,245);
   Zee_2bjet_A_Z2b__459->SetBinContent(10,194);
   Zee_2bjet_A_Z2b__459->SetBinContent(11,143);
   Zee_2bjet_A_Z2b__459->SetBinContent(12,121);
   Zee_2bjet_A_Z2b__459->SetBinContent(13,101);
   Zee_2bjet_A_Z2b__459->SetBinContent(14,87);
   Zee_2bjet_A_Z2b__459->SetBinContent(15,80);
   Zee_2bjet_A_Z2b__459->SetBinContent(16,75);
   Zee_2bjet_A_Z2b__459->SetBinContent(17,51);
   Zee_2bjet_A_Z2b__459->SetBinContent(18,46);
   Zee_2bjet_A_Z2b__459->SetBinContent(19,50);
   Zee_2bjet_A_Z2b__459->SetBinContent(20,33);
   Zee_2bjet_A_Z2b__459->SetBinContent(21,23);
   Zee_2bjet_A_Z2b__459->SetBinContent(22,21);
   Zee_2bjet_A_Z2b__459->SetBinContent(23,15);
   Zee_2bjet_A_Z2b__459->SetBinContent(24,8);
   Zee_2bjet_A_Z2b__459->SetBinContent(25,2);
   Zee_2bjet_A_Z2b__459->SetBinError(1,30.88689);
   Zee_2bjet_A_Z2b__459->SetBinError(2,30.03331);
   Zee_2bjet_A_Z2b__459->SetBinError(3,27.71281);
   Zee_2bjet_A_Z2b__459->SetBinError(4,25.15949);
   Zee_2bjet_A_Z2b__459->SetBinError(5,22.27106);
   Zee_2bjet_A_Z2b__459->SetBinError(6,20.27313);
   Zee_2bjet_A_Z2b__459->SetBinError(7,18.92089);
   Zee_2bjet_A_Z2b__459->SetBinError(8,17.14643);
   Zee_2bjet_A_Z2b__459->SetBinError(9,15.65248);
   Zee_2bjet_A_Z2b__459->SetBinError(10,13.92839);
   Zee_2bjet_A_Z2b__459->SetBinError(11,11.95826);
   Zee_2bjet_A_Z2b__459->SetBinError(12,11);
   Zee_2bjet_A_Z2b__459->SetBinError(13,10.04988);
   Zee_2bjet_A_Z2b__459->SetBinError(14,9.327379);
   Zee_2bjet_A_Z2b__459->SetBinError(15,8.944272);
   Zee_2bjet_A_Z2b__459->SetBinError(16,8.660254);
   Zee_2bjet_A_Z2b__459->SetBinError(17,7.141428);
   Zee_2bjet_A_Z2b__459->SetBinError(18,6.78233);
   Zee_2bjet_A_Z2b__459->SetBinError(19,7.071068);
   Zee_2bjet_A_Z2b__459->SetBinError(20,5.744563);
   Zee_2bjet_A_Z2b__459->SetBinError(21,4.795832);
   Zee_2bjet_A_Z2b__459->SetBinError(22,4.582576);
   Zee_2bjet_A_Z2b__459->SetBinError(23,3.872983);
   Zee_2bjet_A_Z2b__459->SetBinError(24,2.828427);
   Zee_2bjet_A_Z2b__459->SetBinError(25,1.414214);
   Zee_2bjet_A_Z2b__459->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__459->SetLineColor(ci);
   Zee_2bjet_A_Z2b__459->SetLineWidth(2);
   Zee_2bjet_A_Z2b__459->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__459->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_A_Z2b_fx1459[25] = {
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
   Double_t Graph_from_Zee_2bjet_A_Z2b_fy1459[25] = {
   2790.02,
   2679.843,
   2354.805,
   1935.611,
   1529.148,
   1273.02,
   996.2055,
   836.5422,
   651.9847,
   586.4619,
   474.6681,
   361.6257,
   356.0911,
   258.7069,
   220.5108,
   178.6578,
   167.1826,
   159.8679,
   108.5677,
   89.42252,
   70.93202,
   51.42266,
   34.83539,
   22.27329,
   5.720337};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fex1459[25] = {
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
   Double_t Graph_from_Zee_2bjet_A_Z2b_fey1459[25] = {
   48.63304,
   48.04796,
   44.90842,
   40.84786,
   36.10472,
   32.87154,
   28.62845,
   26.7789,
   23.03636,
   22.23396,
   20.15898,
   17.73542,
   17.3385,
   14.56926,
   13.36951,
   12.03018,
   11.56137,
   11.69321,
   9.451752,
   8.555224,
   7.61614,
   6.479641,
   5.380746,
   4.265006,
   2.124269};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_A_Z2b_fx1459,Graph_from_Zee_2bjet_A_Z2b_fy1459,Graph_from_Zee_2bjet_A_Z2b_fex1459,Graph_from_Zee_2bjet_A_Z2b_fey1459);
   gre->SetName("Graph_from_Zee_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_A_Z2b1459 = new TH1F("Graph_Graph_from_Zee_2bjet_A_Z2b1459","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->SetMinimum(3.236461);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->SetMaximum(3122.158);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1459->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_A_Z2b1459);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__460 = new TH1D("data_mc_ratio__460","",25,0,1);
   data_mc_ratio__460->SetBinContent(1,0.3419331);
   data_mc_ratio__460->SetBinContent(2,0.3365869);
   data_mc_ratio__460->SetBinContent(3,0.3261417);
   data_mc_ratio__460->SetBinContent(4,0.3270284);
   data_mc_ratio__460->SetBinContent(5,0.3243636);
   data_mc_ratio__460->SetBinContent(6,0.3228542);
   data_mc_ratio__460->SetBinContent(7,0.3593636);
   data_mc_ratio__460->SetBinContent(8,0.3514467);
   data_mc_ratio__460->SetBinContent(9,0.3757757);
   data_mc_ratio__460->SetBinContent(10,0.3307973);
   data_mc_ratio__460->SetBinContent(11,0.3012631);
   data_mc_ratio__460->SetBinContent(12,0.3346001);
   data_mc_ratio__460->SetBinContent(13,0.2836353);
   data_mc_ratio__460->SetBinContent(14,0.3362879);
   data_mc_ratio__460->SetBinContent(15,0.362794);
   data_mc_ratio__460->SetBinContent(16,0.4197969);
   data_mc_ratio__460->SetBinContent(17,0.3050557);
   data_mc_ratio__460->SetBinContent(18,0.2877376);
   data_mc_ratio__460->SetBinContent(19,0.4605422);
   data_mc_ratio__460->SetBinContent(20,0.3690346);
   data_mc_ratio__460->SetBinContent(21,0.3242541);
   data_mc_ratio__460->SetBinContent(22,0.4083803);
   data_mc_ratio__460->SetBinContent(23,0.4305965);
   data_mc_ratio__460->SetBinContent(24,0.3591745);
   data_mc_ratio__460->SetBinContent(25,0.3496298);
   data_mc_ratio__460->SetBinError(1,0.01107049);
   data_mc_ratio__460->SetBinError(2,0.01120712);
   data_mc_ratio__460->SetBinError(3,0.01176863);
   data_mc_ratio__460->SetBinError(4,0.01299821);
   data_mc_ratio__460->SetBinError(5,0.01456436);
   data_mc_ratio__460->SetBinError(6,0.01592522);
   data_mc_ratio__460->SetBinError(7,0.01899296);
   data_mc_ratio__460->SetBinError(8,0.02049679);
   data_mc_ratio__460->SetBinError(9,0.02400743);
   data_mc_ratio__460->SetBinError(10,0.02374986);
   data_mc_ratio__460->SetBinError(11,0.02519289);
   data_mc_ratio__460->SetBinError(12,0.03041819);
   data_mc_ratio__460->SetBinError(13,0.02822277);
   data_mc_ratio__460->SetBinError(14,0.03605385);
   data_mc_ratio__460->SetBinError(15,0.04056161);
   data_mc_ratio__460->SetBinError(16,0.04847397);
   data_mc_ratio__460->SetBinError(17,0.04271635);
   data_mc_ratio__460->SetBinError(18,0.0424246);
   data_mc_ratio__460->SetBinError(19,0.06513051);
   data_mc_ratio__460->SetBinError(20,0.06424067);
   data_mc_ratio__460->SetBinError(21,0.06761166);
   data_mc_ratio__460->SetBinError(22,0.08911588);
   data_mc_ratio__460->SetBinError(23,0.1111796);
   data_mc_ratio__460->SetBinError(24,0.1269874);
   data_mc_ratio__460->SetBinError(25,0.2472256);
   data_mc_ratio__460->SetMinimum(0.4);
   data_mc_ratio__460->SetMaximum(1.6);
   data_mc_ratio__460->SetEntries(471.9831);
   data_mc_ratio__460->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__460->SetLineColor(ci);
   data_mc_ratio__460->SetLineWidth(2);
   data_mc_ratio__460->SetMarkerStyle(20);
   data_mc_ratio__460->SetMarkerSize(1.2);
   data_mc_ratio__460->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__460->GetXaxis()->SetRange(1,25);
   data_mc_ratio__460->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__460->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__460->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__460->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__460->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__460->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__460->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__460->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__460->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__460->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__460->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__460->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__460->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__460->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1460[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1460[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1460[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1460[25] = {
   0.01743107,
   0.01792939,
   0.01907098,
   0.02110334,
   0.02361101,
   0.02582169,
   0.0287375,
   0.03201142,
   0.03533267,
   0.03791203,
   0.04246964,
   0.04904358,
   0.0486912,
   0.0563157,
   0.06062973,
   0.06733643,
   0.06915418,
   0.07314299,
   0.08705861,
   0.09567192,
   0.1073724,
   0.1260075,
   0.154462,
   0.1914852,
   0.3713538};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1460,Graph_from_mc_statistical_error_fy1460,Graph_from_mc_statistical_error_fex1460,Graph_from_mc_statistical_error_fey1460);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1460 = new TH1F("Graph_Graph_from_mc_statistical_error1460","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1460->SetMinimum(0.5543755);
   Graph_Graph_from_mc_statistical_error1460->SetMaximum(1.445625);
   Graph_Graph_from_mc_statistical_error1460->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1460->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1460->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1460);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_17_amcnlo);
}
