void Njet_Z_jet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_16_amcnlo/Njet_Z_jet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:45:51 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_16_amcnlo = new TCanvas("Njet_Z_jet_Zee_16_amcnlo", "Njet_Z_jet_Zee_16_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_16_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_16_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_16_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_16_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_16_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_16_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-20439.09,10.52419,2.041866e+07);
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
   st->SetMaximum(1.749976e+07);
   
   TH1F *st_stack_33 = new TH1F("st_stack_33","",15,0,15);
   st_stack_33->SetMinimum(0.01);
   st_stack_33->SetMaximum(1.837475e+07);
   st_stack_33->SetDirectory(0);
   st_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_33->SetLineColor(ci);
   st_stack_33->GetXaxis()->SetRange(1,10);
   st_stack_33->GetXaxis()->SetLabelFont(42);
   st_stack_33->GetXaxis()->SetLabelSize(0.035);
   st_stack_33->GetXaxis()->SetTitleSize(0.035);
   st_stack_33->GetXaxis()->SetTitleFont(42);
   st_stack_33->GetYaxis()->SetTitle("Events/1.0");
   st_stack_33->GetYaxis()->SetLabelFont(42);
   st_stack_33->GetYaxis()->SetLabelSize(0.05);
   st_stack_33->GetYaxis()->SetTitleSize(0.057);
   st_stack_33->GetYaxis()->SetTitleOffset(1.2);
   st_stack_33->GetYaxis()->SetTitleFont(42);
   st_stack_33->GetZaxis()->SetLabelFont(42);
   st_stack_33->GetZaxis()->SetLabelSize(0.035);
   st_stack_33->GetZaxis()->SetTitleSize(0.035);
   st_stack_33->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_33);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,244.9692);
   Zee_jet_Njet_stack_1->SetBinContent(2,931.5013);
   Zee_jet_Njet_stack_1->SetBinContent(3,473.8697);
   Zee_jet_Njet_stack_1->SetBinContent(4,184.6834);
   Zee_jet_Njet_stack_1->SetBinContent(5,60.82841);
   Zee_jet_Njet_stack_1->SetBinContent(6,18.32819);
   Zee_jet_Njet_stack_1->SetBinContent(7,3.449689);
   Zee_jet_Njet_stack_1->SetBinContent(8,0.9845591);
   Zee_jet_Njet_stack_1->SetBinContent(9,0.1970237);
   Zee_jet_Njet_stack_1->SetBinError(1,6.727528);
   Zee_jet_Njet_stack_1->SetBinError(2,13.3978);
   Zee_jet_Njet_stack_1->SetBinError(3,9.544663);
   Zee_jet_Njet_stack_1->SetBinError(4,5.96506);
   Zee_jet_Njet_stack_1->SetBinError(5,3.417513);
   Zee_jet_Njet_stack_1->SetBinError(6,1.879702);
   Zee_jet_Njet_stack_1->SetBinError(7,0.8016394);
   Zee_jet_Njet_stack_1->SetBinError(8,0.4403085);
   Zee_jet_Njet_stack_1->SetBinError(9,0.1970237);
   Zee_jet_Njet_stack_1->SetEntries(10439);

   ci = TColor::GetColor("#ff6600");
   Zee_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_1->SetLineColor(ci);
   Zee_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_1,"");
   
   TH1D *Zee_jet_Njet_stack_2 = new TH1D("Zee_jet_Njet_stack_2","",15,0,15);
   Zee_jet_Njet_stack_2->SetBinContent(1,6229.154);
   Zee_jet_Njet_stack_2->SetBinContent(2,5620.563);
   Zee_jet_Njet_stack_2->SetBinContent(3,3578.788);
   Zee_jet_Njet_stack_2->SetBinContent(4,1122.392);
   Zee_jet_Njet_stack_2->SetBinContent(5,302.9117);
   Zee_jet_Njet_stack_2->SetBinContent(6,76.32625);
   Zee_jet_Njet_stack_2->SetBinContent(7,17.1128);
   Zee_jet_Njet_stack_2->SetBinContent(8,2.460593);
   Zee_jet_Njet_stack_2->SetBinError(1,50.80919);
   Zee_jet_Njet_stack_2->SetBinError(2,46.6399);
   Zee_jet_Njet_stack_2->SetBinError(3,36.60402);
   Zee_jet_Njet_stack_2->SetBinError(4,20.46191);
   Zee_jet_Njet_stack_2->SetBinError(5,10.61296);
   Zee_jet_Njet_stack_2->SetBinError(6,5.369784);
   Zee_jet_Njet_stack_2->SetBinError(7,2.537525);
   Zee_jet_Njet_stack_2->SetBinError(8,0.9442515);
   Zee_jet_Njet_stack_2->SetEntries(44892);

   ci = TColor::GetColor("#cccc00");
   Zee_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_2->SetLineColor(ci);
   Zee_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_2,"");
   
   TH1D *Zee_jet_Njet_stack_3 = new TH1D("Zee_jet_Njet_stack_3","",15,0,15);
   Zee_jet_Njet_stack_3->SetBinContent(1,616.9374);
   Zee_jet_Njet_stack_3->SetBinContent(2,4093.637);
   Zee_jet_Njet_stack_3->SetBinContent(3,7536.257);
   Zee_jet_Njet_stack_3->SetBinContent(4,4081.368);
   Zee_jet_Njet_stack_3->SetBinContent(5,1625.498);
   Zee_jet_Njet_stack_3->SetBinContent(6,551.5047);
   Zee_jet_Njet_stack_3->SetBinContent(7,166.3083);
   Zee_jet_Njet_stack_3->SetBinContent(8,45.76398);
   Zee_jet_Njet_stack_3->SetBinContent(9,11.29494);
   Zee_jet_Njet_stack_3->SetBinContent(10,2.336884);
   Zee_jet_Njet_stack_3->SetBinContent(11,0.7789614);
   Zee_jet_Njet_stack_3->SetBinContent(12,0.1947403);
   Zee_jet_Njet_stack_3->SetBinError(1,10.96096);
   Zee_jet_Njet_stack_3->SetBinError(2,28.23466);
   Zee_jet_Njet_stack_3->SetBinError(3,38.30944);
   Zee_jet_Njet_stack_3->SetBinError(4,28.19232);
   Zee_jet_Njet_stack_3->SetBinError(5,17.79185);
   Zee_jet_Njet_stack_3->SetBinError(6,10.36341);
   Zee_jet_Njet_stack_3->SetBinError(7,5.690951);
   Zee_jet_Njet_stack_3->SetBinError(8,2.985313);
   Zee_jet_Njet_stack_3->SetBinError(9,1.483098);
   Zee_jet_Njet_stack_3->SetBinError(10,0.6746004);
   Zee_jet_Njet_stack_3->SetBinError(11,0.3894807);
   Zee_jet_Njet_stack_3->SetBinError(12,0.1947403);
   Zee_jet_Njet_stack_3->SetEntries(96189);

   ci = TColor::GetColor("#0000cc");
   Zee_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_3->SetLineColor(ci);
   Zee_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_3,"");
   
   TH1D *Zee_jet_Njet_stack_4 = new TH1D("Zee_jet_Njet_stack_4","",15,0,15);
   Zee_jet_Njet_stack_4->SetBinContent(1,9.383415);
   Zee_jet_Njet_stack_4->SetBinContent(2,56.21935);
   Zee_jet_Njet_stack_4->SetBinContent(3,79.31275);
   Zee_jet_Njet_stack_4->SetBinContent(4,30.25934);
   Zee_jet_Njet_stack_4->SetBinContent(5,10.19251);
   Zee_jet_Njet_stack_4->SetBinContent(6,3.26362);
   Zee_jet_Njet_stack_4->SetBinContent(7,1.027017);
   Zee_jet_Njet_stack_4->SetBinContent(8,0.3002229);
   Zee_jet_Njet_stack_4->SetBinContent(9,0.1020062);
   Zee_jet_Njet_stack_4->SetBinContent(10,0.02376282);
   Zee_jet_Njet_stack_4->SetBinContent(11,0.003477486);
   Zee_jet_Njet_stack_4->SetBinContent(12,0.001159162);
   Zee_jet_Njet_stack_4->SetBinContent(13,0.0005795809);
   Zee_jet_Njet_stack_4->SetBinContent(14,0.0005795809);
   Zee_jet_Njet_stack_4->SetBinError(1,0.07374584);
   Zee_jet_Njet_stack_4->SetBinError(2,0.1805095);
   Zee_jet_Njet_stack_4->SetBinError(3,0.2144019);
   Zee_jet_Njet_stack_4->SetBinError(4,0.1324301);
   Zee_jet_Njet_stack_4->SetBinError(5,0.07685951);
   Zee_jet_Njet_stack_4->SetBinError(6,0.04349175);
   Zee_jet_Njet_stack_4->SetBinError(7,0.02439754);
   Zee_jet_Njet_stack_4->SetBinError(8,0.01319104);
   Zee_jet_Njet_stack_4->SetBinError(9,0.00768901);
   Zee_jet_Njet_stack_4->SetBinError(10,0.003711129);
   Zee_jet_Njet_stack_4->SetBinError(11,0.001419678);
   Zee_jet_Njet_stack_4->SetBinError(12,0.0008196512);
   Zee_jet_Njet_stack_4->SetBinError(13,0.0005795809);
   Zee_jet_Njet_stack_4->SetBinError(14,0.0005795809);
   Zee_jet_Njet_stack_4->SetEntries(327978);

   ci = TColor::GetColor("#cc0000");
   Zee_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_4->SetLineColor(ci);
   Zee_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_4,"");
   
   TH1D *Zee_jet_Njet_stack_5 = new TH1D("Zee_jet_Njet_stack_5","",15,0,15);
   Zee_jet_Njet_stack_5->SetBinContent(1,9617770);
   Zee_jet_Njet_stack_5->SetBinContent(2,2521696);
   Zee_jet_Njet_stack_5->SetBinContent(3,844422.7);
   Zee_jet_Njet_stack_5->SetBinContent(4,203234.1);
   Zee_jet_Njet_stack_5->SetBinContent(5,44007.66);
   Zee_jet_Njet_stack_5->SetBinContent(6,9557.133);
   Zee_jet_Njet_stack_5->SetBinContent(7,2091.746);
   Zee_jet_Njet_stack_5->SetBinContent(8,451.2027);
   Zee_jet_Njet_stack_5->SetBinContent(9,95.96974);
   Zee_jet_Njet_stack_5->SetBinContent(10,19.49385);
   Zee_jet_Njet_stack_5->SetBinContent(11,5.498266);
   Zee_jet_Njet_stack_5->SetBinContent(12,0.9996848);
   Zee_jet_Njet_stack_5->SetBinError(1,4489.288);
   Zee_jet_Njet_stack_5->SetBinError(2,1500.691);
   Zee_jet_Njet_stack_5->SetBinError(3,719.904);
   Zee_jet_Njet_stack_5->SetBinError(4,337.7143);
   Zee_jet_Njet_stack_5->SetBinError(5,154.9847);
   Zee_jet_Njet_stack_5->SetBinError(6,71.55854);
   Zee_jet_Njet_stack_5->SetBinError(7,33.06443);
   Zee_jet_Njet_stack_5->SetBinError(8,15.31171);
   Zee_jet_Njet_stack_5->SetBinError(9,6.926019);
   Zee_jet_Njet_stack_5->SetBinError(10,3.121515);
   Zee_jet_Njet_stack_5->SetBinError(11,1.65779);
   Zee_jet_Njet_stack_5->SetBinError(12,0.7068839);
   Zee_jet_Njet_stack_5->SetEntries(1.076043e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_jet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_5->SetLineColor(ci);
   Zee_jet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_jet_Njet__65 = new TH1D("Zee_jet_Njet__65","",15,0,15);
   Zee_jet_Njet__65->SetBinContent(1,7623716);
   Zee_jet_Njet__65->SetBinContent(2,1139652);
   Zee_jet_Njet__65->SetBinContent(3,307999);
   Zee_jet_Njet__65->SetBinContent(4,76875);
   Zee_jet_Njet__65->SetBinContent(5,19664);
   Zee_jet_Njet__65->SetBinContent(6,4685);
   Zee_jet_Njet__65->SetBinContent(7,1155);
   Zee_jet_Njet__65->SetBinContent(8,319);
   Zee_jet_Njet__65->SetBinContent(9,72);
   Zee_jet_Njet__65->SetBinContent(10,17);
   Zee_jet_Njet__65->SetBinContent(11,5);
   Zee_jet_Njet__65->SetBinContent(13,1);
   Zee_jet_Njet__65->SetBinError(1,2761.108);
   Zee_jet_Njet__65->SetBinError(2,1067.545);
   Zee_jet_Njet__65->SetBinError(3,554.9766);
   Zee_jet_Njet__65->SetBinError(4,277.2634);
   Zee_jet_Njet__65->SetBinError(5,140.2284);
   Zee_jet_Njet__65->SetBinError(6,68.44706);
   Zee_jet_Njet__65->SetBinError(7,33.98529);
   Zee_jet_Njet__65->SetBinError(8,17.86057);
   Zee_jet_Njet__65->SetBinError(9,8.485281);
   Zee_jet_Njet__65->SetBinError(10,4.123106);
   Zee_jet_Njet__65->SetBinError(11,2.236068);
   Zee_jet_Njet__65->SetBinError(13,1);
   Zee_jet_Njet__65->SetEntries(9174160);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__65->SetLineColor(ci);
   Zee_jet_Njet__65->SetLineWidth(2);
   Zee_jet_Njet__65->SetMarkerStyle(20);
   Zee_jet_Njet__65->SetMarkerSize(1.2);
   Zee_jet_Njet__65->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__65->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__65->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1065[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fy1065[15] = {
   9624871,
   2532398,
   856090.9,
   208652.8,
   46007.09,
   10206.56,
   2279.644,
   500.7121,
   107.5637,
   21.8545,
   6.280705,
   1.195584,
   0.0005795809,
   0.0005795809,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1065[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fey1065[15] = {
   4489.594,
   1501.741,
   721.9144,
   339.5586,
   156.4005,
   72.52858,
   33.65599,
   15.63478,
   7.085775,
   3.19358,
   1.702928,
   0.7332185,
   0.0005795809,
   0.0005795809,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1065,Graph_from_Zee_jet_Njet_fy1065,Graph_from_Zee_jet_Njet_fex1065,Graph_from_Zee_jet_Njet_fey1065);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1065 = new TH1F("Graph_Graph_from_Zee_jet_Njet1065","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1065->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet1065->SetMaximum(1.05923e+07);
   Graph_Graph_from_Zee_jet_Njet1065->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1065->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1065);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_jet_Njet","Data (Z(ee) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_jet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_jet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__66 = new TH1D("data_mc_ratio__66","",15,0,15);
   data_mc_ratio__66->SetBinContent(1,0.792085);
   data_mc_ratio__66->SetBinContent(2,0.4500288);
   data_mc_ratio__66->SetBinContent(3,0.3597737);
   data_mc_ratio__66->SetBinContent(4,0.368435);
   data_mc_ratio__66->SetBinContent(5,0.4274124);
   data_mc_ratio__66->SetBinContent(6,0.4590187);
   data_mc_ratio__66->SetBinContent(7,0.5066582);
   data_mc_ratio__66->SetBinContent(8,0.6370927);
   data_mc_ratio__66->SetBinContent(9,0.6693707);
   data_mc_ratio__66->SetBinContent(10,0.7778718);
   data_mc_ratio__66->SetBinContent(11,0.7960889);
   data_mc_ratio__66->SetBinContent(13,1725.385);
   data_mc_ratio__66->SetBinError(1,0.0002868722);
   data_mc_ratio__66->SetBinError(2,0.0004215549);
   data_mc_ratio__66->SetBinError(3,0.0006482683);
   data_mc_ratio__66->SetBinError(4,0.001328826);
   data_mc_ratio__66->SetBinError(5,0.003047973);
   data_mc_ratio__66->SetBinError(6,0.006706186);
   data_mc_ratio__66->SetBinError(7,0.01490816);
   data_mc_ratio__66->SetBinError(8,0.03567034);
   data_mc_ratio__66->SetBinError(9,0.0788861);
   data_mc_ratio__66->SetBinError(10,0.1886616);
   data_mc_ratio__66->SetBinError(11,0.3560218);
   data_mc_ratio__66->SetBinError(13,1725.385);
   data_mc_ratio__66->SetMinimum(0.4);
   data_mc_ratio__66->SetMaximum(1.6);
   data_mc_ratio__66->SetEntries(0.5036253);
   data_mc_ratio__66->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__66->SetLineColor(ci);
   data_mc_ratio__66->SetLineWidth(2);
   data_mc_ratio__66->SetMarkerStyle(20);
   data_mc_ratio__66->SetMarkerSize(1.2);
   data_mc_ratio__66->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__66->GetXaxis()->SetRange(1,10);
   data_mc_ratio__66->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__66->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__66->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__66->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__66->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__66->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1066[15] = {
   0.0004664576,
   0.0005930112,
   0.0008432684,
   0.001627386,
   0.003399488,
   0.007106078,
   0.01476371,
   0.03122508,
   0.06587514,
   0.1461292,
   0.2711364,
   0.6132721,
   1,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1066,Graph_from_mc_statistical_error_fy1066,Graph_from_mc_statistical_error_fex1066,Graph_from_mc_statistical_error_fey1066);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1066 = new TH1F("Graph_Graph_from_mc_statistical_error1066","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1066->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1066->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1066->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1066->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1066);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_16_amcnlo->cd();
   Njet_Z_jet_Zee_16_amcnlo->Modified();
   Njet_Z_jet_Zee_16_amcnlo->cd();
   Njet_Z_jet_Zee_16_amcnlo->SetSelected(Njet_Z_jet_Zee_16_amcnlo);
}
