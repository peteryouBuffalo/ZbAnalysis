void dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:41 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-34.02802,6.314516,34003.99);
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
   st->SetMaximum(29143.04);
   
   TH1F *st_stack_332 = new TH1F("st_stack_332","",25,0,10);
   st_stack_332->SetMinimum(0.01);
   st_stack_332->SetMaximum(30600.19);
   st_stack_332->SetDirectory(0);
   st_stack_332->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_332->SetLineColor(ci);
   st_stack_332->GetXaxis()->SetRange(1,15);
   st_stack_332->GetXaxis()->SetLabelFont(42);
   st_stack_332->GetXaxis()->SetLabelSize(0.035);
   st_stack_332->GetXaxis()->SetTitleSize(0.035);
   st_stack_332->GetXaxis()->SetTitleFont(42);
   st_stack_332->GetYaxis()->SetTitle("Events/0.4");
   st_stack_332->GetYaxis()->SetLabelFont(42);
   st_stack_332->GetYaxis()->SetLabelSize(0.05);
   st_stack_332->GetYaxis()->SetTitleSize(0.057);
   st_stack_332->GetYaxis()->SetTitleOffset(1.2);
   st_stack_332->GetYaxis()->SetTitleFont(42);
   st_stack_332->GetZaxis()->SetLabelFont(42);
   st_stack_332->GetZaxis()->SetLabelSize(0.035);
   st_stack_332->GetZaxis()->SetTitleSize(0.035);
   st_stack_332->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_332);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(1,2.420134);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(2,10.3602);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(3,16.82254);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(4,31.97977);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(5,44.32925);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(6,51.42544);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(7,55.24291);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(8,28.35938);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(9,4.248545);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(10,1.806551);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(11,0.2380547);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(14,0.0486711);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(1,0.7190645);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(2,1.538101);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(3,1.923691);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(4,2.67954);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(5,3.307938);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(6,3.430554);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(7,3.535564);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(8,2.546297);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(9,0.9683266);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(10,0.6741306);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(11,0.2380547);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(14,0.0486711);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(1,5.996901);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(2,17.03441);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(3,24.85698);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(4,46.3646);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(5,78.96999);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(6,127.3242);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(7,131.0387);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(8,91.00943);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(9,30.31174);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(10,11.7968);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(11,6.747047);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(12,4.013547);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(13,1.42822);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(14,0.2529913);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(1,1.581396);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(2,2.664489);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(3,3.230327);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(4,4.443258);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(5,5.655871);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(6,7.274066);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(7,7.29776);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(8,6.10828);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(9,3.523549);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(10,2.133236);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(11,1.637875);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(12,1.247548);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(13,0.8788662);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(14,0.2529913);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(1,171.1556);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(2,478.4591);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(3,870.4189);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(4,1449.6);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(5,2062.877);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(6,2045.868);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(7,1437.206);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(8,654.8312);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(9,103.6202);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(10,31.20963);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(11,13.74624);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(12,4.180492);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(13,2.214067);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(14,0.6876098);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(15,0.4834601);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(16,0.1651136);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(1,6.060499);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(2,9.906558);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(3,13.50098);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(4,17.31611);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(5,20.73331);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(6,20.70792);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(7,17.26399);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(8,11.46129);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(9,4.662816);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(10,2.363208);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(11,1.733078);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(12,0.8348398);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(13,0.6176019);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(14,0.4616231);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(15,0.4167817);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(16,0.116753);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_4 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_4","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(1,2.129975);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(2,6.204279);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(3,11.10951);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(4,19.40495);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(5,33.38347);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(6,48.38534);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(7,47.42832);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(8,29.202);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(9,2.785304);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(10,0.6164886);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(11,0.2106962);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(12,0.08554442);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(13,0.03948022);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(14,0.01578736);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(15,0.009319499);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(16,0.001935784);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(17,0.002958716);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(19,0.001022932);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinContent(20,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(1,0.03436117);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(2,0.05866955);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(3,0.07849193);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(4,0.1036015);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(5,0.136069);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(6,0.1637565);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(7,0.1621879);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(8,0.1272856);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(9,0.03920727);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(10,0.01844321);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(11,0.01078718);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(12,0.006938325);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(13,0.004679207);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(14,0.00287997);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(15,0.002397014);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(16,0.001120516);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(17,0.001354358);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(19,0.0007607429);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetBinError(20,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_5 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_5","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(1,897.0482);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(2,2572.536);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(3,4381.99);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(4,6820.781);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(5,10214.78);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(6,13123.59);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(7,14357.75);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(8,11435.17);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(9,3008.703);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(10,1214.423);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(11,602.8655);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(12,357.5339);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(13,172.0237);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(14,90.18911);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(15,57.0015);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(16,18.93129);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(17,14.82321);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(18,5.770239);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(19,0.4998424);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinContent(20,2.826406);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(1,28.1251);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(2,47.94428);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(3,62.56802);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(4,78.03096);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(5,96.10314);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(6,108.8276);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(7,113.8476);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(8,102.2917);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(9,52.90545);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(10,35.16634);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(11,25.01352);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(12,21.02967);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(13,16.23217);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(14,11.57801);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(15,11.31583);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(16,6.332344);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(17,5.523538);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(18,2.807864);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(19,0.4998424);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetBinError(20,2.826406);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all__663 = new TH1D("Zmm_2bjet_dRmin_Z2b_all__663","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(1,436);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(2,1288);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(3,2159);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(4,3564);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(5,4996);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(6,5868);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(7,5814);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(8,4417);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(9,1217);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(10,494);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(11,254);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(12,132);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(13,78);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(14,56);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(15,23);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(16,15);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(17,7);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(18,5);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(20,2);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(21,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(23,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(1,20.88061);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(2,35.88872);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(3,46.46504);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(4,59.69925);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(5,70.68239);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(6,76.60287);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(7,76.24959);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(8,66.46051);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(9,34.88553);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(10,22.22611);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(11,15.93738);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(12,11.48913);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(13,8.831761);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(14,7.483315);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(15,4.795832);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(16,3.872983);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(17,2.645751);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(18,2.236068);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(20,1.414214);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(21,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(23,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all__663->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all__663->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b_all__663->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b_all__663->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_all_fx1663[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_all_fy1663[25] = {
   1078.751,
   3084.594,
   5305.198,
   8368.131,
   12434.34,
   15396.59,
   16028.67,
   12238.57,
   3149.669,
   1259.853,
   623.8076,
   365.8135,
   175.7055,
   91.19417,
   57.49428,
   19.09834,
   14.82617,
   5.770239,
   0.5008653,
   2.827084,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_all_fex1663[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_all_fey1663[25] = {
   28.82308,
   49.05367,
   64.11845,
   80.09751,
   98.5324,
   111.0719,
   115.4344,
   103.1444,
   53.23611,
   35.31659,
   25.12805,
   21.08318,
   16.26767,
   11.59007,
   11.32351,
   6.33342,
   5.523538,
   2.807864,
   0.499843,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dRmin_Z2b_all_fx1663,Graph_from_Zmm_2bjet_dRmin_Z2b_all_fy1663,Graph_from_Zmm_2bjet_dRmin_Z2b_all_fex1663,Graph_from_Zmm_2bjet_dRmin_Z2b_all_fey1663);
   gre->SetName("Graph_from_Zmm_2bjet_dRmin_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663 = new TH1F("Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->SetMaximum(17758.51);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dRmin_Z2b_all1663);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dRmin_Z2b_all","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__664 = new TH1D("data_mc_ratio__664","",25,0,10);
   data_mc_ratio__664->SetBinContent(1,0.4041712);
   data_mc_ratio__664->SetBinContent(2,0.417559);
   data_mc_ratio__664->SetBinContent(3,0.4069593);
   data_mc_ratio__664->SetBinContent(4,0.4259016);
   data_mc_ratio__664->SetBinContent(5,0.4017904);
   data_mc_ratio__664->SetBinContent(6,0.3811232);
   data_mc_ratio__664->SetBinContent(7,0.362725);
   data_mc_ratio__664->SetBinContent(8,0.3609083);
   data_mc_ratio__664->SetBinContent(9,0.3863898);
   data_mc_ratio__664->SetBinContent(10,0.3921093);
   data_mc_ratio__664->SetBinContent(11,0.4071769);
   data_mc_ratio__664->SetBinContent(12,0.3608396);
   data_mc_ratio__664->SetBinContent(13,0.4439247);
   data_mc_ratio__664->SetBinContent(14,0.6140743);
   data_mc_ratio__664->SetBinContent(15,0.4000398);
   data_mc_ratio__664->SetBinContent(16,0.7854084);
   data_mc_ratio__664->SetBinContent(17,0.4721381);
   data_mc_ratio__664->SetBinContent(18,0.8665152);
   data_mc_ratio__664->SetBinContent(20,0.7074428);
   data_mc_ratio__664->SetBinError(1,0.01935629);
   data_mc_ratio__664->SetBinError(2,0.01163483);
   data_mc_ratio__664->SetBinError(3,0.008758399);
   data_mc_ratio__664->SetBinError(4,0.00713412);
   data_mc_ratio__664->SetBinError(5,0.005684449);
   data_mc_ratio__664->SetBinError(6,0.004975313);
   data_mc_ratio__664->SetBinError(7,0.004757075);
   data_mc_ratio__664->SetBinError(8,0.005430416);
   data_mc_ratio__664->SetBinError(9,0.01107593);
   data_mc_ratio__664->SetBinError(10,0.01764183);
   data_mc_ratio__664->SetBinError(11,0.02554855);
   data_mc_ratio__664->SetBinError(12,0.03140706);
   data_mc_ratio__664->SetBinError(13,0.05026457);
   data_mc_ratio__664->SetBinError(14,0.08205913);
   data_mc_ratio__664->SetBinError(15,0.08341406);
   data_mc_ratio__664->SetBinError(16,0.2027916);
   data_mc_ratio__664->SetBinError(17,0.1784514);
   data_mc_ratio__664->SetBinError(18,0.3875174);
   data_mc_ratio__664->SetBinError(20,0.5002376);
   data_mc_ratio__664->SetMinimum(0.4);
   data_mc_ratio__664->SetMaximum(1.6);
   data_mc_ratio__664->SetEntries(63.02961);
   data_mc_ratio__664->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__664->SetLineColor(ci);
   data_mc_ratio__664->SetLineWidth(2);
   data_mc_ratio__664->SetMarkerStyle(20);
   data_mc_ratio__664->SetMarkerSize(1.2);
   data_mc_ratio__664->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__664->GetXaxis()->SetRange(1,15);
   data_mc_ratio__664->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__664->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__664->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__664->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__664->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__664->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__664->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__664->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__664->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__664->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__664->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__664->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__664->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__664->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1664[25] = {
   0.02671894,
   0.0159028,
   0.01208597,
   0.009571733,
   0.007924214,
   0.007214058,
   0.007201744,
   0.008427814,
   0.01690213,
   0.02803232,
   0.04028174,
   0.05763369,
   0.09258488,
   0.1270922,
   0.1969501,
   0.3316214,
   0.3725532,
   0.4866114,
   0.9979588,
   0.9997602,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1664,Graph_from_mc_statistical_error_fy1664,Graph_from_mc_statistical_error_fex1664,Graph_from_mc_statistical_error_fey1664);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1664 = new TH1F("Graph_Graph_from_mc_statistical_error1664","",100,0,11);
   Graph_Graph_from_mc_statistical_error1664->SetMinimum(0.0002158472);
   Graph_Graph_from_mc_statistical_error1664->SetMaximum(2.199712);
   Graph_Graph_from_mc_statistical_error1664->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1664->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1664->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1664);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo);
}
