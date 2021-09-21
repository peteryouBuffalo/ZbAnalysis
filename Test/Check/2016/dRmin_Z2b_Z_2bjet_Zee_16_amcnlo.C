void dRmin_Z2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_16_amcnlo/dRmin_Z2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_16_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-6.648952,6.314516,6652.303);
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
   st->SetMaximum(5701.341);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",25,0,10);
   st_stack_241->SetMinimum(0.01);
   st_stack_241->SetMaximum(5986.408);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,15);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.4");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.5899525);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,1.575071);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,4.797215);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,5.264943);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,9.251954);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,5.468452);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,8.323751);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,5.394212);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,0.8704978);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.3635077);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.3406095);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.556872);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.9668578);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.008764);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.339548);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.028068);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.276603);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.025451);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.4022549);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2292378);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(221);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.8941428);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,2.384381);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,4.470714);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,9.01764);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,15.68518);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,16.89163);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,25.41026);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,18.90175);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,4.297419);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,2.086333);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,0.8941428);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,1.018896);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.2980476);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.5162336);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,0.8430059);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.154333);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,1.686986);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.214921);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,2.290304);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,2.780594);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.384611);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.154808);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.7885598);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.5162336);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.5970136);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.2980476);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(336);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,28.43209);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,88.41212);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,160.8555);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,256.2783);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,367.6698);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,352.6748);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,240.8938);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,102.0439);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,18.50033);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,4.868509);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,1.752663);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.7789614);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.3894807);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.353057);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.149386);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,5.59688);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,7.06454);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,8.461687);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,8.28734);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,6.849215);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,4.45781);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.898094);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,0.9737017);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.584221);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.3894807);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.2754044);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(8337);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_4 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_4","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.4022292);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,1.141195);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,2.084753);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,3.58239);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,6.064155);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,8.734864);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,9.082033);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,5.625413);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,0.4995988);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.09215337);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.0394115);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.01680785);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.00637539);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.002318324);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.001159162);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(16,0.0005795809);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.01526841);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.02571799);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.03476036);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.04556627);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.05928464);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.07115167);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.07255187);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.05709975);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.0170164);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.007308238);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.004779347);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.003121139);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.001922253);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.001159162);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.0008196512);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(16,0.0005795809);
   Zee_2bjet_dRmin_Z2b_stack_4->SetEntries(64487);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_5 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_5","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,201.6165);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,581.6973);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,1002.59);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,1491.47);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,2172.075);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,2751.968);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,2816.059);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,2225.121);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,625.9958);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,224.0363);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,115.3389);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,71.58962);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,34.03513);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,13.76859);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,9.254462);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,7.002712);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,0.9996848);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(19,2.25175);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(1,10.14069);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(2,17.29224);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(3,22.81177);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(4,28.13352);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(5,33.57831);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(6,38.08259);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(7,38.56402);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(8,34.528);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(9,19.04833);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(10,11.81357);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(11,9.300512);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(12,8.503868);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(13,5.762208);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(14,3.870083);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(15,4.057135);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(16,3.374903);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(17,0.7068839);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(19,2.25175);
   Zee_2bjet_dRmin_Z2b_stack_5->SetEntries(27953);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b__481 = new TH1D("Zee_2bjet_dRmin_Z2b__481","",25,0,10);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(1,70);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(2,222);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(3,432);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(4,654);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(5,932);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(6,1127);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(7,965);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(8,718);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(9,199);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(10,80);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(11,40);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(12,27);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(13,13);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(14,6);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(15,3);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(16,2);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(1,8.3666);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(2,14.89966);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(3,20.78461);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(4,25.57342);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(5,30.52868);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(6,33.57082);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(7,31.06445);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(8,26.79552);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(9,14.10674);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(10,8.944272);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(11,6.324555);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(12,5.196152);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(13,3.605551);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(14,2.44949);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(15,1.732051);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(16,1.414214);
   Zee_2bjet_dRmin_Z2b__481->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__481->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__481->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__481->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__481->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fx1481[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fy1481[25] = {
   231.935,
   675.2101,
   1174.798,
   1765.614,
   2570.746,
   3135.737,
   3099.769,
   2357.087,
   650.1637,
   231.4468,
   118.0251,
   73.40429,
   34.72903,
   13.77091,
   9.255621,
   7.003291,
   0.9996848,
   0,
   2.25175,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fex1481[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fey1481[25] = {
   10.42848,
   17.81181,
   23.53658,
   29.0735,
   34.72473,
   39.05472,
   39.28692,
   34.91126,
   19.18169,
   11.88204,
   9.333132,
   8.533692,
   5.776481,
   3.870084,
   4.057135,
   3.374903,
   0.7068839,
   0,
   2.25175,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dRmin_Z2b_fx1481,Graph_from_Zee_2bjet_dRmin_Z2b_fy1481,Graph_from_Zee_2bjet_dRmin_Z2b_fex1481,Graph_from_Zee_2bjet_dRmin_Z2b_fey1481);
   gre->SetName("Graph_from_Zee_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481 = new TH1F("Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->SetMaximum(3492.271);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dRmin_Z2b1481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__482 = new TH1D("data_mc_ratio__482","",25,0,10);
   data_mc_ratio__482->SetBinContent(1,0.3018087);
   data_mc_ratio__482->SetBinContent(2,0.3287866);
   data_mc_ratio__482->SetBinContent(3,0.3677228);
   data_mc_ratio__482->SetBinContent(4,0.3704094);
   data_mc_ratio__482->SetBinContent(5,0.3625406);
   data_mc_ratio__482->SetBinContent(6,0.3594051);
   data_mc_ratio__482->SetBinContent(7,0.3113135);
   data_mc_ratio__482->SetBinContent(8,0.3046133);
   data_mc_ratio__482->SetBinContent(9,0.3060768);
   data_mc_ratio__482->SetBinContent(10,0.3456517);
   data_mc_ratio__482->SetBinContent(11,0.3389108);
   data_mc_ratio__482->SetBinContent(12,0.3678259);
   data_mc_ratio__482->SetBinContent(13,0.3743266);
   data_mc_ratio__482->SetBinContent(14,0.4357011);
   data_mc_ratio__482->SetBinContent(15,0.3241274);
   data_mc_ratio__482->SetBinContent(16,0.28558);
   data_mc_ratio__482->SetBinError(1,0.03607304);
   data_mc_ratio__482->SetBinError(2,0.02206671);
   data_mc_ratio__482->SetBinError(3,0.01769207);
   data_mc_ratio__482->SetBinError(4,0.01448416);
   data_mc_ratio__482->SetBinError(5,0.01187541);
   data_mc_ratio__482->SetBinError(6,0.01070588);
   data_mc_ratio__482->SetBinError(7,0.01002154);
   data_mc_ratio__482->SetBinError(8,0.01136807);
   data_mc_ratio__482->SetBinError(9,0.02169721);
   data_mc_ratio__482->SetBinError(10,0.03864504);
   data_mc_ratio__482->SetBinError(11,0.05358651);
   data_mc_ratio__482->SetBinError(12,0.07078813);
   data_mc_ratio__482->SetBinError(13,0.1038195);
   data_mc_ratio__482->SetBinError(14,0.1778742);
   data_mc_ratio__482->SetBinError(15,0.187135);
   data_mc_ratio__482->SetBinError(16,0.2019356);
   data_mc_ratio__482->SetMinimum(0.4);
   data_mc_ratio__482->SetMaximum(1.6);
   data_mc_ratio__482->SetEntries(156.4966);
   data_mc_ratio__482->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__482->SetLineColor(ci);
   data_mc_ratio__482->SetLineWidth(2);
   data_mc_ratio__482->SetMarkerStyle(20);
   data_mc_ratio__482->SetMarkerSize(1.2);
   data_mc_ratio__482->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__482->GetXaxis()->SetRange(1,15);
   data_mc_ratio__482->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__482->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__482->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__482->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__482->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__482->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1482[25] = {
   0.04496295,
   0.02637965,
   0.02003457,
   0.01646651,
   0.01350765,
   0.01245472,
   0.01267414,
   0.01481119,
   0.02950287,
   0.05133811,
   0.07907749,
   0.116256,
   0.16633,
   0.2810333,
   0.4383428,
   0.4819024,
   0.7071068,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,11);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_16_amcnlo);
}
