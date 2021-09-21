void pt_lep1_Z_bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_bjet_Zmm_17_amcnlo/pt_lep1_Z_bjet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:46:09 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_bjet_Zmm_17_amcnlo = new TCanvas("pt_lep1_Z_bjet_Zmm_17_amcnlo", "pt_lep1_Z_bjet_Zmm_17_amcnlo",0,0,600,600);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-385.161,210.4839,384785.8);
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
   st->SetMaximum(329779.7);
   
   TH1F *st_stack_130 = new TH1F("st_stack_130","",40,0,200);
   st_stack_130->SetMinimum(0.01);
   st_stack_130->SetMaximum(346268.7);
   st_stack_130->SetDirectory(0);
   st_stack_130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_130->SetLineColor(ci);
   st_stack_130->GetXaxis()->SetRange(1,40);
   st_stack_130->GetXaxis()->SetLabelFont(42);
   st_stack_130->GetXaxis()->SetLabelSize(0.035);
   st_stack_130->GetXaxis()->SetTitleSize(0.035);
   st_stack_130->GetXaxis()->SetTitleFont(42);
   st_stack_130->GetYaxis()->SetTitle("Events/5.0");
   st_stack_130->GetYaxis()->SetLabelFont(42);
   st_stack_130->GetYaxis()->SetLabelSize(0.05);
   st_stack_130->GetYaxis()->SetTitleSize(0.057);
   st_stack_130->GetYaxis()->SetTitleOffset(1.2);
   st_stack_130->GetYaxis()->SetTitleFont(42);
   st_stack_130->GetZaxis()->SetLabelFont(42);
   st_stack_130->GetZaxis()->SetLabelSize(0.035);
   st_stack_130->GetZaxis()->SetTitleSize(0.035);
   st_stack_130->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_130);
   
   
   TH1D *Zmm_bjet_pt_lep1_stack_1 = new TH1D("Zmm_bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(8,677.3831);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(9,517.0741);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(10,326.0617);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(11,179.9824);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(12,98.03318);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(13,41.77262);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(14,26.53403);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(15,13.26522);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(16,8.06754);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(17,2.975907);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(18,3.293325);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(19,2.080325);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(20,1.285787);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(22,0.4043335);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(23,0.6135645);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(24,0.199812);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(27,0.608855);
   Zmm_bjet_pt_lep1_stack_1->SetBinContent(29,0.4043335);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(8,12.60809);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(9,11.03593);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(10,8.243046);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(11,6.561973);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(12,4.511104);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(13,3.003876);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(14,2.447033);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(15,1.631413);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(16,1.264727);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(17,0.7650846);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(18,0.8092323);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(19,0.6399964);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(20,0.501797);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(22,0.2859263);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(23,0.3542416);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(24,0.199812);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(27,0.3515436);
   Zmm_bjet_pt_lep1_stack_1->SetBinError(29,0.2859263);
   Zmm_bjet_pt_lep1_stack_1->SetEntries(9423);

   ci = TColor::GetColor("#ff6600");
   Zmm_bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zmm_bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_pt_lep1_stack_1,"");
   
   TH1D *Zmm_bjet_pt_lep1_stack_2 = new TH1D("Zmm_bjet_pt_lep1_stack_2","",40,0,200);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(8,569.3144);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(9,452.4899);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(10,251.4488);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(11,144.063);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(12,94.36843);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(13,62.20862);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(14,49.64745);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(15,38.65991);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(16,25.74738);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(17,20.13504);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(18,16.68483);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(19,10.76439);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(20,11.62231);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(21,5.092369);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(22,6.950963);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(23,3.431654);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(24,5.24642);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(25,3.332714);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(26,3.827412);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(27,2.364577);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(28,3.22249);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(29,1.209844);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(30,2.320749);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(31,1.363896);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(32,0.6049222);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(33,1.308784);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(34,1.055793);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(35,0.9568531);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(36,0.3519309);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(37,0.3519309);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(38,0.6049222);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(39,0.2529913);
   Zmm_bjet_pt_lep1_stack_2->SetBinContent(41,2.617568);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(8,13.70707);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(9,12.24605);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(10,9.125514);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(11,6.887871);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(12,5.524563);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(13,4.528174);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(14,3.939551);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(15,3.475447);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(16,2.860982);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(17,2.56707);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(18,2.27949);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(19,1.895361);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(20,1.960678);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(21,1.251752);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(22,1.49867);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(23,1.003722);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(24,1.253411);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(25,0.9734512);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(26,1.116629);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(27,0.898408);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(28,1.029078);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(29,0.61296);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(30,0.8316183);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(31,0.6163389);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(32,0.4334281);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(33,0.6599778);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(34,0.6095623);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(35,0.5583147);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(36,0.3519309);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(37,0.3519309);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(38,0.4334281);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(39,0.2529913);
   Zmm_bjet_pt_lep1_stack_2->SetBinError(41,0.9333496);
   Zmm_bjet_pt_lep1_stack_2->SetEntries(5638);

   ci = TColor::GetColor("#cccc00");
   Zmm_bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zmm_bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_pt_lep1_stack_2,"");
   
   TH1D *Zmm_bjet_pt_lep1_stack_3 = new TH1D("Zmm_bjet_pt_lep1_stack_3","",40,0,200);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(8,8662.43);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(9,6276.593);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(10,4077.175);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(11,2346.058);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(12,1206.314);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(13,584.6468);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(14,317.5358);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(15,169.3488);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(16,85.37922);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(17,48.38239);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(18,30.99801);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(19,20.21529);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(20,8.689878);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(21,12.48127);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(22,10.52828);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(23,3.007419);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(24,4.414865);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(25,3.261862);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(26,1.854416);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(27,0.3896735);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(28,0.8779208);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(29,2.929484);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(30,1.386807);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(31,0.2338041);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(32,0.4882473);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(33,0.3117388);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(35,0.4103127);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(36,0.07793469);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(38,0.4103127);
   Zmm_bjet_pt_lep1_stack_3->SetBinContent(41,0.6441167);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(8,58.55419);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(9,49.97343);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(10,40.32921);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(11,30.63074);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(12,21.92057);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(13,15.22688);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(14,11.17359);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(15,8.105802);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(16,5.670701);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(17,4.253287);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(18,3.399001);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(19,2.727593);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(20,1.730804);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(21,2.157534);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(22,1.989279);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(23,1.02599);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(24,1.306851);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(25,1.099484);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(26,0.7440833);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(27,0.1742673);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(28,0.4525476);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(29,1.023026);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(30,0.719178);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(31,0.1349868);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(32,0.4176485);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(33,0.1558694);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(35,0.4103127);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(36,0.07793469);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(38,0.4103127);
   Zmm_bjet_pt_lep1_stack_3->SetBinError(41,0.4319467);
   Zmm_bjet_pt_lep1_stack_3->SetEntries(68068);

   ci = TColor::GetColor("#0000cc");
   Zmm_bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zmm_bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_pt_lep1_stack_3,"");
   
   TH1D *Zmm_bjet_pt_lep1_stack_4 = new TH1D("Zmm_bjet_pt_lep1_stack_4","",40,0,200);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(8,49.47428);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(9,42.42559);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(10,30.27375);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(11,21.95229);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(12,16.78913);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(13,12.92599);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(14,10.23114);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(15,8.123184);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(16,6.441788);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(17,5.137982);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(18,4.185214);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(19,3.402447);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(20,2.845545);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(21,2.315885);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(22,1.941743);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(23,1.558291);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(24,1.317944);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(25,1.123804);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(26,0.958975);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(27,0.8320772);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(28,0.6786274);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(29,0.5944886);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(30,0.5000049);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(31,0.4320732);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(32,0.3537966);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(33,0.3158652);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(34,0.300003);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(35,0.2568991);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(36,0.2048296);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(37,0.1772431);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(38,0.1668982);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(39,0.1579326);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(40,0.1172425);
   Zmm_bjet_pt_lep1_stack_4->SetBinContent(41,0.958975);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(8,0.1306149);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(9,0.1209531);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(10,0.102173);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(11,0.08700476);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(12,0.07608819);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(13,0.06676288);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(14,0.05939707);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(15,0.05292566);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(16,0.04713097);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(17,0.04209199);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(18,0.03798936);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(19,0.03425302);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(20,0.03132463);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(21,0.02825931);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(22,0.02587611);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(23,0.02318075);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(24,0.02131825);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(25,0.01968559);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(26,0.01818473);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(27,0.01693889);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(28,0.01529744);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(29,0.01431775);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(30,0.01313077);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(31,0.01220624);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(32,0.01104536);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(33,0.01043648);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(34,0.01017105);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(35,0.009412054);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(36,0.008404261);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(37,0.007817859);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(38,0.007586282);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(39,0.007379705);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(40,0.006358369);
   Zmm_bjet_pt_lep1_stack_4->SetBinError(41,0.01818473);
   Zmm_bjet_pt_lep1_stack_4->SetEntries(665462);

   ci = TColor::GetColor("#cc0000");
   Zmm_bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zmm_bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_pt_lep1_stack_4,"");
   
   TH1D *Zmm_bjet_pt_lep1_stack_5 = new TH1D("Zmm_bjet_pt_lep1_stack_5","",40,0,200);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(8,171420.2);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(9,129444.5);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(10,67743.13);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(11,32627.46);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(12,18047.73);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(13,11423.32);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(14,7545.801);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(15,5123.764);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(16,3678.597);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(17,2679.138);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(18,1990.663);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(19,1527.407);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(20,1143.241);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(21,895.7671);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(22,691.0355);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(23,560.7886);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(24,432.025);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(25,325.9757);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(26,243.7655);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(27,234.7361);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(28,191.8917);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(29,159.0232);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(30,134.0584);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(31,107.2774);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(32,84.76792);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(33,67.96286);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(34,53.61311);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(35,58.0894);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(36,55.42923);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(37,40.18422);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(38,27.72742);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(39,27.70181);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(40,19.67009);
   Zmm_bjet_pt_lep1_stack_5->SetBinContent(41,157.3607);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(8,416.817);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(9,364.9005);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(10,252.5084);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(11,170.8322);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(12,126.7048);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(13,100.7987);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(14,81.93357);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(15,67.53943);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(16,57.23765);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(17,48.86796);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(18,42.12849);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(19,36.90607);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(20,31.93116);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(21,28.27138);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(22,24.83964);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(23,22.37865);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(24,19.63825);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(25,17.06289);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(26,14.75386);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(27,14.47501);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(28,13.08742);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(29,11.91962);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(30,10.94607);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(31,9.793236);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(32,8.697371);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(33,7.795996);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(34,6.921599);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(35,7.205275);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(36,7.039653);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(37,5.99051);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(38,4.980056);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(39,4.975516);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(40,4.193752);
   Zmm_bjet_pt_lep1_stack_5->SetBinError(41,11.86172);
   Zmm_bjet_pt_lep1_stack_5->SetEntries(500871);

   ci = TColor::GetColor("#00cc00");
   Zmm_bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zmm_bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_bjet_pt_lep1__259 = new TH1D("Zmm_bjet_pt_lep1__259","",40,0,200);
   Zmm_bjet_pt_lep1__259->SetBinContent(8,71475);
   Zmm_bjet_pt_lep1__259->SetBinContent(9,55026);
   Zmm_bjet_pt_lep1__259->SetBinContent(10,28089);
   Zmm_bjet_pt_lep1__259->SetBinContent(11,14042);
   Zmm_bjet_pt_lep1__259->SetBinContent(12,7689);
   Zmm_bjet_pt_lep1__259->SetBinContent(13,4899);
   Zmm_bjet_pt_lep1__259->SetBinContent(14,3138);
   Zmm_bjet_pt_lep1__259->SetBinContent(15,2142);
   Zmm_bjet_pt_lep1__259->SetBinContent(16,1496);
   Zmm_bjet_pt_lep1__259->SetBinContent(17,1071);
   Zmm_bjet_pt_lep1__259->SetBinContent(18,863);
   Zmm_bjet_pt_lep1__259->SetBinContent(19,626);
   Zmm_bjet_pt_lep1__259->SetBinContent(20,479);
   Zmm_bjet_pt_lep1__259->SetBinContent(21,386);
   Zmm_bjet_pt_lep1__259->SetBinContent(22,304);
   Zmm_bjet_pt_lep1__259->SetBinContent(23,229);
   Zmm_bjet_pt_lep1__259->SetBinContent(24,202);
   Zmm_bjet_pt_lep1__259->SetBinContent(25,143);
   Zmm_bjet_pt_lep1__259->SetBinContent(26,119);
   Zmm_bjet_pt_lep1__259->SetBinContent(27,105);
   Zmm_bjet_pt_lep1__259->SetBinContent(28,74);
   Zmm_bjet_pt_lep1__259->SetBinContent(29,76);
   Zmm_bjet_pt_lep1__259->SetBinContent(30,76);
   Zmm_bjet_pt_lep1__259->SetBinContent(31,41);
   Zmm_bjet_pt_lep1__259->SetBinContent(32,44);
   Zmm_bjet_pt_lep1__259->SetBinContent(33,36);
   Zmm_bjet_pt_lep1__259->SetBinContent(34,24);
   Zmm_bjet_pt_lep1__259->SetBinContent(35,25);
   Zmm_bjet_pt_lep1__259->SetBinContent(36,19);
   Zmm_bjet_pt_lep1__259->SetBinContent(37,31);
   Zmm_bjet_pt_lep1__259->SetBinContent(38,14);
   Zmm_bjet_pt_lep1__259->SetBinContent(39,12);
   Zmm_bjet_pt_lep1__259->SetBinContent(40,12);
   Zmm_bjet_pt_lep1__259->SetBinContent(41,75);
   Zmm_bjet_pt_lep1__259->SetBinError(8,267.3481);
   Zmm_bjet_pt_lep1__259->SetBinError(9,234.5762);
   Zmm_bjet_pt_lep1__259->SetBinError(10,167.5977);
   Zmm_bjet_pt_lep1__259->SetBinError(11,118.4989);
   Zmm_bjet_pt_lep1__259->SetBinError(12,87.68694);
   Zmm_bjet_pt_lep1__259->SetBinError(13,69.99286);
   Zmm_bjet_pt_lep1__259->SetBinError(14,56.01785);
   Zmm_bjet_pt_lep1__259->SetBinError(15,46.28175);
   Zmm_bjet_pt_lep1__259->SetBinError(16,38.67816);
   Zmm_bjet_pt_lep1__259->SetBinError(17,32.72614);
   Zmm_bjet_pt_lep1__259->SetBinError(18,29.37686);
   Zmm_bjet_pt_lep1__259->SetBinError(19,25.01999);
   Zmm_bjet_pt_lep1__259->SetBinError(20,21.88607);
   Zmm_bjet_pt_lep1__259->SetBinError(21,19.64688);
   Zmm_bjet_pt_lep1__259->SetBinError(22,17.4356);
   Zmm_bjet_pt_lep1__259->SetBinError(23,15.13275);
   Zmm_bjet_pt_lep1__259->SetBinError(24,14.21267);
   Zmm_bjet_pt_lep1__259->SetBinError(25,11.95826);
   Zmm_bjet_pt_lep1__259->SetBinError(26,10.90871);
   Zmm_bjet_pt_lep1__259->SetBinError(27,10.24695);
   Zmm_bjet_pt_lep1__259->SetBinError(28,8.602325);
   Zmm_bjet_pt_lep1__259->SetBinError(29,8.717798);
   Zmm_bjet_pt_lep1__259->SetBinError(30,8.717798);
   Zmm_bjet_pt_lep1__259->SetBinError(31,6.403124);
   Zmm_bjet_pt_lep1__259->SetBinError(32,6.63325);
   Zmm_bjet_pt_lep1__259->SetBinError(33,6);
   Zmm_bjet_pt_lep1__259->SetBinError(34,4.898979);
   Zmm_bjet_pt_lep1__259->SetBinError(35,5);
   Zmm_bjet_pt_lep1__259->SetBinError(36,4.358899);
   Zmm_bjet_pt_lep1__259->SetBinError(37,5.567764);
   Zmm_bjet_pt_lep1__259->SetBinError(38,3.741657);
   Zmm_bjet_pt_lep1__259->SetBinError(39,3.464102);
   Zmm_bjet_pt_lep1__259->SetBinError(40,3.464102);
   Zmm_bjet_pt_lep1__259->SetBinError(41,8.660254);
   Zmm_bjet_pt_lep1__259->SetEntries(193082);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_pt_lep1__259->SetLineColor(ci);
   Zmm_bjet_pt_lep1__259->SetLineWidth(2);
   Zmm_bjet_pt_lep1__259->SetMarkerStyle(20);
   Zmm_bjet_pt_lep1__259->SetMarkerSize(1.2);
   Zmm_bjet_pt_lep1__259->GetXaxis()->SetRange(1,200);
   Zmm_bjet_pt_lep1__259->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1__259->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1__259->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1__259->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1__259->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1__259->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1__259->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1__259->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_pt_lep1__259->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1__259->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_pt_lep1__259->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_pt_lep1__259->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_pt_lep1__259->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_pt_lep1__259->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_pt_lep1_fx1259[40] = {
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
   Double_t Graph_from_Zmm_bjet_pt_lep1_fy1259[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   181378.8,
   136733.1,
   72428.09,
   35319.51,
   19463.23,
   12124.87,
   7949.749,
   5353.161,
   3804.233,
   2755.77,
   2045.824,
   1563.87,
   1167.684,
   915.6566,
   710.8608,
   569.3995,
   443.204,
   333.6941,
   250.4063,
   238.9313,
   196.6707,
   164.1613,
   138.2659,
   109.3072,
   86.21488,
   69.89925,
   54.9689,
   59.71347,
   56.06393,
   40.7134,
   28.90955,
   28.11274,
   19.78733};
   Double_t Graph_from_Zmm_bjet_pt_lep1_fex1259[40] = {
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
   Double_t Graph_from_Zmm_bjet_pt_lep1_fey1259[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   421.3216,
   368.6753,
   256.0043,
   173.8171,
   128.7847,
   102.0871,
   82.82193,
   68.13238,
   57.60289,
   49.12581,
   42.33456,
   37.06077,
   32.04203,
   28.38122,
   24.96584,
   22.42744,
   19.72258,
   17.12598,
   14.81477,
   14.50818,
   13.13562,
   11.98256,
   11.00116,
   9.813547,
   8.718181,
   7.825441,
   6.948396,
   7.238518,
   7.04888,
   6.000844,
   5.015698,
   4.981949,
   4.193757};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_bjet_pt_lep1_fx1259,Graph_from_Zmm_bjet_pt_lep1_fy1259,Graph_from_Zmm_bjet_pt_lep1_fex1259,Graph_from_Zmm_bjet_pt_lep1_fey1259);
   gre->SetName("Graph_from_Zmm_bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_pt_lep11259 = new TH1F("Graph_Graph_from_Zmm_bjet_pt_lep11259","",100,0,220);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->SetMaximum(199980.2);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_pt_lep11259->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_pt_lep11259->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_pt_lep11259);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_bjet_pt_lep1","Data (Z(#mu#mu) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_bjet_pt_lep1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__260 = new TH1D("data_mc_ratio__260","",40,0,200);
   data_mc_ratio__260->SetBinContent(8,0.3940647);
   data_mc_ratio__260->SetBinContent(9,0.4024338);
   data_mc_ratio__260->SetBinContent(10,0.3878191);
   data_mc_ratio__260->SetBinContent(11,0.3975706);
   data_mc_ratio__260->SetBinContent(12,0.3950525);
   data_mc_ratio__260->SetBinContent(13,0.4040454);
   data_mc_ratio__260->SetBinContent(14,0.3947294);
   data_mc_ratio__260->SetBinContent(15,0.4001374);
   data_mc_ratio__260->SetBinContent(16,0.3932462);
   data_mc_ratio__260->SetBinContent(17,0.3886392);
   data_mc_ratio__260->SetBinContent(18,0.4218349);
   data_mc_ratio__260->SetBinContent(19,0.4002891);
   data_mc_ratio__260->SetBinContent(20,0.4102137);
   data_mc_ratio__260->SetBinContent(21,0.4215554);
   data_mc_ratio__260->SetBinContent(22,0.4276505);
   data_mc_ratio__260->SetBinContent(23,0.4021781);
   data_mc_ratio__260->SetBinContent(24,0.4557721);
   data_mc_ratio__260->SetBinContent(25,0.4285362);
   data_mc_ratio__260->SetBinContent(26,0.4752276);
   data_mc_ratio__260->SetBinContent(27,0.4394569);
   data_mc_ratio__260->SetBinContent(28,0.3762634);
   data_mc_ratio__260->SetBinContent(29,0.4629592);
   data_mc_ratio__260->SetBinContent(30,0.5496654);
   data_mc_ratio__260->SetBinContent(31,0.3750896);
   data_mc_ratio__260->SetBinContent(32,0.5103527);
   data_mc_ratio__260->SetBinContent(33,0.515027);
   data_mc_ratio__260->SetBinContent(34,0.4366105);
   data_mc_ratio__260->SetBinContent(35,0.418666);
   data_mc_ratio__260->SetBinContent(36,0.3388988);
   data_mc_ratio__260->SetBinContent(37,0.7614201);
   data_mc_ratio__260->SetBinContent(38,0.484269);
   data_mc_ratio__260->SetBinContent(39,0.4268528);
   data_mc_ratio__260->SetBinContent(40,0.6064486);
   data_mc_ratio__260->SetBinContent(41,0.4641624);
   data_mc_ratio__260->SetBinError(8,0.001473976);
   data_mc_ratio__260->SetBinError(9,0.001715578);
   data_mc_ratio__260->SetBinError(10,0.002313988);
   data_mc_ratio__260->SetBinError(11,0.003355056);
   data_mc_ratio__260->SetBinError(12,0.004505261);
   data_mc_ratio__260->SetBinError(13,0.005772667);
   data_mc_ratio__260->SetBinError(14,0.007046493);
   data_mc_ratio__260->SetBinError(15,0.008645685);
   data_mc_ratio__260->SetBinError(16,0.01016714);
   data_mc_ratio__260->SetBinError(17,0.0118755);
   data_mc_ratio__260->SetBinError(18,0.01435943);
   data_mc_ratio__260->SetBinError(19,0.01599877);
   data_mc_ratio__260->SetBinError(20,0.01874314);
   data_mc_ratio__260->SetBinError(21,0.02145661);
   data_mc_ratio__260->SetBinError(22,0.02452744);
   data_mc_ratio__260->SetBinError(23,0.02657667);
   data_mc_ratio__260->SetBinError(24,0.03206801);
   data_mc_ratio__260->SetBinError(25,0.035836);
   data_mc_ratio__260->SetBinError(26,0.04356405);
   data_mc_ratio__260->SetBinError(27,0.0428866);
   data_mc_ratio__260->SetBinError(28,0.04373973);
   data_mc_ratio__260->SetBinError(29,0.05310506);
   data_mc_ratio__260->SetBinError(30,0.06305094);
   data_mc_ratio__260->SetBinError(31,0.05857916);
   data_mc_ratio__260->SetBinError(32,0.07693857);
   data_mc_ratio__260->SetBinError(33,0.08583783);
   data_mc_ratio__260->SetBinError(34,0.08912274);
   data_mc_ratio__260->SetBinError(35,0.0837332);
   data_mc_ratio__260->SetBinError(36,0.07774872);
   data_mc_ratio__260->SetBinError(37,0.1367551);
   data_mc_ratio__260->SetBinError(38,0.1294263);
   data_mc_ratio__260->SetBinError(39,0.1232218);
   data_mc_ratio__260->SetBinError(40,0.1750666);
   data_mc_ratio__260->SetBinError(41,0.06357994);
   data_mc_ratio__260->SetMinimum(0.4);
   data_mc_ratio__260->SetMaximum(1.6);
   data_mc_ratio__260->SetEntries(1049.48);
   data_mc_ratio__260->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__260->SetLineColor(ci);
   data_mc_ratio__260->SetLineWidth(2);
   data_mc_ratio__260->SetMarkerStyle(20);
   data_mc_ratio__260->SetMarkerSize(1.2);
   data_mc_ratio__260->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__260->GetXaxis()->SetRange(1,40);
   data_mc_ratio__260->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__260->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__260->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__260->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__260->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__260->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__260->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__260->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__260->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__260->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__260->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__260->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__260->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__260->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__260->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__260->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__260->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1260[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1260[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1260[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1260[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002322882,
   0.002696314,
   0.003534599,
   0.004921276,
   0.00661682,
   0.008419639,
   0.01041818,
   0.0127275,
   0.01514179,
   0.01782653,
   0.02069316,
   0.02369812,
   0.02744067,
   0.03099549,
   0.03512058,
   0.03938788,
   0.0445,
   0.0513224,
   0.05916292,
   0.06072116,
   0.06678992,
   0.07299257,
   0.07956522,
   0.08977951,
   0.1011215,
   0.1119532,
   0.1264059,
   0.1212209,
   0.1257293,
   0.1473924,
   0.1734962,
   0.1772132,
   0.2119415};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1260,Graph_from_mc_statistical_error_fy1260,Graph_from_mc_statistical_error_fex1260,Graph_from_mc_statistical_error_fey1260);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1260 = new TH1F("Graph_Graph_from_mc_statistical_error1260","",100,0,220);
   Graph_Graph_from_mc_statistical_error1260->SetMinimum(0.7456702);
   Graph_Graph_from_mc_statistical_error1260->SetMaximum(1.25433);
   Graph_Graph_from_mc_statistical_error1260->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1260->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1260->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1260->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1260->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1260->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1260->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1260->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1260->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1260->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1260->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1260);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_bjet_Zmm_17_amcnlo->Modified();
   pt_lep1_Z_bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_bjet_Zmm_17_amcnlo->SetSelected(pt_lep1_Z_bjet_Zmm_17_amcnlo);
}
