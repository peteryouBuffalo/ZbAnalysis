void pt_lep1_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_All_amcnlo/pt_lep1_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_All_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_All_amcnlo", "pt_lep1_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-55.07594,210.4839,55030.86);
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
   st->SetMaximum(47164.07);
   
   TH1F *st_stack_264 = new TH1F("st_stack_264","",40,0,200);
   st_stack_264->SetMinimum(0.01);
   st_stack_264->SetMaximum(49522.27);
   st_stack_264->SetDirectory(0);
   st_stack_264->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_264->SetLineColor(ci);
   st_stack_264->GetXaxis()->SetRange(1,40);
   st_stack_264->GetXaxis()->SetLabelFont(42);
   st_stack_264->GetXaxis()->SetLabelSize(0.035);
   st_stack_264->GetXaxis()->SetTitleSize(0.035);
   st_stack_264->GetXaxis()->SetTitleFont(42);
   st_stack_264->GetYaxis()->SetTitle("Events/5.0");
   st_stack_264->GetYaxis()->SetLabelFont(42);
   st_stack_264->GetYaxis()->SetLabelSize(0.05);
   st_stack_264->GetYaxis()->SetTitleSize(0.057);
   st_stack_264->GetYaxis()->SetTitleOffset(1.2);
   st_stack_264->GetYaxis()->SetTitleFont(42);
   st_stack_264->GetZaxis()->SetLabelFont(42);
   st_stack_264->GetZaxis()->SetLabelSize(0.035);
   st_stack_264->GetZaxis()->SetTitleSize(0.035);
   st_stack_264->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_264);
   
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(8,84.40333);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(9,60.67508);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(10,42.19034);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(11,26.97989);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(12,14.58452);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(13,7.895638);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(14,4.306459);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(15,2.906707);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(16,0.9459341);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(18,1.362391);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(19,0.4378667);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(20,0.3962764);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(21,0.1970237);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(8,4.410011);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(9,3.717235);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(10,3.144354);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(11,2.490342);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(12,1.846877);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(13,1.333651);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(14,0.9755537);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(15,0.8215646);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(16,0.4801708);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(18,0.5421523);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(19,0.3107972);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(20,0.2802197);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(21,0.1970237);
   Zmm_2bjet_pt_lep1_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(8,184.4644);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(9,135.7481);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(10,74.14996);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(11,48.77565);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(12,27.18505);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(13,19.06492);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(14,15.28574);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(15,16.26519);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(16,12.85843);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(17,8.314412);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(18,5.550882);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(19,5.469837);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(20,4.237246);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(21,2.389729);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(22,3.573785);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(23,1.001909);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(24,0.8504596);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(25,1.593153);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(26,2.820892);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(27,1.148507);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(28,1.299957);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(29,1.647036);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(30,0.3519309);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(33,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(34,0.4985287);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(35,1.001909);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(39,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(40,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(41,0.7038619);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(8,8.711467);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(9,7.439208);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(10,5.507203);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(11,4.535413);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(12,3.257179);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(13,2.733392);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(14,2.538081);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(15,2.541946);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(16,2.422504);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(17,1.9236);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(18,1.468533);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(19,1.527654);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(20,1.371692);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(21,1.006027);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(22,1.315555);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(23,0.5801234);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(24,0.6102346);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(25,0.8214174);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(26,1.134651);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(27,0.6791308);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(28,0.6522082);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(29,0.8424663);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(30,0.3519309);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(33,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(34,0.4985287);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(35,0.5801234);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(39,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(40,0.2980476);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(41,0.4977055);
   Zmm_2bjet_pt_lep1_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(8,3168.069);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(9,2422.669);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(10,1655.764);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(11,976.9056);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(12,535.4165);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(13,271.065);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(14,147.7265);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(15,73.20597);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(16,33.1222);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(17,20.19196);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(18,7.713584);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(19,4.75202);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(20,3.056932);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(21,2.324394);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(22,1.306557);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(23,1.045313);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(24,0.7701666);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(25,0.2772972);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(26,1.015366);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(27,0.08255682);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(29,0.1604915);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(36,0.08255682);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(8,25.72885);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(9,22.39865);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(10,18.53339);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(11,14.15741);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(12,10.59325);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(13,7.393564);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(14,5.497513);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(15,3.981026);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(16,2.622423);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(17,2.161956);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(18,1.198691);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(19,1.019209);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(20,0.7327989);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(21,0.7851752);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(22,0.6133039);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(23,0.3600428);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(24,0.4689473);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(25,0.211517);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(26,0.6120758);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(27,0.08255682);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(29,0.1135317);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(36,0.08255682);
   Zmm_2bjet_pt_lep1_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_pt_lep1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_3,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_4 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_4","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(8,43.83163);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(9,36.52791);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(10,25.64581);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(11,18.8046);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(12,14.41278);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(13,11.33721);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(14,8.97131);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(15,7.204861);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(16,5.794971);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(17,4.681837);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(18,3.931098);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(19,3.145156);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(20,2.72483);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(21,2.202278);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(22,1.828177);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(23,1.539423);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(24,1.267189);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(25,1.04699);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(26,0.8979805);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(27,0.7675018);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(28,0.6671);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(29,0.5494074);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(30,0.4407442);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(31,0.3782638);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(32,0.3224775);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(33,0.2959426);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(34,0.2340613);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(35,0.234085);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(36,0.1931993);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(37,0.1538668);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(38,0.1492709);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(39,0.1238247);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(40,0.105702);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinContent(41,0.6055854);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(8,0.1558921);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(9,0.1422217);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(10,0.119212);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(11,0.1021379);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(12,0.08935147);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(13,0.07934004);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(14,0.07055784);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(15,0.06311726);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(16,0.05664956);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(17,0.05085427);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(18,0.04677679);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(19,0.04173084);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(20,0.038869);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(21,0.03499575);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(22,0.03181251);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(23,0.02929688);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(24,0.0266592);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(25,0.02406412);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(26,0.02236874);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(27,0.02069634);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(28,0.01920879);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(29,0.01741536);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(30,0.01562087);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(31,0.0144485);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(32,0.01335623);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(33,0.01294289);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(34,0.01129164);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(35,0.01142145);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(36,0.01041716);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(37,0.009300175);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(38,0.00918751);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(39,0.008329985);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(40,0.007799721);
   Zmm_2bjet_pt_lep1_all_stack_4->SetBinError(41,0.01830381);
   Zmm_2bjet_pt_lep1_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_pt_lep1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_4,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_5 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_5","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(8,22459.47);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(9,17662.7);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(10,10198.37);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(11,5986.464);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(12,3823.998);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(13,2521.891);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(14,1721.949);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(15,1237.047);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(16,880.3719);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(17,655.8479);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(18,475.2678);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(19,373.968);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(20,267.7402);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(21,220.7028);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(22,174.6665);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(23,126.9856);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(24,106.0283);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(25,77.33321);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(26,56.74294);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(27,52.97866);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(28,35.43293);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(29,39.57528);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(30,24.67238);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(31,30.37573);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(32,14.031);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(33,22.00243);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(34,11.45073);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(35,14.3024);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(36,9.888654);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(37,9.431765);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(38,11.0749);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(39,6.785174);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(40,5.80885);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinContent(41,33.89045);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(8,144.3411);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(9,128.3461);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(10,96.04356);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(11,72.82528);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(12,58.19646);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(13,47.14323);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(14,38.97074);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(15,33.15416);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(16,27.75326);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(17,23.91943);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(18,20.46971);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(19,18.2193);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(20,15.0615);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(21,13.86319);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(22,12.12801);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(23,10.55986);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(24,9.4737);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(25,8.225888);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(26,7.054355);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(27,6.870719);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(28,5.446402);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(29,5.787045);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(30,4.361591);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(31,4.895957);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(32,3.453621);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(33,4.526157);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(34,3.040175);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(35,3.422882);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(36,2.846209);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(37,2.679266);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(38,3.123435);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(39,2.627481);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(40,2.160219);
   Zmm_2bjet_pt_lep1_all_stack_5->SetBinError(41,5.439335);
   Zmm_2bjet_pt_lep1_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_pt_lep1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1_all__527 = new TH1D("Zmm_2bjet_pt_lep1_all__527","",40,0,200);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(8,9854);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(9,7888);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(10,4607);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(11,2814);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(12,1702);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(13,1130);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(14,790);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(15,473);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(16,352);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(17,273);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(18,209);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(19,154);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(20,102);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(21,72);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(22,74);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(23,70);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(24,41);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(25,37);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(26,28);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(27,38);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(28,17);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(29,16);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(30,7);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(31,13);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(32,9);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(33,10);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(34,11);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(35,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(36,5);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(37,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(38,5);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(39,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(40,4);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(41,19);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(8,99.26732);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(9,88.81441);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(10,67.87488);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(11,53.04715);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(12,41.2553);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(13,33.61547);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(14,28.10694);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(15,21.74856);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(16,18.76166);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(17,16.52271);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(18,14.45683);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(19,12.40967);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(20,10.0995);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(21,8.485281);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(22,8.602325);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(23,8.3666);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(24,6.403124);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(25,6.082763);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(26,5.291503);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(27,6.164414);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(28,4.123106);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(29,4);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(30,2.645751);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(31,3.605551);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(32,3);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(33,3.162278);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(34,3.316625);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(35,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(36,2.236068);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(37,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(38,2.236068);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(39,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(40,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(41,4.358899);
   Zmm_2bjet_pt_lep1_all__527->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all__527->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all__527->SetLineWidth(2);
   Zmm_2bjet_pt_lep1_all__527->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1_all__527->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_pt_lep1_all_fx1527[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_all_fy1527[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   25940.24,
   20318.32,
   11996.12,
   7057.929,
   4415.597,
   2831.254,
   1898.239,
   1336.63,
   933.0935,
   689.0361,
   493.8258,
   387.7729,
   278.1555,
   227.8163,
   181.375,
   130.5722,
   108.9162,
   80.25065,
   61.47717,
   54.97722,
   37.39999,
   41.93222,
   25.46506,
   30.75399,
   14.35348,
   22.59642,
   12.18332,
   15.5384,
   10.16441,
   9.585632,
   11.22417,
   7.207046,
   6.2126};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_all_fex1527[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_all_fey1527[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   146.9411,
   130.5512,
   98.02083,
   74.36892,
   59.27119,
   47.81638,
   39.45048,
   33.49907,
   27.98612,
   24.0939,
   20.5645,
   18.31431,
   15.14422,
   13.92325,
   12.2146,
   10.58195,
   9.504946,
   8.269539,
   7.171227,
   6.904726,
   5.485348,
   5.849174,
   4.375794,
   4.895978,
   3.453647,
   4.535978,
   3.080799,
   3.471713,
   2.847425,
   2.679282,
   3.123448,
   2.644344,
   2.180697};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_pt_lep1_all_fx1527,Graph_from_Zmm_2bjet_pt_lep1_all_fy1527,Graph_from_Zmm_2bjet_pt_lep1_all_fex1527,Graph_from_Zmm_2bjet_pt_lep1_all_fey1527);
   gre->SetName("Graph_from_Zmm_2bjet_pt_lep1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527 = new TH1F("Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->SetMaximum(28695.9);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_pt_lep1_all1527);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_pt_lep1_all","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-30.64508,-0.2774193,210.4839,1.658065);
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
   
   TH1D *data_mc_ratio__528 = new TH1D("data_mc_ratio__528","",40,0,200);
   data_mc_ratio__528->SetBinContent(8,0.3798732);
   data_mc_ratio__528->SetBinContent(9,0.388221);
   data_mc_ratio__528->SetBinContent(10,0.384041);
   data_mc_ratio__528->SetBinContent(11,0.3987005);
   data_mc_ratio__528->SetBinContent(12,0.3854518);
   data_mc_ratio__528->SetBinContent(13,0.3991165);
   data_mc_ratio__528->SetBinContent(14,0.4161752);
   data_mc_ratio__528->SetBinContent(15,0.3538751);
   data_mc_ratio__528->SetBinContent(16,0.3772398);
   data_mc_ratio__528->SetBinContent(17,0.3962057);
   data_mc_ratio__528->SetBinContent(18,0.4232262);
   data_mc_ratio__528->SetBinContent(19,0.3971397);
   data_mc_ratio__528->SetBinContent(20,0.3667014);
   data_mc_ratio__528->SetBinContent(21,0.3160442);
   data_mc_ratio__528->SetBinContent(22,0.4079944);
   data_mc_ratio__528->SetBinContent(23,0.5361017);
   data_mc_ratio__528->SetBinContent(24,0.3764364);
   data_mc_ratio__528->SetBinContent(25,0.4610554);
   data_mc_ratio__528->SetBinContent(26,0.4554536);
   data_mc_ratio__528->SetBinContent(27,0.6911953);
   data_mc_ratio__528->SetBinContent(28,0.4545456);
   data_mc_ratio__528->SetBinContent(29,0.3815682);
   data_mc_ratio__528->SetBinContent(30,0.2748865);
   data_mc_ratio__528->SetBinContent(31,0.4227093);
   data_mc_ratio__528->SetBinContent(32,0.6270256);
   data_mc_ratio__528->SetBinContent(33,0.442548);
   data_mc_ratio__528->SetBinContent(34,0.9028739);
   data_mc_ratio__528->SetBinContent(35,0.0643567);
   data_mc_ratio__528->SetBinContent(36,0.4919125);
   data_mc_ratio__528->SetBinContent(37,0.1043228);
   data_mc_ratio__528->SetBinContent(38,0.4454671);
   data_mc_ratio__528->SetBinContent(39,0.1387531);
   data_mc_ratio__528->SetBinContent(40,0.6438529);
   data_mc_ratio__528->SetBinContent(41,0.5397743);
   data_mc_ratio__528->SetBinError(8,0.00382677);
   data_mc_ratio__528->SetBinError(9,0.004371149);
   data_mc_ratio__528->SetBinError(10,0.005658072);
   data_mc_ratio__528->SetBinError(11,0.007515965);
   data_mc_ratio__528->SetBinError(12,0.009343086);
   data_mc_ratio__528->SetBinError(13,0.011873);
   data_mc_ratio__528->SetBinError(14,0.01480685);
   data_mc_ratio__528->SetBinError(15,0.0162712);
   data_mc_ratio__528->SetBinError(16,0.02010695);
   data_mc_ratio__528->SetBinError(17,0.02397946);
   data_mc_ratio__528->SetBinError(18,0.02927517);
   data_mc_ratio__528->SetBinError(19,0.03200243);
   data_mc_ratio__528->SetBinError(20,0.03630885);
   data_mc_ratio__528->SetBinError(21,0.03724616);
   data_mc_ratio__528->SetBinError(22,0.04742838);
   data_mc_ratio__528->SetBinError(23,0.06407641);
   data_mc_ratio__528->SetBinError(24,0.05878948);
   data_mc_ratio__528->SetBinError(25,0.07579705);
   data_mc_ratio__528->SetBinError(26,0.08607264);
   data_mc_ratio__528->SetBinError(27,0.1121267);
   data_mc_ratio__528->SetBinError(28,0.1102435);
   data_mc_ratio__528->SetBinError(29,0.09539205);
   data_mc_ratio__528->SetBinError(30,0.1038973);
   data_mc_ratio__528->SetBinError(31,0.1172385);
   data_mc_ratio__528->SetBinError(32,0.2090085);
   data_mc_ratio__528->SetBinError(33,0.139946);
   data_mc_ratio__528->SetBinError(34,0.2722267);
   data_mc_ratio__528->SetBinError(35,0.0643567);
   data_mc_ratio__528->SetBinError(36,0.2199899);
   data_mc_ratio__528->SetBinError(37,0.1043228);
   data_mc_ratio__528->SetBinError(38,0.1992189);
   data_mc_ratio__528->SetBinError(39,0.1387531);
   data_mc_ratio__528->SetBinError(40,0.3219264);
   data_mc_ratio__528->SetBinError(41,0.1494993);
   data_mc_ratio__528->SetMinimum(0.4);
   data_mc_ratio__528->SetMaximum(1.6);
   data_mc_ratio__528->SetEntries(286.6046);
   data_mc_ratio__528->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__528->SetLineColor(ci);
   data_mc_ratio__528->SetLineWidth(2);
   data_mc_ratio__528->SetMarkerStyle(20);
   data_mc_ratio__528->SetMarkerSize(1.2);
   data_mc_ratio__528->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__528->GetXaxis()->SetRange(1,40);
   data_mc_ratio__528->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__528->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__528->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__528->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__528->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__528->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__528->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__528->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__528->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__528->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__528->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__528->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__528->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__528->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1528[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_mc_statistical_error_fy1528[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1528[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_mc_statistical_error_fey1528[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005664602,
   0.006425294,
   0.008171047,
   0.01053693,
   0.01342314,
   0.01688876,
   0.02078267,
   0.02506234,
   0.02999284,
   0.03496754,
   0.04164323,
   0.04722946,
   0.05444516,
   0.06111612,
   0.06734446,
   0.0810429,
   0.08726847,
   0.1030464,
   0.1166486,
   0.1255925,
   0.1466671,
   0.1394912,
   0.1718353,
   0.1591981,
   0.2406139,
   0.2007388,
   0.2528703,
   0.223428,
   0.2801368,
   0.2795102,
   0.2782787,
   0.366911,
   0.351012};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1528,Graph_from_mc_statistical_error_fy1528,Graph_from_mc_statistical_error_fex1528,Graph_from_mc_statistical_error_fey1528);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1528 = new TH1F("Graph_Graph_from_mc_statistical_error1528","",100,0,220);
   Graph_Graph_from_mc_statistical_error1528->SetMinimum(0.5597068);
   Graph_Graph_from_mc_statistical_error1528->SetMaximum(1.440293);
   Graph_Graph_from_mc_statistical_error1528->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1528->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1528->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1528);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_All_amcnlo);
}
