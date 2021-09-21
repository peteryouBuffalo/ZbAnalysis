void dPhi_Zb1_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_18_amcnlo/dPhi_Zb1_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_18_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_18_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.728282,3.416482,2735.554);
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
   st->SetMaximum(2344.501);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,3.141593);
   st_stack_239->SetMinimum(0.01);
   st_stack_239->SetMaximum(2461.726);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,31);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.105");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.083201);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,1.862857);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,1.607982);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.846036);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,1.253727);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.993466);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,2.026293);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,2.969594);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,2.460821);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,3.72534);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.731874);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,3.487658);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,1.927975);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,3.011549);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,3.249604);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,4.417548);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,5.421662);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,2.773494);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,3.912686);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,4.370914);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,2.402047);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,4.44516);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,5.275897);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,4.871995);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,3.650722);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.94402);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,3.555275);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,3.896239);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,4.043669);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,3.97855);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.5455459);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.7092958);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.6429069);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.685565);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.5819245);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.736757);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.7014324);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.9245005);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.8093748);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.9874064);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.6573891);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.9744388);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.7122786);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.9144347);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.9449132);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,1.072966);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,1.228302);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.8829048);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,1.02425);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,1.062578);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.8003104);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,1.079632);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,1.176804);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,1.152336);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.9524747);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.9058348);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.9489583);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,1.023336);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,1.058314);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,1.056309);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(388);

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
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,2.944303);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,2.492644);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,3.489701);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.718473);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,3.489701);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,5.211117);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,3.217002);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,2.991172);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,3.217002);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,4.712588);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,1.994115);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,4.486758);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,2.492644);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,4.486758);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,7.205232);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,8.474988);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,5.483816);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,5.982345);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,9.970574);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,10.96763);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,15.45439);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,11.46616);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,13.18758);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,7.976459);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,10.4691);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,10.4691);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,7.477931);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,9.697875);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,8.202289);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,6.208174);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.33977);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,1.114744);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(3,1.318983);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,1.232404);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,1.318983);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,1.661768);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,1.329417);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,1.221141);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,1.329417);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,1.585226);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.9970574);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.495586);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,1.114744);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.495586);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.937936);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,2.055487);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.653433);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,1.726954);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,2.229488);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,2.338307);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,2.77569);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,2.39086);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,2.595759);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.994115);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,2.284546);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,2.284546);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.930793);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,2.235677);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,2.062197);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.805141);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(389);

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
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,64.58128);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,65.89065);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,65.57196);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,66.05789);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,61.43684);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,65.7914);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,70.7093);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,65.69215);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,72.0208);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,77.83742);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,85.00104);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,95.54737);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,95.06144);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,107.8911);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,114.6933);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,122.9729);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,134.0283);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,141.2462);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,145.0417);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,156.6185);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,157.885);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,158.2957);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,158.2696);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,149.8467);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,157.0835);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,153.5921);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,152.616);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,151.2031);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,144.3979);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,147.4902);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.305451);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.327299);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.323122);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.331592);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.249671);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.326574);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.412964);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.325848);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.435155);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,2.532377);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,2.646311);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,2.80465);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,2.797612);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,2.979291);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.074442);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.182045);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.323193);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,3.411167);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.455895);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.591702);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,3.606516);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,3.610355);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,3.610629);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,3.512133);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,3.595894);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,3.557041);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,3.544143);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.527551);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.447498);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.484721);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(41359);

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
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,0.8774631);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,0.916793);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,0.9188273);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,0.9337455);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,0.9018748);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,0.8862784);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,0.9615477);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,1.00359);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,1.00698);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,1.133785);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,1.287036);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,1.413163);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,1.6071);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,1.826805);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,2.090586);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,2.313682);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,2.649342);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,2.871759);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,3.303032);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,3.563423);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,3.867212);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,4.133028);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,4.23949);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,4.198125);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,4.105225);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,3.936378);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,3.520024);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,3.162665);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,2.883287);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,2.756482);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.0243928);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.02493348);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.02496113);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.02516295);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.02472979);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.02451503);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.02553481);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.02608708);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.02613111);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.02772763);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.02954219);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.0309559);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.03301177);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.03519601);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.03765142);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.03960948);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.0423854);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.04412872);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.04732642);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.0491565);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.051209);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.0529397);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.05361719);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.05335499);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.05276134);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.05166491);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.04885625);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.0463099);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.0442172);
   Zee_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.04323395);
   Zee_2bjet_dPhi_Zb1_stack_4->SetEntries(102151);

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
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,538.5593);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,499.0428);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,538.2803);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,528.531);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,567.4152);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,458.6709);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,510.8288);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,504.0884);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,530.2258);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,617.6639);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,544.6232);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,612.9344);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,672.8307);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,649.0462);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,697.5522);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,738.0055);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,808.2259);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,857.4953);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,870.8707);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,975.1423);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,987.1869);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,1053.674);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,1031.926);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,1122.582);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,1103.562);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,1052.88);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,1113.205);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,1012.837);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,1015.55);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,998.4264);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(1,24.86057);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(2,24.14837);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(3,25.48222);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(4,25.65726);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(5,26.30042);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(6,22.98147);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(7,24.00462);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(8,24.47897);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(9,24.88413);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(10,26.78088);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(11,25.20197);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(12,26.49307);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(13,27.91659);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(14,27.60633);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(15,28.40978);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(16,29.19886);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(17,30.69018);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(18,32.07787);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(19,31.34876);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(20,33.47341);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(21,33.6692);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(22,35.0628);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(23,34.84541);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(24,36.00231);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(25,35.99634);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(26,35.37137);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(27,35.49799);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(28,34.91611);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(29,34.36676);
   Zee_2bjet_dPhi_Zb1_stack_5->SetBinError(30,34.36513);
   Zee_2bjet_dPhi_Zb1_stack_5->SetEntries(20359);

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
   
   TH1D *Zee_2bjet_dPhi_Zb1__477 = new TH1D("Zee_2bjet_dPhi_Zb1__477","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(1,218);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(2,197);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(3,204);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(4,252);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(5,225);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(6,244);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(7,219);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(8,240);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(9,249);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(10,272);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(11,259);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(12,296);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(13,288);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(14,329);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(15,342);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(16,359);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(17,359);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(18,410);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(19,392);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(20,447);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(21,435);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(22,475);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(23,457);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(24,496);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(25,517);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(26,450);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(27,511);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(28,526);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(29,497);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(30,483);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(1,14.76482);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(2,14.03567);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(3,14.28286);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(4,15.87451);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(5,15);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(6,15.6205);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(7,14.79865);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(8,15.49193);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(9,15.77973);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(10,16.49242);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(11,16.09348);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(12,17.20465);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(13,16.97056);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(14,18.13836);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(15,18.49324);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(16,18.9473);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(17,18.9473);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(18,20.24846);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(19,19.79899);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(20,21.14237);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(21,20.85665);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(22,21.79449);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(23,21.37756);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(24,22.27106);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(25,22.73763);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(26,21.2132);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(27,22.60531);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(28,22.93469);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(29,22.2935);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(30,21.97726);
   Zee_2bjet_dPhi_Zb1__477->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__477->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__477->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__477->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__477->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fx1477[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fy1477[30] = {
   608.0455,
   570.2058,
   609.8688,
   600.0871,
   634.4973,
   532.5532,
   587.743,
   576.745,
   608.9314,
   705.073,
   634.6373,
   717.8694,
   773.9199,
   766.2624,
   824.7909,
   876.1847,
   955.809,
   1010.369,
   1033.099,
   1150.663,
   1166.796,
   1232.014,
   1212.899,
   1289.475,
   1278.871,
   1223.821,
   1280.374,
   1180.797,
   1175.077,
   1158.86};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fex1477[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb1_fey1477[30] = {
   25.00913,
   24.29622,
   25.62995,
   25.80157,
   26.43581,
   23.17036,
   24.17238,
   24.63689,
   25.05141,
   26.96511,
   25.36867,
   26.70086,
   28.08761,
   27.82193,
   28.6569,
   29.46314,
   30.93824,
   32.31701,
   31.63399,
   33.76342,
   33.98485,
   35.34571,
   35.14776,
   36.24649,
   36.26012,
   35.63465,
   35.73932,
   35.17991,
   34.61696,
   34.60465};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb1_fx1477,Graph_from_Zee_2bjet_dPhi_Zb1_fy1477,Graph_from_Zee_2bjet_dPhi_Zb1_fex1477,Graph_from_Zee_2bjet_dPhi_Zb1_fey1477);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb11477 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb11477","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->SetMinimum(427.749);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->SetMaximum(1407.356);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb11477);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__478 = new TH1D("data_mc_ratio__478","",30,0,3.141593);
   data_mc_ratio__478->SetBinContent(1,0.3585258);
   data_mc_ratio__478->SetBinContent(2,0.3454893);
   data_mc_ratio__478->SetBinContent(3,0.3344982);
   data_mc_ratio__478->SetBinContent(4,0.419939);
   data_mc_ratio__478->SetBinContent(5,0.3546114);
   data_mc_ratio__478->SetBinContent(6,0.4581702);
   data_mc_ratio__478->SetBinContent(7,0.3726118);
   data_mc_ratio__478->SetBinContent(8,0.4161285);
   data_mc_ratio__478->SetBinContent(9,0.4089131);
   data_mc_ratio__478->SetBinContent(10,0.3857756);
   data_mc_ratio__478->SetBinContent(11,0.4081071);
   data_mc_ratio__478->SetBinContent(12,0.4123313);
   data_mc_ratio__478->SetBinContent(13,0.3721315);
   data_mc_ratio__478->SetBinContent(14,0.4293568);
   data_mc_ratio__478->SetBinContent(15,0.4146506);
   data_mc_ratio__478->SetBinContent(16,0.409731);
   data_mc_ratio__478->SetBinContent(17,0.3755981);
   data_mc_ratio__478->SetBinContent(18,0.4057923);
   data_mc_ratio__478->SetBinContent(19,0.379441);
   data_mc_ratio__478->SetBinContent(20,0.3884718);
   data_mc_ratio__478->SetBinContent(21,0.3728159);
   data_mc_ratio__478->SetBinContent(22,0.3855476);
   data_mc_ratio__478->SetBinContent(23,0.3767833);
   data_mc_ratio__478->SetBinContent(24,0.3846526);
   data_mc_ratio__478->SetBinContent(25,0.4042629);
   data_mc_ratio__478->SetBinContent(26,0.3677008);
   data_mc_ratio__478->SetBinContent(27,0.399102);
   data_mc_ratio__478->SetBinContent(28,0.4454619);
   data_mc_ratio__478->SetBinContent(29,0.4229509);
   data_mc_ratio__478->SetBinContent(30,0.416789);
   data_mc_ratio__478->SetBinError(1,0.02428243);
   data_mc_ratio__478->SetBinError(2,0.02461509);
   data_mc_ratio__478->SetBinError(3,0.02341956);
   data_mc_ratio__478->SetBinError(4,0.02645367);
   data_mc_ratio__478->SetBinError(5,0.02364076);
   data_mc_ratio__478->SetBinError(6,0.02933134);
   data_mc_ratio__478->SetBinError(7,0.02517878);
   data_mc_ratio__478->SetBinError(8,0.02686098);
   data_mc_ratio__478->SetBinError(9,0.02591381);
   data_mc_ratio__478->SetBinError(10,0.02339108);
   data_mc_ratio__478->SetBinError(11,0.02535854);
   data_mc_ratio__478->SetBinError(12,0.02396627);
   data_mc_ratio__478->SetBinError(13,0.02192806);
   data_mc_ratio__478->SetBinError(14,0.02367121);
   data_mc_ratio__478->SetBinError(15,0.02242173);
   data_mc_ratio__478->SetBinError(16,0.02162477);
   data_mc_ratio__478->SetBinError(17,0.01982331);
   data_mc_ratio__478->SetBinError(18,0.02004065);
   data_mc_ratio__478->SetBinError(19,0.01916466);
   data_mc_ratio__478->SetBinError(20,0.01837409);
   data_mc_ratio__478->SetBinError(21,0.01787516);
   data_mc_ratio__478->SetBinError(22,0.01769013);
   data_mc_ratio__478->SetBinError(23,0.01762518);
   data_mc_ratio__478->SetBinError(24,0.01727141);
   data_mc_ratio__478->SetBinError(25,0.01777946);
   data_mc_ratio__478->SetBinError(26,0.01733358);
   data_mc_ratio__478->SetBinError(27,0.01765523);
   data_mc_ratio__478->SetBinError(28,0.01942306);
   data_mc_ratio__478->SetBinError(29,0.01897194);
   data_mc_ratio__478->SetBinError(30,0.01896456);
   data_mc_ratio__478->SetMinimum(0.4);
   data_mc_ratio__478->SetMaximum(1.6);
   data_mc_ratio__478->SetEntries(6891.389);
   data_mc_ratio__478->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__478->SetLineColor(ci);
   data_mc_ratio__478->SetLineWidth(2);
   data_mc_ratio__478->SetMarkerStyle(20);
   data_mc_ratio__478->SetMarkerSize(1.2);
   data_mc_ratio__478->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__478->GetXaxis()->SetRange(1,31);
   data_mc_ratio__478->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__478->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__478->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__478->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__478->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__478->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.04113036,
   0.04260957,
   0.04202534,
   0.04299637,
   0.04166418,
   0.04350807,
   0.04112747,
   0.04271713,
   0.04113996,
   0.03824442,
   0.0399735,
   0.0371946,
   0.03629266,
   0.03630863,
   0.03474444,
   0.03362663,
   0.03236865,
   0.03198535,
   0.0306205,
   0.02934259,
   0.02912665,
   0.02868937,
   0.02897832,
   0.02810949,
   0.02835323,
   0.02911753,
   0.02791318,
   0.02979336,
   0.02945931,
   0.02986094};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.9477903);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(1.05221);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_18_amcnlo);
}
