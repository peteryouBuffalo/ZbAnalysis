void Njet_Z_jet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_18_amcnlo/Njet_Z_jet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:45:59 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_18_amcnlo = new TCanvas("Njet_Z_jet_Zmm_18_amcnlo", "Njet_Z_jet_Zmm_18_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_18_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_18_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_18_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_18_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_18_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_18_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-51717.42,10.52419,5.166571e+07);
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
   st->SetMaximum(4.427997e+07);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",15,0,15);
   st_stack_75->SetMinimum(0.01);
   st_stack_75->SetMaximum(4.649396e+07);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetRange(1,10);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetLabelSize(0.035);
   st_stack_75->GetXaxis()->SetTitleSize(0.035);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/1.0");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetLabelSize(0.05);
   st_stack_75->GetYaxis()->SetTitleSize(0.057);
   st_stack_75->GetYaxis()->SetTitleOffset(1.2);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetLabelSize(0.035);
   st_stack_75->GetZaxis()->SetTitleSize(0.035);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,632.6978);
   Zmm_jet_Njet_stack_1->SetBinContent(2,2128.122);
   Zmm_jet_Njet_stack_1->SetBinContent(3,1211.714);
   Zmm_jet_Njet_stack_1->SetBinContent(4,437.0119);
   Zmm_jet_Njet_stack_1->SetBinContent(5,119.5095);
   Zmm_jet_Njet_stack_1->SetBinContent(6,30.00502);
   Zmm_jet_Njet_stack_1->SetBinContent(7,6.898288);
   Zmm_jet_Njet_stack_1->SetBinContent(8,1.443111);
   Zmm_jet_Njet_stack_1->SetBinContent(9,0.2944187);
   Zmm_jet_Njet_stack_1->SetBinError(1,12.04706);
   Zmm_jet_Njet_stack_1->SetBinError(2,23.30584);
   Zmm_jet_Njet_stack_1->SetBinError(3,17.6773);
   Zmm_jet_Njet_stack_1->SetBinError(4,10.68384);
   Zmm_jet_Njet_stack_1->SetBinError(5,5.586323);
   Zmm_jet_Njet_stack_1->SetBinError(6,2.799351);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.349031);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.6268471);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.2446364);
   Zmm_jet_Njet_stack_1->SetEntries(22426);

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
   Zmm_jet_Njet_stack_2->SetBinContent(1,15646.25);
   Zmm_jet_Njet_stack_2->SetBinContent(2,13025.94);
   Zmm_jet_Njet_stack_2->SetBinContent(3,8341.166);
   Zmm_jet_Njet_stack_2->SetBinContent(4,2490.739);
   Zmm_jet_Njet_stack_2->SetBinContent(5,594.0557);
   Zmm_jet_Njet_stack_2->SetBinContent(6,117.8479);
   Zmm_jet_Njet_stack_2->SetBinContent(7,25.68063);
   Zmm_jet_Njet_stack_2->SetBinContent(8,3.442832);
   Zmm_jet_Njet_stack_2->SetBinError(1,105.012);
   Zmm_jet_Njet_stack_2->SetBinError(2,92.50331);
   Zmm_jet_Njet_stack_2->SetBinError(3,72.78364);
   Zmm_jet_Njet_stack_2->SetBinError(4,39.83254);
   Zmm_jet_Njet_stack_2->SetBinError(5,19.43634);
   Zmm_jet_Njet_stack_2->SetBinError(6,8.614121);
   Zmm_jet_Njet_stack_2->SetBinError(7,4.029609);
   Zmm_jet_Njet_stack_2->SetBinError(8,1.429515);
   Zmm_jet_Njet_stack_2->SetEntries(62859);

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
   Zmm_jet_Njet_stack_3->SetBinContent(1,1442.851);
   Zmm_jet_Njet_stack_3->SetBinContent(2,9349.761);
   Zmm_jet_Njet_stack_3->SetBinContent(3,17424.95);
   Zmm_jet_Njet_stack_3->SetBinContent(4,9439.943);
   Zmm_jet_Njet_stack_3->SetBinContent(5,3702.217);
   Zmm_jet_Njet_stack_3->SetBinContent(6,1161.149);
   Zmm_jet_Njet_stack_3->SetBinContent(7,325.295);
   Zmm_jet_Njet_stack_3->SetBinContent(8,83.09552);
   Zmm_jet_Njet_stack_3->SetBinContent(9,18.42048);
   Zmm_jet_Njet_stack_3->SetBinContent(10,4.585544);
   Zmm_jet_Njet_stack_3->SetBinContent(11,1.035601);
   Zmm_jet_Njet_stack_3->SetBinContent(12,0.4765222);
   Zmm_jet_Njet_stack_3->SetBinContent(13,0.08255682);
   Zmm_jet_Njet_stack_3->SetBinError(1,10.89028);
   Zmm_jet_Njet_stack_3->SetBinError(2,27.73906);
   Zmm_jet_Njet_stack_3->SetBinError(3,37.85458);
   Zmm_jet_Njet_stack_3->SetBinError(4,27.82223);
   Zmm_jet_Njet_stack_3->SetBinError(5,17.40172);
   Zmm_jet_Njet_stack_3->SetBinError(6,9.736996);
   Zmm_jet_Njet_stack_3->SetBinError(7,5.151975);
   Zmm_jet_Njet_stack_3->SetBinError(8,2.60244);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.223656);
   Zmm_jet_Njet_stack_3->SetBinError(10,0.6130374);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.2876506);
   Zmm_jet_Njet_stack_3->SetBinError(12,0.1948425);
   Zmm_jet_Njet_stack_3->SetBinError(13,0.08255682);
   Zmm_jet_Njet_stack_3->SetEntries(523290);

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
   Zmm_jet_Njet_stack_4->SetBinContent(1,22.713);
   Zmm_jet_Njet_stack_4->SetBinContent(2,126.7032);
   Zmm_jet_Njet_stack_4->SetBinContent(3,182.0288);
   Zmm_jet_Njet_stack_4->SetBinContent(4,68.57368);
   Zmm_jet_Njet_stack_4->SetBinContent(5,21.9298);
   Zmm_jet_Njet_stack_4->SetBinContent(6,6.513163);
   Zmm_jet_Njet_stack_4->SetBinContent(7,1.782728);
   Zmm_jet_Njet_stack_4->SetBinContent(8,0.4644994);
   Zmm_jet_Njet_stack_4->SetBinContent(9,0.1091743);
   Zmm_jet_Njet_stack_4->SetBinContent(10,0.02644595);
   Zmm_jet_Njet_stack_4->SetBinContent(11,0.007459115);
   Zmm_jet_Njet_stack_4->SetBinContent(12,0.0006781013);
   Zmm_jet_Njet_stack_4->SetBinContent(14,0.0006781013);
   Zmm_jet_Njet_stack_4->SetBinError(1,0.1241037);
   Zmm_jet_Njet_stack_4->SetBinError(2,0.2931171);
   Zmm_jet_Njet_stack_4->SetBinError(3,0.3513318);
   Zmm_jet_Njet_stack_4->SetBinError(4,0.2156384);
   Zmm_jet_Njet_stack_4->SetBinError(5,0.1219452);
   Zmm_jet_Njet_stack_4->SetBinError(6,0.06645739);
   Zmm_jet_Njet_stack_4->SetBinError(7,0.03476882);
   Zmm_jet_Njet_stack_4->SetBinError(8,0.01774761);
   Zmm_jet_Njet_stack_4->SetBinError(9,0.008604141);
   Zmm_jet_Njet_stack_4->SetBinError(10,0.004234741);
   Zmm_jet_Njet_stack_4->SetBinError(11,0.002249008);
   Zmm_jet_Njet_stack_4->SetBinError(12,0.0006781013);
   Zmm_jet_Njet_stack_4->SetBinError(14,0.0006781013);
   Zmm_jet_Njet_stack_4->SetEntries(635382);

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
   Zmm_jet_Njet_stack_5->SetBinContent(1,2.433624e+07);
   Zmm_jet_Njet_stack_5->SetBinContent(2,6222664);
   Zmm_jet_Njet_stack_5->SetBinContent(3,2042871);
   Zmm_jet_Njet_stack_5->SetBinContent(4,421793.3);
   Zmm_jet_Njet_stack_5->SetBinContent(5,80035.68);
   Zmm_jet_Njet_stack_5->SetBinContent(6,15193.86);
   Zmm_jet_Njet_stack_5->SetBinContent(7,2800.023);
   Zmm_jet_Njet_stack_5->SetBinContent(8,489.6796);
   Zmm_jet_Njet_stack_5->SetBinContent(9,98.31297);
   Zmm_jet_Njet_stack_5->SetBinContent(10,10.11333);
   Zmm_jet_Njet_stack_5->SetBinContent(11,5.618516);
   Zmm_jet_Njet_stack_5->SetBinError(1,9343.068);
   Zmm_jet_Njet_stack_5->SetBinError(2,3139.97);
   Zmm_jet_Njet_stack_5->SetBinError(3,1605.5);
   Zmm_jet_Njet_stack_5->SetBinError(4,714.9288);
   Zmm_jet_Njet_stack_5->SetBinError(5,310.2537);
   Zmm_jet_Njet_stack_5->SetBinError(6,134.9658);
   Zmm_jet_Njet_stack_5->SetBinError(7,57.834);
   Zmm_jet_Njet_stack_5->SetBinError(8,24.3233);
   Zmm_jet_Njet_stack_5->SetBinError(9,10.99461);
   Zmm_jet_Njet_stack_5->SetBinError(10,3.37111);
   Zmm_jet_Njet_stack_5->SetBinError(11,2.512677);
   Zmm_jet_Njet_stack_5->SetEntries(1.444896e+07);

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
   
   TH1D *Zmm_jet_Njet__149 = new TH1D("Zmm_jet_Njet__149","",15,0,15);
   Zmm_jet_Njet__149->SetBinContent(1,2.009596e+07);
   Zmm_jet_Njet__149->SetBinContent(2,3042003);
   Zmm_jet_Njet__149->SetBinContent(3,786643);
   Zmm_jet_Njet__149->SetBinContent(4,194223);
   Zmm_jet_Njet__149->SetBinContent(5,48677);
   Zmm_jet_Njet__149->SetBinContent(6,12071);
   Zmm_jet_Njet__149->SetBinContent(7,2963);
   Zmm_jet_Njet__149->SetBinContent(8,693);
   Zmm_jet_Njet__149->SetBinContent(9,159);
   Zmm_jet_Njet__149->SetBinContent(10,39);
   Zmm_jet_Njet__149->SetBinContent(11,9);
   Zmm_jet_Njet__149->SetBinContent(12,2);
   Zmm_jet_Njet__149->SetBinContent(16,1);
   Zmm_jet_Njet__149->SetBinError(1,4482.852);
   Zmm_jet_Njet__149->SetBinError(2,1744.134);
   Zmm_jet_Njet__149->SetBinError(3,886.929);
   Zmm_jet_Njet__149->SetBinError(4,440.7074);
   Zmm_jet_Njet__149->SetBinError(5,220.6286);
   Zmm_jet_Njet__149->SetBinError(6,109.8681);
   Zmm_jet_Njet__149->SetBinError(7,54.43345);
   Zmm_jet_Njet__149->SetBinError(8,26.32489);
   Zmm_jet_Njet__149->SetBinError(9,12.60952);
   Zmm_jet_Njet__149->SetBinError(10,6.244998);
   Zmm_jet_Njet__149->SetBinError(11,3);
   Zmm_jet_Njet__149->SetBinError(12,1.414214);
   Zmm_jet_Njet__149->SetBinError(16,1);
   Zmm_jet_Njet__149->SetEntries(2.418345e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__149->SetLineColor(ci);
   Zmm_jet_Njet__149->SetLineWidth(2);
   Zmm_jet_Njet__149->SetMarkerStyle(20);
   Zmm_jet_Njet__149->SetMarkerSize(1.2);
   Zmm_jet_Njet__149->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__149->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1149[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fy1149[15] = {
   2.435398e+07,
   6247294,
   2070031,
   434229.5,
   84473.39,
   16509.38,
   3159.68,
   578.1256,
   117.137,
   14.72532,
   6.661577,
   0.4772003,
   0.08255682,
   0.0006781013,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1149[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fey1149[15] = {
   9343.672,
   3141.542,
   1607.692,
   716.6576,
   311.3987,
   135.6194,
   58.21832,
   24.51188,
   11.0652,
   3.4264,
   2.529089,
   0.1948437,
   0.08255682,
   0.0006781013,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1149,Graph_from_Zmm_jet_Njet_fy1149,Graph_from_Zmm_jet_Njet_fex1149,Graph_from_Zmm_jet_Njet_fey1149);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1149 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1149","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1149->SetMinimum(0);
   Graph_Graph_from_Zmm_jet_Njet1149->SetMaximum(2.679966e+07);
   Graph_Graph_from_Zmm_jet_Njet1149->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1149->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1149);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__150 = new TH1D("data_mc_ratio__150","",15,0,15);
   data_mc_ratio__150->SetBinContent(1,0.8251613);
   data_mc_ratio__150->SetBinContent(2,0.4869313);
   data_mc_ratio__150->SetBinContent(3,0.3800151);
   data_mc_ratio__150->SetBinContent(4,0.4472819);
   data_mc_ratio__150->SetBinContent(5,0.5762406);
   data_mc_ratio__150->SetBinContent(6,0.7311602);
   data_mc_ratio__150->SetBinContent(7,0.9377532);
   data_mc_ratio__150->SetBinContent(8,1.198701);
   data_mc_ratio__150->SetBinContent(9,1.357384);
   data_mc_ratio__150->SetBinContent(10,2.648499);
   data_mc_ratio__150->SetBinContent(11,1.351032);
   data_mc_ratio__150->SetBinContent(12,4.191112);
   data_mc_ratio__150->SetBinError(1,0.0001840706);
   data_mc_ratio__150->SetBinError(2,0.0002791823);
   data_mc_ratio__150->SetBinError(3,0.0004284617);
   data_mc_ratio__150->SetBinError(4,0.001014918);
   data_mc_ratio__150->SetBinError(5,0.002611812);
   data_mc_ratio__150->SetBinError(6,0.006654891);
   data_mc_ratio__150->SetBinError(7,0.01722752);
   data_mc_ratio__150->SetBinError(8,0.0455349);
   data_mc_ratio__150->SetBinError(9,0.1076476);
   data_mc_ratio__150->SetBinError(10,0.4240993);
   data_mc_ratio__150->SetBinError(11,0.4503438);
   data_mc_ratio__150->SetBinError(12,2.963564);
   data_mc_ratio__150->SetMinimum(0.4);
   data_mc_ratio__150->SetMaximum(1.6);
   data_mc_ratio__150->SetEntries(17.92911);
   data_mc_ratio__150->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__150->SetLineColor(ci);
   data_mc_ratio__150->SetLineWidth(2);
   data_mc_ratio__150->SetMarkerStyle(20);
   data_mc_ratio__150->SetMarkerSize(1.2);
   data_mc_ratio__150->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__150->GetXaxis()->SetRange(1,10);
   data_mc_ratio__150->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__150->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__150->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__150->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__150->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__150->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__150->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__150->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1150[15] = {
   0.000383661,
   0.0005028643,
   0.0007766512,
   0.001650412,
   0.003686352,
   0.008214687,
   0.01842539,
   0.04239888,
   0.0944637,
   0.2326876,
   0.3796533,
   0.4083059,
   1,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1150,Graph_from_mc_statistical_error_fy1150,Graph_from_mc_statistical_error_fex1150,Graph_from_mc_statistical_error_fey1150);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1150 = new TH1F("Graph_Graph_from_mc_statistical_error1150","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1150->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1150->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1150->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1150->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1150);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
   Njet_Z_jet_Zmm_18_amcnlo->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
   Njet_Z_jet_Zmm_18_amcnlo->SetSelected(Njet_Z_jet_Zmm_18_amcnlo);
}
