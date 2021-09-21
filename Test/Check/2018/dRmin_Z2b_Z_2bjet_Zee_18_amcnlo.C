void dRmin_Z2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_18_amcnlo/dRmin_Z2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_18_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-11.20245,6.314516,11201.24);
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
   st->SetMaximum(9599.998);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",25,0,10);
   st_stack_243->SetMinimum(0.01);
   st_stack_243->SetMaximum(10080);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,15);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.4");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.7796553);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,5.768223);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,6.49008);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,11.71596);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,18.21841);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,18.70296);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,18.47919);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,10.21829);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,2.74574);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.4162738);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.5416006);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(13,0.121482);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.4532992);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,1.258018);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,1.324171);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.767702);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,2.21804);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,2.257501);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,2.216607);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.645108);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.8071008);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.3138374);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.3857592);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(13,0.08612349);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(388);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.7243584);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,4.985287);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,7.477931);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,15.68022);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,35.5745);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,43.32513);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,43.32513);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,26.37515);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,9.472046);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,4.486758);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,1.495586);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,2.492644);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.7243584);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(14,0.4985287);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.7243584);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.576486);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.930793);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,2.824999);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,4.269151);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,4.682519);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,4.682519);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,3.670958);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,2.173036);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.495586);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.8634771);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(12,1.114744);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.7243584);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(14,0.4985287);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(389);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,64.25105);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,184.4243);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,333.8051);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,539.8666);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,741.8422);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,724.4184);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,523.7796);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,237.3912);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,36.15138);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,10.15236);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,4.566726);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,2.36592);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,1.200715);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(16,0.07314745);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(18,0.08255682);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.299531);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,3.895718);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,5.244576);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,6.668057);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,7.816535);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,7.723171);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,6.56824);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,4.419134);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.720397);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,0.9121141);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.6106429);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.4396112);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.3104418);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(16,0.07314745);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(18,0.08255682);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(41359);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_4 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_4","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.7743917);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,2.301476);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,3.892302);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,6.734902);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,11.45788);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,16.30223);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,16.53414);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,10.10303);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,0.8815317);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.1817312);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.06170722);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.02102114);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.01288393);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.004746709);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.001356203);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(16,0.001356203);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(18,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(19,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(20,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.02291541);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.03950486);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.05137485);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.06757919);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.08814535);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.1051407);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.1058859);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.08277004);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.02444929);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.011101);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.006468674);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.003775508);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.002955775);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.001794087);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.0009589801);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(16,0.0009589801);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(18,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(19,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(20,0.0006781013);
   Zee_2bjet_dRmin_Z2b_stack_4->SetEntries(102151);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_5 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_5","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,289.7401);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,896.6345);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,1544.953);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,2335.081);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,3466.839);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,4447.731);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,4677.881);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,3803.165);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,978.6488);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,364.3889);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,144.4681);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,118.0297);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,69.96723);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,43.57127);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,14.8207);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,4.940235);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,8.756766);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(18,1.123703);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(19,1.123703);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(1,18.07616);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(2,31.95818);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(3,41.74689);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(4,51.40025);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(5,62.76116);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(6,71.45876);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(7,73.30078);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(8,66.723);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(9,35.07365);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(10,21.98813);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(11,13.91722);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(12,15.02575);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(13,12.6874);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(14,10.99555);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(15,6.890998);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(16,3.97852);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(17,5.513123);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(18,1.123703);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(19,1.123703);
   Zee_2bjet_dRmin_Z2b_stack_5->SetEntries(20359);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b__485 = new TH1D("Zee_2bjet_dRmin_Z2b__485","",25,0,10);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(1,147);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(2,442);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(3,745);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(4,1217);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(5,1742);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(6,2051);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(7,1996);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(8,1474);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(9,411);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(10,179);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(11,85);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(12,67);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(13,41);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(14,20);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(15,9);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(16,9);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(17,5);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(18,4);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(19,2);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(20,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(21,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(1,12.12436);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(2,21.0238);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(3,27.29469);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(4,34.88553);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(5,41.73727);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(6,45.28797);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(7,44.67662);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(8,38.39271);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(9,20.27313);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(10,13.37909);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(11,9.219544);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(12,8.185353);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(13,6.403124);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(14,4.472136);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(15,3);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(16,3);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(17,2.236068);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(18,2);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(19,1.414214);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(20,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(21,1);
   Zee_2bjet_dRmin_Z2b__485->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__485->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__485->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__485->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__485->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fx1485[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fy1485[25] = {
   356.2695,
   1094.114,
   1896.618,
   2909.078,
   4273.932,
   5250.48,
   5279.999,
   4087.252,
   1027.9,
   379.626,
   151.1337,
   122.9092,
   72.02667,
   44.07454,
   14.82206,
   5.014738,
   8.756766,
   1.206938,
   1.124381,
   0.0006781013,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fex1485[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fey1485[25] = {
   18.24187,
   32.25788,
   42.14015,
   51.93802,
   63.42881,
   72.06272,
   73.77666,
   66.99012,
   35.19225,
   22.06004,
   13.96268,
   15.07346,
   12.71214,
   11.00684,
   6.890999,
   3.979192,
   5.513123,
   1.126732,
   1.123703,
   0.0006781013,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dRmin_Z2b_fx1485,Graph_from_Zee_2bjet_dRmin_Z2b_fy1485,Graph_from_Zee_2bjet_dRmin_Z2b_fex1485,Graph_from_Zee_2bjet_dRmin_Z2b_fey1485);
   gre->SetName("Graph_from_Zee_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485 = new TH1F("Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->SetMaximum(5889.153);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dRmin_Z2b1485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__486 = new TH1D("data_mc_ratio__486","",25,0,10);
   data_mc_ratio__486->SetBinContent(1,0.412609);
   data_mc_ratio__486->SetBinContent(2,0.4039799);
   data_mc_ratio__486->SetBinContent(3,0.3928044);
   data_mc_ratio__486->SetBinContent(4,0.4183455);
   data_mc_ratio__486->SetBinContent(5,0.4075872);
   data_mc_ratio__486->SetBinContent(6,0.390631);
   data_mc_ratio__486->SetBinContent(7,0.3780304);
   data_mc_ratio__486->SetBinContent(8,0.3606335);
   data_mc_ratio__486->SetBinContent(9,0.3998445);
   data_mc_ratio__486->SetBinContent(10,0.4715167);
   data_mc_ratio__486->SetBinContent(11,0.562416);
   data_mc_ratio__486->SetBinContent(12,0.5451176);
   data_mc_ratio__486->SetBinContent(13,0.5692336);
   data_mc_ratio__486->SetBinContent(14,0.4537767);
   data_mc_ratio__486->SetBinContent(15,0.6072031);
   data_mc_ratio__486->SetBinContent(16,1.79471);
   data_mc_ratio__486->SetBinContent(17,0.5709871);
   data_mc_ratio__486->SetBinContent(18,3.314171);
   data_mc_ratio__486->SetBinContent(19,1.778756);
   data_mc_ratio__486->SetBinContent(20,1474.706);
   data_mc_ratio__486->SetBinError(1,0.03403142);
   data_mc_ratio__486->SetBinError(2,0.01921537);
   data_mc_ratio__486->SetBinError(3,0.01439124);
   data_mc_ratio__486->SetBinError(4,0.01199195);
   data_mc_ratio__486->SetBinError(5,0.009765544);
   data_mc_ratio__486->SetBinError(6,0.008625491);
   data_mc_ratio__486->SetBinError(7,0.008461482);
   data_mc_ratio__486->SetBinError(8,0.009393281);
   data_mc_ratio__486->SetBinError(9,0.01972288);
   data_mc_ratio__486->SetBinError(10,0.03524281);
   data_mc_ratio__486->SetBinError(11,0.06100258);
   data_mc_ratio__486->SetBinError(12,0.06659672);
   data_mc_ratio__486->SetBinError(13,0.08889935);
   data_mc_ratio__486->SetBinError(14,0.1014676);
   data_mc_ratio__486->SetBinError(15,0.202401);
   data_mc_ratio__486->SetBinError(16,0.5982366);
   data_mc_ratio__486->SetBinError(17,0.2553532);
   data_mc_ratio__486->SetBinError(18,1.657086);
   data_mc_ratio__486->SetBinError(19,1.25777);
   data_mc_ratio__486->SetBinError(20,1474.706);
   data_mc_ratio__486->SetMinimum(0.4);
   data_mc_ratio__486->SetMaximum(1.6);
   data_mc_ratio__486->SetEntries(0.5096952);
   data_mc_ratio__486->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__486->SetLineColor(ci);
   data_mc_ratio__486->SetLineWidth(2);
   data_mc_ratio__486->SetMarkerStyle(20);
   data_mc_ratio__486->SetMarkerSize(1.2);
   data_mc_ratio__486->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__486->GetXaxis()->SetRange(1,15);
   data_mc_ratio__486->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__486->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__486->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__486->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__486->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__486->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1486[25] = {
   0.05120245,
   0.02948312,
   0.02221857,
   0.01785377,
   0.01484086,
   0.01372498,
   0.01397286,
   0.01639001,
   0.03423706,
   0.05810992,
   0.09238628,
   0.1226389,
   0.1764921,
   0.2497324,
   0.464915,
   0.7934995,
   0.6295844,
   0.9335458,
   0.9993971,
   1,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,11);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_18_amcnlo);
}
