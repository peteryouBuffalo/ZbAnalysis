void Njet_Z_jet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_18_amcnlo/Njet_Z_jet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:45:51 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_18_amcnlo = new TCanvas("Njet_Z_jet_Zee_18_amcnlo", "Njet_Z_jet_Zee_18_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_18_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_18_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_18_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_18_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_18_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_18_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-37203.18,10.52419,3.716599e+07);
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
   st->SetMaximum(3.185302e+07);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",15,0,15);
   st_stack_35->SetMinimum(0.01);
   st_stack_35->SetMaximum(3.344567e+07);
   st_stack_35->SetDirectory(0);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->GetXaxis()->SetRange(1,10);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetLabelSize(0.035);
   st_stack_35->GetXaxis()->SetTitleSize(0.035);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Events/1.0");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetLabelSize(0.05);
   st_stack_35->GetYaxis()->SetTitleSize(0.057);
   st_stack_35->GetYaxis()->SetTitleOffset(1.2);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetLabelSize(0.035);
   st_stack_35->GetZaxis()->SetTitleSize(0.035);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,466.7526);
   Zee_jet_Njet_stack_1->SetBinContent(2,1615.265);
   Zee_jet_Njet_stack_1->SetBinContent(3,914.5948);
   Zee_jet_Njet_stack_1->SetBinContent(4,346.1898);
   Zee_jet_Njet_stack_1->SetBinContent(5,99.03122);
   Zee_jet_Njet_stack_1->SetBinContent(6,27.51122);
   Zee_jet_Njet_stack_1->SetBinContent(7,5.44252);
   Zee_jet_Njet_stack_1->SetBinContent(8,1.122745);
   Zee_jet_Njet_stack_1->SetBinError(1,10.45876);
   Zee_jet_Njet_stack_1->SetBinError(2,20.36154);
   Zee_jet_Njet_stack_1->SetBinError(3,15.43735);
   Zee_jet_Njet_stack_1->SetBinError(4,9.539422);
   Zee_jet_Njet_stack_1->SetBinError(5,5.081699);
   Zee_jet_Njet_stack_1->SetBinError(6,2.675296);
   Zee_jet_Njet_stack_1->SetBinError(7,1.135584);
   Zee_jet_Njet_stack_1->SetBinError(8,0.5173935);
   Zee_jet_Njet_stack_1->SetEntries(16539);

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
   Zee_jet_Njet_stack_2->SetBinContent(1,11643.03);
   Zee_jet_Njet_stack_2->SetBinContent(2,10022.24);
   Zee_jet_Njet_stack_2->SetBinContent(3,6436.114);
   Zee_jet_Njet_stack_2->SetBinContent(4,1891.069);
   Zee_jet_Njet_stack_2->SetBinContent(5,457.4726);
   Zee_jet_Njet_stack_2->SetBinContent(6,84.37877);
   Zee_jet_Njet_stack_2->SetBinContent(7,12.22887);
   Zee_jet_Njet_stack_2->SetBinContent(8,2.671604);
   Zee_jet_Njet_stack_2->SetBinError(1,90.61338);
   Zee_jet_Njet_stack_2->SetBinError(2,81.03734);
   Zee_jet_Njet_stack_2->SetBinError(3,63.8632);
   Zee_jet_Njet_stack_2->SetBinError(4,34.5362);
   Zee_jet_Njet_stack_2->SetBinError(5,17.09424);
   Zee_jet_Njet_stack_2->SetBinError(6,7.284444);
   Zee_jet_Njet_stack_2->SetBinError(7,2.780694);
   Zee_jet_Njet_stack_2->SetBinError(8,1.350043);
   Zee_jet_Njet_stack_2->SetEntries(47823);

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
   Zee_jet_Njet_stack_3->SetBinContent(1,1088.394);
   Zee_jet_Njet_stack_3->SetBinContent(2,7329.887);
   Zee_jet_Njet_stack_3->SetBinContent(3,13831.67);
   Zee_jet_Njet_stack_3->SetBinContent(4,7747.35);
   Zee_jet_Njet_stack_3->SetBinContent(5,3053.622);
   Zee_jet_Njet_stack_3->SetBinContent(6,990.2689);
   Zee_jet_Njet_stack_3->SetBinContent(7,285.1736);
   Zee_jet_Njet_stack_3->SetBinContent(8,74.21702);
   Zee_jet_Njet_stack_3->SetBinContent(9,18.22927);
   Zee_jet_Njet_stack_3->SetBinContent(10,3.510178);
   Zee_jet_Njet_stack_3->SetBinContent(11,0.3302273);
   Zee_jet_Njet_stack_3->SetBinContent(12,0.08255682);
   Zee_jet_Njet_stack_3->SetBinContent(13,0.08255682);
   Zee_jet_Njet_stack_3->SetBinContent(14,0.08255682);
   Zee_jet_Njet_stack_3->SetBinError(1,9.462437);
   Zee_jet_Njet_stack_3->SetBinError(2,24.56344);
   Zee_jet_Njet_stack_3->SetBinError(3,33.72914);
   Zee_jet_Njet_stack_3->SetBinError(4,25.20601);
   Zee_jet_Njet_stack_3->SetBinError(5,15.80937);
   Zee_jet_Njet_stack_3->SetBinError(6,8.992874);
   Zee_jet_Njet_stack_3->SetBinError(7,4.822949);
   Zee_jet_Njet_stack_3->SetBinError(8,2.458142);
   Zee_jet_Njet_stack_3->SetBinError(9,1.218884);
   Zee_jet_Njet_stack_3->SetBinError(10,0.5299449);
   Zee_jet_Njet_stack_3->SetBinError(11,0.1651136);
   Zee_jet_Njet_stack_3->SetBinError(12,0.08255682);
   Zee_jet_Njet_stack_3->SetBinError(13,0.08255682);
   Zee_jet_Njet_stack_3->SetBinError(14,0.08255682);
   Zee_jet_Njet_stack_3->SetEntries(419282);

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
   Zee_jet_Njet_stack_4->SetBinContent(1,16.61823);
   Zee_jet_Njet_stack_4->SetBinContent(2,97.2221);
   Zee_jet_Njet_stack_4->SetBinContent(3,140.1222);
   Zee_jet_Njet_stack_4->SetBinContent(4,53.95991);
   Zee_jet_Njet_stack_4->SetBinContent(5,17.59944);
   Zee_jet_Njet_stack_4->SetBinContent(6,5.363782);
   Zee_jet_Njet_stack_4->SetBinContent(7,1.497926);
   Zee_jet_Njet_stack_4->SetBinContent(8,0.3858397);
   Zee_jet_Njet_stack_4->SetBinContent(9,0.1030714);
   Zee_jet_Njet_stack_4->SetBinContent(10,0.02305545);
   Zee_jet_Njet_stack_4->SetBinContent(11,0.006102912);
   Zee_jet_Njet_stack_4->SetBinContent(12,0.003390507);
   Zee_jet_Njet_stack_4->SetBinContent(13,0.001356203);
   Zee_jet_Njet_stack_4->SetBinError(1,0.1061548);
   Zee_jet_Njet_stack_4->SetBinError(2,0.2567614);
   Zee_jet_Njet_stack_4->SetBinError(3,0.3082483);
   Zee_jet_Njet_stack_4->SetBinError(4,0.1912859);
   Zee_jet_Njet_stack_4->SetBinError(5,0.1092438);
   Zee_jet_Njet_stack_4->SetBinError(6,0.0603091);
   Zee_jet_Njet_stack_4->SetBinError(7,0.03187076);
   Zee_jet_Njet_stack_4->SetBinError(8,0.01617524);
   Zee_jet_Njet_stack_4->SetBinError(9,0.008360195);
   Zee_jet_Njet_stack_4->SetBinError(10,0.003953976);
   Zee_jet_Njet_stack_4->SetBinError(11,0.002034304);
   Zee_jet_Njet_stack_4->SetBinError(12,0.001516281);
   Zee_jet_Njet_stack_4->SetBinError(13,0.0009589801);
   Zee_jet_Njet_stack_4->SetEntries(490939);

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
   Zee_jet_Njet_stack_5->SetBinContent(1,1.750594e+07);
   Zee_jet_Njet_stack_5->SetBinContent(2,4647840);
   Zee_jet_Njet_stack_5->SetBinContent(3,1572953);
   Zee_jet_Njet_stack_5->SetBinContent(4,328330.7);
   Zee_jet_Njet_stack_5->SetBinContent(5,62824.9);
   Zee_jet_Njet_stack_5->SetBinContent(6,12130.24);
   Zee_jet_Njet_stack_5->SetBinContent(7,2333.818);
   Zee_jet_Njet_stack_5->SetBinContent(8,426.4122);
   Zee_jet_Njet_stack_5->SetBinContent(9,94.8365);
   Zee_jet_Njet_stack_5->SetBinContent(10,17.97925);
   Zee_jet_Njet_stack_5->SetBinContent(11,3.37111);
   Zee_jet_Njet_stack_5->SetBinError(1,7920.911);
   Zee_jet_Njet_stack_5->SetBinError(2,2714.892);
   Zee_jet_Njet_stack_5->SetBinError(3,1429.805);
   Zee_jet_Njet_stack_5->SetBinError(4,639.4923);
   Zee_jet_Njet_stack_5->SetBinError(5,277.4727);
   Zee_jet_Njet_stack_5->SetBinError(6,120.9526);
   Zee_jet_Njet_stack_5->SetBinError(7,53.49165);
   Zee_jet_Njet_stack_5->SetBinError(8,22.59162);
   Zee_jet_Njet_stack_5->SetBinError(9,10.8095);
   Zee_jet_Njet_stack_5->SetBinError(10,4.494813);
   Zee_jet_Njet_stack_5->SetBinError(11,1.946311);
   Zee_jet_Njet_stack_5->SetEntries(1.063274e+07);

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
   
   TH1D *Zee_jet_Njet__69 = new TH1D("Zee_jet_Njet__69","",15,0,15);
   Zee_jet_Njet__69->SetBinContent(1,1.339698e+07);
   Zee_jet_Njet__69->SetBinContent(2,2109429);
   Zee_jet_Njet__69->SetBinContent(3,573658);
   Zee_jet_Njet__69->SetBinContent(4,143926);
   Zee_jet_Njet__69->SetBinContent(5,36532);
   Zee_jet_Njet__69->SetBinContent(6,9294);
   Zee_jet_Njet__69->SetBinContent(7,2292);
   Zee_jet_Njet__69->SetBinContent(8,517);
   Zee_jet_Njet__69->SetBinContent(9,155);
   Zee_jet_Njet__69->SetBinContent(10,29);
   Zee_jet_Njet__69->SetBinContent(11,4);
   Zee_jet_Njet__69->SetBinContent(12,5);
   Zee_jet_Njet__69->SetBinError(1,3660.188);
   Zee_jet_Njet__69->SetBinError(2,1452.387);
   Zee_jet_Njet__69->SetBinError(3,757.4021);
   Zee_jet_Njet__69->SetBinError(4,379.3758);
   Zee_jet_Njet__69->SetBinError(5,191.1335);
   Zee_jet_Njet__69->SetBinError(6,96.40539);
   Zee_jet_Njet__69->SetBinError(7,47.87484);
   Zee_jet_Njet__69->SetBinError(8,22.73763);
   Zee_jet_Njet__69->SetBinError(9,12.4499);
   Zee_jet_Njet__69->SetBinError(10,5.385165);
   Zee_jet_Njet__69->SetBinError(11,2);
   Zee_jet_Njet__69->SetBinError(12,2.236068);
   Zee_jet_Njet__69->SetEntries(1.627282e+07);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__69->SetLineColor(ci);
   Zee_jet_Njet__69->SetLineWidth(2);
   Zee_jet_Njet__69->SetMarkerStyle(20);
   Zee_jet_Njet__69->SetMarkerSize(1.2);
   Zee_jet_Njet__69->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__69->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__69->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1069[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fy1069[15] = {
   1.751916e+07,
   4666905,
   1594276,
   338369.3,
   66452.62,
   13237.76,
   2638.161,
   504.8094,
   113.1688,
   21.51249,
   3.70744,
   0.08594733,
   0.08391302,
   0.08255682,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1069[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fey1069[15] = {
   7921.442,
   2716.289,
   1431.711,
   640.991,
   278.4943,
   121.5345,
   53.79256,
   22.77091,
   10.87801,
   4.525948,
   1.953303,
   0.08257074,
   0.08256239,
   0.08255682,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1069,Graph_from_Zee_jet_Njet_fy1069,Graph_from_Zee_jet_Njet_fex1069,Graph_from_Zee_jet_Njet_fey1069);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1069 = new TH1F("Graph_Graph_from_Zee_jet_Njet1069","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1069->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet1069->SetMaximum(1.927979e+07);
   Graph_Graph_from_Zee_jet_Njet1069->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1069->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1069);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__70 = new TH1D("data_mc_ratio__70","",15,0,15);
   data_mc_ratio__70->SetBinContent(1,0.7647044);
   data_mc_ratio__70->SetBinContent(2,0.4519974);
   data_mc_ratio__70->SetBinContent(3,0.3598236);
   data_mc_ratio__70->SetBinContent(4,0.4253518);
   data_mc_ratio__70->SetBinContent(5,0.549745);
   data_mc_ratio__70->SetBinContent(6,0.7020823);
   data_mc_ratio__70->SetBinContent(7,0.8687872);
   data_mc_ratio__70->SetBinContent(8,1.024149);
   data_mc_ratio__70->SetBinContent(9,1.369635);
   data_mc_ratio__70->SetBinContent(10,1.348054);
   data_mc_ratio__70->SetBinContent(11,1.078912);
   data_mc_ratio__70->SetBinContent(12,58.17517);
   data_mc_ratio__70->SetBinError(1,0.0002089249);
   data_mc_ratio__70->SetBinError(2,0.00031121);
   data_mc_ratio__70->SetBinError(3,0.000475076);
   data_mc_ratio__70->SetBinError(4,0.001121189);
   data_mc_ratio__70->SetBinError(5,0.002876237);
   data_mc_ratio__70->SetBinError(6,0.007282604);
   data_mc_ratio__70->SetBinError(7,0.01814705);
   data_mc_ratio__70->SetBinError(8,0.04504202);
   data_mc_ratio__70->SetBinError(9,0.1100117);
   data_mc_ratio__70->SetBinError(10,0.2503274);
   data_mc_ratio__70->SetBinError(11,0.5394558);
   data_mc_ratio__70->SetBinError(12,26.01673);
   data_mc_ratio__70->SetMinimum(0.4);
   data_mc_ratio__70->SetMaximum(1.6);
   data_mc_ratio__70->SetEntries(1.185085);
   data_mc_ratio__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__70->SetLineColor(ci);
   data_mc_ratio__70->SetLineWidth(2);
   data_mc_ratio__70->SetMarkerStyle(20);
   data_mc_ratio__70->SetMarkerSize(1.2);
   data_mc_ratio__70->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__70->GetXaxis()->SetRange(1,10);
   data_mc_ratio__70->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__70->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__70->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__70->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__70->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__70->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1070[15] = {
   0.0004521588,
   0.0005820321,
   0.0008980326,
   0.001894354,
   0.00419087,
   0.009180893,
   0.02039018,
   0.04510792,
   0.09612196,
   0.210387,
   0.5268604,
   0.9607133,
   0.9839044,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1070,Graph_from_mc_statistical_error_fy1070,Graph_from_mc_statistical_error_fex1070,Graph_from_mc_statistical_error_fey1070);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1070 = new TH1F("Graph_Graph_from_mc_statistical_error1070","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1070->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1070->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1070->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1070->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1070);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
   Njet_Z_jet_Zee_18_amcnlo->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
   Njet_Z_jet_Zee_18_amcnlo->SetSelected(Njet_Z_jet_Zee_18_amcnlo);
}
