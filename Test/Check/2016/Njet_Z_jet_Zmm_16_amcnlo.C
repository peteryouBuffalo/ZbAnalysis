void Njet_Z_jet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_16_amcnlo/Njet_Z_jet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:45:58 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_16_amcnlo = new TCanvas("Njet_Z_jet_Zmm_16_amcnlo", "Njet_Z_jet_Zmm_16_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_16_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_16_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_16_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_16_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_16_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_16_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-30490.04,10.52419,3.045956e+07);
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
   st->SetMaximum(2.610529e+07);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",15,0,15);
   st_stack_73->SetMinimum(0.01);
   st_stack_73->SetMaximum(2.741055e+07);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetRange(1,10);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetLabelSize(0.035);
   st_stack_73->GetXaxis()->SetTitleSize(0.035);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Events/1.0");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetLabelSize(0.05);
   st_stack_73->GetYaxis()->SetTitleSize(0.057);
   st_stack_73->GetYaxis()->SetTitleOffset(1.2);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetLabelSize(0.035);
   st_stack_73->GetZaxis()->SetTitleSize(0.035);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,349.9021);
   Zmm_jet_Njet_stack_1->SetBinContent(2,1213.996);
   Zmm_jet_Njet_stack_1->SetBinContent(3,635.7094);
   Zmm_jet_Njet_stack_1->SetBinContent(4,243.4764);
   Zmm_jet_Njet_stack_1->SetBinContent(5,78.71413);
   Zmm_jet_Njet_stack_1->SetBinContent(6,20.86596);
   Zmm_jet_Njet_stack_1->SetBinContent(7,6.220348);
   Zmm_jet_Njet_stack_1->SetBinContent(8,1.972146);
   Zmm_jet_Njet_stack_1->SetBinContent(9,0.7869761);
   Zmm_jet_Njet_stack_1->SetBinError(1,7.985575);
   Zmm_jet_Njet_stack_1->SetBinError(2,15.22732);
   Zmm_jet_Njet_stack_1->SetBinError(3,11.03527);
   Zmm_jet_Njet_stack_1->SetBinError(4,6.85507);
   Zmm_jet_Njet_stack_1->SetBinError(5,3.897816);
   Zmm_jet_Njet_stack_1->SetBinError(6,2.013385);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.099091);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.6017252);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.3934885);
   Zmm_jet_Njet_stack_1->SetEntries(14117);

   ci = TColor::GetColor("#ff6600");
   Zmm_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_1->SetLineColor(ci);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_1,"");
   
   TH1D *Zmm_jet_Njet_stack_2 = new TH1D("Zmm_jet_Njet_stack_2","",15,0,15);
   Zmm_jet_Njet_stack_2->SetBinContent(1,8984.063);
   Zmm_jet_Njet_stack_2->SetBinContent(2,7616.373);
   Zmm_jet_Njet_stack_2->SetBinContent(3,4834.132);
   Zmm_jet_Njet_stack_2->SetBinContent(4,1515.545);
   Zmm_jet_Njet_stack_2->SetBinContent(5,398.7079);
   Zmm_jet_Njet_stack_2->SetBinContent(6,102.4282);
   Zmm_jet_Njet_stack_2->SetBinContent(7,21.82642);
   Zmm_jet_Njet_stack_2->SetBinContent(8,2.585346);
   Zmm_jet_Njet_stack_2->SetBinContent(10,0.7208484);
   Zmm_jet_Njet_stack_2->SetBinError(1,61.0206);
   Zmm_jet_Njet_stack_2->SetBinError(2,54.20759);
   Zmm_jet_Njet_stack_2->SetBinError(3,42.57081);
   Zmm_jet_Njet_stack_2->SetBinError(4,23.81269);
   Zmm_jet_Njet_stack_2->SetBinError(5,12.26017);
   Zmm_jet_Njet_stack_2->SetBinError(6,6.176646);
   Zmm_jet_Njet_stack_2->SetBinError(7,2.88074);
   Zmm_jet_Njet_stack_2->SetBinError(8,0.9907265);
   Zmm_jet_Njet_stack_2->SetBinError(10,0.5172938);
   Zmm_jet_Njet_stack_2->SetEntries(62131);

   ci = TColor::GetColor("#cccc00");
   Zmm_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_2->SetLineColor(ci);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_2,"");
   
   TH1D *Zmm_jet_Njet_stack_3 = new TH1D("Zmm_jet_Njet_stack_3","",15,0,15);
   Zmm_jet_Njet_stack_3->SetBinContent(1,856.6628);
   Zmm_jet_Njet_stack_3->SetBinContent(2,5452.924);
   Zmm_jet_Njet_stack_3->SetBinContent(3,9883.657);
   Zmm_jet_Njet_stack_3->SetBinContent(4,5291.485);
   Zmm_jet_Njet_stack_3->SetBinContent(5,2008.162);
   Zmm_jet_Njet_stack_3->SetBinContent(6,648.2906);
   Zmm_jet_Njet_stack_3->SetBinContent(7,200.3878);
   Zmm_jet_Njet_stack_3->SetBinContent(8,51.02197);
   Zmm_jet_Njet_stack_3->SetBinContent(9,12.26864);
   Zmm_jet_Njet_stack_3->SetBinContent(10,3.700067);
   Zmm_jet_Njet_stack_3->SetBinContent(11,0.9737017);
   Zmm_jet_Njet_stack_3->SetBinError(1,12.91615);
   Zmm_jet_Njet_stack_3->SetBinError(2,32.58687);
   Zmm_jet_Njet_stack_3->SetBinError(3,43.87194);
   Zmm_jet_Njet_stack_3->SetBinError(4,32.10087);
   Zmm_jet_Njet_stack_3->SetBinError(5,19.7755);
   Zmm_jet_Njet_stack_3->SetBinError(6,11.23603);
   Zmm_jet_Njet_stack_3->SetBinError(7,6.246887);
   Zmm_jet_Njet_stack_3->SetBinError(8,3.152148);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.545704);
   Zmm_jet_Njet_stack_3->SetBinError(10,0.8488535);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.4354527);
   Zmm_jet_Njet_stack_3->SetEntries(125344);

   ci = TColor::GetColor("#0000cc");
   Zmm_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_3->SetLineColor(ci);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_3,"");
   
   TH1D *Zmm_jet_Njet_stack_4 = new TH1D("Zmm_jet_Njet_stack_4","",15,0,15);
   Zmm_jet_Njet_stack_4->SetBinContent(1,14.25363);
   Zmm_jet_Njet_stack_4->SetBinContent(2,77.0066);
   Zmm_jet_Njet_stack_4->SetBinContent(3,107.6021);
   Zmm_jet_Njet_stack_4->SetBinContent(4,40.57646);
   Zmm_jet_Njet_stack_4->SetBinContent(5,13.31239);
   Zmm_jet_Njet_stack_4->SetBinContent(6,4.297593);
   Zmm_jet_Njet_stack_4->SetBinContent(7,1.252474);
   Zmm_jet_Njet_stack_4->SetBinContent(8,0.3657156);
   Zmm_jet_Njet_stack_4->SetBinContent(9,0.1101204);
   Zmm_jet_Njet_stack_4->SetBinContent(10,0.03187695);
   Zmm_jet_Njet_stack_4->SetBinContent(11,0.007534552);
   Zmm_jet_Njet_stack_4->SetBinContent(12,0.002318324);
   Zmm_jet_Njet_stack_4->SetBinContent(14,0.0005795809);
   Zmm_jet_Njet_stack_4->SetBinError(1,0.09089078);
   Zmm_jet_Njet_stack_4->SetBinError(2,0.2112618);
   Zmm_jet_Njet_stack_4->SetBinError(3,0.2497281);
   Zmm_jet_Njet_stack_4->SetBinError(4,0.1533537);
   Zmm_jet_Njet_stack_4->SetBinError(5,0.08783855);
   Zmm_jet_Njet_stack_4->SetBinError(6,0.04990794);
   Zmm_jet_Njet_stack_4->SetBinError(7,0.02694272);
   Zmm_jet_Njet_stack_4->SetBinError(8,0.01455891);
   Zmm_jet_Njet_stack_4->SetBinError(9,0.007988972);
   Zmm_jet_Njet_stack_4->SetBinError(10,0.004298287);
   Zmm_jet_Njet_stack_4->SetBinError(11,0.002089709);
   Zmm_jet_Njet_stack_4->SetBinError(12,0.001159162);
   Zmm_jet_Njet_stack_4->SetBinError(14,0.0005795809);
   Zmm_jet_Njet_stack_4->SetEntries(446563);

   ci = TColor::GetColor("#cc0000");
   Zmm_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_4->SetLineColor(ci);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_4,"");
   
   TH1D *Zmm_jet_Njet_stack_5 = new TH1D("Zmm_jet_Njet_stack_5","",15,0,15);
   Zmm_jet_Njet_stack_5->SetBinContent(1,1.43477e+07);
   Zmm_jet_Njet_stack_5->SetBinContent(2,3596529);
   Zmm_jet_Njet_stack_5->SetBinContent(3,1170895);
   Zmm_jet_Njet_stack_5->SetBinContent(4,276626.7);
   Zmm_jet_Njet_stack_5->SetBinContent(5,59575.3);
   Zmm_jet_Njet_stack_5->SetBinContent(6,12885.51);
   Zmm_jet_Njet_stack_5->SetBinContent(7,2830.043);
   Zmm_jet_Njet_stack_5->SetBinContent(8,638.3757);
   Zmm_jet_Njet_stack_5->SetBinContent(9,123.729);
   Zmm_jet_Njet_stack_5->SetBinContent(10,28.49102);
   Zmm_jet_Njet_stack_5->SetBinContent(11,3.998739);
   Zmm_jet_Njet_stack_5->SetBinContent(12,1.99937);
   Zmm_jet_Njet_stack_5->SetBinError(1,5486.652);
   Zmm_jet_Njet_stack_5->SetBinError(2,1795.937);
   Zmm_jet_Njet_stack_5->SetBinError(3,837.7464);
   Zmm_jet_Njet_stack_5->SetBinError(4,389.7727);
   Zmm_jet_Njet_stack_5->SetBinError(5,178.7778);
   Zmm_jet_Njet_stack_5->SetBinError(6,82.47374);
   Zmm_jet_Njet_stack_5->SetBinError(7,38.4996);
   Zmm_jet_Njet_stack_5->SetBinError(8,18.10524);
   Zmm_jet_Njet_stack_5->SetBinError(9,7.877227);
   Zmm_jet_Njet_stack_5->SetBinError(10,3.773727);
   Zmm_jet_Njet_stack_5->SetBinError(11,1.413768);
   Zmm_jet_Njet_stack_5->SetBinError(12,0.9996848);
   Zmm_jet_Njet_stack_5->SetEntries(1.556838e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_jet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_5->SetLineColor(ci);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_jet_Njet__145 = new TH1D("Zmm_jet_Njet__145","",15,0,15);
   Zmm_jet_Njet__145->SetBinContent(1,1.164966e+07);
   Zmm_jet_Njet__145->SetBinContent(2,1676172);
   Zmm_jet_Njet__145->SetBinContent(3,431923);
   Zmm_jet_Njet__145->SetBinContent(4,105796);
   Zmm_jet_Njet__145->SetBinContent(5,26582);
   Zmm_jet_Njet__145->SetBinContent(6,6521);
   Zmm_jet_Njet__145->SetBinContent(7,1665);
   Zmm_jet_Njet__145->SetBinContent(8,385);
   Zmm_jet_Njet__145->SetBinContent(9,90);
   Zmm_jet_Njet__145->SetBinContent(10,29);
   Zmm_jet_Njet__145->SetBinContent(11,4);
   Zmm_jet_Njet__145->SetBinContent(13,1);
   Zmm_jet_Njet__145->SetBinError(1,3413.159);
   Zmm_jet_Njet__145->SetBinError(2,1294.671);
   Zmm_jet_Njet__145->SetBinError(3,657.2085);
   Zmm_jet_Njet__145->SetBinError(4,325.263);
   Zmm_jet_Njet__145->SetBinError(5,163.0399);
   Zmm_jet_Njet__145->SetBinError(6,80.75271);
   Zmm_jet_Njet__145->SetBinError(7,40.80441);
   Zmm_jet_Njet__145->SetBinError(8,19.62142);
   Zmm_jet_Njet__145->SetBinError(9,9.486833);
   Zmm_jet_Njet__145->SetBinError(10,5.385165);
   Zmm_jet_Njet__145->SetBinError(11,2);
   Zmm_jet_Njet__145->SetBinError(13,1);
   Zmm_jet_Njet__145->SetEntries(1.389882e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__145->SetLineColor(ci);
   Zmm_jet_Njet__145->SetLineWidth(2);
   Zmm_jet_Njet__145->SetMarkerStyle(20);
   Zmm_jet_Njet__145->SetMarkerSize(1.2);
   Zmm_jet_Njet__145->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__145->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1145[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fy1145[15] = {
   1.435791e+07,
   3610889,
   1186356,
   283717.7,
   62074.2,
   13661.39,
   3059.73,
   694.3209,
   136.8947,
   32.94381,
   4.979975,
   2.001688,
   0,
   0.0005795809,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1145[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fey1145[15] = {
   5487.012,
   1797.115,
   840.0463,
   391.8767,
   180.3277,
   83.48876,
   39.1248,
   18.41412,
   8.037089,
   3.902458,
   1.479312,
   0.9996855,
   0,
   0.0005795809,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1145,Graph_from_Zmm_jet_Njet_fy1145,Graph_from_Zmm_jet_Njet_fex1145,Graph_from_Zmm_jet_Njet_fey1145);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1145 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1145","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1145->SetMinimum(0);
   Graph_Graph_from_Zmm_jet_Njet1145->SetMaximum(1.579973e+07);
   Graph_Graph_from_Zmm_jet_Njet1145->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1145->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1145);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_jet_Njet","Data (Z(#mu#mu) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_jet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_jet_Njet","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__146 = new TH1D("data_mc_ratio__146","",15,0,15);
   data_mc_ratio__146->SetBinContent(1,0.8113757);
   data_mc_ratio__146->SetBinContent(2,0.4641992);
   data_mc_ratio__146->SetBinContent(3,0.3640753);
   data_mc_ratio__146->SetBinContent(4,0.3728917);
   data_mc_ratio__146->SetBinContent(5,0.4282294);
   data_mc_ratio__146->SetBinContent(6,0.4773307);
   data_mc_ratio__146->SetBinContent(7,0.5441656);
   data_mc_ratio__146->SetBinContent(8,0.5544987);
   data_mc_ratio__146->SetBinContent(9,0.6574394);
   data_mc_ratio__146->SetBinContent(10,0.8802868);
   data_mc_ratio__146->SetBinContent(11,0.8032168);
   data_mc_ratio__146->SetBinError(1,0.0002377198);
   data_mc_ratio__146->SetBinError(2,0.0003585462);
   data_mc_ratio__146->SetBinError(3,0.0005539724);
   data_mc_ratio__146->SetBinError(4,0.001146432);
   data_mc_ratio__146->SetBinError(5,0.002626532);
   data_mc_ratio__146->SetBinError(6,0.005911018);
   data_mc_ratio__146->SetBinError(7,0.01333595);
   data_mc_ratio__146->SetBinError(8,0.02825987);
   data_mc_ratio__146->SetBinError(9,0.0693002);
   data_mc_ratio__146->SetBinError(10,0.1634652);
   data_mc_ratio__146->SetBinError(11,0.4016084);
   data_mc_ratio__146->SetMinimum(0.4);
   data_mc_ratio__146->SetMaximum(1.6);
   data_mc_ratio__146->SetEntries(153.4565);
   data_mc_ratio__146->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__146->SetLineColor(ci);
   data_mc_ratio__146->SetLineWidth(2);
   data_mc_ratio__146->SetMarkerStyle(20);
   data_mc_ratio__146->SetMarkerSize(1.2);
   data_mc_ratio__146->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__146->GetXaxis()->SetRange(1,10);
   data_mc_ratio__146->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__146->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__146->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__146->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__146->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__146->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__146->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__146->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__146->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__146->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__146->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__146->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__146->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__146->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1146[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1146[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1146[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1146[15] = {
   0.0003821596,
   0.0004976932,
   0.0007080895,
   0.00138122,
   0.002905034,
   0.006111294,
   0.01278701,
   0.02652105,
   0.05870999,
   0.118458,
   0.297052,
   0.4994212,
   0,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1146,Graph_from_mc_statistical_error_fy1146,Graph_from_mc_statistical_error_fex1146,Graph_from_mc_statistical_error_fey1146);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1146 = new TH1F("Graph_Graph_from_mc_statistical_error1146","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1146->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1146->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1146->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1146->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1146->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1146);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_16_amcnlo->cd();
   Njet_Z_jet_Zmm_16_amcnlo->Modified();
   Njet_Z_jet_Zmm_16_amcnlo->cd();
   Njet_Z_jet_Zmm_16_amcnlo->SetSelected(Njet_Z_jet_Zmm_16_amcnlo);
}
