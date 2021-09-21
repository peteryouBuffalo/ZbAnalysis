void dR_2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_18_amcnlo/dR_2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:38 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_18_amcnlo", "dR_2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-14.55771,6.314516,14553.15);
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
   st->SetMaximum(12472.74);
   
   TH1F *st_stack_311 = new TH1F("st_stack_311","",25,0,10);
   st_stack_311->SetMinimum(0.01);
   st_stack_311->SetMaximum(13096.38);
   st_stack_311->SetDirectory(0);
   st_stack_311->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_311->SetLineColor(ci);
   st_stack_311->GetXaxis()->SetRange(1,15);
   st_stack_311->GetXaxis()->SetLabelFont(42);
   st_stack_311->GetXaxis()->SetLabelSize(0.035);
   st_stack_311->GetXaxis()->SetTitleSize(0.035);
   st_stack_311->GetXaxis()->SetTitleFont(42);
   st_stack_311->GetYaxis()->SetTitle("Events/0.4");
   st_stack_311->GetYaxis()->SetLabelFont(42);
   st_stack_311->GetYaxis()->SetLabelSize(0.05);
   st_stack_311->GetYaxis()->SetTitleSize(0.057);
   st_stack_311->GetYaxis()->SetTitleOffset(1.2);
   st_stack_311->GetYaxis()->SetTitleFont(42);
   st_stack_311->GetZaxis()->SetLabelFont(42);
   st_stack_311->GetZaxis()->SetLabelSize(0.035);
   st_stack_311->GetZaxis()->SetTitleSize(0.035);
   st_stack_311->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_311);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,4.790057);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,6.37388);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,8.629559);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,14.1727);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,16.73253);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,19.57921);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,20.03424);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,9.88389);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,5.168824);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,1.919221);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(12,1.386747);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(13,0.7796553);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(14,0.2380547);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,1.136018);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,1.317348);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,1.517678);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,1.954351);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,2.104345);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,2.289993);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,2.263299);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,1.609559);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,1.182852);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.7115317);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(12,0.6243079);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(13,0.4532992);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(14,0.2380547);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_2 = new TH1D("Zmm_2bjet_dR_2b_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,14.58898);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,27.41908);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,40.10813);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,42.32807);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,41.33101);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,45.54507);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,42.32807);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,6.932533);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,1.495586);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(11,0.4985287);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,2.793149);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,3.697188);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,4.489837);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,4.629138);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,4.575135);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,4.816251);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,4.629138);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,1.945053);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.8634771);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(11,0.4985287);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_3 = new TH1D("Zmm_2bjet_dR_2b_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,175.222);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,301.3624);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,427.8237);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,535.2853);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,661.5126);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,802.9564);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,912.0525);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,351.2079);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,113.9879);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,30.80098);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,8.557681);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,0.8161588);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(14,0.3208179);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,3.799768);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,4.983313);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,5.93754);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,6.640777);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,7.383403);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,8.135199);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,8.669876);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,5.380253);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,3.065406);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,1.592898);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,0.8393034);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.2582464);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(14,0.1606158);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_4 = new TH1D("Zmm_2bjet_dR_2b_stack_4","",25,0,10);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(1,0.0006781013);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(2,4.211687);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(3,11.66199);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(4,17.34244);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(5,17.73303);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(6,14.58799);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(7,11.32022);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(8,11.1785);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(9,2.24655);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(10,0.2583566);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(11,0.07594735);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(12,0.02644595);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(13,0.006781013);
   Zmm_2bjet_dR_2b_stack_4->SetBinContent(14,0.0006781013);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(1,0.0006781013);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(2,0.0534411);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(3,0.08892699);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(4,0.1084432);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(5,0.1096576);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(6,0.09945923);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(7,0.08761426);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(8,0.08706409);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(9,0.03903061);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(10,0.01323601);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(11,0.00717635);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(12,0.004234741);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(13,0.002144345);
   Zmm_2bjet_dR_2b_stack_4->SetBinError(14,0.0006781013);
   Zmm_2bjet_dR_2b_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_4,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_5 = new TH1D("Zmm_2bjet_dR_2b_stack_5","",25,0,10);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(1,3.476478);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(2,1260.027);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(3,1867.905);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(4,2392.745);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(5,2985.987);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(6,3725.271);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(7,4525.535);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(8,5874.416);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(9,3702.148);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(10,1932.332);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(11,1046.03);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(12,407.6589);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(13,121.8407);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(14,15.73185);
   Zmm_2bjet_dR_2b_stack_5->SetBinContent(15,1.123703);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(1,2.008989);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(2,38.27348);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(3,46.70409);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(4,52.62833);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(5,58.14347);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(6,65.4591);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(7,71.93506);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(8,83.3045);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(9,66.11101);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(10,47.59455);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(11,34.82434);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(12,21.46039);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(13,12.19076);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(14,4.204513);
   Zmm_2bjet_dR_2b_stack_5->SetBinError(15,1.123703);
   Zmm_2bjet_dR_2b_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b__621 = new TH1D("Zmm_2bjet_dR_2b__621","",25,0,10);
   Zmm_2bjet_dR_2b__621->SetBinContent(2,1028);
   Zmm_2bjet_dR_2b__621->SetBinContent(3,1114);
   Zmm_2bjet_dR_2b__621->SetBinContent(4,1273);
   Zmm_2bjet_dR_2b__621->SetBinContent(5,1499);
   Zmm_2bjet_dR_2b__621->SetBinContent(6,1817);
   Zmm_2bjet_dR_2b__621->SetBinContent(7,2269);
   Zmm_2bjet_dR_2b__621->SetBinContent(8,2824);
   Zmm_2bjet_dR_2b__621->SetBinContent(9,1500);
   Zmm_2bjet_dR_2b__621->SetBinContent(10,738);
   Zmm_2bjet_dR_2b__621->SetBinContent(11,338);
   Zmm_2bjet_dR_2b__621->SetBinContent(12,154);
   Zmm_2bjet_dR_2b__621->SetBinContent(13,58);
   Zmm_2bjet_dR_2b__621->SetBinContent(14,7);
   Zmm_2bjet_dR_2b__621->SetBinError(2,32.06244);
   Zmm_2bjet_dR_2b__621->SetBinError(3,33.37664);
   Zmm_2bjet_dR_2b__621->SetBinError(4,35.67913);
   Zmm_2bjet_dR_2b__621->SetBinError(5,38.71692);
   Zmm_2bjet_dR_2b__621->SetBinError(6,42.62628);
   Zmm_2bjet_dR_2b__621->SetBinError(7,47.63402);
   Zmm_2bjet_dR_2b__621->SetBinError(8,53.14132);
   Zmm_2bjet_dR_2b__621->SetBinError(9,38.72983);
   Zmm_2bjet_dR_2b__621->SetBinError(10,27.16616);
   Zmm_2bjet_dR_2b__621->SetBinError(11,18.38478);
   Zmm_2bjet_dR_2b__621->SetBinError(12,12.40967);
   Zmm_2bjet_dR_2b__621->SetBinError(13,7.615773);
   Zmm_2bjet_dR_2b__621->SetBinError(14,2.645751);
   Zmm_2bjet_dR_2b__621->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__621->SetLineColor(ci);
   Zmm_2bjet_dR_2b__621->SetLineWidth(2);
   Zmm_2bjet_dR_2b__621->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__621->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dR_2b_fx1621[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fy1621[25] = {
   3.477156,
   1458.84,
   2214.723,
   2886.648,
   3595.506,
   4459.435,
   5404.936,
   6860.009,
   4072.419,
   2053.242,
   1079.325,
   417.6298,
   123.4433,
   16.2914,
   1.123703,
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fex1621[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dR_2b_fey1621[25] = {
   2.008989,
   38.57969,
   47.13299,
   53.17395,
   58.7369,
   66.06647,
   72.58982,
   83.91284,
   66.37762,
   47.71564,
   34.87158,
   21.48587,
   12.20192,
   4.214308,
   1.123703,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dR_2b_fx1621,Graph_from_Zmm_2bjet_dR_2b_fy1621,Graph_from_Zmm_2bjet_dR_2b_fex1621,Graph_from_Zmm_2bjet_dR_2b_fey1621);
   gre->SetName("Graph_from_Zmm_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dR_2b1621 = new TH1F("Graph_Graph_from_Zmm_2bjet_dR_2b1621","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->SetMaximum(7638.314);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dR_2b1621->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dR_2b1621);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__622 = new TH1D("data_mc_ratio__622","",25,0,10);
   data_mc_ratio__622->SetBinContent(2,0.7046694);
   data_mc_ratio__622->SetBinContent(3,0.5029975);
   data_mc_ratio__622->SetBinContent(4,0.4409959);
   data_mc_ratio__622->SetBinContent(5,0.4169093);
   data_mc_ratio__622->SetBinContent(6,0.4074507);
   data_mc_ratio__622->SetBinContent(7,0.4198015);
   data_mc_ratio__622->SetBinContent(8,0.4116613);
   data_mc_ratio__622->SetBinContent(9,0.3683314);
   data_mc_ratio__622->SetBinContent(10,0.3594315);
   data_mc_ratio__622->SetBinContent(11,0.3131587);
   data_mc_ratio__622->SetBinContent(12,0.3687477);
   data_mc_ratio__622->SetBinContent(13,0.4698513);
   data_mc_ratio__622->SetBinContent(14,0.4296746);
   data_mc_ratio__622->SetBinError(2,0.02197804);
   data_mc_ratio__622->SetBinError(3,0.01507035);
   data_mc_ratio__622->SetBinError(4,0.01236005);
   data_mc_ratio__622->SetBinError(5,0.01076814);
   data_mc_ratio__622->SetBinError(6,0.009558673);
   data_mc_ratio__622->SetBinError(7,0.00881306);
   data_mc_ratio__622->SetBinError(8,0.007746538);
   data_mc_ratio__622->SetBinError(9,0.009510277);
   data_mc_ratio__622->SetBinError(10,0.01323086);
   data_mc_ratio__622->SetBinError(11,0.01703359);
   data_mc_ratio__622->SetBinError(12,0.02971453);
   data_mc_ratio__622->SetBinError(13,0.06169449);
   data_mc_ratio__622->SetBinError(14,0.1624017);
   data_mc_ratio__622->SetMinimum(0.4);
   data_mc_ratio__622->SetMaximum(1.6);
   data_mc_ratio__622->SetEntries(648.7693);
   data_mc_ratio__622->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__622->SetLineColor(ci);
   data_mc_ratio__622->SetLineWidth(2);
   data_mc_ratio__622->SetMarkerStyle(20);
   data_mc_ratio__622->SetMarkerSize(1.2);
   data_mc_ratio__622->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__622->GetXaxis()->SetRange(1,15);
   data_mc_ratio__622->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__622->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__622->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__622->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__622->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__622->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__622->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__622->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__622->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__622->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__622->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__622->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__622->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__622->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1622[25] = {
   0.5777677,
   0.02644546,
   0.02128167,
   0.01842065,
   0.0163362,
   0.01481499,
   0.01343028,
   0.01223218,
   0.01629931,
   0.02323917,
   0.03230869,
   0.05144716,
   0.09884633,
   0.2586831,
   1,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1622,Graph_from_mc_statistical_error_fy1622,Graph_from_mc_statistical_error_fex1622,Graph_from_mc_statistical_error_fey1622);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1622 = new TH1F("Graph_Graph_from_mc_statistical_error1622","",100,0,11);
   Graph_Graph_from_mc_statistical_error1622->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1622->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1622->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1622->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1622->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1622);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_18_amcnlo);
}
