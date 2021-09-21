void Njet_Z_jet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_All_amcnlo/Njet_Z_jet_Zee_All_amcnlo
//=========  (Thu Jan 21 10:45:51 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_All_amcnlo = new TCanvas("Njet_Z_jet_Zee_All_amcnlo", "Njet_Z_jet_Zee_All_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_All_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_All_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_All_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_All_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_All_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_All_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-84054.81,10.52419,8.397076e+07);
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
   st->SetMaximum(7.196693e+07);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",15,0,15);
   st_stack_36->SetMinimum(0.01);
   st_stack_36->SetMaximum(7.556528e+07);
   st_stack_36->SetDirectory(0);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->GetXaxis()->SetRange(1,10);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetLabelSize(0.035);
   st_stack_36->GetXaxis()->SetTitleSize(0.035);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/1.0");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetLabelSize(0.05);
   st_stack_36->GetYaxis()->SetTitleSize(0.057);
   st_stack_36->GetYaxis()->SetTitleOffset(1.2);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetLabelSize(0.035);
   st_stack_36->GetZaxis()->SetTitleSize(0.035);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *Zee_jet_Njet_all_stack_1 = new TH1D("Zee_jet_Njet_all_stack_1","",15,0,15);
   Zee_jet_Njet_all_stack_1->SetBinContent(1,1058.081);
   Zee_jet_Njet_all_stack_1->SetBinContent(2,3696.066);
   Zee_jet_Njet_all_stack_1->SetBinContent(3,2043.711);
   Zee_jet_Njet_all_stack_1->SetBinContent(4,765.7054);
   Zee_jet_Njet_all_stack_1->SetBinContent(5,230.3116);
   Zee_jet_Njet_all_stack_1->SetBinContent(6,61.82677);
   Zee_jet_Njet_all_stack_1->SetBinContent(7,13.54911);
   Zee_jet_Njet_all_stack_1->SetBinContent(8,2.915971);
   Zee_jet_Njet_all_stack_1->SetBinContent(9,0.3968357);
   Zee_jet_Njet_all_stack_1->SetBinError(1,16.30352);
   Zee_jet_Njet_all_stack_1->SetBinError(2,29.34274);
   Zee_jet_Njet_all_stack_1->SetBinError(3,22.01866);
   Zee_jet_Njet_all_stack_1->SetBinError(4,13.36737);
   Zee_jet_Njet_all_stack_1->SetBinError(5,7.332343);
   Zee_jet_Njet_all_stack_1->SetBinError(6,3.72807);
   Zee_jet_Njet_all_stack_1->SetBinError(7,1.695642);
   Zee_jet_Njet_all_stack_1->SetBinError(8,0.7906171);
   Zee_jet_Njet_all_stack_1->SetBinError(9,0.2806121);
   Zee_jet_Njet_all_stack_1->SetEntries(38985);

   ci = TColor::GetColor("#ff6600");
   Zee_jet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_1->SetLineColor(ci);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_1,"");
   
   TH1D *Zee_jet_Njet_all_stack_2 = new TH1D("Zee_jet_Njet_all_stack_2","",15,0,15);
   Zee_jet_Njet_all_stack_2->SetBinContent(1,26098.98);
   Zee_jet_Njet_all_stack_2->SetBinContent(2,22766.47);
   Zee_jet_Njet_all_stack_2->SetBinContent(3,14618.49);
   Zee_jet_Njet_all_stack_2->SetBinContent(4,4361.83);
   Zee_jet_Njet_all_stack_2->SetBinContent(5,1082.646);
   Zee_jet_Njet_all_stack_2->SetBinContent(6,229.6255);
   Zee_jet_Njet_all_stack_2->SetBinContent(7,43.87109);
   Zee_jet_Njet_all_stack_2->SetBinContent(8,8.66279);
   Zee_jet_Njet_all_stack_2->SetBinError(1,117.8074);
   Zee_jet_Njet_all_stack_2->SetBinError(2,104.9263);
   Zee_jet_Njet_all_stack_2->SetBinError(3,82.60716);
   Zee_jet_Njet_all_stack_2->SetBinError(4,44.89979);
   Zee_jet_Njet_all_stack_2->SetBinError(5,22.38201);
   Zee_jet_Njet_all_stack_2->SetBinError(6,10.13961);
   Zee_jet_Njet_all_stack_2->SetBinError(7,4.302172);
   Zee_jet_Njet_all_stack_2->SetBinError(8,1.944617);
   Zee_jet_Njet_all_stack_2->SetEntries(163580);

   ci = TColor::GetColor("#cccc00");
   Zee_jet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_2->SetLineColor(ci);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_2,"");
   
   TH1D *Zee_jet_Njet_all_stack_3 = new TH1D("Zee_jet_Njet_all_stack_3","",15,0,15);
   Zee_jet_Njet_all_stack_3->SetBinContent(1,2511.609);
   Zee_jet_Njet_all_stack_3->SetBinContent(2,16668.29);
   Zee_jet_Njet_all_stack_3->SetBinContent(3,31194.57);
   Zee_jet_Njet_all_stack_3->SetBinContent(4,17301.22);
   Zee_jet_Njet_all_stack_3->SetBinContent(5,6854.316);
   Zee_jet_Njet_all_stack_3->SetBinContent(6,2252.367);
   Zee_jet_Njet_all_stack_3->SetBinContent(7,652.4703);
   Zee_jet_Njet_all_stack_3->SetBinContent(8,170);
   Zee_jet_Njet_all_stack_3->SetBinContent(9,40.34358);
   Zee_jet_Njet_all_stack_3->SetBinContent(10,6.802918);
   Zee_jet_Njet_all_stack_3->SetBinContent(11,2.418061);
   Zee_jet_Njet_all_stack_3->SetBinContent(12,0.2772972);
   Zee_jet_Njet_all_stack_3->SetBinContent(13,0.08255682);
   Zee_jet_Njet_all_stack_3->SetBinContent(14,0.08255682);
   Zee_jet_Njet_all_stack_3->SetBinError(1,23.08386);
   Zee_jet_Njet_all_stack_3->SetBinError(2,59.18612);
   Zee_jet_Njet_all_stack_3->SetBinError(3,80.76398);
   Zee_jet_Njet_all_stack_3->SetBinError(4,59.68076);
   Zee_jet_Njet_all_stack_3->SetBinError(5,37.42437);
   Zee_jet_Njet_all_stack_3->SetBinError(6,21.34762);
   Zee_jet_Njet_all_stack_3->SetBinError(7,11.42367);
   Zee_jet_Njet_all_stack_3->SetBinError(8,5.759562);
   Zee_jet_Njet_all_stack_3->SetBinError(9,2.743866);
   Zee_jet_Njet_all_stack_3->SetBinError(10,0.9730367);
   Zee_jet_Njet_all_stack_3->SetBinError(11,0.8307232);
   Zee_jet_Njet_all_stack_3->SetBinError(12,0.211517);
   Zee_jet_Njet_all_stack_3->SetBinError(13,0.08255682);
   Zee_jet_Njet_all_stack_3->SetBinError(14,0.08255682);
   Zee_jet_Njet_all_stack_3->SetEntries(587024);

   ci = TColor::GetColor("#0000cc");
   Zee_jet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_3->SetLineColor(ci);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_3,"");
   
   TH1D *Zee_jet_Njet_all_stack_4 = new TH1D("Zee_jet_Njet_all_stack_4","",15,0,15);
   Zee_jet_Njet_all_stack_4->SetBinContent(1,38.02211);
   Zee_jet_Njet_all_stack_4->SetBinContent(2,222.6477);
   Zee_jet_Njet_all_stack_4->SetBinContent(3,318.9163);
   Zee_jet_Njet_all_stack_4->SetBinContent(4,122.4603);
   Zee_jet_Njet_all_stack_4->SetBinContent(5,40.18311);
   Zee_jet_Njet_all_stack_4->SetBinContent(6,12.41916);
   Zee_jet_Njet_all_stack_4->SetBinContent(7,3.581505);
   Zee_jet_Njet_all_stack_4->SetBinContent(8,0.9733068);
   Zee_jet_Njet_all_stack_4->SetBinContent(9,0.277837);
   Zee_jet_Njet_all_stack_4->SetBinContent(10,0.0661288);
   Zee_jet_Njet_all_stack_4->SetBinContent(11,0.01302871);
   Zee_jet_Njet_all_stack_4->SetBinContent(12,0.005584162);
   Zee_jet_Njet_all_stack_4->SetBinContent(13,0.001935784);
   Zee_jet_Njet_all_stack_4->SetBinContent(14,0.0005795809);
   Zee_jet_Njet_all_stack_4->SetBinError(1,0.1444033);
   Zee_jet_Njet_all_stack_4->SetBinError(2,0.3498207);
   Zee_jet_Njet_all_stack_4->SetBinError(3,0.4186758);
   Zee_jet_Njet_all_stack_4->SetBinError(4,0.2594508);
   Zee_jet_Njet_all_stack_4->SetBinError(5,0.1487093);
   Zee_jet_Njet_all_stack_4->SetBinError(6,0.08268154);
   Zee_jet_Njet_all_stack_4->SetBinError(7,0.04444458);
   Zee_jet_Njet_all_stack_4->SetBinError(8,0.02312342);
   Zee_jet_Njet_all_stack_4->SetBinError(9,0.01241384);
   Zee_jet_Njet_all_stack_4->SetBinError(10,0.006005437);
   Zee_jet_Njet_all_stack_4->SetBinError(11,0.00270979);
   Zee_jet_Njet_all_stack_4->SetBinError(12,0.001824188);
   Zee_jet_Njet_all_stack_4->SetBinError(13,0.001120516);
   Zee_jet_Njet_all_stack_4->SetBinError(14,0.0005795809);
   Zee_jet_Njet_all_stack_4->SetEntries(1504970);

   ci = TColor::GetColor("#cc0000");
   Zee_jet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_4->SetLineColor(ci);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_4,"");
   
   TH1D *Zee_jet_Njet_all_stack_5 = new TH1D("Zee_jet_Njet_all_stack_5","",15,0,15);
   Zee_jet_Njet_all_stack_5->SetBinContent(1,3.955211e+07);
   Zee_jet_Njet_all_stack_5->SetBinContent(2,1.05189e+07);
   Zee_jet_Njet_all_stack_5->SetBinContent(3,3544505);
   Zee_jet_Njet_all_stack_5->SetBinContent(4,779497.6);
   Zee_jet_Njet_all_stack_5->SetBinContent(5,154770.2);
   Zee_jet_Njet_all_stack_5->SetBinContent(6,31005.56);
   Zee_jet_Njet_all_stack_5->SetBinContent(7,6196.921);
   Zee_jet_Njet_all_stack_5->SetBinContent(8,1193.04);
   Zee_jet_Njet_all_stack_5->SetBinContent(9,257.0554);
   Zee_jet_Njet_all_stack_5->SetBinContent(10,49.98112);
   Zee_jet_Njet_all_stack_5->SetBinContent(11,11.55515);
   Zee_jet_Njet_all_stack_5->SetBinContent(12,1.894944);
   Zee_jet_Njet_all_stack_5->SetBinError(1,10760.86);
   Zee_jet_Njet_all_stack_5->SetBinError(2,3687.628);
   Zee_jet_Njet_all_stack_5->SetBinError(3,1925.45);
   Zee_jet_Njet_all_stack_5->SetBinError(4,875.1512);
   Zee_jet_Njet_all_stack_5->SetBinError(5,383.6761);
   Zee_jet_Njet_all_stack_5->SetBinError(6,169.6165);
   Zee_jet_Njet_all_stack_5->SetBinError(7,75.08479);
   Zee_jet_Njet_all_stack_5->SetBinError(8,32.30294);
   Zee_jet_Njet_all_stack_5->SetBinError(9,14.97081);
   Zee_jet_Njet_all_stack_5->SetBinError(10,6.41271);
   Zee_jet_Njet_all_stack_5->SetBinError(11,2.990127);
   Zee_jet_Njet_all_stack_5->SetBinError(12,1.14069);
   Zee_jet_Njet_all_stack_5->SetEntries(3.16349e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_jet_Njet_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_5->SetLineColor(ci);
   Zee_jet_Njet_all_stack_5->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_jet_Njet_all__71 = new TH1D("Zee_jet_Njet_all__71","",15,0,15);
   Zee_jet_Njet_all__71->SetBinContent(1,2.979334e+07);
   Zee_jet_Njet_all__71->SetBinContent(2,4714950);
   Zee_jet_Njet_all__71->SetBinContent(3,1281908);
   Zee_jet_Njet_all__71->SetBinContent(4,322947);
   Zee_jet_Njet_all__71->SetBinContent(5,81831);
   Zee_jet_Njet_all__71->SetBinContent(6,20397);
   Zee_jet_Njet_all__71->SetBinContent(7,5018);
   Zee_jet_Njet_all__71->SetBinContent(8,1239);
   Zee_jet_Njet_all__71->SetBinContent(9,322);
   Zee_jet_Njet_all__71->SetBinContent(10,64);
   Zee_jet_Njet_all__71->SetBinContent(11,13);
   Zee_jet_Njet_all__71->SetBinContent(12,7);
   Zee_jet_Njet_all__71->SetBinContent(13,3);
   Zee_jet_Njet_all__71->SetBinError(1,5458.327);
   Zee_jet_Njet_all__71->SetBinError(2,2171.394);
   Zee_jet_Njet_all__71->SetBinError(3,1132.214);
   Zee_jet_Njet_all__71->SetBinError(4,568.2843);
   Zee_jet_Njet_all__71->SetBinError(5,286.0612);
   Zee_jet_Njet_all__71->SetBinError(6,142.8181);
   Zee_jet_Njet_all__71->SetBinError(7,70.83784);
   Zee_jet_Njet_all__71->SetBinError(8,35.19943);
   Zee_jet_Njet_all__71->SetBinError(9,17.94436);
   Zee_jet_Njet_all__71->SetBinError(10,8);
   Zee_jet_Njet_all__71->SetBinError(11,3.605551);
   Zee_jet_Njet_all__71->SetBinError(12,2.645751);
   Zee_jet_Njet_all__71->SetBinError(13,1.732051);
   Zee_jet_Njet_all__71->SetEntries(3.622203e+07);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all__71->SetLineColor(ci);
   Zee_jet_Njet_all__71->SetLineWidth(2);
   Zee_jet_Njet_all__71->SetMarkerStyle(20);
   Zee_jet_Njet_all__71->SetMarkerSize(1.2);
   Zee_jet_Njet_all__71->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all__71->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_all_fx1071[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_Zee_jet_Njet_all_fy1071[15] = {
   3.958181e+07,
   1.056225e+07,
   3592680,
   802048.8,
   162977.6,
   33561.8,
   6910.393,
   1375.592,
   298.0737,
   56.85017,
   13.98624,
   2.177825,
   0.0844926,
   0.0831364,
   0};
   Double_t Graph_from_Zee_jet_Njet_all_fex1071[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_Zee_jet_Njet_all_fey1071[15] = {
   10761.54,
   3689.712,
   1929.039,
   878.4339,
   386.2159,
   171.2956,
   76.0895,
   32.87947,
   15.22278,
   6.486115,
   3.10338,
   1.160136,
   0.08256442,
   0.08255885,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_all_fx1071,Graph_from_Zee_jet_Njet_all_fy1071,Graph_from_Zee_jet_Njet_all_fex1071,Graph_from_Zee_jet_Njet_all_fey1071);
   gre->SetName("Graph_from_Zee_jet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet_all1071 = new TH1F("Graph_Graph_from_Zee_jet_Njet_all1071","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetMaximum(4.355183e+07);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet_all1071->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet_all1071);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_jet_Njet_all","Data (Z(ee) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_jet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zee_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__72 = new TH1D("data_mc_ratio__72","",15,0,15);
   data_mc_ratio__72->SetBinContent(1,0.7527027);
   data_mc_ratio__72->SetBinContent(2,0.4463962);
   data_mc_ratio__72->SetBinContent(3,0.356811);
   data_mc_ratio__72->SetBinContent(4,0.4026526);
   data_mc_ratio__72->SetBinContent(5,0.5020996);
   data_mc_ratio__72->SetBinContent(6,0.6077445);
   data_mc_ratio__72->SetBinContent(7,0.7261527);
   data_mc_ratio__72->SetBinContent(8,0.9007031);
   data_mc_ratio__72->SetBinContent(9,1.08027);
   data_mc_ratio__72->SetBinContent(10,1.125766);
   data_mc_ratio__72->SetBinContent(11,0.9294848);
   data_mc_ratio__72->SetBinContent(12,3.214216);
   data_mc_ratio__72->SetBinContent(13,35.50607);
   data_mc_ratio__72->SetBinError(1,0.0001378999);
   data_mc_ratio__72->SetBinError(2,0.0002055805);
   data_mc_ratio__72->SetBinError(3,0.0003151446);
   data_mc_ratio__72->SetBinError(4,0.0007085407);
   data_mc_ratio__72->SetBinError(5,0.001755218);
   data_mc_ratio__72->SetBinError(6,0.004255376);
   data_mc_ratio__72->SetBinError(7,0.01025091);
   data_mc_ratio__72->SetBinError(8,0.02558857);
   data_mc_ratio__72->SetBinError(9,0.06020109);
   data_mc_ratio__72->SetBinError(10,0.1407208);
   data_mc_ratio__72->SetBinError(11,0.2577927);
   data_mc_ratio__72->SetBinError(12,1.214859);
   data_mc_ratio__72->SetBinError(13,20.49944);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(1.330603);
   data_mc_ratio__72->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__72->SetLineColor(ci);
   data_mc_ratio__72->SetLineWidth(2);
   data_mc_ratio__72->SetMarkerStyle(20);
   data_mc_ratio__72->SetMarkerSize(1.2);
   data_mc_ratio__72->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__72->GetXaxis()->SetRange(1,10);
   data_mc_ratio__72->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__72->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__72->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__72->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__72->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__72->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1072[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_mc_statistical_error_fy1072[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1072[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1072[15] = {
   0.000271881,
   0.0003493301,
   0.0005369359,
   0.001095237,
   0.002369748,
   0.005103886,
   0.01101088,
   0.02390205,
   0.05107052,
   0.1140914,
   0.221888,
   0.5327041,
   0.9771793,
   0.993053,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0.006252278);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(2.191664);
   Graph_Graph_from_mc_statistical_error1072->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1072->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1072);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_All_amcnlo->cd();
   Njet_Z_jet_Zee_All_amcnlo->Modified();
   Njet_Z_jet_Zee_All_amcnlo->cd();
   Njet_Z_jet_Zee_All_amcnlo->SetSelected(Njet_Z_jet_Zee_All_amcnlo);
}
