void A_Z2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_18_amcnlo/A_Z2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:25 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_18_amcnlo", "A_Z2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-8.942737,1.052419,8943.794);
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
   st->SetMaximum(7665.257);
   
   TH1F *st_stack_231 = new TH1F("st_stack_231","",25,0,1);
   st_stack_231->SetMinimum(0.01);
   st_stack_231->SetMaximum(8048.52);
   st_stack_231->SetDirectory(0);
   st_stack_231->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_231->SetLineColor(ci);
   st_stack_231->GetXaxis()->SetRange(1,25);
   st_stack_231->GetXaxis()->SetLabelFont(42);
   st_stack_231->GetXaxis()->SetLabelSize(0.035);
   st_stack_231->GetXaxis()->SetTitleSize(0.035);
   st_stack_231->GetXaxis()->SetTitleFont(42);
   st_stack_231->GetYaxis()->SetTitle("Events/0.04");
   st_stack_231->GetYaxis()->SetLabelFont(42);
   st_stack_231->GetYaxis()->SetLabelSize(0.05);
   st_stack_231->GetYaxis()->SetTitleSize(0.057);
   st_stack_231->GetYaxis()->SetTitleOffset(1.2);
   st_stack_231->GetYaxis()->SetTitleFont(42);
   st_stack_231->GetZaxis()->SetLabelFont(42);
   st_stack_231->GetZaxis()->SetLabelSize(0.035);
   st_stack_231->GetZaxis()->SetTitleSize(0.035);
   st_stack_231->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_231);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,12.25552);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,13.69025);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,11.60541);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,11.59591);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,7.101708);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,6.784499);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,5.633769);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,4.789684);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,4.020132);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,1.993093);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,3.922187);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,1.862483);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,2.404457);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,1.074074);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,1.321256);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,1.690293);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,1.066381);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(18,0.6070918);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.2380547);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(20,0.3035459);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(21,0.2380547);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,1.814771);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,1.927822);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,1.768437);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,1.750385);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,1.36552);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,1.346579);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,1.224745);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,1.122188);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,1.032496);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.7152491);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,1.054804);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.6869285);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.8074098);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.5150992);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.5952229);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.6941905);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.5143142);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(18,0.4292787);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.2380547);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(20,0.3035459);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(21,0.2380547);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(388);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_2 = new TH1D("Zee_2bjet_A_Z2b_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,42.8266);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,34.07891);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,20.93821);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,25.65079);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,19.66845);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,13.18758);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,8.700818);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,6.208174);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,6.480873);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,3.489701);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,3.489701);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,2.492644);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,3.715531);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(14,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(15,1.994115);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(16,0.9970574);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(17,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(18,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(20,1.222887);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,4.655905);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,4.180916);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,3.230835);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,3.598783);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,3.157352);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,2.595759);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,2.121601);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,1.805141);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,1.797471);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,1.318983);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,1.318983);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,1.114744);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,1.419817);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(14,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(15,0.9970574);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(16,0.7050261);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(17,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(18,0.4985287);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(20,0.8793327);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(389);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_3 = new TH1D("Zee_2bjet_A_Z2b_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,479.6493);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,443.0809);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,402.9416);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,352.0259);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,294.7305);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,249.3119);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,209.2949);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,173.0379);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,143.0321);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,121.2602);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,96.96024);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,86.99697);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,66.35261);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,56.8607);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,49.78692);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,39.68676);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,35.3416);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,25.47029);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,24.32391);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,18.34431);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,13.73053);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,10.43767);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,6.439432);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,4.118432);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,1.155795);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,6.285004);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,6.041084);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,5.760706);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,5.381986);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,4.925419);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,4.53071);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,4.151798);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,3.775602);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,3.431507);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,3.160946);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,2.82549);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,2.675206);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,2.33754);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,2.164871);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,2.024487);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,1.80628);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,1.706512);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,1.446996);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,1.414159);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,1.22867);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,1.062741);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,0.9264229);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,0.7291221);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,0.5825087);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.3088993);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(41359);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_4 = new TH1D("Zee_2bjet_A_Z2b_stack_4","",25,0,1);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(1,15.17184);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(2,12.31161);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(3,9.294735);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(4,6.856961);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(5,5.288512);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(6,4.054368);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(7,3.212166);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(8,2.540168);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(9,2.044476);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(10,1.663383);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(11,1.290427);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(12,1.036817);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(13,0.8774631);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(14,0.7120064);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(15,0.6218189);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(16,0.5234942);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(17,0.4353411);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(18,0.3634623);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(19,0.26785);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(20,0.2420822);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(21,0.1722377);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(22,0.1308736);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(23,0.09086558);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(24,0.0522138);
   Zee_2bjet_A_Z2b_stack_4->SetBinContent(25,0.01356203);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(1,0.10143);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(2,0.09137022);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(3,0.07939);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(4,0.06818881);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(5,0.05988445);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(6,0.0524335);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(7,0.04667091);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(8,0.0415029);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(9,0.03723388);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(10,0.03358485);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(11,0.02958108);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(12,0.02651541);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(13,0.0243928);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(14,0.02197299);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(15,0.02053427);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(16,0.01884097);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(17,0.01718154);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(18,0.01569918);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(19,0.013477);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(20,0.01281235);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(21,0.01080716);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(22,0.009420485);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(23,0.00784959);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(24,0.005950315);
   Zee_2bjet_A_Z2b_stack_4->SetBinError(25,0.003032561);
   Zee_2bjet_A_Z2b_stack_4->SetEntries(102151);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_5 = new TH1D("Zee_2bjet_A_Z2b_stack_5","",25,0,1);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(1,3665.988);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(2,3495.238);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(3,3046.139);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(4,2424.105);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(5,1867.988);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(6,1519.627);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(7,1224.58);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(8,1059.586);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(9,892.8772);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(10,699.8217);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(11,575.0907);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(12,512.8655);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(13,401.9589);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(14,358.0291);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(15,294.4456);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(16,285.9014);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(17,205.2516);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(18,181.6538);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(19,173.6825);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(20,114.9338);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(21,84.27775);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(22,48.42461);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(23,55.37757);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(24,19.31369);
   Zee_2bjet_A_Z2b_stack_5->SetBinContent(25,4.70555);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(1,65.33438);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(2,64.68231);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(3,60.10783);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(4,53.28761);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(5,46.88458);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(6,42.243);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(7,37.29617);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(8,35.45766);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(9,31.90626);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(10,28.08652);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(11,25.46943);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(12,24.04686);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(13,21.53539);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(14,20.35385);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(15,18.22893);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(16,18.24747);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(17,15.21671);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(18,14.31892);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(19,13.99802);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(20,11.38157);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(21,9.731556);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(22,7.385418);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(23,7.913057);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(24,4.686349);
   Zee_2bjet_A_Z2b_stack_5->SetBinError(25,2.355133);
   Zee_2bjet_A_Z2b_stack_5->SetEntries(20359);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b__461 = new TH1D("Zee_2bjet_A_Z2b__461","",25,0,1);
   Zee_2bjet_A_Z2b__461->SetBinContent(1,1707);
   Zee_2bjet_A_Z2b__461->SetBinContent(2,1574);
   Zee_2bjet_A_Z2b__461->SetBinContent(3,1409);
   Zee_2bjet_A_Z2b__461->SetBinContent(4,1105);
   Zee_2bjet_A_Z2b__461->SetBinContent(5,840);
   Zee_2bjet_A_Z2b__461->SetBinContent(6,717);
   Zee_2bjet_A_Z2b__461->SetBinContent(7,573);
   Zee_2bjet_A_Z2b__461->SetBinContent(8,531);
   Zee_2bjet_A_Z2b__461->SetBinContent(9,398);
   Zee_2bjet_A_Z2b__461->SetBinContent(10,337);
   Zee_2bjet_A_Z2b__461->SetBinContent(11,247);
   Zee_2bjet_A_Z2b__461->SetBinContent(12,225);
   Zee_2bjet_A_Z2b__461->SetBinContent(13,218);
   Zee_2bjet_A_Z2b__461->SetBinContent(14,147);
   Zee_2bjet_A_Z2b__461->SetBinContent(15,135);
   Zee_2bjet_A_Z2b__461->SetBinContent(16,107);
   Zee_2bjet_A_Z2b__461->SetBinContent(17,99);
   Zee_2bjet_A_Z2b__461->SetBinContent(18,66);
   Zee_2bjet_A_Z2b__461->SetBinContent(19,60);
   Zee_2bjet_A_Z2b__461->SetBinContent(20,52);
   Zee_2bjet_A_Z2b__461->SetBinContent(21,46);
   Zee_2bjet_A_Z2b__461->SetBinContent(22,25);
   Zee_2bjet_A_Z2b__461->SetBinContent(23,19);
   Zee_2bjet_A_Z2b__461->SetBinContent(24,9);
   Zee_2bjet_A_Z2b__461->SetBinContent(25,2);
   Zee_2bjet_A_Z2b__461->SetBinError(1,41.31586);
   Zee_2bjet_A_Z2b__461->SetBinError(2,39.67367);
   Zee_2bjet_A_Z2b__461->SetBinError(3,37.53665);
   Zee_2bjet_A_Z2b__461->SetBinError(4,33.24154);
   Zee_2bjet_A_Z2b__461->SetBinError(5,28.98275);
   Zee_2bjet_A_Z2b__461->SetBinError(6,26.77686);
   Zee_2bjet_A_Z2b__461->SetBinError(7,23.93742);
   Zee_2bjet_A_Z2b__461->SetBinError(8,23.04344);
   Zee_2bjet_A_Z2b__461->SetBinError(9,19.94994);
   Zee_2bjet_A_Z2b__461->SetBinError(10,18.35756);
   Zee_2bjet_A_Z2b__461->SetBinError(11,15.71623);
   Zee_2bjet_A_Z2b__461->SetBinError(12,15);
   Zee_2bjet_A_Z2b__461->SetBinError(13,14.76482);
   Zee_2bjet_A_Z2b__461->SetBinError(14,12.12436);
   Zee_2bjet_A_Z2b__461->SetBinError(15,11.61895);
   Zee_2bjet_A_Z2b__461->SetBinError(16,10.34408);
   Zee_2bjet_A_Z2b__461->SetBinError(17,9.949874);
   Zee_2bjet_A_Z2b__461->SetBinError(18,8.124038);
   Zee_2bjet_A_Z2b__461->SetBinError(19,7.745967);
   Zee_2bjet_A_Z2b__461->SetBinError(20,7.211103);
   Zee_2bjet_A_Z2b__461->SetBinError(21,6.78233);
   Zee_2bjet_A_Z2b__461->SetBinError(22,5);
   Zee_2bjet_A_Z2b__461->SetBinError(23,4.358899);
   Zee_2bjet_A_Z2b__461->SetBinError(24,3);
   Zee_2bjet_A_Z2b__461->SetBinError(25,1.414214);
   Zee_2bjet_A_Z2b__461->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__461->SetLineColor(ci);
   Zee_2bjet_A_Z2b__461->SetLineWidth(2);
   Zee_2bjet_A_Z2b__461->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__461->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_A_Z2b_fx1461[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fy1461[25] = {
   4215.892,
   3998.4,
   3490.918,
   2820.235,
   2194.777,
   1792.965,
   1451.422,
   1246.162,
   1048.455,
   828.2281,
   680.7532,
   605.2544,
   475.309,
   417.1745,
   348.1697,
   328.799,
   242.5934,
   208.5932,
   198.5123,
   135.0467,
   98.41857,
   58.99315,
   61.90786,
   23.48434,
   5.874907};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fex1461[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_Zee_2bjet_A_Z2b_fey1461[25] = {
   65.82601,
   65.12681,
   60.49553,
   53.70805,
   47.26797,
   42.58583,
   37.60645,
   35.72143,
   32.15716,
   28.30365,
   25.68129,
   24.23063,
   21.72338,
   20.48122,
   18.37774,
   18.36334,
   15.32886,
   14.40689,
   14.07129,
   11.48543,
   9.792313,
   7.443302,
   7.946581,
   4.722417,
   2.375306};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_A_Z2b_fx1461,Graph_from_Zee_2bjet_A_Z2b_fy1461,Graph_from_Zee_2bjet_A_Z2b_fex1461,Graph_from_Zee_2bjet_A_Z2b_fey1461);
   gre->SetName("Graph_from_Zee_2bjet_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_A_Z2b1461 = new TH1F("Graph_Graph_from_Zee_2bjet_A_Z2b1461","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->SetMinimum(3.149641);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->SetMaximum(4709.539);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_A_Z2b1461->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_A_Z2b1461);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__462 = new TH1D("data_mc_ratio__462","",25,0,1);
   data_mc_ratio__462->SetBinContent(1,0.4048966);
   data_mc_ratio__462->SetBinContent(2,0.3936575);
   data_mc_ratio__462->SetBinContent(3,0.4036187);
   data_mc_ratio__462->SetBinContent(4,0.3918113);
   data_mc_ratio__462->SetBinContent(5,0.3827268);
   data_mc_ratio__462->SetBinContent(6,0.3998963);
   data_mc_ratio__462->SetBinContent(7,0.3947852);
   data_mc_ratio__462->SetBinContent(8,0.4261082);
   data_mc_ratio__462->SetBinContent(9,0.3796062);
   data_mc_ratio__462->SetBinContent(10,0.4068927);
   data_mc_ratio__462->SetBinContent(11,0.3628334);
   data_mc_ratio__462->SetBinContent(12,0.3717445);
   data_mc_ratio__462->SetBinContent(13,0.458649);
   data_mc_ratio__462->SetBinContent(14,0.3523706);
   data_mc_ratio__462->SetBinContent(15,0.3877419);
   data_mc_ratio__462->SetBinContent(16,0.3254268);
   data_mc_ratio__462->SetBinContent(17,0.4080902);
   data_mc_ratio__462->SetBinContent(18,0.3164054);
   data_mc_ratio__462->SetBinContent(19,0.3022482);
   data_mc_ratio__462->SetBinContent(20,0.3850521);
   data_mc_ratio__462->SetBinContent(21,0.4673915);
   data_mc_ratio__462->SetBinContent(22,0.423778);
   data_mc_ratio__462->SetBinContent(23,0.3069077);
   data_mc_ratio__462->SetBinContent(24,0.3832341);
   data_mc_ratio__462->SetBinContent(25,0.3404309);
   data_mc_ratio__462->SetBinError(1,0.009800028);
   data_mc_ratio__462->SetBinError(2,0.009922387);
   data_mc_ratio__462->SetBinError(3,0.01075266);
   data_mc_ratio__462->SetBinError(4,0.0117868);
   data_mc_ratio__462->SetBinError(5,0.01320533);
   data_mc_ratio__462->SetBinError(6,0.0149344);
   data_mc_ratio__462->SetBinError(7,0.01649239);
   data_mc_ratio__462->SetBinError(8,0.01849152);
   data_mc_ratio__462->SetBinError(9,0.01902794);
   data_mc_ratio__462->SetBinError(10,0.02216486);
   data_mc_ratio__462->SetBinError(11,0.02308654);
   data_mc_ratio__462->SetBinError(12,0.02478297);
   data_mc_ratio__462->SetBinError(13,0.03106363);
   data_mc_ratio__462->SetBinError(14,0.02906303);
   data_mc_ratio__462->SetBinError(15,0.03337151);
   data_mc_ratio__462->SetBinError(16,0.03146019);
   data_mc_ratio__462->SetBinError(17,0.04101461);
   data_mc_ratio__462->SetBinError(18,0.03894681);
   data_mc_ratio__462->SetBinError(19,0.03902008);
   data_mc_ratio__462->SetBinError(20,0.05339712);
   data_mc_ratio__462->SetBinError(21,0.06891311);
   data_mc_ratio__462->SetBinError(22,0.0847556);
   data_mc_ratio__462->SetBinError(23,0.07040946);
   data_mc_ratio__462->SetBinError(24,0.1277447);
   data_mc_ratio__462->SetBinError(25,0.240721);
   data_mc_ratio__462->SetMinimum(0.4);
   data_mc_ratio__462->SetMaximum(1.6);
   data_mc_ratio__462->SetEntries(641.0436);
   data_mc_ratio__462->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__462->SetLineColor(ci);
   data_mc_ratio__462->SetLineWidth(2);
   data_mc_ratio__462->SetMarkerStyle(20);
   data_mc_ratio__462->SetMarkerSize(1.2);
   data_mc_ratio__462->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__462->GetXaxis()->SetRange(1,25);
   data_mc_ratio__462->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__462->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__462->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__462->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__462->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__462->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__462->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__462->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__462->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__462->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__462->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__462->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__462->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__462->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1462[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1462[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1462[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1462[25] = {
   0.01561378,
   0.01628822,
   0.0173294,
   0.01904382,
   0.02153657,
   0.02375162,
   0.02591007,
   0.02866515,
   0.030671,
   0.03417374,
   0.03772481,
   0.04003378,
   0.04570371,
   0.0490951,
   0.05278386,
   0.05584973,
   0.06318745,
   0.06906691,
   0.07088373,
   0.0850479,
   0.09949659,
   0.1261723,
   0.1283614,
   0.2010879,
   0.4043138};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1462,Graph_from_mc_statistical_error_fy1462,Graph_from_mc_statistical_error_fex1462,Graph_from_mc_statistical_error_fey1462);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1462 = new TH1F("Graph_Graph_from_mc_statistical_error1462","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1462->SetMinimum(0.5148234);
   Graph_Graph_from_mc_statistical_error1462->SetMaximum(1.485177);
   Graph_Graph_from_mc_statistical_error1462->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1462->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1462->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1462);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_18_amcnlo);
}
