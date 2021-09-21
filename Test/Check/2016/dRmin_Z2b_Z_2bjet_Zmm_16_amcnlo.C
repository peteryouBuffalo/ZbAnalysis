void dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-9.354878,6.314516,9355.522);
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
   st->SetMaximum(8018.128);
   
   TH1F *st_stack_329 = new TH1F("st_stack_329","",25,0,10);
   st_stack_329->SetMinimum(0.01);
   st_stack_329->SetMaximum(8419.034);
   st_stack_329->SetDirectory(0);
   st_stack_329->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_329->SetLineColor(ci);
   st_stack_329->GetXaxis()->SetRange(1,15);
   st_stack_329->GetXaxis()->SetLabelFont(42);
   st_stack_329->GetXaxis()->SetLabelSize(0.035);
   st_stack_329->GetXaxis()->SetTitleSize(0.035);
   st_stack_329->GetXaxis()->SetTitleFont(42);
   st_stack_329->GetYaxis()->SetTitle("Events/0.4");
   st_stack_329->GetYaxis()->SetLabelFont(42);
   st_stack_329->GetYaxis()->SetLabelSize(0.05);
   st_stack_329->GetYaxis()->SetTitleSize(0.057);
   st_stack_329->GetYaxis()->SetTitleOffset(1.2);
   st_stack_329->GetYaxis()->SetTitleFont(42);
   st_stack_329->GetZaxis()->SetLabelFont(42);
   st_stack_329->GetZaxis()->SetLabelSize(0.035);
   st_stack_329->GetZaxis()->SetTitleSize(0.035);
   st_stack_329->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_329);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.4770097);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,2.163905);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,4.470155);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,9.053253);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,9.683776);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,10.58425);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,14.75677);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,4.019521);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.376369);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.3929288);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.2905038);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.6524425);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.9282481);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.324731);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.360895);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.427834);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.688737);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,0.8840712);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.5202191);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2778426);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(305);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.8941428);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,4.893515);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,5.912411);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,9.488982);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,19.92065);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,27.96793);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,33.1101);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,23.49722);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,8.768133);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,2.980476);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,1.490238);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,1.913039);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.5162336);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.229327);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.366628);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,1.712793);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.458209);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,2.905386);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,3.230443);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.66623);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.632809);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.9425092);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.6664547);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.7892543);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(463);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,39.72703);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,109.6388);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,198.6352);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,347.222);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,465.4294);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,456.6661);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,321.1268);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,143.1342);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,24.34254);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,7.789614);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,3.505326);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.7789614);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.584221);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.1947403);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.781449);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.620725);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,6.219508);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,8.223025);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,9.520393);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,9.43034);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,7.907993);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,5.279583);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,2.177263);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.231646);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.8262133);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.3894807);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.3373002);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.1947403);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(10880);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.5251003);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,1.512706);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,2.692153);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,4.819215);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,8.294962);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,12.22916);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,12.15207);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,7.555417);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,0.7076683);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.1362015);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.05911726);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.02550156);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.0121712);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.003477486);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.001159162);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(16,0.0005795809);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(17,0.0005795809);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.01744529);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.02960972);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.0395009);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.05285003);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.06933687);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.08418899);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.08392324);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.06617383);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.02025219);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.008884808);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.005853481);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.003844505);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.002655974);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.001419678);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.0008196512);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(16,0.0005795809);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(17,0.0005795809);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetEntries(87524);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,267.8277);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,757.8063);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,1261.075);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,1988.984);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,2909.176);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,3635.08);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,4028.825);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,3193.797);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,876.5609);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,360.5392);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,168.3582);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,94.8503);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,43.53214);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,34.79227);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,14.00051);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,6.003027);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,0.9996848);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(18,3.751277);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(19,0.4998424);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(1,11.65002);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(2,19.82031);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(3,25.34782);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(4,32.02164);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(5,38.90102);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(6,43.455);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(7,45.81103);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(8,41.21887);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(9,22.12979);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(10,14.966);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(11,10.64952);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(12,9.17323);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(13,6.160361);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(14,6.739144);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(15,3.858466);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(16,3.300043);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(17,0.7068839);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(18,2.412448);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(19,0.4998424);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__657 = new TH1D("Zmm_2bjet_dRmin_Z2b__657","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(1,106);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(2,316);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(3,499);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(4,898);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(5,1221);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(6,1447);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(7,1433);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(8,1094);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(9,275);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(10,126);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(11,51);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(12,26);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(13,20);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(14,12);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(15,3);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(16,6);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(17,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(18,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(21,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(1,10.29563);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(2,17.77639);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(3,22.33831);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(4,29.96665);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(5,34.94281);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(6,38.03945);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(7,37.85499);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(8,33.07567);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(9,16.58312);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(10,11.22497);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(11,7.141428);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(12,5.09902);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(13,4.472136);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(14,3.464102);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(15,1.732051);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(16,2.44949);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(17,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(18,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(21,1);
   Zmm_2bjet_dRmin_Z2b__657->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__657->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__657->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__657->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__657->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fx1657[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fy1657[25] = {
   309.4509,
   876.0153,
   1472.785,
   2359.567,
   3412.505,
   4142.528,
   4409.97,
   3372.003,
   911.7556,
   371.8384,
   173.4129,
   97.5678,
   44.12853,
   34.99049,
   14.00166,
   6.003606,
   1.000264,
   3.751277,
   0.4998424,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fex1657[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fey1657[25] = {
   11.99211,
   20.39935,
   26.15196,
   33.13148,
   40.14757,
   44.58425,
   46.63134,
   41.6505,
   22.30258,
   15.04871,
   10.70229,
   9.215356,
   6.169589,
   6.741958,
   3.858466,
   3.300043,
   0.7068841,
   2.412448,
   0.4998424,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dRmin_Z2b_fx1657,Graph_from_Zmm_2bjet_dRmin_Z2b_fy1657,Graph_from_Zmm_2bjet_dRmin_Z2b_fex1657,Graph_from_Zmm_2bjet_dRmin_Z2b_fey1657);
   gre->SetName("Graph_from_Zmm_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657 = new TH1F("Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->SetMaximum(4902.262);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1657);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__658 = new TH1D("data_mc_ratio__658","",25,0,10);
   data_mc_ratio__658->SetBinContent(1,0.3425422);
   data_mc_ratio__658->SetBinContent(2,0.3607243);
   data_mc_ratio__658->SetBinContent(3,0.3388138);
   data_mc_ratio__658->SetBinContent(4,0.3805783);
   data_mc_ratio__658->SetBinContent(5,0.3578017);
   data_mc_ratio__658->SetBinContent(6,0.3493036);
   data_mc_ratio__658->SetBinContent(7,0.3249455);
   data_mc_ratio__658->SetBinContent(8,0.3244362);
   data_mc_ratio__658->SetBinContent(9,0.3016159);
   data_mc_ratio__658->SetBinContent(10,0.3388569);
   data_mc_ratio__658->SetBinContent(11,0.2940958);
   data_mc_ratio__658->SetBinContent(12,0.2664814);
   data_mc_ratio__658->SetBinContent(13,0.4532215);
   data_mc_ratio__658->SetBinContent(14,0.3429503);
   data_mc_ratio__658->SetBinContent(15,0.2142602);
   data_mc_ratio__658->SetBinContent(16,0.9993993);
   data_mc_ratio__658->SetBinContent(17,0.9997357);
   data_mc_ratio__658->SetBinContent(18,0.2665759);
   data_mc_ratio__658->SetBinError(1,0.03327064);
   data_mc_ratio__658->SetBinError(2,0.02029233);
   data_mc_ratio__658->SetBinError(3,0.01516739);
   data_mc_ratio__658->SetBinError(4,0.01270006);
   data_mc_ratio__658->SetBinError(5,0.01023964);
   data_mc_ratio__658->SetBinError(6,0.009182667);
   data_mc_ratio__658->SetBinError(7,0.008583955);
   data_mc_ratio__658->SetBinError(8,0.009808908);
   data_mc_ratio__658->SetBinError(9,0.01818812);
   data_mc_ratio__658->SetBinError(10,0.03018777);
   data_mc_ratio__658->SetBinError(11,0.04118164);
   data_mc_ratio__658->SetBinError(12,0.05226129);
   data_mc_ratio__658->SetBinError(13,0.1013434);
   data_mc_ratio__658->SetBinError(14,0.09900123);
   data_mc_ratio__658->SetBinError(15,0.1237032);
   data_mc_ratio__658->SetBinError(16,0.408003);
   data_mc_ratio__658->SetBinError(17,0.9997357);
   data_mc_ratio__658->SetBinError(18,0.2665759);
   data_mc_ratio__658->SetMinimum(0.4);
   data_mc_ratio__658->SetMaximum(1.6);
   data_mc_ratio__658->SetEntries(24.78922);
   data_mc_ratio__658->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__658->SetLineColor(ci);
   data_mc_ratio__658->SetLineWidth(2);
   data_mc_ratio__658->SetMarkerStyle(20);
   data_mc_ratio__658->SetMarkerSize(1.2);
   data_mc_ratio__658->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__658->GetXaxis()->SetRange(1,15);
   data_mc_ratio__658->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__658->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__658->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__658->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__658->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__658->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__658->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__658->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__658->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__658->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__658->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__658->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__658->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__658->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1658[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1658[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1658[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1658[25] = {
   0.03875285,
   0.02328652,
   0.01775681,
   0.01404134,
   0.01176484,
   0.01076257,
   0.01057407,
   0.01235186,
   0.02446114,
   0.04047111,
   0.06171566,
   0.09445079,
   0.1398095,
   0.1926797,
   0.275572,
   0.5496767,
   0.7066973,
   0.6431004,
   1,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1658,Graph_from_mc_statistical_error_fy1658,Graph_from_mc_statistical_error_fex1658,Graph_from_mc_statistical_error_fey1658);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1658 = new TH1F("Graph_Graph_from_mc_statistical_error1658","",100,0,11);
   Graph_Graph_from_mc_statistical_error1658->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1658->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1658->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1658->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1658->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1658);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo);
}
