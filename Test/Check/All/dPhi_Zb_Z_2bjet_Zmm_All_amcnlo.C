void dPhi_Zb_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_All_amcnlo/dPhi_Zb_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_All_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-16.43933,3.416482,16432.89);
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
   st->SetMaximum(14083.77);
   
   TH1F *st_stack_324 = new TH1F("st_stack_324","",30,0,3.141593);
   st_stack_324->SetMinimum(0.01);
   st_stack_324->SetMaximum(14787.96);
   st_stack_324->SetDirectory(0);
   st_stack_324->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_324->SetLineColor(ci);
   st_stack_324->GetXaxis()->SetRange(1,31);
   st_stack_324->GetXaxis()->SetLabelFont(42);
   st_stack_324->GetXaxis()->SetLabelSize(0.035);
   st_stack_324->GetXaxis()->SetTitleSize(0.035);
   st_stack_324->GetXaxis()->SetTitleFont(42);
   st_stack_324->GetYaxis()->SetTitle("Events/0.105");
   st_stack_324->GetYaxis()->SetLabelFont(42);
   st_stack_324->GetYaxis()->SetLabelSize(0.05);
   st_stack_324->GetYaxis()->SetTitleSize(0.057);
   st_stack_324->GetYaxis()->SetTitleOffset(1.2);
   st_stack_324->GetYaxis()->SetTitleFont(42);
   st_stack_324->GetZaxis()->SetLabelFont(42);
   st_stack_324->GetZaxis()->SetLabelSize(0.035);
   st_stack_324->GetZaxis()->SetTitleSize(0.035);
   st_stack_324->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_324);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(1,1.869947);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(2,1.742808);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(3,2.433129);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(4,2.657112);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(5,1.61711);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(6,2.870762);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(7,1.434215);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(8,2.937958);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(9,3.044865);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(10,1.700438);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(11,2.691412);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(12,2.316628);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(13,2.913953);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(14,3.686922);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(15,5.573136);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(16,6.575888);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(17,6.612497);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(18,6.749356);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(19,9.44744);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(20,9.85869);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(21,6.219777);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(22,10.31948);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(23,17.578);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(24,15.67726);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(25,15.64438);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(26,19.50938);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(27,17.40701);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(28,21.38934);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(29,21.22607);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(30,23.57647);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(1,0.6317088);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(2,0.578297);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(3,0.7040755);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(4,0.7947054);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(5,0.5936859);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(6,0.8123986);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(7,0.544879);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(8,0.8323806);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(9,0.8316495);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(10,0.5990249);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(11,0.7881704);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(12,0.6929076);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(13,0.781044);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(14,0.9384395);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(15,1.092506);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(16,1.21949);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(17,1.188305);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(18,1.293752);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(19,1.667443);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(20,1.488358);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(21,1.176266);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(22,1.55387);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(23,1.982596);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(24,1.913561);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(25,1.909626);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(26,2.114223);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(27,1.975045);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(28,2.213622);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(29,2.232065);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(30,2.313371);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(1,3.369794);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(2,7.530822);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(3,4.540146);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(4,6.348832);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(5,4.442579);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(6,6.53426);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(7,6.050784);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(8,2.644093);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(9,5.448464);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(10,2.746512);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(11,4.847897);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(12,3.915516);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(13,8.615938);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(14,7.165898);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(15,8.843606);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(16,10.48664);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(17,7.882753);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(18,14.19325);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(19,12.7488);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(20,22.12503);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(21,24.01439);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(22,27.24963);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(23,28.57225);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(24,42.69896);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(25,50.65472);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(26,44.77207);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(27,43.99792);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(28,61.29133);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(29,52.15923);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(30,51.25348);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(1,1.146248);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(2,1.684959);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(3,1.345307);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(4,1.620083);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(5,1.371393);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(6,1.674507);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(7,1.592431);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(8,1.09855);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(9,1.545307);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(10,0.9876368);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(11,1.256044);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(12,1.309057);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(13,1.870249);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(14,1.750324);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(15,1.954054);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(16,1.996098);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(17,1.72132);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(18,2.448455);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(19,2.241189);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(20,3.025461);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(21,3.114043);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(22,3.353669);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(23,3.528285);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(24,4.243689);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(25,4.583232);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(26,4.231286);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(27,4.278028);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(28,4.980003);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(29,4.664436);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(30,4.577113);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(1,114.5858);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(2,119.509);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(3,120.1281);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(4,113.3566);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(5,117.1328);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(6,114.3502);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(7,115.7342);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(8,120.9026);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(9,130.1097);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(10,141.3163);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(11,153.6817);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(12,162.6381);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(13,177.1407);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(14,204.4817);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(15,237.6319);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(16,262.9595);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(17,293.3797);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(18,333.3848);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(19,354.4215);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(20,415.7462);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(21,469.0184);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(22,463.7953);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(23,522.5943);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(24,546.3136);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(25,581.0144);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(26,559.9647);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(27,586.5813);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(28,586.895);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(29,613.0217);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(30,594.9335);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(1,4.765193);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(2,5.151834);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(3,4.979912);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(4,4.819548);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(5,4.969938);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(6,4.886494);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(7,4.91805);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(8,4.938384);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(9,5.324571);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(10,5.595252);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(11,5.496478);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(12,5.889884);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(13,5.979882);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(14,6.501132);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(15,7.086111);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(16,7.407869);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(17,7.772459);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(18,8.366576);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(19,8.523176);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(20,9.280294);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(21,10.07492);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(22,9.706153);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(23,10.48963);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(24,10.60878);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(25,11.08129);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(26,10.53846);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(27,11.02425);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(28,10.99224);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(29,11.30223);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(30,11.10701);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(1,0.8405207);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(2,0.8475771);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(3,0.8186711);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(4,0.8701059);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(5,0.8599917);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(6,0.8341076);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(7,0.9660676);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(8,0.9614942);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(9,0.9766593);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(10,1.125747);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(11,1.225645);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(12,1.365392);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(13,1.469272);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(14,1.744598);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(15,1.904857);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(16,2.351634);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(17,2.792568);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(18,3.309896);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(19,4.065535);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(20,5.147342);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(21,6.514809);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(22,8.335237);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(23,10.76404);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(24,13.47528);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(25,16.7677);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(26,20.13778);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(27,22.93353);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(28,24.05411);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(29,22.89202);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinContent(30,20.66488);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(1,0.02149696);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(2,0.0216372);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(3,0.02126451);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(4,0.022045);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(5,0.02175599);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(6,0.02138214);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(7,0.02320026);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(8,0.0230996);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(9,0.02334966);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(10,0.0250152);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(11,0.02604196);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(12,0.02747881);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(13,0.02849657);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(14,0.03104978);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(15,0.03251106);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(16,0.03605089);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(17,0.03940104);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(18,0.04288963);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(19,0.04745826);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(20,0.05340439);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(21,0.06008625);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(22,0.06793082);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(23,0.07722898);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(24,0.08645034);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(25,0.0964383);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(26,0.1056083);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(27,0.1128076);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(28,0.1154897);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(29,0.1126303);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetBinError(30,0.1070841);
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(1,593.3573);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(2,604.5289);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(3,595.5622);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(4,623.974);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(5,531.1221);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(6,582.1547);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(7,648.9551);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(8,638.8064);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(9,643.466);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(10,695.4365);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(11,729.5084);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(12,781.7373);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(13,847.487);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(14,1027.486);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(15,1045.877);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(16,1214.422);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(17,1362.378);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(18,1584.669);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(19,1833.509);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(20,2168.262);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(21,2665.479);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(22,3016.593);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(23,3616.745);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(24,4173.026);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(25,4832.919);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(26,5541.63);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(27,6225.49);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(28,6678.248);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(29,7036.774);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinContent(30,6809.637);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(1,23.11106);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(2,23.40922);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(3,23.49127);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(4,25.24125);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(5,23.15314);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(6,23.6769);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(7,24.98599);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(8,24.99645);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(9,24.97);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(10,25.3433);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(11,25.76454);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(12,26.74084);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(13,28.31306);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(14,31.69287);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(15,31.02819);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(16,33.58626);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(17,35.73846);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(18,38.0232);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(19,40.6818);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(20,44.7511);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(21,49.60647);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(22,52.60567);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(23,57.19479);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(24,61.47466);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(25,66.29942);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(26,70.56004);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(27,74.89083);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(28,77.86572);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(29,79.66842);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetBinError(30,78.11907);
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all__647 = new TH1D("Zmm_2bjet_dPhi_Zb_all__647","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(1,333);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(2,317);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(3,330);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(4,320);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(5,308);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(6,356);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(7,335);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(8,345);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(9,337);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(10,436);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(11,434);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(12,427);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(13,494);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(14,530);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(15,545);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(16,641);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(17,757);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(18,842);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(19,910);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(20,1058);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(21,1191);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(22,1434);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(23,1590);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(24,1885);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(25,1982);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(26,2189);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(27,2471);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(28,2613);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(29,2740);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(30,2677);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(1,18.24829);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(2,17.80449);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(3,18.1659);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(4,17.88854);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(5,17.54993);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(6,18.86796);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(7,18.30301);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(8,18.57418);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(9,18.35756);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(10,20.88061);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(11,20.83267);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(12,20.66398);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(13,22.22611);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(14,23.02173);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(15,23.34524);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(16,25.31798);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(17,27.51363);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(18,29.01724);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(19,30.16621);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(20,32.52691);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(21,34.51087);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(22,37.86819);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(23,39.8748);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(24,43.41659);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(25,44.51966);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(26,46.78675);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(27,49.70915);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(28,51.11751);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(29,52.34501);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(30,51.73973);
   Zmm_2bjet_dPhi_Zb_all__647->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all__647->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all__647->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb_all__647->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb_all__647->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_all_fx1647[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_all_fy1647[30] = {
   714.0234,
   734.159,
   723.4823,
   747.2067,
   655.1746,
   706.744,
   773.1404,
   766.2526,
   783.0457,
   842.3254,
   891.9551,
   951.973,
   1037.627,
   1244.566,
   1299.831,
   1496.796,
   1673.046,
   1942.306,
   2214.192,
   2621.139,
   3171.246,
   3526.293,
   4196.253,
   4791.191,
   5497.001,
   6186.014,
   6896.41,
   7371.878,
   7746.073,
   7500.065};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_all_fex1647[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_all_fey1647[30] = {
   23.63348,
   24.03553,
   24.06128,
   25.76054,
   23.72766,
   24.24743,
   25.52097,
   25.51687,
   25.59165,
   25.97931,
   26.38603,
   27.42185,
   29.00857,
   32.4137,
   31.90571,
   34.47298,
   36.63366,
   39.0312,
   41.65884,
   45.82746,
   50.72859,
   53.6212,
   58.28947,
   62.55684,
   67.4023,
   71.4994,
   75.84449,
   78.82648,
   80.63218,
   79.07128};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb_all_fx1647,Graph_from_Zmm_2bjet_dPhi_Zb_all_fy1647,Graph_from_Zmm_2bjet_dPhi_Zb_all_fex1647,Graph_from_Zmm_2bjet_dPhi_Zb_all_fey1647);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->SetMinimum(568.3022);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->SetMaximum(8546.231);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb_all1647);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb_all","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__648 = new TH1D("data_mc_ratio__648","",30,0,3.141593);
   data_mc_ratio__648->SetBinContent(1,0.4663713);
   data_mc_ratio__648->SetBinContent(2,0.4317866);
   data_mc_ratio__648->SetBinContent(3,0.4561273);
   data_mc_ratio__648->SetBinContent(4,0.4282617);
   data_mc_ratio__648->SetBinContent(5,0.4701037);
   data_mc_ratio__648->SetBinContent(6,0.5037184);
   data_mc_ratio__648->SetBinContent(7,0.4332978);
   data_mc_ratio__648->SetBinContent(8,0.4502432);
   data_mc_ratio__648->SetBinContent(9,0.4303708);
   data_mc_ratio__648->SetBinContent(10,0.5176147);
   data_mc_ratio__648->SetBinContent(11,0.4865716);
   data_mc_ratio__648->SetBinContent(12,0.4485421);
   data_mc_ratio__648->SetBinContent(13,0.4760864);
   data_mc_ratio__648->SetBinContent(14,0.4258514);
   data_mc_ratio__648->SetBinContent(15,0.4192854);
   data_mc_ratio__648->SetBinContent(16,0.4282482);
   data_mc_ratio__648->SetBinContent(17,0.4524682);
   data_mc_ratio__648->SetBinContent(18,0.4335053);
   data_mc_ratio__648->SetBinContent(19,0.4109851);
   data_mc_ratio__648->SetBinContent(20,0.4036413);
   data_mc_ratio__648->SetBinContent(21,0.3755622);
   data_mc_ratio__648->SetBinContent(22,0.4066594);
   data_mc_ratio__648->SetBinContent(23,0.3789094);
   data_mc_ratio__648->SetBinContent(24,0.3934303);
   data_mc_ratio__648->SetBinContent(25,0.3605603);
   data_mc_ratio__648->SetBinContent(26,0.3538628);
   data_mc_ratio__648->SetBinContent(27,0.3583024);
   data_mc_ratio__648->SetBinContent(28,0.3544552);
   data_mc_ratio__648->SetBinContent(29,0.3537276);
   data_mc_ratio__648->SetBinContent(30,0.3569302);
   data_mc_ratio__648->SetBinError(1,0.02555699);
   data_mc_ratio__648->SetBinError(2,0.02425155);
   data_mc_ratio__648->SetBinError(3,0.02510898);
   data_mc_ratio__648->SetBinError(4,0.02394056);
   data_mc_ratio__648->SetBinError(5,0.02678664);
   data_mc_ratio__648->SetBinError(6,0.02669702);
   data_mc_ratio__648->SetBinError(7,0.02367359);
   data_mc_ratio__648->SetBinError(8,0.02424028);
   data_mc_ratio__648->SetBinError(9,0.02344379);
   data_mc_ratio__648->SetBinError(10,0.02478925);
   data_mc_ratio__648->SetBinError(11,0.02335618);
   data_mc_ratio__648->SetBinError(12,0.02170648);
   data_mc_ratio__648->SetBinError(13,0.02142014);
   data_mc_ratio__648->SetBinError(14,0.0184978);
   data_mc_ratio__648->SetBinError(15,0.01796021);
   data_mc_ratio__648->SetBinError(16,0.01691479);
   data_mc_ratio__648->SetBinError(17,0.01644524);
   data_mc_ratio__648->SetBinError(18,0.01493958);
   data_mc_ratio__648->SetBinError(19,0.01362402);
   data_mc_ratio__648->SetBinError(20,0.01240946);
   data_mc_ratio__648->SetBinError(21,0.01088243);
   data_mc_ratio__648->SetBinError(22,0.01073881);
   data_mc_ratio__648->SetBinError(23,0.009502478);
   data_mc_ratio__648->SetBinError(24,0.009061752);
   data_mc_ratio__648->SetBinError(25,0.0080989);
   data_mc_ratio__648->SetBinError(26,0.007563312);
   data_mc_ratio__648->SetBinError(27,0.007207976);
   data_mc_ratio__648->SetBinError(28,0.006934124);
   data_mc_ratio__648->SetBinError(29,0.006757619);
   data_mc_ratio__648->SetBinError(30,0.006898571);
   data_mc_ratio__648->SetMinimum(0.4);
   data_mc_ratio__648->SetMaximum(1.6);
   data_mc_ratio__648->SetEntries(11532.79);
   data_mc_ratio__648->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__648->SetLineColor(ci);
   data_mc_ratio__648->SetLineWidth(2);
   data_mc_ratio__648->SetMarkerStyle(20);
   data_mc_ratio__648->SetMarkerSize(1.2);
   data_mc_ratio__648->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__648->GetXaxis()->SetRange(1,31);
   data_mc_ratio__648->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__648->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__648->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__648->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__648->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__648->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__648->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__648->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__648->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__648->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__648->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__648->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__648->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__648->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1648[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1648[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1648[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1648[30] = {
   0.03309903,
   0.03273886,
   0.0332576,
   0.03447578,
   0.03621578,
   0.03430865,
   0.03300949,
   0.03330086,
   0.03268219,
   0.03084237,
   0.02958224,
   0.02880528,
   0.02795665,
   0.02604419,
   0.02454606,
   0.02303119,
   0.02189639,
   0.02009529,
   0.01881446,
   0.01748379,
   0.01599642,
   0.01520611,
   0.01389084,
   0.01305664,
   0.01226165,
   0.01155823,
   0.01099768,
   0.01069286,
   0.01040943,
   0.01054275};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1648,Graph_from_mc_statistical_error_fy1648,Graph_from_mc_statistical_error_fex1648,Graph_from_mc_statistical_error_fey1648);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1648 = new TH1F("Graph_Graph_from_mc_statistical_error1648","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1648->SetMinimum(0.9565411);
   Graph_Graph_from_mc_statistical_error1648->SetMaximum(1.043459);
   Graph_Graph_from_mc_statistical_error1648->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1648->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1648->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1648);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_All_amcnlo);
}
