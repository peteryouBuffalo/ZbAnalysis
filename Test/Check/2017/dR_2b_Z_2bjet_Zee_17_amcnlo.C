void dR_2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_17_amcnlo/dR_2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:24 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_17_amcnlo", "dR_2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-7.650751,6.314516,7653.099);
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
   st->SetMaximum(6559.071);
   
   TH1F *st_stack_222 = new TH1F("st_stack_222","",25,0,10);
   st_stack_222->SetMinimum(0.01);
   st_stack_222->SetMaximum(6887.024);
   st_stack_222->SetDirectory(0);
   st_stack_222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_222->SetLineColor(ci);
   st_stack_222->GetXaxis()->SetRange(1,15);
   st_stack_222->GetXaxis()->SetLabelFont(42);
   st_stack_222->GetXaxis()->SetLabelSize(0.035);
   st_stack_222->GetXaxis()->SetTitleSize(0.035);
   st_stack_222->GetXaxis()->SetTitleFont(42);
   st_stack_222->GetYaxis()->SetTitle("Events/0.4");
   st_stack_222->GetYaxis()->SetLabelFont(42);
   st_stack_222->GetYaxis()->SetLabelSize(0.05);
   st_stack_222->GetYaxis()->SetTitleSize(0.057);
   st_stack_222->GetYaxis()->SetTitleOffset(1.2);
   st_stack_222->GetYaxis()->SetTitleFont(42);
   st_stack_222->GetZaxis()->SetLabelFont(42);
   st_stack_222->GetZaxis()->SetLabelSize(0.035);
   st_stack_222->GetZaxis()->SetTitleSize(0.035);
   st_stack_222->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_222);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,3.443899);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,3.298035);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,4.243147);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,6.913489);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,10.34471);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,10.5572);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,8.373396);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,6.288362);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,3.370821);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(11,0.409043);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(12,0.199812);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(13,0.4043335);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,0.8353228);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.810408);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,0.9259933);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,1.176021);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,1.661942);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,1.456267);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,1.298943);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,1.129493);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,0.8144322);
   Zee_2bjet_dR_2b_stack_1->SetBinError(11,0.2892371);
   Zee_2bjet_dR_2b_stack_1->SetBinError(12,0.199812);
   Zee_2bjet_dR_2b_stack_1->SetBinError(13,0.2859263);
   Zee_2bjet_dR_2b_stack_1->SetEntries(289);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_2 = new TH1D("Zee_2bjet_dR_2b_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,6.840739);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,21.42396);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,21.42396);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,24.84891);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,21.86085);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,21.72078);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,24.4924);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,5.389188);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(11,0.7038619);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(12,0.3519309);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,1.535385);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,2.727569);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,2.727569);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,3.017312);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,2.779003);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,2.760287);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,2.914529);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,1.321528);
   Zee_2bjet_dR_2b_stack_2->SetBinError(11,0.4977055);
   Zee_2bjet_dR_2b_stack_2->SetBinError(12,0.3519309);
   Zee_2bjet_dR_2b_stack_2->SetEntries(429);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_3 = new TH1D("Zee_2bjet_dR_2b_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,104.4853);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,163.2333);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,228.7434);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,280.2204);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,354.3105);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,415.25);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,485.5234);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,193.9861);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,59.72452);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,10.41369);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,5.001687);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,1.719185);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,6.478039);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,8.093217);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,9.592558);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,10.59519);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,11.94071);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,12.93744);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,13.97701);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,8.831133);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,4.887129);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,2.054522);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,1.4235);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.8243177);
   Zee_2bjet_dR_2b_stack_3->SetEntries(6204);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_4 = new TH1D("Zee_2bjet_dR_2b_stack_4","",25,0,10);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(1,0.000344831);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(2,2.204504);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(3,6.126267);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(4,9.141125);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(5,9.236298);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(6,7.407314);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(7,5.828333);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(8,5.730746);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(9,1.124839);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(10,0.1310358);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(11,0.03655208);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(12,0.01413807);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(13,0.003793141);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(14,0.000344831);
   Zee_2bjet_dR_2b_stack_4->SetBinError(1,0.000344831);
   Zee_2bjet_dR_2b_stack_4->SetBinError(2,0.02757139);
   Zee_2bjet_dR_2b_stack_4->SetBinError(3,0.04596223);
   Zee_2bjet_dR_2b_stack_4->SetBinError(4,0.05614395);
   Zee_2bjet_dR_2b_stack_4->SetBinError(5,0.05643547);
   Zee_2bjet_dR_2b_stack_4->SetBinError(6,0.0505398);
   Zee_2bjet_dR_2b_stack_4->SetBinError(7,0.04483068);
   Zee_2bjet_dR_2b_stack_4->SetBinError(8,0.04445378);
   Zee_2bjet_dR_2b_stack_4->SetBinError(9,0.01969465);
   Zee_2bjet_dR_2b_stack_4->SetBinError(10,0.006721993);
   Zee_2bjet_dR_2b_stack_4->SetBinError(11,0.003550252);
   Zee_2bjet_dR_2b_stack_4->SetBinError(12,0.002207996);
   Zee_2bjet_dR_2b_stack_4->SetBinError(13,0.001143675);
   Zee_2bjet_dR_2b_stack_4->SetBinError(14,0.000344831);
   Zee_2bjet_dR_2b_stack_4->SetEntries(136257);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_4,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_5 = new TH1D("Zee_2bjet_dR_2b_stack_5","",25,0,10);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(2,738.4181);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(3,894.9503);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(4,1298.431);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(5,1606.054);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(6,1945.191);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(7,2426.519);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(8,3083.369);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(9,1819.188);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(10,1045.264);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(11,508.2888);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(12,192.2628);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(13,69.84279);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(14,9.847849);
   Zee_2bjet_dR_2b_stack_5->SetBinError(2,26.17768);
   Zee_2bjet_dR_2b_stack_5->SetBinError(3,28.4752);
   Zee_2bjet_dR_2b_stack_5->SetBinError(4,34.07551);
   Zee_2bjet_dR_2b_stack_5->SetBinError(5,38.25833);
   Zee_2bjet_dR_2b_stack_5->SetBinError(6,42.10114);
   Zee_2bjet_dR_2b_stack_5->SetBinError(7,47.22097);
   Zee_2bjet_dR_2b_stack_5->SetBinError(8,54.04955);
   Zee_2bjet_dR_2b_stack_5->SetBinError(9,41.40095);
   Zee_2bjet_dR_2b_stack_5->SetBinError(10,31.18953);
   Zee_2bjet_dR_2b_stack_5->SetBinError(11,21.69949);
   Zee_2bjet_dR_2b_stack_5->SetBinError(12,13.31433);
   Zee_2bjet_dR_2b_stack_5->SetBinError(13,8.238582);
   Zee_2bjet_dR_2b_stack_5->SetBinError(14,2.969238);
   Zee_2bjet_dR_2b_stack_5->SetEntries(17303);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b__443 = new TH1D("Zee_2bjet_dR_2b__443","",25,0,10);
   Zee_2bjet_dR_2b__443->SetBinContent(2,415);
   Zee_2bjet_dR_2b__443->SetBinContent(3,485);
   Zee_2bjet_dR_2b__443->SetBinContent(4,549);
   Zee_2bjet_dR_2b__443->SetBinContent(5,680);
   Zee_2bjet_dR_2b__443->SetBinContent(6,815);
   Zee_2bjet_dR_2b__443->SetBinContent(7,921);
   Zee_2bjet_dR_2b__443->SetBinContent(8,1132);
   Zee_2bjet_dR_2b__443->SetBinContent(9,627);
   Zee_2bjet_dR_2b__443->SetBinContent(10,298);
   Zee_2bjet_dR_2b__443->SetBinContent(11,112);
   Zee_2bjet_dR_2b__443->SetBinContent(12,60);
   Zee_2bjet_dR_2b__443->SetBinContent(13,16);
   Zee_2bjet_dR_2b__443->SetBinContent(14,1);
   Zee_2bjet_dR_2b__443->SetBinError(2,20.37155);
   Zee_2bjet_dR_2b__443->SetBinError(3,22.02272);
   Zee_2bjet_dR_2b__443->SetBinError(4,23.43075);
   Zee_2bjet_dR_2b__443->SetBinError(5,26.07681);
   Zee_2bjet_dR_2b__443->SetBinError(6,28.5482);
   Zee_2bjet_dR_2b__443->SetBinError(7,30.34798);
   Zee_2bjet_dR_2b__443->SetBinError(8,33.64521);
   Zee_2bjet_dR_2b__443->SetBinError(9,25.03997);
   Zee_2bjet_dR_2b__443->SetBinError(10,17.26268);
   Zee_2bjet_dR_2b__443->SetBinError(11,10.58301);
   Zee_2bjet_dR_2b__443->SetBinError(12,7.745967);
   Zee_2bjet_dR_2b__443->SetBinError(13,4);
   Zee_2bjet_dR_2b__443->SetBinError(14,1);
   Zee_2bjet_dR_2b__443->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__443->SetLineColor(ci);
   Zee_2bjet_dR_2b__443->SetLineWidth(2);
   Zee_2bjet_dR_2b__443->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__443->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dR_2b_fx1443[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zee_2bjet_dR_2b_fy1443[25] = {
   0.000344831,
   855.3925,
   1089.032,
   1561.982,
   1927.273,
   2339.114,
   2879.875,
   3607.489,
   2025.977,
   1108.49,
   519.8519,
   197.8304,
   71.9701,
   9.848194,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dR_2b_fex1443[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zee_2bjet_dR_2b_fey1443[25] = {
   0.000344831,
   27.02391,
   29.73946,
   35.517,
   39.83025,
   43.88136,
   49.06057,
   55.91864,
   42.36803,
   31.5806,
   21.80414,
   13.39633,
   8.284654,
   2.969238,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dR_2b_fx1443,Graph_from_Zee_2bjet_dR_2b_fy1443,Graph_from_Zee_2bjet_dR_2b_fex1443,Graph_from_Zee_2bjet_dR_2b_fey1443);
   gre->SetName("Graph_from_Zee_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dR_2b1443 = new TH1F("Graph_Graph_from_Zee_2bjet_dR_2b1443","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->SetMaximum(4029.748);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dR_2b1443->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1443->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dR_2b1443);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__444 = new TH1D("data_mc_ratio__444","",25,0,10);
   data_mc_ratio__444->SetBinContent(2,0.4851574);
   data_mc_ratio__444->SetBinContent(3,0.4453497);
   data_mc_ratio__444->SetBinContent(4,0.3514764);
   data_mc_ratio__444->SetBinContent(5,0.3528301);
   data_mc_ratio__444->SetBinContent(6,0.3484225);
   data_mc_ratio__444->SetBinContent(7,0.3198055);
   data_mc_ratio__444->SetBinContent(8,0.3137917);
   data_mc_ratio__444->SetBinContent(9,0.3094803);
   data_mc_ratio__444->SetBinContent(10,0.2688341);
   data_mc_ratio__444->SetBinContent(11,0.215446);
   data_mc_ratio__444->SetBinContent(12,0.3032901);
   data_mc_ratio__444->SetBinContent(13,0.2223145);
   data_mc_ratio__444->SetBinContent(14,0.1015415);
   data_mc_ratio__444->SetBinError(2,0.02381544);
   data_mc_ratio__444->SetBinError(3,0.02022229);
   data_mc_ratio__444->SetBinError(4,0.01500065);
   data_mc_ratio__444->SetBinError(5,0.01353042);
   data_mc_ratio__444->SetBinError(6,0.01220471);
   data_mc_ratio__444->SetBinError(7,0.01053795);
   data_mc_ratio__444->SetBinError(8,0.009326489);
   data_mc_ratio__444->SetBinError(9,0.01235945);
   data_mc_ratio__444->SetBinError(10,0.01557314);
   data_mc_ratio__444->SetBinError(11,0.02035773);
   data_mc_ratio__444->SetBinError(12,0.03915459);
   data_mc_ratio__444->SetBinError(13,0.05557863);
   data_mc_ratio__444->SetBinError(14,0.1015415);
   data_mc_ratio__444->SetMinimum(0.4);
   data_mc_ratio__444->SetMaximum(1.6);
   data_mc_ratio__444->SetEntries(804.4773);
   data_mc_ratio__444->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__444->SetLineColor(ci);
   data_mc_ratio__444->SetLineWidth(2);
   data_mc_ratio__444->SetMarkerStyle(20);
   data_mc_ratio__444->SetMarkerSize(1.2);
   data_mc_ratio__444->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__444->GetXaxis()->SetRange(1,15);
   data_mc_ratio__444->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__444->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__444->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__444->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__444->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__444->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__444->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__444->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__444->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__444->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__444->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__444->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__444->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__444->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1444[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1444[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1444[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1444[25] = {
   1,
   0.03159241,
   0.02730817,
   0.02273841,
   0.02066663,
   0.01875982,
   0.01703566,
   0.01550071,
   0.0209124,
   0.02848974,
   0.04194298,
   0.06771623,
   0.1151124,
   0.3015008,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1444,Graph_from_mc_statistical_error_fy1444,Graph_from_mc_statistical_error_fex1444,Graph_from_mc_statistical_error_fey1444);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1444 = new TH1F("Graph_Graph_from_mc_statistical_error1444","",100,0,11);
   Graph_Graph_from_mc_statistical_error1444->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1444->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1444->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1444->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1444->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1444);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_17_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_17_amcnlo);
}
