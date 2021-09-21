void dPhi_Zb_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_18_amcnlo/dPhi_Zb_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_18_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_18_amcnlo", "dPhi_Zb_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-5.582776,3.416482,5587.193);
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
   st->SetMaximum(4788.491);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,3.141593);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(5027.916);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,31);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.105");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.5412275);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.6070918);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(3,1.148692);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.5416006);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.6070918);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.8447734);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.8846904);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,1.452238);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,1.01771);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.9106376);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(11,1.148319);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,1.083201);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,1.918847);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,2.297385);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,1.557273);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,2.829485);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.681166);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(18,4.862868);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,2.460821);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,2.936931);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,3.476494);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,5.374052);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,5.659343);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,4.806504);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,6.027194);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,7.541678);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,7.151498);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,6.200944);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,8.539537);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,8.088561);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.3429001);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.4292787);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.5771398);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.3857592);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.4292787);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.4579526);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.4593756);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.652097);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.5120061);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.5257569);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.5494185);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.5455459);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.6892371);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.8161989);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.6563354);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.8668725);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.6705277);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(18,1.138237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.8093748);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.8766001);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.9680153);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,1.227441);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,1.238614);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,1.136841);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,1.23026);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.401796);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,1.400251);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,1.297296);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.50605);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.450253);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(388);

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
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(1,2.219945);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(2,0.9970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.994115);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(4,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(6,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,1.994115);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.9970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.9970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,2.991172);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,4.214059);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,1.495586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,1.495586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,4.985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,2.492644);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,4.486758);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,4.486758);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,7.431061);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,2.492644);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,4.985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,7.92959);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,9.970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,15.40752);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,13.9588);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,14.95586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,22.43379);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,17.67433);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,20.16698);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,21.38987);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(1,1.12707);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.7050261);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.9970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.9970574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.7050261);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.4985287);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.7050261);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,1.221141);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,1.504796);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.8634771);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.8634771);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,1.576486);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.114744);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,1.495586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,1.495586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,2.007924);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.114744);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.576486);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,2.068887);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,2.229488);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,2.829886);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,2.637966);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.730554);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,3.344232);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,2.995788);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,3.196467);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,3.315211);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(389);

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
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,42.27425);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,43.98699);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,48.11696);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,43.31197);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,42.30247);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,42.59506);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,45.47514);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,47.95185);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,46.46582);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,54.24498);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,56.69346);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,63.41607);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,69.05817);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,78.98896);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,83.25368);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,95.94133);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,109.5653);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,121.6802);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,132.3395);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,145.9665);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,163.4185);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,168.0228);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,192.8327);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,196.5195);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,202.0393);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,202.7258);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,224.4644);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,213.0078);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,211.156);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,216.5556);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,1.865027);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,1.900567);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,1.989801);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,1.888767);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,1.866205);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,1.871931);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,1.93422);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,1.986372);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,1.955248);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.113432);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.160247);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.284343);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.38455);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.548649);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,2.616415);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,2.810198);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.004689);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.165558);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.301732);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.466229);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,3.670146);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,3.721387);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,3.985974);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.023717);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.079107);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.085543);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.299093);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.18781);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.169931);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,4.221902);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(41359);

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
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.2902274);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.3139609);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.3017551);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.2820902);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.301077);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.287515);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.3505784);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.3512565);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.3444755);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.4068608);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.4211009);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.4807738);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.5072198);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.568927);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.6543678);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(16,0.8211807);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(17,0.9079777);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(18,1.117511);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(19,1.375868);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(20,1.744077);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(21,2.261468);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(22,2.88939);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(23,3.726845);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(24,4.635501);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(25,5.717072);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(26,6.922058);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(27,7.811049);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(28,8.328441);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(29,7.993459);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinContent(30,7.154647);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.01402867);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.014591);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.01430456);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.01383061);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.01428848);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.01396296);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.01541842);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.01543332);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.01528363);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.01661002);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.0168982);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.01805584);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.01854579);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.01964154);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.02106484);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.02359754);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.02481332);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.02752791);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.03054468);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.03438983);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.03915999);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.04426397);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.05027105);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.05606549);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.06226359);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.06851173);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.07277831);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.07515003);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.0736232);
   Zee_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.06965325);
   Zee_2bjet_dPhi_Zb_stack_4->SetEntries(102151);

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
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(1,191.9797);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(2,214.3484);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(3,190.2238);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(4,208.1809);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(5,200.2096);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(6,174.3626);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(7,213.6922);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(8,191.5343);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(9,229.8713);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(10,210.3211);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(11,260.1262);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(12,258.9565);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(13,268.6483);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(14,292.5622);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(15,360.7699);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(16,418.9438);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(17,414.9405);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(18,535.1307);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(19,633.3162);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(20,705.0224);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(21,803.6718);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(22,1017.678);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(23,1184.012);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(24,1398.392);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(25,1616.764);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(26,1896.79);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(27,2129.527);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(28,2278.993);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(29,2385.814);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinContent(30,2327.079);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(1,15.73107);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(2,16.50675);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(3,15.64341);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(4,16.90291);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(5,16.63194);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(6,14.73107);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(7,16.16166);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(8,15.38469);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(9,17.89496);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(10,16.04404);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(11,17.39861);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(12,17.67629);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(13,17.9673);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(14,18.71055);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(15,21.14604);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(16,22.19792);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(17,22.07877);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(18,25.1711);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(19,27.83894);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(20,29.24593);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(21,30.42344);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(22,34.01402);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(23,37.20478);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(24,39.96227);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(25,42.70091);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(26,46.48152);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(27,49.35677);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(28,51.28771);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(29,52.17989);
   Zee_2bjet_dPhi_Zb_stack_5->SetBinError(30,51.75508);
   Zee_2bjet_dPhi_Zb_stack_5->SetEntries(20359);

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
   
   TH1D *Zee_2bjet_dPhi_Zb__469 = new TH1D("Zee_2bjet_dPhi_Zb__469","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(1,119);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(2,109);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(3,131);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(4,113);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(5,117);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(6,117);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(7,115);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(8,112);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(9,133);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(10,137);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(11,139);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(12,153);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(13,165);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(14,186);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(15,180);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(16,229);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(17,253);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(18,295);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(19,337);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(20,376);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(21,407);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(22,486);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(23,536);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(24,626);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(25,659);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(26,800);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(27,836);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(28,903);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(29,914);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(30,965);
   Zee_2bjet_dPhi_Zb__469->SetBinError(1,10.90871);
   Zee_2bjet_dPhi_Zb__469->SetBinError(2,10.44031);
   Zee_2bjet_dPhi_Zb__469->SetBinError(3,11.44552);
   Zee_2bjet_dPhi_Zb__469->SetBinError(4,10.63015);
   Zee_2bjet_dPhi_Zb__469->SetBinError(5,10.81665);
   Zee_2bjet_dPhi_Zb__469->SetBinError(6,10.81665);
   Zee_2bjet_dPhi_Zb__469->SetBinError(7,10.72381);
   Zee_2bjet_dPhi_Zb__469->SetBinError(8,10.58301);
   Zee_2bjet_dPhi_Zb__469->SetBinError(9,11.53256);
   Zee_2bjet_dPhi_Zb__469->SetBinError(10,11.7047);
   Zee_2bjet_dPhi_Zb__469->SetBinError(11,11.78983);
   Zee_2bjet_dPhi_Zb__469->SetBinError(12,12.36932);
   Zee_2bjet_dPhi_Zb__469->SetBinError(13,12.84523);
   Zee_2bjet_dPhi_Zb__469->SetBinError(14,13.63818);
   Zee_2bjet_dPhi_Zb__469->SetBinError(15,13.41641);
   Zee_2bjet_dPhi_Zb__469->SetBinError(16,15.13275);
   Zee_2bjet_dPhi_Zb__469->SetBinError(17,15.90597);
   Zee_2bjet_dPhi_Zb__469->SetBinError(18,17.17556);
   Zee_2bjet_dPhi_Zb__469->SetBinError(19,18.35756);
   Zee_2bjet_dPhi_Zb__469->SetBinError(20,19.39072);
   Zee_2bjet_dPhi_Zb__469->SetBinError(21,20.17424);
   Zee_2bjet_dPhi_Zb__469->SetBinError(22,22.04541);
   Zee_2bjet_dPhi_Zb__469->SetBinError(23,23.15167);
   Zee_2bjet_dPhi_Zb__469->SetBinError(24,25.01999);
   Zee_2bjet_dPhi_Zb__469->SetBinError(25,25.671);
   Zee_2bjet_dPhi_Zb__469->SetBinError(26,28.28427);
   Zee_2bjet_dPhi_Zb__469->SetBinError(27,28.91366);
   Zee_2bjet_dPhi_Zb__469->SetBinError(28,30.04996);
   Zee_2bjet_dPhi_Zb__469->SetBinError(29,30.23243);
   Zee_2bjet_dPhi_Zb__469->SetBinError(30,31.06445);
   Zee_2bjet_dPhi_Zb__469->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__469->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__469->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__469->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__469->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fx1469[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fy1469[30] = {
   237.3053,
   260.2535,
   241.7853,
   252.8151,
   243.9188,
   218.5885,
   262.3968,
   242.2867,
   278.1979,
   266.8807,
   321.3803,
   328.1506,
   341.6281,
   375.9131,
   451.2205,
   521.0285,
   531.5817,
   667.278,
   776.9234,
   858.1626,
   977.8135,
   1201.894,
   1396.202,
   1619.761,
   1844.507,
   2128.936,
   2391.388,
   2524.205,
   2633.67,
   2580.267};
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fex1469[30] = {
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
   Double_t Graph_from_Zee_2bjet_dPhi_Zb_fey1469[30] = {
   15.88499,
   16.6363,
   15.81149,
   17.01979,
   16.74925,
   14.86496,
   16.31398,
   15.5421,
   18.01565,
   16.20652,
   17.58327,
   17.89502,
   18.1585,
   18.92069,
   21.37562,
   22.41962,
   22.3425,
   25.43891,
   28.11754,
   29.48476,
   30.69983,
   34.30148,
   37.50455,
   40.27999,
   42.99399,
   46.76162,
   49.67618,
   51.56191,
   52.46541,
   52.05297};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_dPhi_Zb_fx1469,Graph_from_Zee_2bjet_dPhi_Zb_fy1469,Graph_from_Zee_2bjet_dPhi_Zb_fex1469,Graph_from_Zee_2bjet_dPhi_Zb_fey1469);
   gre->SetName("Graph_from_Zee_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dPhi_Zb1469 = new TH1F("Graph_Graph_from_Zee_2bjet_dPhi_Zb1469","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->SetMinimum(183.3512);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->SetMaximum(2934.377);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dPhi_Zb1469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dPhi_Zb1469);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__470 = new TH1D("data_mc_ratio__470","",30,0,3.141593);
   data_mc_ratio__470->SetBinContent(1,0.5014636);
   data_mc_ratio__470->SetBinContent(2,0.4188224);
   data_mc_ratio__470->SetBinContent(3,0.541803);
   data_mc_ratio__470->SetBinContent(4,0.446967);
   data_mc_ratio__470->SetBinContent(5,0.4796678);
   data_mc_ratio__470->SetBinContent(6,0.5352523);
   data_mc_ratio__470->SetBinContent(7,0.4382676);
   data_mc_ratio__470->SetBinContent(8,0.4622623);
   data_mc_ratio__470->SetBinContent(9,0.478077);
   data_mc_ratio__470->SetBinContent(10,0.513338);
   data_mc_ratio__470->SetBinContent(11,0.4325094);
   data_mc_ratio__470->SetBinContent(12,0.4662494);
   data_mc_ratio__470->SetBinContent(13,0.4829813);
   data_mc_ratio__470->SetBinContent(14,0.4947953);
   data_mc_ratio__470->SetBinContent(15,0.3989181);
   data_mc_ratio__470->SetBinContent(16,0.4395153);
   data_mc_ratio__470->SetBinContent(17,0.4759381);
   data_mc_ratio__470->SetBinContent(18,0.4420946);
   data_mc_ratio__470->SetBinContent(19,0.4337622);
   data_mc_ratio__470->SetBinContent(20,0.4381454);
   data_mc_ratio__470->SetBinContent(21,0.4162348);
   data_mc_ratio__470->SetBinContent(22,0.4043617);
   data_mc_ratio__470->SetBinContent(23,0.3838987);
   data_mc_ratio__470->SetBinContent(24,0.3864767);
   data_mc_ratio__470->SetBinContent(25,0.3572771);
   data_mc_ratio__470->SetBinContent(26,0.3757746);
   data_mc_ratio__470->SetBinContent(27,0.3495878);
   data_mc_ratio__470->SetBinContent(28,0.3577364);
   data_mc_ratio__470->SetBinContent(29,0.3470442);
   data_mc_ratio__470->SetBinContent(30,0.3739923);
   data_mc_ratio__470->SetBinError(1,0.0459691);
   data_mc_ratio__470->SetBinError(2,0.04011591);
   data_mc_ratio__470->SetBinError(3,0.04733755);
   data_mc_ratio__470->SetBinError(4,0.04204711);
   data_mc_ratio__470->SetBinError(5,0.04434531);
   data_mc_ratio__470->SetBinError(6,0.04948409);
   data_mc_ratio__470->SetBinError(7,0.04086866);
   data_mc_ratio__470->SetBinError(8,0.04367968);
   data_mc_ratio__470->SetBinError(9,0.04145453);
   data_mc_ratio__470->SetBinError(10,0.04385743);
   data_mc_ratio__470->SetBinError(11,0.03668497);
   data_mc_ratio__470->SetBinError(12,0.03769403);
   data_mc_ratio__470->SetBinError(13,0.03760004);
   data_mc_ratio__470->SetBinError(14,0.03628015);
   data_mc_ratio__470->SetBinError(15,0.0297336);
   data_mc_ratio__470->SetBinError(16,0.02904399);
   data_mc_ratio__470->SetBinError(17,0.02992197);
   data_mc_ratio__470->SetBinError(18,0.02573974);
   data_mc_ratio__470->SetBinError(19,0.02362853);
   data_mc_ratio__470->SetBinError(20,0.02259562);
   data_mc_ratio__470->SetBinError(21,0.02063199);
   data_mc_ratio__470->SetBinError(22,0.01834222);
   data_mc_ratio__470->SetBinError(23,0.0165819);
   data_mc_ratio__470->SetBinError(24,0.01544672);
   data_mc_ratio__470->SetBinError(25,0.01391754);
   data_mc_ratio__470->SetBinError(26,0.01328564);
   data_mc_ratio__470->SetBinError(27,0.01209075);
   data_mc_ratio__470->SetBinError(28,0.01190472);
   data_mc_ratio__470->SetBinError(29,0.0114792);
   data_mc_ratio__470->SetBinError(30,0.01203924);
   data_mc_ratio__470->SetMinimum(0.4);
   data_mc_ratio__470->SetMaximum(1.6);
   data_mc_ratio__470->SetEntries(3667.34);
   data_mc_ratio__470->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__470->SetLineColor(ci);
   data_mc_ratio__470->SetLineWidth(2);
   data_mc_ratio__470->SetMarkerStyle(20);
   data_mc_ratio__470->SetMarkerSize(1.2);
   data_mc_ratio__470->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__470->GetXaxis()->SetRange(1,31);
   data_mc_ratio__470->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__470->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__470->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__470->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__470->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__470->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.06693904,
   0.06392345,
   0.06539474,
   0.06732111,
   0.06866731,
   0.0680043,
   0.06217293,
   0.06414758,
   0.06475841,
   0.06072573,
   0.05471173,
   0.05453296,
   0.05315282,
   0.05033262,
   0.04737289,
   0.04302956,
   0.04203022,
   0.03812341,
   0.03619087,
   0.03435801,
   0.03139641,
   0.02853952,
   0.02686184,
   0.02486785,
   0.02330921,
   0.02196478,
   0.02077295,
   0.02042699,
   0.01992103,
   0.02017348};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.9175992);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(1.082401);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_18_amcnlo);
}
