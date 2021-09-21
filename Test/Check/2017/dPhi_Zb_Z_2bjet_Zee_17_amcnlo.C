void dPhi_Zb_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_17_amcnlo/dPhi_Zb_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_17_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_17_amcnlo", "dPhi_Zb_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-3.816599,3.416482,3822.782);
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
   st->SetMaximum(3276.307);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,3.141593);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(3440.122);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,31);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.105");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.409043);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.199812);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.6041455);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.409043);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.6041455);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.4043335);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,1.013188);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,1.21771);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.6041455);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.4043335);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(11,2.225362);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.8767435);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.8767435);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,1.017898);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,2.21677);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,0.399624);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.617334);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(18,2.094454);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,1.417522);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,2.026377);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.812436);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.826565);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,4.306514);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,3.225249);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,4.052754);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,3.307454);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,4.978736);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,3.90218);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,5.270464);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,4.525164);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.2892371);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.199812);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.3488248);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.2892371);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.3488248);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.2859263);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.453141);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.4971578);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.3488248);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.2859263);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(11,1.068443);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.4100514);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.4100514);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.4552373);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.6684235);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.2825768);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.5718527);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.6444439);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.5358084);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.6408382);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.6041822);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.6088914);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.9274663);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.8063638);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.9062821);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.8127543);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.9932305);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.8822924);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.033689);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.9527515);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(289);

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
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.055793);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(4,1.308784);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(5,1.407724);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(6,1.407724);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.3519309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,1.759655);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(9,1.561775);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,1.660715);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,0.3519309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,2.111586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,3.42037);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.012646);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,2.111586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,2.815447);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,1.759655);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,2.815447);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,3.167378);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,6.235817);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,4.575102);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,5.46286);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,10.81092);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,11.61372);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,13.51344);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,13.27444);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,15.03409);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,12.87868);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,11.59974);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,12.97762);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.6095623);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.6599778);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.7038619);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.7038619);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.3519309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.7869415);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.7068064);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.7479479);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.3519309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.8620512);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,1.085681);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.8266084);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.8620512);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,0.995411);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.7869415);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.995411);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.055793);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.472938);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.268905);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.441199);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.944136);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,2.021689);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,2.193212);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.15561);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,2.294762);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,2.099345);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,2.046155);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,2.113552);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(429);

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
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,32.96024);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,30.90868);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,29.26743);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,34.75736);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,29.96884);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,32.27485);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,28.68061);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,30.90868);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,33.25134);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,28.32759);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,31.06455);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,40.05015);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,46.47992);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,46.47992);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,67.79554);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,63.67177);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,72.18977);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,76.07973);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,91.96271);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,96.279);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,107.0457);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,125.2553);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,132.1321);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,136.5263);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,137.622);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,139.1807);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,143.8546);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,143.5795);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,150.8093);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,143.2472);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,3.652763);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,3.535661);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,3.439109);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,3.745431);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,3.447047);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,3.588889);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,3.392489);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,3.535661);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,3.637167);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,3.347941);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,3.537378);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,3.992607);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,4.331334);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,4.331334);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,5.232304);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,5.05524);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,5.38023);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,5.545287);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,6.085562);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,6.212718);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,6.56652);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,7.10908);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,7.297741);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,7.404518);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,7.447);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,7.455151);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,7.615066);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,7.595724);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,7.791874);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,7.585034);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(6204);

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
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.1910364);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.2127607);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.1989675);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.202071);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.1993123);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.2017261);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.2193125);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.2362092);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.24483);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.273451);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.2868994);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.3117272);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.3517276);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.4024178);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.463108);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(16,0.5400053);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(17,0.6420753);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(18,0.7841457);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(19,0.961044);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(20,1.177598);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(21,1.527256);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(22,1.912433);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(23,2.490369);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(24,3.185549);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(25,3.970384);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(26,4.659701);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(27,5.399364);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(28,5.593848);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(29,5.357639);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(30,4.788668);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.008116357);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.008565424);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.008283125);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.008347474);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.008290299);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.008340349);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.008696307);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.009025091);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.009188306);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.009710529);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.009946446);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.01036789);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.01101302);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.0117799);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.01263701);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.0136459);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.01487977);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.01644377);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.01820433);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.02015123);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.02294875);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.02568007);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.02930455);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.03314326);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.03700151);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.04008503);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.04314937);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.04391961);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.04298232);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.04063596);
   Zee_2bjet_dPhi_Zb_stack_4->SetEntries(136257);

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
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(1,117.6752);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(2,118.353);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(3,131.8331);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(4,107.4437);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(5,136.207);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(6,127.5613);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(7,126.2953);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(8,147.4744);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(9,158.3966);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(10,129.9658);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(11,168.8838);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(12,165.8274);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(13,196.944);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(14,223.9936);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(15,240.3383);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(16,266.1728);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(17,348.1277);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(18,337.8321);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(19,415.0158);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(20,479.04);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(21,609.7092);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(22,732.6279);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(23,795.3983);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(24,956.0203);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(25,1089.682);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(26,1213.048);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(27,1397.817);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(28,1449.408);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(29,1628.932);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(30,1621.603);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(1,11.03187);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(2,10.80666);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(3,11.35327);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(4,10.07655);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(5,11.52056);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(6,11.65855);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(7,10.88386);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(8,12.62039);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(9,12.1279);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(10,11.27644);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(11,13.35569);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(12,12.62173);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(13,13.4774);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(14,14.53821);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(15,15.39039);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(16,16.12084);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(17,17.65087);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(18,17.85309);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(19,20.09991);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(20,20.96671);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(21,23.70418);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(22,26.23306);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(23,26.87631);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(24,29.7063);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(25,31.56334);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(26,33.2646);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(27,35.58279);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(28,36.06358);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(29,38.28173);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(30,38.41317);
   Zee_2bjet_dPhi_Zb_stack_5->SetEntries(17303);

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
   
   TH1D *Zee_2bjet_dPhi_Zb__467 = new TH1D("Zee_2bjet_dPhi_Zb__467","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(1,70);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(2,69);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(3,58);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(4,67);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(5,57);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(6,62);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(7,62);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(8,58);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(9,73);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(10,82);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(11,62);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(12,61);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(13,98);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(14,94);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(15,118);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(16,125);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(17,163);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(18,149);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(19,185);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(20,223);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(21,247);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(22,274);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(23,318);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(24,330);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(25,368);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(26,429);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(27,478);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(28,556);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(29,579);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(30,596);
   Zee_2bjet_dPhi_Zb__467->SetBinError(1,8.3666);
   Zee_2bjet_dPhi_Zb__467->SetBinError(2,8.306624);
   Zee_2bjet_dPhi_Zb__467->SetBinError(3,7.615773);
   Zee_2bjet_dPhi_Zb__467->SetBinError(4,8.185353);
   Zee_2bjet_dPhi_Zb__467->SetBinError(5,7.549834);
   Zee_2bjet_dPhi_Zb__467->SetBinError(6,7.874008);
   Zee_2bjet_dPhi_Zb__467->SetBinError(7,7.874008);
   Zee_2bjet_dPhi_Zb__467->SetBinError(8,7.615773);
   Zee_2bjet_dPhi_Zb__467->SetBinError(9,8.544004);
   Zee_2bjet_dPhi_Zb__467->SetBinError(10,9.055385);
   Zee_2bjet_dPhi_Zb__467->SetBinError(11,7.874008);
   Zee_2bjet_dPhi_Zb__467->SetBinError(12,7.81025);
   Zee_2bjet_dPhi_Zb__467->SetBinError(13,9.899495);
   Zee_2bjet_dPhi_Zb__467->SetBinError(14,9.69536);
   Zee_2bjet_dPhi_Zb__467->SetBinError(15,10.86278);
   Zee_2bjet_dPhi_Zb__467->SetBinError(16,11.18034);
   Zee_2bjet_dPhi_Zb__467->SetBinError(17,12.76715);
   Zee_2bjet_dPhi_Zb__467->SetBinError(18,12.20656);
   Zee_2bjet_dPhi_Zb__467->SetBinError(19,13.60147);
   Zee_2bjet_dPhi_Zb__467->SetBinError(20,14.93318);
   Zee_2bjet_dPhi_Zb__467->SetBinError(21,15.71623);
   Zee_2bjet_dPhi_Zb__467->SetBinError(22,16.55295);
   Zee_2bjet_dPhi_Zb__467->SetBinError(23,17.83255);
   Zee_2bjet_dPhi_Zb__467->SetBinError(24,18.1659);
   Zee_2bjet_dPhi_Zb__467->SetBinError(25,19.18333);
   Zee_2bjet_dPhi_Zb__467->SetBinError(26,20.71232);
   Zee_2bjet_dPhi_Zb__467->SetBinError(27,21.86321);
   Zee_2bjet_dPhi_Zb__467->SetBinError(28,23.57965);
   Zee_2bjet_dPhi_Zb__467->SetBinError(29,24.06242);
   Zee_2bjet_dPhi_Zb__467->SetBinError(30,24.41311);
   Zee_2bjet_dPhi_Zb__467->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__467->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__467->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__467->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__467->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fx1467[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fy1467[30] = {
   151.2355,
   149.6743,
   162.9595,
   144.1209,
   168.387,
   161.8499,
   156.5604,
   181.5967,
   194.0587,
   160.6319,
   202.8125,
   209.1776,
   248.0727,
   273.9065,
   312.9253,
   333.5996,
   424.3365,
   419.6059,
   512.5244,
   584.7588,
   724.6697,
   867.0851,
   945.1381,
   1110.571,
   1248.841,
   1373.471,
   1567.084,
   1615.362,
   1801.969,
   1787.142};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fex1467[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fey1467[30] = {
   11.62448,
   11.37211,
   11.88349,
   10.77424,
   12.05083,
   12.22208,
   11.41476,
   13.13932,
   12.68607,
   11.79017,
   13.86193,
   13.27254,
   14.2038,
   15.19904,
   16.29206,
   16.92654,
   18.47827,
   18.73204,
   21.03432,
   21.92673,
   24.63703,
   27.22427,
   27.93266,
   30.6925,
   32.51669,
   34.16756,
   36.47435,
   36.92512,
   39.13389,
   39.22348};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb_fx1467,Graph_from_Zee_2bjet_dPhi_Zb_fy1467,Graph_from_Zee_2bjet_dPhi_Zb_fex1467,Graph_from_Zee_2bjet_dPhi_Zb_fey1467);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb1467 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb1467","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->SetMinimum(120.012);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->SetMaximum(2011.878);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb1467);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__468 = new TH1D("data_mc_ratio__468","",30,0,3.141593);
   data_mc_ratio__468->SetBinContent(1,0.4628542);
   data_mc_ratio__468->SetBinContent(2,0.4610011);
   data_mc_ratio__468->SetBinContent(3,0.3559168);
   data_mc_ratio__468->SetBinContent(4,0.4648874);
   data_mc_ratio__468->SetBinContent(5,0.3385059);
   data_mc_ratio__468->SetBinContent(6,0.383071);
   data_mc_ratio__468->SetBinContent(7,0.3960134);
   data_mc_ratio__468->SetBinContent(8,0.3193891);
   data_mc_ratio__468->SetBinContent(9,0.3761748);
   data_mc_ratio__468->SetBinContent(10,0.510484);
   data_mc_ratio__468->SetBinContent(11,0.305701);
   data_mc_ratio__468->SetBinContent(12,0.2916183);
   data_mc_ratio__468->SetBinContent(13,0.3950454);
   data_mc_ratio__468->SetBinContent(14,0.3431828);
   data_mc_ratio__468->SetBinContent(15,0.3770868);
   data_mc_ratio__468->SetBinContent(16,0.3747007);
   data_mc_ratio__468->SetBinContent(17,0.3841291);
   data_mc_ratio__468->SetBinContent(18,0.3550951);
   data_mc_ratio__468->SetBinContent(19,0.3609584);
   data_mc_ratio__468->SetBinContent(20,0.3813538);
   data_mc_ratio__468->SetBinContent(21,0.340845);
   data_mc_ratio__468->SetBinContent(22,0.3160013);
   data_mc_ratio__468->SetBinContent(23,0.3364587);
   data_mc_ratio__468->SetBinContent(24,0.2971444);
   data_mc_ratio__468->SetBinContent(25,0.2946733);
   data_mc_ratio__468->SetBinContent(26,0.3123474);
   data_mc_ratio__468->SetBinContent(27,0.3050252);
   data_mc_ratio__468->SetBinContent(28,0.3441952);
   data_mc_ratio__468->SetBinContent(29,0.3213152);
   data_mc_ratio__468->SetBinContent(30,0.3334934);
   data_mc_ratio__468->SetBinError(1,0.05532166);
   data_mc_ratio__468->SetBinError(2,0.05549801);
   data_mc_ratio__468->SetBinError(3,0.04673416);
   data_mc_ratio__468->SetBinError(4,0.05679503);
   data_mc_ratio__468->SetBinError(5,0.04483621);
   data_mc_ratio__468->SetBinError(6,0.04865007);
   data_mc_ratio__468->SetBinError(7,0.05029375);
   data_mc_ratio__468->SetBinError(8,0.04193785);
   data_mc_ratio__468->SetBinError(9,0.04402793);
   data_mc_ratio__468->SetBinError(10,0.05637353);
   data_mc_ratio__468->SetBinError(11,0.03882407);
   data_mc_ratio__468->SetBinError(12,0.0373379);
   data_mc_ratio__468->SetBinError(13,0.03990562);
   data_mc_ratio__468->SetBinError(14,0.03539661);
   data_mc_ratio__468->SetBinError(15,0.03471366);
   data_mc_ratio__468->SetBinError(16,0.03351425);
   data_mc_ratio__468->SetBinError(17,0.03008731);
   data_mc_ratio__468->SetBinError(18,0.02909053);
   data_mc_ratio__468->SetBinError(19,0.02653819);
   data_mc_ratio__468->SetBinError(20,0.02553734);
   data_mc_ratio__468->SetBinError(21,0.02168745);
   data_mc_ratio__468->SetBinError(22,0.01909034);
   data_mc_ratio__468->SetBinError(23,0.01886767);
   data_mc_ratio__468->SetBinError(24,0.01635726);
   data_mc_ratio__468->SetBinError(25,0.01536091);
   data_mc_ratio__468->SetBinError(26,0.01508027);
   data_mc_ratio__468->SetBinError(27,0.01395153);
   data_mc_ratio__468->SetBinError(28,0.01459713);
   data_mc_ratio__468->SetBinError(29,0.01335341);
   data_mc_ratio__468->SetBinError(30,0.01366042);
   data_mc_ratio__468->SetMinimum(0.4);
   data_mc_ratio__468->SetMaximum(1.6);
   data_mc_ratio__468->SetEntries(2238.87);
   data_mc_ratio__468->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__468->SetLineColor(ci);
   data_mc_ratio__468->SetLineWidth(2);
   data_mc_ratio__468->SetMarkerStyle(20);
   data_mc_ratio__468->SetMarkerSize(1.2);
   data_mc_ratio__468->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__468->GetXaxis()->SetRange(1,31);
   data_mc_ratio__468->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__468->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__468->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__468->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__468->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__468->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.07686342,
   0.07597904,
   0.07292301,
   0.07475835,
   0.0715663,
   0.0755149,
   0.07290962,
   0.07235441,
   0.06537233,
   0.07339869,
   0.06834846,
   0.06345107,
   0.05725659,
   0.05548988,
   0.05206374,
   0.05073909,
   0.04354626,
   0.04464199,
   0.04104061,
   0.03749706,
   0.0339976,
   0.03139746,
   0.02955405,
   0.02763668,
   0.02603751,
   0.0248768,
   0.02327531,
   0.02285872,
   0.0217173,
   0.0219476};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.9077639);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.092236);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_17_amcnlo);
}
