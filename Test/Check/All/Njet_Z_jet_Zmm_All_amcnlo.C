void Njet_Z_jet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_All_amcnlo/Njet_Z_jet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:45:59 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_All_amcnlo = new TCanvas("Njet_Z_jet_Zmm_All_amcnlo", "Njet_Z_jet_Zmm_All_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_All_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_All_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_All_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_All_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_All_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_All_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-118166.1,10.52419,1.180479e+08);
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
   st->SetMaximum(1.011727e+08);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",15,0,15);
   st_stack_76->SetMinimum(0.01);
   st_stack_76->SetMaximum(1.062313e+08);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetRange(1,10);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetLabelSize(0.035);
   st_stack_76->GetXaxis()->SetTitleSize(0.035);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/1.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetLabelSize(0.05);
   st_stack_76->GetYaxis()->SetTitleSize(0.057);
   st_stack_76->GetYaxis()->SetTitleOffset(1.2);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetLabelSize(0.035);
   st_stack_76->GetZaxis()->SetTitleSize(0.035);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *Zmm_jet_Njet_all_stack_1 = new TH1D("Zmm_jet_Njet_all_stack_1","",15,0,15);
   Zmm_jet_Njet_all_stack_1->SetBinContent(1,1432.355);
   Zmm_jet_Njet_all_stack_1->SetBinContent(2,4849.123);
   Zmm_jet_Njet_all_stack_1->SetBinContent(3,2664.322);
   Zmm_jet_Njet_all_stack_1->SetBinContent(4,986.3457);
   Zmm_jet_Njet_all_stack_1->SetBinContent(5,286.4495);
   Zmm_jet_Njet_all_stack_1->SetBinContent(6,71.89437);
   Zmm_jet_Njet_all_stack_1->SetBinContent(7,19.23003);
   Zmm_jet_Njet_all_stack_1->SetBinContent(8,5.446343);
   Zmm_jet_Njet_all_stack_1->SetBinContent(9,1.680831);
   Zmm_jet_Njet_all_stack_1->SetBinError(1,18.68411);
   Zmm_jet_Njet_all_stack_1->SetBinError(2,33.85812);
   Zmm_jet_Njet_all_stack_1->SetBinError(3,24.97281);
   Zmm_jet_Njet_all_stack_1->SetBinError(4,15.29629);
   Zmm_jet_Njet_all_stack_1->SetBinError(5,8.177458);
   Zmm_jet_Njet_all_stack_1->SetBinError(6,4.182739);
   Zmm_jet_Njet_all_stack_1->SetBinError(7,2.370067);
   Zmm_jet_Njet_all_stack_1->SetBinError(8,1.08055);
   Zmm_jet_Njet_all_stack_1->SetBinError(9,0.5783205);
   Zmm_jet_Njet_all_stack_1->SetEntries(52113);

   ci = TColor::GetColor("#ff6600");
   Zmm_jet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_1->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_1,"");
   
   TH1D *Zmm_jet_Njet_all_stack_2 = new TH1D("Zmm_jet_Njet_all_stack_2","",15,0,15);
   Zmm_jet_Njet_all_stack_2->SetBinContent(1,35519.75);
   Zmm_jet_Njet_all_stack_2->SetBinContent(2,29871.37);
   Zmm_jet_Njet_all_stack_2->SetBinContent(3,18932.68);
   Zmm_jet_Njet_all_stack_2->SetBinContent(4,5729.972);
   Zmm_jet_Njet_all_stack_2->SetBinContent(5,1406.53);
   Zmm_jet_Njet_all_stack_2->SetBinContent(6,305.4007);
   Zmm_jet_Njet_all_stack_2->SetBinContent(7,60.0351);
   Zmm_jet_Njet_all_stack_2->SetBinContent(8,9.657711);
   Zmm_jet_Njet_all_stack_2->SetBinContent(9,0.3519309);
   Zmm_jet_Njet_all_stack_2->SetBinContent(10,0.7208484);
   Zmm_jet_Njet_all_stack_2->SetBinError(1,137.3943);
   Zmm_jet_Njet_all_stack_2->SetBinError(2,120.1815);
   Zmm_jet_Njet_all_stack_2->SetBinError(3,94.16633);
   Zmm_jet_Njet_all_stack_2->SetBinError(4,51.72998);
   Zmm_jet_Njet_all_stack_2->SetBinError(5,25.52342);
   Zmm_jet_Njet_all_stack_2->SetBinError(6,11.75012);
   Zmm_jet_Njet_all_stack_2->SetBinError(7,5.293324);
   Zmm_jet_Njet_all_stack_2->SetBinError(8,2.037698);
   Zmm_jet_Njet_all_stack_2->SetBinError(9,0.3519309);
   Zmm_jet_Njet_all_stack_2->SetBinError(10,0.5172938);
   Zmm_jet_Njet_all_stack_2->SetEntries(216316);

   ci = TColor::GetColor("#cccc00");
   Zmm_jet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_2->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_2,"");
   
   TH1D *Zmm_jet_Njet_all_stack_3 = new TH1D("Zmm_jet_Njet_all_stack_3","",15,0,15);
   Zmm_jet_Njet_all_stack_3->SetBinContent(1,3347.479);
   Zmm_jet_Njet_all_stack_3->SetBinContent(2,21450.59);
   Zmm_jet_Njet_all_stack_3->SetBinContent(3,39429.56);
   Zmm_jet_Njet_all_stack_3->SetBinContent(4,21458.76);
   Zmm_jet_Njet_all_stack_3->SetBinContent(5,8375.066);
   Zmm_jet_Njet_all_stack_3->SetBinContent(6,2628.839);
   Zmm_jet_Njet_all_stack_3->SetBinContent(7,753.848);
   Zmm_jet_Njet_all_stack_3->SetBinContent(8,205.5254);
   Zmm_jet_Njet_all_stack_3->SetBinContent(9,38.12742);
   Zmm_jet_Njet_all_stack_3->SetBinContent(10,10.62827);
   Zmm_jet_Njet_all_stack_3->SetBinContent(11,3.063732);
   Zmm_jet_Njet_all_stack_3->SetBinContent(12,1.042704);
   Zmm_jet_Njet_all_stack_3->SetBinContent(13,0.08255682);
   Zmm_jet_Njet_all_stack_3->SetBinError(1,26.46007);
   Zmm_jet_Njet_all_stack_3->SetBinError(2,66.95501);
   Zmm_jet_Njet_all_stack_3->SetBinError(3,90.40425);
   Zmm_jet_Njet_all_stack_3->SetBinError(4,66.46513);
   Zmm_jet_Njet_all_stack_3->SetBinError(5,41.36718);
   Zmm_jet_Njet_all_stack_3->SetBinError(6,22.97704);
   Zmm_jet_Njet_all_stack_3->SetBinError(7,12.20996);
   Zmm_jet_Njet_all_stack_3->SetBinError(8,6.557703);
   Zmm_jet_Njet_all_stack_3->SetBinError(9,2.497831);
   Zmm_jet_Njet_all_stack_3->SetBinError(10,1.350725);
   Zmm_jet_Njet_all_stack_3->SetBinError(11,0.7920204);
   Zmm_jet_Njet_all_stack_3->SetBinError(12,0.4674053);
   Zmm_jet_Njet_all_stack_3->SetBinError(13,0.08255682);
   Zmm_jet_Njet_all_stack_3->SetEntries(738721);

   ci = TColor::GetColor("#0000cc");
   Zmm_jet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_3->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_3,"");
   
   TH1D *Zmm_jet_Njet_all_stack_4 = new TH1D("Zmm_jet_Njet_all_stack_4","",15,0,15);
   Zmm_jet_Njet_all_stack_4->SetBinContent(1,53.0199);
   Zmm_jet_Njet_all_stack_4->SetBinContent(2,292.1476);
   Zmm_jet_Njet_all_stack_4->SetBinContent(3,415.7891);
   Zmm_jet_Njet_all_stack_4->SetBinContent(4,156.8978);
   Zmm_jet_Njet_all_stack_4->SetBinContent(5,50.63027);
   Zmm_jet_Njet_all_stack_4->SetBinContent(6,15.40494);
   Zmm_jet_Njet_all_stack_4->SetBinContent(7,4.266939);
   Zmm_jet_Njet_all_stack_4->SetBinContent(8,1.145391);
   Zmm_jet_Njet_all_stack_4->SetBinContent(9,0.3058473);
   Zmm_jet_Njet_all_stack_4->SetBinContent(10,0.08004726);
   Zmm_jet_Njet_all_stack_4->SetBinContent(11,0.01878681);
   Zmm_jet_Njet_all_stack_4->SetBinContent(12,0.004375749);
   Zmm_jet_Njet_all_stack_4->SetBinContent(14,0.001257682);
   Zmm_jet_Njet_all_stack_4->SetBinError(1,0.1708757);
   Zmm_jet_Njet_all_stack_4->SetBinError(2,0.4013045);
   Zmm_jet_Njet_all_stack_4->SetBinError(3,0.4788542);
   Zmm_jet_Njet_all_stack_4->SetBinError(4,0.2940785);
   Zmm_jet_Njet_all_stack_4->SetBinError(5,0.1670105);
   Zmm_jet_Njet_all_stack_4->SetBinError(6,0.0921499);
   Zmm_jet_Njet_all_stack_4->SetBinError(7,0.04857491);
   Zmm_jet_Njet_all_stack_4->SetBinError(8,0.02521154);
   Zmm_jet_Njet_all_stack_4->SetBinError(9,0.01294994);
   Zmm_jet_Njet_all_stack_4->SetBinError(10,0.006625673);
   Zmm_jet_Njet_all_stack_4->SetBinError(11,0.003276112);
   Zmm_jet_Njet_all_stack_4->SetBinError(12,0.001509673);
   Zmm_jet_Njet_all_stack_4->SetBinError(14,0.0008920401);
   Zmm_jet_Njet_all_stack_4->SetEntries(1952051);

   ci = TColor::GetColor("#cc0000");
   Zmm_jet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_4->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_4,"");
   
   TH1D *Zmm_jet_Njet_all_stack_5 = new TH1D("Zmm_jet_Njet_all_stack_5","",15,0,15);
   Zmm_jet_Njet_all_stack_5->SetBinContent(1,5.560462e+07);
   Zmm_jet_Njet_all_stack_5->SetBinContent(2,1.421941e+07);
   Zmm_jet_Njet_all_stack_5->SetBinContent(3,4655622);
   Zmm_jet_Njet_all_stack_5->SetBinContent(4,1011794);
   Zmm_jet_Njet_all_stack_5->SetBinContent(5,199899.1);
   Zmm_jet_Njet_all_stack_5->SetBinContent(6,39704.98);
   Zmm_jet_Njet_all_stack_5->SetBinContent(7,7863.006);
   Zmm_jet_Njet_all_stack_5->SetBinContent(8,1593.603);
   Zmm_jet_Njet_all_stack_5->SetBinContent(9,300.0701);
   Zmm_jet_Njet_all_stack_5->SetBinContent(10,47.55694);
   Zmm_jet_Njet_all_stack_5->SetBinContent(11,13.19829);
   Zmm_jet_Njet_all_stack_5->SetBinContent(12,1.99937);
   Zmm_jet_Njet_all_stack_5->SetBinError(1,12737.26);
   Zmm_jet_Njet_all_stack_5->SetBinError(2,4279.961);
   Zmm_jet_Njet_all_stack_5->SetBinError(3,2170.576);
   Zmm_jet_Njet_all_stack_5->SetBinError(4,981.0761);
   Zmm_jet_Njet_all_stack_5->SetBinError(5,430.5627);
   Zmm_jet_Njet_all_stack_5->SetBinError(6,189.9344);
   Zmm_jet_Njet_all_stack_5->SetBinError(7,83.50208);
   Zmm_jet_Njet_all_stack_5->SetBinError(8,36.62724);
   Zmm_jet_Njet_all_stack_5->SetBinError(9,16.07003);
   Zmm_jet_Njet_all_stack_5->SetBinError(10,5.7983);
   Zmm_jet_Njet_all_stack_5->SetBinError(11,3.393853);
   Zmm_jet_Njet_all_stack_5->SetBinError(12,0.9996848);
   Zmm_jet_Njet_all_stack_5->SetEntries(4.365984e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_jet_Njet_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_5->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_5->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_jet_Njet_all__151 = new TH1D("Zmm_jet_Njet_all__151","",15,0,15);
   Zmm_jet_Njet_all__151->SetBinContent(1,4.57209e+07);
   Zmm_jet_Njet_all__151->SetBinContent(2,6953425);
   Zmm_jet_Njet_all__151->SetBinContent(3,1797857);
   Zmm_jet_Njet_all__151->SetBinContent(4,444280);
   Zmm_jet_Njet_all__151->SetBinContent(5,111342);
   Zmm_jet_Njet_all__151->SetBinContent(6,27646);
   Zmm_jet_Njet_all__151->SetBinContent(7,6918);
   Zmm_jet_Njet_all__151->SetBinContent(8,1586);
   Zmm_jet_Njet_all__151->SetBinContent(9,366);
   Zmm_jet_Njet_all__151->SetBinContent(10,93);
   Zmm_jet_Njet_all__151->SetBinContent(11,25);
   Zmm_jet_Njet_all__151->SetBinContent(12,4);
   Zmm_jet_Njet_all__151->SetBinContent(13,2);
   Zmm_jet_Njet_all__151->SetBinContent(16,1);
   Zmm_jet_Njet_all__151->SetBinError(1,6761.724);
   Zmm_jet_Njet_all__151->SetBinError(2,2636.935);
   Zmm_jet_Njet_all__151->SetBinError(3,1340.842);
   Zmm_jet_Njet_all__151->SetBinError(4,666.5433);
   Zmm_jet_Njet_all__151->SetBinError(5,333.6795);
   Zmm_jet_Njet_all__151->SetBinError(6,166.2709);
   Zmm_jet_Njet_all__151->SetBinError(7,83.17452);
   Zmm_jet_Njet_all__151->SetBinError(8,39.82462);
   Zmm_jet_Njet_all__151->SetBinError(9,19.13113);
   Zmm_jet_Njet_all__151->SetBinError(10,9.643651);
   Zmm_jet_Njet_all__151->SetBinError(11,5);
   Zmm_jet_Njet_all__151->SetBinError(12,2);
   Zmm_jet_Njet_all__151->SetBinError(13,1.414214);
   Zmm_jet_Njet_all__151->SetBinError(16,1);
   Zmm_jet_Njet_all__151->SetEntries(5.506445e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all__151->SetLineColor(ci);
   Zmm_jet_Njet_all__151->SetLineWidth(2);
   Zmm_jet_Njet_all__151->SetMarkerStyle(20);
   Zmm_jet_Njet_all__151->SetMarkerSize(1.2);
   Zmm_jet_Njet_all__151->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all__151->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_all_fx1151[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_all_fy1151[15] = {
   5.564497e+07,
   1.427588e+07,
   4717064,
   1040126,
   210017.8,
   42726.52,
   8700.386,
   1815.377,
   340.5362,
   58.98611,
   16.28081,
   3.04645,
   0.08255682,
   0.001257682,
   0};
   Double_t Graph_from_Zmm_jet_Njet_all_fex1151[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_all_fey1151[15] = {
   12738.04,
   4282.305,
   2174.642,
   984.8036,
   433.375,
   191.7253,
   84.58912,
   37.28108,
   16.27708,
   5.975984,
   3.485046,
   1.103558,
   0.08255682,
   0.0008920401,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_all_fx1151,Graph_from_Zmm_jet_Njet_all_fy1151,Graph_from_Zmm_jet_Njet_all_fex1151,Graph_from_Zmm_jet_Njet_all_fey1151);
   gre->SetName("Graph_from_Zmm_jet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet_all1151 = new TH1F("Graph_Graph_from_Zmm_jet_Njet_all1151","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetMinimum(0);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetMaximum(6.122348e+07);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet_all1151);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_jet_Njet_all","Data (Z(#mu#mu) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_jet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__152 = new TH1D("data_mc_ratio__152","",15,0,15);
   data_mc_ratio__152->SetBinContent(1,0.8216538);
   data_mc_ratio__152->SetBinContent(2,0.4870752);
   data_mc_ratio__152->SetBinContent(3,0.381139);
   data_mc_ratio__152->SetBinContent(4,0.4271404);
   data_mc_ratio__152->SetBinContent(5,0.5301551);
   data_mc_ratio__152->SetBinContent(6,0.6470454);
   data_mc_ratio__152->SetBinContent(7,0.7951371);
   data_mc_ratio__152->SetBinContent(8,0.8736475);
   data_mc_ratio__152->SetBinContent(9,1.074776);
   data_mc_ratio__152->SetBinContent(10,1.576642);
   data_mc_ratio__152->SetBinContent(11,1.53555);
   data_mc_ratio__152->SetBinContent(12,1.313004);
   data_mc_ratio__152->SetBinContent(13,24.22574);
   data_mc_ratio__152->SetBinError(1,0.0001215154);
   data_mc_ratio__152->SetBinError(2,0.0001847127);
   data_mc_ratio__152->SetBinError(3,0.0002842535);
   data_mc_ratio__152->SetBinError(4,0.0006408292);
   data_mc_ratio__152->SetBinError(5,0.001588815);
   data_mc_ratio__152->SetBinError(6,0.003891514);
   data_mc_ratio__152->SetBinError(7,0.009559864);
   data_mc_ratio__152->SetBinError(8,0.02193737);
   data_mc_ratio__152->SetBinError(9,0.05617943);
   data_mc_ratio__152->SetBinError(10,0.1634902);
   data_mc_ratio__152->SetBinError(11,0.30711);
   data_mc_ratio__152->SetBinError(12,0.6565019);
   data_mc_ratio__152->SetBinError(13,17.13018);
   data_mc_ratio__152->SetMinimum(0.4);
   data_mc_ratio__152->SetMaximum(1.6);
   data_mc_ratio__152->SetEntries(1.365457);
   data_mc_ratio__152->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__152->SetLineColor(ci);
   data_mc_ratio__152->SetLineWidth(2);
   data_mc_ratio__152->SetMarkerStyle(20);
   data_mc_ratio__152->SetMarkerSize(1.2);
   data_mc_ratio__152->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__152->GetXaxis()->SetRange(1,10);
   data_mc_ratio__152->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__152->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__152->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__152->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__152->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__152->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__152->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__152->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__152->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__152->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__152->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__152->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__152->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__152->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1152[15] = {
   0.0002289163,
   0.0002999679,
   0.0004610159,
   0.0009468115,
   0.002063516,
   0.004487267,
   0.009722455,
   0.02053627,
   0.04779839,
   0.1013117,
   0.2140585,
   0.3622439,
   1,
   0.709273,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1152,Graph_from_mc_statistical_error_fy1152,Graph_from_mc_statistical_error_fex1152,Graph_from_mc_statistical_error_fey1152);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1152 = new TH1F("Graph_Graph_from_mc_statistical_error1152","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1152->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1152->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1152->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1152->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1152->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1152);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_All_amcnlo->cd();
   Njet_Z_jet_Zmm_All_amcnlo->Modified();
   Njet_Z_jet_Zmm_All_amcnlo->cd();
   Njet_Z_jet_Zmm_All_amcnlo->SetSelected(Njet_Z_jet_Zmm_All_amcnlo);
}
