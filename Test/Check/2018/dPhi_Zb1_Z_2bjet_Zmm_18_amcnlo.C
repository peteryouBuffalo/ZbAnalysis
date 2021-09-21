void dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-3.464569,3.416482,3471.104);
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
   st->SetMaximum(2974.902);
   
   TH1F *st_stack_327 = new TH1F("st_stack_327","",30,0,3.141593);
   st_stack_327->SetMinimum(0.01);
   st_stack_327->SetMaximum(3123.647);
   st_stack_327->SetDirectory(0);
   st_stack_327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_327->SetLineColor(ci);
   st_stack_327->GetXaxis()->SetRange(1,31);
   st_stack_327->GetXaxis()->SetLabelFont(42);
   st_stack_327->GetXaxis()->SetLabelSize(0.035);
   st_stack_327->GetXaxis()->SetTitleSize(0.035);
   st_stack_327->GetXaxis()->SetTitleFont(42);
   st_stack_327->GetYaxis()->SetTitle("Events/0.105");
   st_stack_327->GetYaxis()->SetLabelFont(42);
   st_stack_327->GetYaxis()->SetLabelSize(0.05);
   st_stack_327->GetYaxis()->SetTitleSize(0.057);
   st_stack_327->GetYaxis()->SetTitleOffset(1.2);
   st_stack_327->GetYaxis()->SetTitleFont(42);
   st_stack_327->GetZaxis()->SetLabelFont(42);
   st_stack_327->GetZaxis()->SetLabelSize(0.035);
   st_stack_327->GetZaxis()->SetTitleSize(0.035);
   st_stack_327->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_327);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.115052);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,2.207984);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,4.248456);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.559311);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,1.557273);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,2.747547);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.262481);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.598855);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.582474);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,4.939897);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.977019);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,2.518246);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,3.541612);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,3.181329);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,3.790831);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,3.3462);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,4.78093);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,3.943103);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,3.77295);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,4.315985);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,4.829667);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,5.730365);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,6.13017);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,4.554039);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,4.913949);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,6.990099);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,6.202751);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,4.485077);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,4.437467);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,3.42745);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.516612);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.7385801);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,1.068516);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.6410619);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.6563354);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.84506);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.5828375);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.6172812);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.6585675);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,1.172502);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.7354858);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.8114924);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.9702031);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.9026335);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,1.005207);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.9138596);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,1.121714);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.9934138);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.988476);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,1.075816);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,1.146803);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,1.200949);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,1.287677);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,1.101839);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,1.144276);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,1.397132);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,1.321246);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,1.080236);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,1.079258);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.9505025);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,6.480873);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.994115);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,5.982345);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,4.486758);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,3.489701);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,4.486758);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,5.709646);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,4.486758);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,5.211117);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,3.217002);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,5.982345);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,4.712588);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,6.706703);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,5.709646);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,6.979402);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,10.96763);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,8.973517);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,13.9588);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,15.18169);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,12.41635);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,10.1964);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,14.45733);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,15.45439);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,15.68022);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,12.46322);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,17.44851);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,10.96763);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,15.08751);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,5.982345);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,7.70376);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.797471);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.9970574);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,1.726954);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,1.495586);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,1.318983);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,1.495586);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,1.734936);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,1.495586);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,1.661768);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,1.329417);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,1.726954);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.585226);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,1.872716);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.734936);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.865324);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,2.338307);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,2.115078);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,2.637966);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,2.780664);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,2.552855);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,2.290585);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,2.684659);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,2.77569);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,2.824999);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,2.492644);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,2.949336);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,2.338307);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,2.83729);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.726954);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,2.001032);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,78.27843);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,80.97245);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,79.1562);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,78.12272);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,79.78114);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,80.94635);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,84.26744);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,88.25627);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,92.72374);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,98.42016);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,104.6757);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,119.0761);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,127.8104);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,135.8372);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,147.8456);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,160.3096);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,178.3895);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,181.7461);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,192.7356);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,192.8348);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,195.4296);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,200.3193);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,199.3923);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,205.1525);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,188.3412);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,195.741);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,196.8069);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,185.785);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,187.0088);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,185.7443);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.539962);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.581774);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.55257);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.537566);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.563327);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.582156);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.634974);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.695971);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.763652);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,2.847464);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,2.936513);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,3.131855);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.245676);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.34641);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.491788);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.635296);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.835101);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,3.870794);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.98635);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.986773);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,4.013121);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,4.063273);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,4.053676);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,4.111746);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,3.94041);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,4.016151);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,4.027776);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.911253);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.92555);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.912759);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,1.214479);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,1.228042);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,1.241604);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,1.213801);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,1.190746);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,1.209733);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,1.291105);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,1.291105);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,1.394854);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,1.506741);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,1.676945);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,1.812565);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,2.108217);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,2.359115);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,2.749701);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,3.086039);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,3.480016);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,3.913323);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,4.318827);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,4.795533);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,5.085082);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,5.424811);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,5.493299);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,5.426167);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,5.276985);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,4.999641);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,4.508018);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,4.095732);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,3.677344);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,3.581731);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.02869739);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.02885718);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.02901608);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.02868938);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.0284156);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.02864125);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.02958885);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.02958885);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.03075472);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.03196441);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.03372148);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.03505856);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.03780985);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.03999648);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.04318073);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.04574546);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.04857781);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.05151339);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.05411657);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.05702506);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.05872138);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.06065123);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.06103289);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.06065881);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.05981915);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.05822597);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.05528917);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.0527003);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.04993607);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.04928262);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,660.4239);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,688.984);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,623.6225);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,665.7503);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,615.2297);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,658.0137);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,677.1741);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,648.9983);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,671.9178);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,724.4397);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,727.3786);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,788.3614);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,844.9238);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,930.3695);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,946.4768);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,959.7726);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,1125.613);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,1138.27);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,1174.121);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,1282.627);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,1197.612);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,1323.796);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,1355.329);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,1401.671);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,1425.201);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,1404.795);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,1318.248);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,1334.532);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,1310.463);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,1238.113);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(1,27.86483);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(2,28.249);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(3,27.09352);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(4,28.13903);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(5,26.90689);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(6,28.16026);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(7,28.19826);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(8,27.24954);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(9,27.90286);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(10,29.10256);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(11,29.36362);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(12,30.14796);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(13,31.85285);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(14,32.69545);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(15,33.14611);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(16,33.05348);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(17,35.90856);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(18,36.81605);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(19,36.94598);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(20,38.17248);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(21,36.88766);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(22,39.05278);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(23,39.48745);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(24,40.2837);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(25,41.00103);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(26,39.97717);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(27,39.00942);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(28,39.76195);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(29,38.77315);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(30,37.81368);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1__653 = new TH1D("Zmm_2bjet_dPhi_Zb1__653","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(1,302);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(2,340);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(3,298);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(4,290);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(5,295);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(6,299);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(7,301);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(8,319);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(9,312);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(10,376);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(11,371);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(12,368);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(13,377);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(14,429);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(15,479);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(16,469);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(17,515);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(18,551);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(19,589);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(20,580);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(21,640);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(22,641);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(23,640);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(24,646);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(25,689);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(26,674);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(27,723);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(28,745);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(29,655);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(30,706);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(1,17.37815);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(2,18.43909);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(3,17.26268);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(4,17.02939);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(5,17.17556);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(6,17.29162);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(7,17.34935);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(8,17.86057);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(9,17.66352);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(10,19.39072);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(11,19.26136);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(12,19.18333);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(13,19.41649);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(14,20.71232);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(15,21.88607);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(16,21.65641);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(17,22.69361);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(18,23.47339);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(19,24.26932);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(20,24.08319);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(21,25.29822);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(22,25.31798);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(23,25.29822);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(24,25.41653);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(25,26.24881);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(26,25.96151);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(27,26.88866);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(28,27.29469);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(29,25.59297);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(30,26.57066);
   Zmm_2bjet_dPhi_Zb1__653->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__653->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__653->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__653->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__653->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fx1653[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fy1653[30] = {
   747.5128,
   775.3866,
   714.2511,
   751.1329,
   701.2486,
   747.4041,
   769.7048,
   744.6313,
   772.83,
   832.5235,
   841.6905,
   916.4809,
   985.0907,
   1077.457,
   1107.842,
   1137.482,
   1321.237,
   1341.831,
   1390.13,
   1496.99,
   1413.152,
   1549.727,
   1581.8,
   1632.484,
   1636.196,
   1629.974,
   1536.733,
   1543.986,
   1511.569,
   1438.571};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fex1653[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fey1653[30] = {
   28.04281,
   28.39387,
   27.28918,
   28.30005,
   27.06885,
   28.33054,
   28.38019,
   27.43035,
   28.09632,
   29.29523,
   29.56975,
   30.36249,
   32.08719,
   32.92442,
   33.39684,
   33.34746,
   36.19208,
   37.12617,
   37.27745,
   38.48,
   37.19368,
   39.37363,
   39.81278,
   40.60642,
   41.2812,
   40.31077,
   39.3087,
   40.06908,
   39.02457,
   38.0801};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb1_fx1653,Graph_from_Zmm_2bjet_dPhi_Zb1_fy1653,Graph_from_Zmm_2bjet_dPhi_Zb1_fex1653,Graph_from_Zmm_2bjet_dPhi_Zb1_fey1653);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->SetMinimum(573.85);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->SetMaximum(1777.807);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb11653);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__654 = new TH1D("data_mc_ratio__654","",30,0,3.141593);
   data_mc_ratio__654->SetBinContent(1,0.4040065);
   data_mc_ratio__654->SetBinContent(2,0.4384909);
   data_mc_ratio__654->SetBinContent(3,0.4172202);
   data_mc_ratio__654->SetBinContent(4,0.3860835);
   data_mc_ratio__654->SetBinContent(5,0.4206782);
   data_mc_ratio__654->SetBinContent(6,0.4000513);
   data_mc_ratio__654->SetBinContent(7,0.391059);
   data_mc_ratio__654->SetBinContent(8,0.4284);
   data_mc_ratio__654->SetBinContent(9,0.4037111);
   data_mc_ratio__654->SetBinContent(10,0.4516389);
   data_mc_ratio__654->SetBinContent(11,0.4407796);
   data_mc_ratio__654->SetBinContent(12,0.4015359);
   data_mc_ratio__654->SetBinContent(13,0.3827059);
   data_mc_ratio__654->SetBinContent(14,0.3981598);
   data_mc_ratio__654->SetBinContent(15,0.432372);
   data_mc_ratio__654->SetBinContent(16,0.4123142);
   data_mc_ratio__654->SetBinContent(17,0.3897862);
   data_mc_ratio__654->SetBinContent(18,0.4106329);
   data_mc_ratio__654->SetBinContent(19,0.4237014);
   data_mc_ratio__654->SetBinContent(20,0.3874443);
   data_mc_ratio__654->SetBinContent(21,0.4528882);
   data_mc_ratio__654->SetBinContent(22,0.4136211);
   data_mc_ratio__654->SetBinContent(23,0.4046025);
   data_mc_ratio__654->SetBinContent(24,0.3957159);
   data_mc_ratio__654->SetBinContent(25,0.4210986);
   data_mc_ratio__654->SetBinContent(26,0.4135034);
   data_mc_ratio__654->SetBinContent(27,0.4704786);
   data_mc_ratio__654->SetBinContent(28,0.4825175);
   data_mc_ratio__654->SetBinContent(29,0.4333245);
   data_mc_ratio__654->SetBinContent(30,0.4907649);
   data_mc_ratio__654->SetBinError(1,0.02324796);
   data_mc_ratio__654->SetBinError(2,0.02378051);
   data_mc_ratio__654->SetBinError(3,0.02416892);
   data_mc_ratio__654->SetBinError(4,0.0226716);
   data_mc_ratio__654->SetBinError(5,0.02449283);
   data_mc_ratio__654->SetBinError(6,0.02313557);
   data_mc_ratio__654->SetBinError(7,0.02254027);
   data_mc_ratio__654->SetBinError(8,0.02398579);
   data_mc_ratio__654->SetBinError(9,0.02285564);
   data_mc_ratio__654->SetBinError(10,0.0232915);
   data_mc_ratio__654->SetBinError(11,0.02288414);
   data_mc_ratio__654->SetBinError(12,0.02093151);
   data_mc_ratio__654->SetBinError(13,0.01971035);
   data_mc_ratio__654->SetBinError(14,0.01922334);
   data_mc_ratio__654->SetBinError(15,0.01975558);
   data_mc_ratio__654->SetBinError(16,0.0190389);
   data_mc_ratio__654->SetBinError(17,0.01717603);
   data_mc_ratio__654->SetBinError(18,0.01749355);
   data_mc_ratio__654->SetBinError(19,0.01745831);
   data_mc_ratio__654->SetBinError(20,0.01608775);
   data_mc_ratio__654->SetBinError(21,0.01790198);
   data_mc_ratio__654->SetBinError(22,0.01633705);
   data_mc_ratio__654->SetBinError(23,0.01599332);
   data_mc_ratio__654->SetBinError(24,0.01556924);
   data_mc_ratio__654->SetBinError(25,0.01604258);
   data_mc_ratio__654->SetBinError(26,0.01592756);
   data_mc_ratio__654->SetBinError(27,0.01749729);
   data_mc_ratio__654->SetBinError(28,0.01767807);
   data_mc_ratio__654->SetBinError(29,0.01693139);
   data_mc_ratio__654->SetBinError(30,0.01847018);
   data_mc_ratio__654->SetMinimum(0.4);
   data_mc_ratio__654->SetMaximum(1.6);
   data_mc_ratio__654->SetEntries(9275.906);
   data_mc_ratio__654->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__654->SetLineColor(ci);
   data_mc_ratio__654->SetLineWidth(2);
   data_mc_ratio__654->SetMarkerStyle(20);
   data_mc_ratio__654->SetMarkerSize(1.2);
   data_mc_ratio__654->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__654->GetXaxis()->SetRange(1,31);
   data_mc_ratio__654->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__654->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__654->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__654->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__654->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__654->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1654[30] = {
   0.03751482,
   0.03661898,
   0.03820671,
   0.03767649,
   0.03860093,
   0.03790525,
   0.03687153,
   0.0368375,
   0.03635511,
   0.03518847,
   0.03513138,
   0.03312943,
   0.03257283,
   0.03055753,
   0.03014584,
   0.02931691,
   0.02739257,
   0.02766829,
   0.0268158,
   0.02570492,
   0.02631966,
   0.02540681,
   0.0251693,
   0.024874,
   0.02522998,
   0.02473092,
   0.02557939,
   0.02595172,
   0.02581725,
   0.02647079};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1654,Graph_from_mc_statistical_error_fy1654,Graph_from_mc_statistical_error_fex1654,Graph_from_mc_statistical_error_fey1654);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1654 = new TH1F("Graph_Graph_from_mc_statistical_error1654","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1654->SetMinimum(0.9536789);
   Graph_Graph_from_mc_statistical_error1654->SetMaximum(1.046321);
   Graph_Graph_from_mc_statistical_error1654->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1654->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1654->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1654);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo);
}
