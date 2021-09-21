void dR_2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_All_amcnlo/dR_2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:46:24 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_All_amcnlo", "dR_2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-25.89733,6.314516,25881.43);
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
   st->SetMaximum(22181.62);
   
   TH1F *st_stack_224 = new TH1F("st_stack_224","",25,0,10);
   st_stack_224->SetMinimum(0.01);
   st_stack_224->SetMaximum(23290.7);
   st_stack_224->SetDirectory(0);
   st_stack_224->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_224->SetLineColor(ci);
   st_stack_224->GetXaxis()->SetRange(1,15);
   st_stack_224->GetXaxis()->SetLabelFont(42);
   st_stack_224->GetXaxis()->SetLabelSize(0.035);
   st_stack_224->GetXaxis()->SetTitleSize(0.035);
   st_stack_224->GetXaxis()->SetTitleFont(42);
   st_stack_224->GetYaxis()->SetTitle("Events/0.4");
   st_stack_224->GetYaxis()->SetLabelFont(42);
   st_stack_224->GetYaxis()->SetLabelSize(0.05);
   st_stack_224->GetYaxis()->SetTitleSize(0.057);
   st_stack_224->GetYaxis()->SetTitleOffset(1.2);
   st_stack_224->GetYaxis()->SetTitleFont(42);
   st_stack_224->GetZaxis()->SetLabelFont(42);
   st_stack_224->GetZaxis()->SetLabelSize(0.035);
   st_stack_224->GetZaxis()->SetTitleSize(0.035);
   st_stack_224->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_224);
   
   
   TH1D *Zee_2bjet_dR_2b_all_stack_1 = new TH1D("Zee_2bjet_dR_2b_all_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(2,8.859871);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(3,10.25051);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(4,18.14783);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(5,22.6114);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(6,28.84424);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(7,38.79625);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(8,34.98944);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(9,17.98081);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(10,9.120074);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(11,2.813127);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(12,0.6348904);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(13,0.8952166);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(2,1.421462);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(3,1.492593);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(4,2.082343);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(5,2.284627);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(6,2.703292);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(7,3.011467);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(8,2.849414);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(9,2.049591);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(10,1.456827);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(11,0.8392491);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(12,0.3679853);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(13,0.4244986);
   Zee_2bjet_dR_2b_all_stack_1->SetEntries(898);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_2 = new TH1D("Zee_2bjet_dR_2b_all_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(2,26.75028);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(3,63.28873);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(4,73.18708);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(5,69.29458);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(6,56.74226);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(7,66.6346);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(8,71.06612);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(9,15.98743);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(10,3.51505);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(11,1.126663);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(12,0.3519309);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(2,3.255954);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(3,4.997631);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(4,5.489468);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(5,5.347941);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(6,4.782193);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(7,5.217829);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(8,5.469277);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(9,2.636875);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(10,1.362418);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(11,0.6530477);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(12,0.3519309);
   Zee_2bjet_dR_2b_all_stack_2->SetEntries(1154);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_3 = new TH1D("Zee_2bjet_dR_2b_all_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(1,0.08255682);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(2,306.6429);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(3,523.0987);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(4,718.9246);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(5,905.5534);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(6,1110.081);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(7,1356.184);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(8,1540.521);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(9,615.4447);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(10,189.5589);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(11,45.47037);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(12,15.52126);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(13,3.367236);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(14,0.08255682);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(1,0.08255682);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(2,8.142763);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(3,10.38798);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(4,12.23433);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(5,13.64948);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(6,15.23551);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(7,16.72381);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(8,17.90801);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(9,11.28932);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(10,6.284876);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(11,2.90522);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(12,1.831094);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(13,0.9383012);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(14,0.08255682);
   Zee_2bjet_dR_2b_all_stack_3->SetEntries(55900);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dR_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_4 = new TH1D("Zee_2bjet_dR_2b_all_stack_4","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(1,0.001701034);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(2,7.604332);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(3,20.71586);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(4,30.15674);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(5,30.11619);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(6,23.85225);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(7,18.65036);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(8,18.31488);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(9,3.606578);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(10,0.433673);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(11,0.1206428);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(12,0.04229968);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(13,0.01221438);
   Zee_2bjet_dR_2b_all_stack_4->SetBinContent(14,0.002083574);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(1,0.001019093);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(2,0.06494233);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(3,0.1071009);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(4,0.1291178);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(5,0.128952);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(6,0.1146685);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(7,0.1013664);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(8,0.1004709);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(9,0.04460633);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(10,0.01551441);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(11,0.008153883);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(12,0.004795932);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(13,0.002605771);
   Zee_2bjet_dR_2b_all_stack_4->SetBinError(14,0.001061438);
   Zee_2bjet_dR_2b_all_stack_4->SetEntries(302895);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dR_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_5 = new TH1D("Zee_2bjet_dR_2b_all_stack_5","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(2,2631.236);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(3,3159.233);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(4,4380.361);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(5,5338.741);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(6,6673.425);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(7,8212.11);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(8,10535);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(9,6269.072);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(10,3379.023);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(11,1669.024);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(12,686.7291);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(13,216.7196);
   Zee_2bjet_dR_2b_all_stack_5->SetBinContent(14,45.68858);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(2,49.46679);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(3,53.40305);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(4,63.16682);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(5,69.61179);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(6,77.87017);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(7,86.99616);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(8,99.90444);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(9,76.85079);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(10,56.23337);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(11,39.55499);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(12,25.40718);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(13,14.6978);
   Zee_2bjet_dR_2b_all_stack_5->SetBinError(14,6.500363);
   Zee_2bjet_dR_2b_all_stack_5->SetEntries(65615);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dR_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b_all__447 = new TH1D("Zee_2bjet_dR_2b_all__447","",25,0,10);
   Zee_2bjet_dR_2b_all__447->SetBinContent(2,1515);
   Zee_2bjet_dR_2b_all__447->SetBinContent(3,1709);
   Zee_2bjet_dR_2b_all__447->SetBinContent(4,1877);
   Zee_2bjet_dR_2b_all__447->SetBinContent(5,2356);
   Zee_2bjet_dR_2b_all__447->SetBinContent(6,2809);
   Zee_2bjet_dR_2b_all__447->SetBinContent(7,3446);
   Zee_2bjet_dR_2b_all__447->SetBinContent(8,4392);
   Zee_2bjet_dR_2b_all__447->SetBinContent(9,2263);
   Zee_2bjet_dR_2b_all__447->SetBinContent(10,1138);
   Zee_2bjet_dR_2b_all__447->SetBinContent(11,477);
   Zee_2bjet_dR_2b_all__447->SetBinContent(12,206);
   Zee_2bjet_dR_2b_all__447->SetBinContent(13,56);
   Zee_2bjet_dR_2b_all__447->SetBinContent(14,5);
   Zee_2bjet_dR_2b_all__447->SetBinError(2,38.923);
   Zee_2bjet_dR_2b_all__447->SetBinError(3,41.34005);
   Zee_2bjet_dR_2b_all__447->SetBinError(4,43.32436);
   Zee_2bjet_dR_2b_all__447->SetBinError(5,48.53864);
   Zee_2bjet_dR_2b_all__447->SetBinError(6,53);
   Zee_2bjet_dR_2b_all__447->SetBinError(7,58.70264);
   Zee_2bjet_dR_2b_all__447->SetBinError(8,66.27217);
   Zee_2bjet_dR_2b_all__447->SetBinError(9,47.571);
   Zee_2bjet_dR_2b_all__447->SetBinError(10,33.73426);
   Zee_2bjet_dR_2b_all__447->SetBinError(11,21.84033);
   Zee_2bjet_dR_2b_all__447->SetBinError(12,14.3527);
   Zee_2bjet_dR_2b_all__447->SetBinError(13,7.483315);
   Zee_2bjet_dR_2b_all__447->SetBinError(14,2.236068);
   Zee_2bjet_dR_2b_all__447->SetEntries(22249);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all__447->SetLineColor(ci);
   Zee_2bjet_dR_2b_all__447->SetLineWidth(2);
   Zee_2bjet_dR_2b_all__447->SetMarkerStyle(20);
   Zee_2bjet_dR_2b_all__447->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dR_2b_all_fx1447[25] = {
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
   Double_t Graph_from_Zee_2bjet_dR_2b_all_fy1447[25] = {
   0.08425785,
   2981.093,
   3776.586,
   5220.778,
   6366.317,
   7892.945,
   9692.375,
   12199.89,
   6922.091,
   3581.65,
   1718.554,
   703.2795,
   220.9943,
   45.77322,
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
   Double_t Graph_from_Zee_2bjet_dR_2b_all_fex1447[25] = {
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
   Double_t Graph_from_Zee_2bjet_dR_2b_all_fey1447[25] = {
   0.08256311,
   50.25827,
   54.65356,
   64.60815,
   71.17546,
   79.53662,
   88.79371,
   101.684,
   77.74734,
   56.61864,
   39.6758,
   25.47816,
   14.73383,
   6.500887,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dR_2b_all_fx1447,Graph_from_Zee_2bjet_dR_2b_all_fy1447,Graph_from_Zee_2bjet_dR_2b_all_fex1447,Graph_from_Zee_2bjet_dR_2b_all_fey1447);
   gre->SetName("Graph_from_Zee_2bjet_dR_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dR_2b_all1447 = new TH1F("Graph_Graph_from_Zee_2bjet_dR_2b_all1447","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->SetMaximum(13531.73);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b_all1447->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dR_2b_all1447);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dR_2b_all","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__448 = new TH1D("data_mc_ratio__448","",25,0,10);
   data_mc_ratio__448->SetBinContent(2,0.5082028);
   data_mc_ratio__448->SetBinContent(3,0.4525251);
   data_mc_ratio__448->SetBinContent(4,0.359525);
   data_mc_ratio__448->SetBinContent(5,0.3700727);
   data_mc_ratio__448->SetBinContent(6,0.3558874);
   data_mc_ratio__448->SetBinContent(7,0.3555372);
   data_mc_ratio__448->SetBinContent(8,0.3600033);
   data_mc_ratio__448->SetBinContent(9,0.3269243);
   data_mc_ratio__448->SetBinContent(10,0.3177306);
   data_mc_ratio__448->SetBinContent(11,0.2775588);
   data_mc_ratio__448->SetBinContent(12,0.2929134);
   data_mc_ratio__448->SetBinContent(13,0.2534002);
   data_mc_ratio__448->SetBinContent(14,0.1092342);
   data_mc_ratio__448->SetBinError(2,0.01305662);
   data_mc_ratio__448->SetBinError(3,0.01094641);
   data_mc_ratio__448->SetBinError(4,0.008298449);
   data_mc_ratio__448->SetBinError(5,0.00762429);
   data_mc_ratio__448->SetBinError(6,0.006714857);
   data_mc_ratio__448->SetBinError(7,0.006056579);
   data_mc_ratio__448->SetBinError(8,0.005432194);
   data_mc_ratio__448->SetBinError(9,0.006872345);
   data_mc_ratio__448->SetBinError(10,0.009418634);
   data_mc_ratio__448->SetBinError(11,0.01270855);
   data_mc_ratio__448->SetBinError(12,0.02040825);
   data_mc_ratio__448->SetBinError(13,0.03386203);
   data_mc_ratio__448->SetBinError(14,0.048851);
   data_mc_ratio__448->SetMinimum(0.4);
   data_mc_ratio__448->SetMaximum(1.6);
   data_mc_ratio__448->SetEntries(3315.542);
   data_mc_ratio__448->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__448->SetLineColor(ci);
   data_mc_ratio__448->SetLineWidth(2);
   data_mc_ratio__448->SetMarkerStyle(20);
   data_mc_ratio__448->SetMarkerSize(1.2);
   data_mc_ratio__448->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__448->GetXaxis()->SetRange(1,15);
   data_mc_ratio__448->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__448->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__448->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__448->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__448->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__448->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__448->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__448->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__448->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__448->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__448->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__448->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__448->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__448->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1448[25] = {
   0.9798862,
   0.01685901,
   0.01447168,
   0.0123752,
   0.01118001,
   0.01007693,
   0.009161192,
   0.00833483,
   0.01123177,
   0.01580798,
   0.02308672,
   0.03622765,
   0.06667066,
   0.1420238,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1448,Graph_from_mc_statistical_error_fy1448,Graph_from_mc_statistical_error_fex1448,Graph_from_mc_statistical_error_fey1448);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1448 = new TH1F("Graph_Graph_from_mc_statistical_error1448","",100,0,11);
   Graph_Graph_from_mc_statistical_error1448->SetMinimum(0.0181024);
   Graph_Graph_from_mc_statistical_error1448->SetMaximum(2.175863);
   Graph_Graph_from_mc_statistical_error1448->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1448->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1448->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1448);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_All_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_All_amcnlo);
}
