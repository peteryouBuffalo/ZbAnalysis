void dR_2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_16_amcnlo/dR_2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:24 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_16_amcnlo", "dR_2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-6.705883,6.314516,6709.176);
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
   st->SetMaximum(5750.084);
   
   TH1F *st_stack_221 = new TH1F("st_stack_221","",25,0,10);
   st_stack_221->SetMinimum(0.01);
   st_stack_221->SetMaximum(6037.588);
   st_stack_221->SetDirectory(0);
   st_stack_221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_221->SetLineColor(ci);
   st_stack_221->GetXaxis()->SetRange(1,15);
   st_stack_221->GetXaxis()->SetLabelFont(42);
   st_stack_221->GetXaxis()->SetLabelSize(0.035);
   st_stack_221->GetXaxis()->SetTitleSize(0.035);
   st_stack_221->GetXaxis()->SetTitleFont(42);
   st_stack_221->GetYaxis()->SetTitle("Events/0.4");
   st_stack_221->GetYaxis()->SetLabelFont(42);
   st_stack_221->GetYaxis()->SetLabelSize(0.05);
   st_stack_221->GetYaxis()->SetTitleSize(0.057);
   st_stack_221->GetYaxis()->SetTitleOffset(1.2);
   st_stack_221->GetYaxis()->SetTitleFont(42);
   st_stack_221->GetZaxis()->SetLabelFont(42);
   st_stack_221->GetZaxis()->SetLabelSize(0.035);
   st_stack_221->GetZaxis()->SetTitleSize(0.035);
   st_stack_221->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_221);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,1.633895);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,2.950881);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,3.314948);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,5.000724);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,5.863059);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,8.732655);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,9.980107);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,3.159862);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,0.8699385);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(12,0.1970237);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(13,0.1964644);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,0.5598328);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.7619149);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,0.7957917);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,0.9869818);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,1.065261);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,1.307364);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,1.394961);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,0.7715119);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,0.4019813);
   Zee_2bjet_dR_2b_stack_1->SetBinError(12,0.1970237);
   Zee_2bjet_dR_2b_stack_1->SetBinError(13,0.1964644);
   Zee_2bjet_dR_2b_stack_1->SetEntries(221);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_2 = new TH1D("Zee_2bjet_dR_2b_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,9.44044);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,17.70956);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,17.41151);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,13.53689);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,11.45056);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,16.04603);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,12.76751);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,3.167177);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(10,0.2980476);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(11,0.4228008);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,1.739162);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,2.308904);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,2.289586);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,2.021728);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,1.861601);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,2.210876);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,1.977578);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,1.083934);
   Zee_2bjet_dR_2b_stack_2->SetBinError(10,0.2980476);
   Zee_2bjet_dR_2b_stack_2->SetBinError(11,0.4228008);
   Zee_2bjet_dR_2b_stack_2->SetEntries(336);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_3 = new TH1D("Zee_2bjet_dR_2b_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,68.5486);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,113.7284);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,154.0396);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,200.7773);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,242.8412);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,309.8319);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,342.1588);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,131.255);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,43.81658);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,11.87916);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,4.089547);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,0.584221);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,3.653653);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,4.706113);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,5.477018);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,6.252955);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,6.876844);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,7.767675);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,8.16285);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,5.055753);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,2.921105);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,1.520971);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,0.8924124);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.3373002);
   Zee_2bjet_dR_2b_stack_3->SetEntries(8337);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_4 = new TH1D("Zee_2bjet_dR_2b_stack_4","",25,0,10);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(2,2.073741);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(3,5.431833);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(4,7.424432);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(5,7.257512);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(6,5.650914);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(7,4.357289);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(8,4.212974);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(9,0.8224254);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(10,0.09852876);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(11,0.03187695);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(12,0.009852876);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(13,0.002318324);
   Zee_2bjet_dR_2b_stack_4->SetBinContent(14,0.001738743);
   Zee_2bjet_dR_2b_stack_4->SetBinError(2,0.03466844);
   Zee_2bjet_dR_2b_stack_4->SetBinError(3,0.0561087);
   Zee_2bjet_dR_2b_stack_4->SetBinError(4,0.06559771);
   Zee_2bjet_dR_2b_stack_4->SetBinError(5,0.06485612);
   Zee_2bjet_dR_2b_stack_4->SetBinError(6,0.05722903);
   Zee_2bjet_dR_2b_stack_4->SetBinError(7,0.05025338);
   Zee_2bjet_dR_2b_stack_4->SetBinError(8,0.04941416);
   Zee_2bjet_dR_2b_stack_4->SetBinError(9,0.02183259);
   Zee_2bjet_dR_2b_stack_4->SetBinError(10,0.007556811);
   Zee_2bjet_dR_2b_stack_4->SetBinError(11,0.004298287);
   Zee_2bjet_dR_2b_stack_4->SetBinError(12,0.002389673);
   Zee_2bjet_dR_2b_stack_4->SetBinError(13,0.001159162);
   Zee_2bjet_dR_2b_stack_4->SetBinError(14,0.001003864);
   Zee_2bjet_dR_2b_stack_4->SetEntries(64487);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_4,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_5 = new TH1D("Zee_2bjet_dR_2b_stack_5","",25,0,10);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(2,795.4095);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(3,917.7905);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(4,1154.928);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(5,1473.862);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(6,1829.858);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(7,2256.613);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(8,2793.427);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(9,1662.034);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(10,853.6257);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(11,383.3884);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(12,168.1116);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(13,45.7896);
   Zee_2bjet_dR_2b_stack_5->SetBinContent(14,12.03223);
   Zee_2bjet_dR_2b_stack_5->SetBinError(2,21.18036);
   Zee_2bjet_dR_2b_stack_5->SetBinError(3,22.32714);
   Zee_2bjet_dR_2b_stack_5->SetBinError(4,24.7738);
   Zee_2bjet_dR_2b_stack_5->SetBinError(5,27.7748);
   Zee_2bjet_dR_2b_stack_5->SetBinError(6,30.83206);
   Zee_2bjet_dR_2b_stack_5->SetBinError(7,34.86228);
   Zee_2bjet_dR_2b_stack_5->SetBinError(8,39.25801);
   Zee_2bjet_dR_2b_stack_5->SetBinError(9,29.87806);
   Zee_2bjet_dR_2b_stack_5->SetBinError(10,21.36544);
   Zee_2bjet_dR_2b_stack_5->SetBinError(11,14.32771);
   Zee_2bjet_dR_2b_stack_5->SetBinError(12,9.477631);
   Zee_2bjet_dR_2b_stack_5->SetBinError(13,4.848165);
   Zee_2bjet_dR_2b_stack_5->SetBinError(14,2.534883);
   Zee_2bjet_dR_2b_stack_5->SetEntries(27953);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b__441 = new TH1D("Zee_2bjet_dR_2b__441","",25,0,10);
   Zee_2bjet_dR_2b__441->SetBinContent(2,357);
   Zee_2bjet_dR_2b__441->SetBinContent(3,421);
   Zee_2bjet_dR_2b__441->SetBinContent(4,446);
   Zee_2bjet_dR_2b__441->SetBinContent(5,578);
   Zee_2bjet_dR_2b__441->SetBinContent(6,662);
   Zee_2bjet_dR_2b__441->SetBinContent(7,877);
   Zee_2bjet_dR_2b__441->SetBinContent(8,1138);
   Zee_2bjet_dR_2b__441->SetBinContent(9,552);
   Zee_2bjet_dR_2b__441->SetBinContent(10,276);
   Zee_2bjet_dR_2b__441->SetBinContent(11,114);
   Zee_2bjet_dR_2b__441->SetBinContent(12,48);
   Zee_2bjet_dR_2b__441->SetBinContent(13,20);
   Zee_2bjet_dR_2b__441->SetBinContent(14,1);
   Zee_2bjet_dR_2b__441->SetBinError(2,18.89444);
   Zee_2bjet_dR_2b__441->SetBinError(3,20.51828);
   Zee_2bjet_dR_2b__441->SetBinError(4,21.11871);
   Zee_2bjet_dR_2b__441->SetBinError(5,24.04163);
   Zee_2bjet_dR_2b__441->SetBinError(6,25.72936);
   Zee_2bjet_dR_2b__441->SetBinError(7,29.61419);
   Zee_2bjet_dR_2b__441->SetBinError(8,33.73426);
   Zee_2bjet_dR_2b__441->SetBinError(9,23.49468);
   Zee_2bjet_dR_2b__441->SetBinError(10,16.61325);
   Zee_2bjet_dR_2b__441->SetBinError(11,10.67708);
   Zee_2bjet_dR_2b__441->SetBinError(12,6.928203);
   Zee_2bjet_dR_2b__441->SetBinError(13,4.472136);
   Zee_2bjet_dR_2b__441->SetBinError(14,1);
   Zee_2bjet_dR_2b__441->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__441->SetLineColor(ci);
   Zee_2bjet_dR_2b__441->SetLineWidth(2);
   Zee_2bjet_dR_2b__441->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__441->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dR_2b_fx1441[25] = {
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
   Double_t Graph_from_Zee_2bjet_dR_2b_fy1441[25] = {
   0,
   877.1062,
   1057.611,
   1337.118,
   1700.435,
   2095.664,
   2595.581,
   3162.546,
   1800.439,
   898.7088,
   395.7222,
   172.408,
   46.5726,
   12.03397,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dR_2b_fex1441[25] = {
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
   Double_t Graph_from_Zee_2bjet_dR_2b_fey1441[25] = {
   0,
   21.57072,
   22.94697,
   25.48762,
   28.5588,
   31.66244,
   35.80943,
   40.17067,
   30.33199,
   21.57002,
   14.41442,
   9.521592,
   4.863854,
   2.534883,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dR_2b_fx1441,Graph_from_Zee_2bjet_dR_2b_fy1441,Graph_from_Zee_2bjet_dR_2b_fex1441,Graph_from_Zee_2bjet_dR_2b_fey1441);
   gre->SetName("Graph_from_Zee_2bjet_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dR_2b1441 = new TH1F("Graph_Graph_from_Zee_2bjet_dR_2b1441","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->SetMaximum(3522.988);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dR_2b1441->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dR_2b1441->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dR_2b1441);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__442 = new TH1D("data_mc_ratio__442","",25,0,10);
   data_mc_ratio__442->SetBinContent(2,0.4070203);
   data_mc_ratio__442->SetBinContent(3,0.3980669);
   data_mc_ratio__442->SetBinContent(4,0.3335532);
   data_mc_ratio__442->SetBinContent(5,0.339913);
   data_mc_ratio__442->SetBinContent(6,0.3158903);
   data_mc_ratio__442->SetBinContent(7,0.3378819);
   data_mc_ratio__442->SetBinContent(8,0.3598366);
   data_mc_ratio__442->SetBinContent(9,0.3065919);
   data_mc_ratio__442->SetBinContent(10,0.3071073);
   data_mc_ratio__442->SetBinContent(11,0.2880809);
   data_mc_ratio__442->SetBinContent(12,0.2784094);
   data_mc_ratio__442->SetBinContent(13,0.429437);
   data_mc_ratio__442->SetBinContent(14,0.08309811);
   data_mc_ratio__442->SetBinError(2,0.0215418);
   data_mc_ratio__442->SetBinError(3,0.01940059);
   data_mc_ratio__442->SetBinError(4,0.0157942);
   data_mc_ratio__442->SetBinError(5,0.01413852);
   data_mc_ratio__442->SetBinError(6,0.01227743);
   data_mc_ratio__442->SetBinError(7,0.01140946);
   data_mc_ratio__442->SetBinError(8,0.0106668);
   data_mc_ratio__442->SetBinError(9,0.01304942);
   data_mc_ratio__442->SetBinError(10,0.01848568);
   data_mc_ratio__442->SetBinError(11,0.02698125);
   data_mc_ratio__442->SetBinError(12,0.04018493);
   data_mc_ratio__442->SetBinError(13,0.09602504);
   data_mc_ratio__442->SetBinError(14,0.08309811);
   data_mc_ratio__442->SetMinimum(0.4);
   data_mc_ratio__442->SetMaximum(1.6);
   data_mc_ratio__442->SetEntries(738.211);
   data_mc_ratio__442->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__442->SetLineColor(ci);
   data_mc_ratio__442->SetLineWidth(2);
   data_mc_ratio__442->SetMarkerStyle(20);
   data_mc_ratio__442->SetMarkerSize(1.2);
   data_mc_ratio__442->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__442->GetXaxis()->SetRange(1,15);
   data_mc_ratio__442->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__442->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__442->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__442->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__442->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__442->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__442->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__442->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__442->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__442->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__442->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__442->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__442->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__442->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1442[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1442[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1442[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1442[25] = {
   0,
   0.02459305,
   0.02169698,
   0.01906161,
   0.016795,
   0.01510855,
   0.0137963,
   0.012702,
   0.016847,
   0.02400112,
   0.03642559,
   0.0552271,
   0.1044359,
   0.210644,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1442,Graph_from_mc_statistical_error_fy1442,Graph_from_mc_statistical_error_fex1442,Graph_from_mc_statistical_error_fey1442);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1442 = new TH1F("Graph_Graph_from_mc_statistical_error1442","",100,0,11);
   Graph_Graph_from_mc_statistical_error1442->SetMinimum(0.7472272);
   Graph_Graph_from_mc_statistical_error1442->SetMaximum(1.252773);
   Graph_Graph_from_mc_statistical_error1442->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1442->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1442->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1442);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_16_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_16_amcnlo);
}
