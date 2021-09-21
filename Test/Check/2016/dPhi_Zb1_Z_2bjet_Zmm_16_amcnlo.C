void dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.220285,3.416482,2228.065);
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
   st->SetMaximum(1909.558);
   
   TH1F *st_stack_325 = new TH1F("st_stack_325","",30,0,3.141593);
   st_stack_325->SetMinimum(0.01);
   st_stack_325->SetMaximum(2005.036);
   st_stack_325->SetDirectory(0);
   st_stack_325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_325->SetLineColor(ci);
   st_stack_325->GetXaxis()->SetRange(1,31);
   st_stack_325->GetXaxis()->SetLabelFont(42);
   st_stack_325->GetXaxis()->SetLabelSize(0.035);
   st_stack_325->GetXaxis()->SetTitleSize(0.035);
   st_stack_325->GetXaxis()->SetTitleFont(42);
   st_stack_325->GetYaxis()->SetTitle("Events/0.105");
   st_stack_325->GetYaxis()->SetLabelFont(42);
   st_stack_325->GetYaxis()->SetLabelSize(0.05);
   st_stack_325->GetYaxis()->SetTitleSize(0.057);
   st_stack_325->GetYaxis()->SetTitleOffset(1.2);
   st_stack_325->GetYaxis()->SetTitleFont(42);
   st_stack_325->GetZaxis()->SetLabelFont(42);
   st_stack_325->GetZaxis()->SetLabelSize(0.035);
   st_stack_325->GetZaxis()->SetTitleSize(0.035);
   st_stack_325->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_325);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.376369);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,1.263986);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,0.7334167);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.059358);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,1.378047);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.101089);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.966881);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.376929);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.510552);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,1.377488);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.768739);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,1.376369);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,1.769857);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,1.239288);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,2.557952);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,2.050403);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,1.46045);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,2.95144);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,2.051521);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,1.968559);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,2.418075);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,2.085648);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,2.950881);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.042799);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,2.474971);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.420871);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,2.829216);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,3.149023);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,2.889717);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,1.378047);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.5202191);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.489107);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.3560016);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.4466167);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.5208533);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.4472629);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.621983);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.5204306);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.5289133);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.520642);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.5895799);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.5202191);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.589953);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.4853412);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.709449);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.6275657);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.52709);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.7620593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.6279163);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.6225135);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.6834805);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.627627);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.7619149);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.6268157);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.671249);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.684285);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.7399399);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.7872565);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.7426153);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.5208533);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(305);

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
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,4.297419);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,0.8941428);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,2.980476);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,1.490238);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.614991);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,2.211086);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,1.018896);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,1.913039);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.682428);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,2.980476);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,1.19219);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,1.788286);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,2.807182);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,5.018268);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,4.893515);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,4.470714);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,5.364857);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,5.960952);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,6.618995);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,8.345333);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,6.085705);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,7.153142);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,6.979848);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,9.724224);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,8.345333);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,8.470086);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,8.470086);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,5.960952);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,7.527402);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,3.576571);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.154808);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.5162336);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.9425092);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.6664547);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.7308146);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.8436556);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.5970136);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.7892543);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.8941428);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.9425092);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.5960952);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.7300645);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.9430904);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.265375);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.229327);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.154333);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.264509);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,1.332909);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.46662);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.57712);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.366227);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.460129);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.460504);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.768962);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.57712);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.605377);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.605377);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.332909);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.549762);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.032467);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(463);

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
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,48.49035);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,38.36385);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,36.02696);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,38.94807);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,41.67443);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,40.89547);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,46.73768);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,43.23236);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,46.73768);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,51.02197);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,51.60619);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,60.17477);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,60.75899);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,68.15912);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,74.97503);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,84.32257);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,82.76465);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,89.19108);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,92.50167);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,85.68575);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,100.0965);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,93.86485);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,97.56491);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,89.19108);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,98.34388);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,93.28063);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,93.08589);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,95.03329);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,83.73835);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,92.30692);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,3.072951);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.733311);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.648755);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.754044);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.848806);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.822056);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,3.016904);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.901566);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,3.016904);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,3.152148);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,3.170143);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,3.423223);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.4398);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.643258);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.821082);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,4.052284);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,4.014675);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,4.167625);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,4.244267);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,4.084908);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,4.415069);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,4.275427);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,4.358879);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,4.167625);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,4.376245);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,4.262101);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,4.257649);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,4.301955);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,4.038222);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,4.239797);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(10880);

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
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(1,0.6468123);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(2,0.669416);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(3,0.6369595);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(4,0.6392778);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(5,0.6253678);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(6,0.6705751);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(7,0.651449);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(8,0.6891217);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(9,0.7331699);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(10,0.7969238);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(11,0.8884976);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(12,0.9974588);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(13,1.135979);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(14,1.250736);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(15,1.476193);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(16,1.70049);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(17,1.947392);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(18,2.179224);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(19,2.401783);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(20,2.697949);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(21,2.87646);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(22,3.049755);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(23,3.079314);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(24,3.159296);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(25,2.968614);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(26,2.893848);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(27,2.61333);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(28,2.397147);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(29,2.204146);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinContent(30,2.050557);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(1,0.01936182);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(2,0.01969723);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(3,0.01921379);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(4,0.01924872);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(5,0.01903815);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(6,0.01971427);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(7,0.01943109);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(8,0.01998504);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(9,0.02061386);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(10,0.02149144);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(11,0.02269265);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(12,0.02404388);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(13,0.02565914);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(14,0.02692401);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(15,0.02925018);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(16,0.03139382);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(17,0.0335957);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(18,0.03553923);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(19,0.03730989);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(20,0.03954339);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(21,0.04083064);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(22,0.0420426);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(23,0.04224584);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(24,0.04279098);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(25,0.04147954);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(26,0.04095386);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(27,0.03891833);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(28,0.03727386);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(29,0.03574187);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetBinError(30,0.03447411);
   Zmm_2bjet_dPhi_Zb1_stack_4->SetEntries(87524);

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
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(1,434.733);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(2,433.9808);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(3,400.6103);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(4,415.9815);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(5,418.7487);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(6,433.4605);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(7,433.8569);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(8,456.8341);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(9,459.5448);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(10,472.685);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(11,479.0132);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(12,548.2692);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(13,539.7154);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(14,562.4452);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(15,616.8197);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(16,637.8957);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(17,662.4652);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(18,721.0908);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(19,736.9573);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(20,788.5696);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(21,820.2809);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(22,905.4547);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(23,851.4365);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(24,908.9077);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(25,913.8854);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(26,921.8875);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(27,898.8429);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(28,935.8153);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(29,953.8975);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinContent(30,882.3734);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(1,15.40102);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(2,15.2601);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(3,14.38266);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(4,14.6964);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(5,14.75036);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(6,15.1149);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(7,15.30519);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(8,15.79471);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(9,15.69941);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(10,15.99219);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(11,15.6257);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(12,17.16871);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(13,16.90938);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(14,17.46346);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(15,18.16182);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(16,18.15435);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(17,18.75204);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(18,19.55986);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(19,19.62483);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(20,20.40384);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(21,21.06159);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(22,22.18945);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(23,20.91773);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(24,21.86108);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(25,21.79861);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(26,22.0455);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(27,21.83456);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(28,22.31373);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(29,22.4742);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetBinError(30,21.92159);
   Zmm_2bjet_dPhi_Zb1_stack_5->SetEntries(38399);

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
   
   TH1D *Zmm_2bjet_dPhi_Zb1__649 = new TH1D("Zmm_2bjet_dPhi_Zb1__649","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(1,158);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(2,155);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(3,165);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(4,158);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(5,169);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(6,150);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(7,176);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(8,139);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(9,151);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(10,171);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(11,184);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(12,199);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(13,206);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(14,219);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(15,294);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(16,251);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(17,251);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(18,273);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(19,267);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(20,341);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(21,306);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(22,347);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(23,346);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(24,351);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(25,337);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(26,368);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(27,348);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(28,349);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(29,356);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(30,351);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(1,12.56981);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(2,12.4499);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(3,12.84523);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(4,12.56981);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(5,13);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(6,12.24745);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(7,13.2665);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(8,11.78983);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(9,12.28821);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(10,13.0767);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(11,13.56466);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(12,14.10674);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(13,14.3527);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(14,14.79865);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(15,17.14643);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(16,15.84298);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(17,15.84298);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(18,16.52271);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(19,16.34013);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(20,18.46619);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(21,17.49286);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(22,18.62794);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(23,18.60108);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(24,18.73499);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(25,18.35756);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(26,19.18333);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(27,18.65476);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(28,18.68154);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(29,18.86796);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(30,18.73499);
   Zmm_2bjet_dPhi_Zb1__649->SetEntries(7536);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__649->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__649->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__649->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__649->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fx1649[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fy1649[30] = {
   489.5439,
   475.1722,
   440.9881,
   458.1185,
   464.0415,
   478.3387,
   484.2318,
   504.0455,
   511.2086,
   528.8619,
   534.4689,
   612.6061,
   606.1875,
   638.1126,
   700.7224,
   730.4399,
   754.0026,
   821.3735,
   840.5313,
   887.2672,
   931.7577,
   1011.608,
   962.0114,
   1013.025,
   1026.018,
   1028.953,
   1005.841,
   1042.356,
   1050.257,
   981.6855};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fex1649[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_fey1649[30] = {
   15.75561,
   15.51927,
   14.65921,
   14.97374,
   15.04973,
   15.40572,
   15.62351,
   16.08683,
   16.02039,
   16.33542,
   15.96608,
   17.52961,
   17.29154,
   17.89087,
   18.61365,
   18.64749,
   19.22588,
   20.05781,
   20.14186,
   20.87773,
   21.57357,
   22.65345,
   21.43051,
   22.33383,
   22.29956,
   22.52147,
   22.31596,
   22.77734,
   22.89872,
   22.35778};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb1_fx1649,Graph_from_Zmm_2bjet_dPhi_Zb1_fy1649,Graph_from_Zmm_2bjet_dPhi_Zb1_fex1649,Graph_from_Zmm_2bjet_dPhi_Zb1_fey1649);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->SetMinimum(361.6462);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->SetMaximum(1137.839);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb11649);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__650 = new TH1D("data_mc_ratio__650","",30,0,3.141593);
   data_mc_ratio__650->SetBinContent(1,0.3227494);
   data_mc_ratio__650->SetBinContent(2,0.3261976);
   data_mc_ratio__650->SetBinContent(3,0.3741597);
   data_mc_ratio__650->SetBinContent(4,0.344889);
   data_mc_ratio__650->SetBinContent(5,0.3641916);
   data_mc_ratio__650->SetBinContent(6,0.3135853);
   data_mc_ratio__650->SetBinContent(7,0.3634623);
   data_mc_ratio__650->SetBinContent(8,0.2757687);
   data_mc_ratio__650->SetBinContent(9,0.2953784);
   data_mc_ratio__650->SetBinContent(10,0.3233358);
   data_mc_ratio__650->SetBinContent(11,0.344267);
   data_mc_ratio__650->SetBinContent(12,0.3248417);
   data_mc_ratio__650->SetBinContent(13,0.3398289);
   data_mc_ratio__650->SetBinContent(14,0.3431996);
   data_mc_ratio__650->SetBinContent(15,0.419567);
   data_mc_ratio__650->SetBinContent(16,0.3436285);
   data_mc_ratio__650->SetBinContent(17,0.3328901);
   data_mc_ratio__650->SetBinContent(18,0.3323701);
   data_mc_ratio__650->SetBinContent(19,0.3176562);
   data_mc_ratio__650->SetBinContent(20,0.3843262);
   data_mc_ratio__650->SetBinContent(21,0.3284116);
   data_mc_ratio__650->SetBinContent(22,0.3430182);
   data_mc_ratio__650->SetBinContent(23,0.3596631);
   data_mc_ratio__650->SetBinContent(24,0.346487);
   data_mc_ratio__650->SetBinContent(25,0.3284542);
   data_mc_ratio__650->SetBinContent(26,0.3576451);
   data_mc_ratio__650->SetBinContent(27,0.345979);
   data_mc_ratio__650->SetBinContent(28,0.3348185);
   data_mc_ratio__650->SetBinContent(29,0.3389646);
   data_mc_ratio__650->SetBinContent(30,0.3575483);
   data_mc_ratio__650->SetBinError(1,0.02567656);
   data_mc_ratio__650->SetBinError(2,0.02620082);
   data_mc_ratio__650->SetBinError(3,0.0291283);
   data_mc_ratio__650->SetBinError(4,0.02743789);
   data_mc_ratio__650->SetBinError(5,0.02801474);
   data_mc_ratio__650->SetBinError(6,0.02560414);
   data_mc_ratio__650->SetBinError(7,0.027397);
   data_mc_ratio__650->SetBinError(8,0.0233904);
   data_mc_ratio__650->SetBinError(9,0.02403756);
   data_mc_ratio__650->SetBinError(10,0.02472611);
   data_mc_ratio__650->SetBinError(11,0.0253797);
   data_mc_ratio__650->SetBinError(12,0.02302742);
   data_mc_ratio__650->SetBinError(13,0.023677);
   data_mc_ratio__650->SetBinError(14,0.02319128);
   data_mc_ratio__650->SetBinError(15,0.02446965);
   data_mc_ratio__650->SetBinError(16,0.02168964);
   data_mc_ratio__650->SetBinError(17,0.02101184);
   data_mc_ratio__650->SetBinError(18,0.02011595);
   data_mc_ratio__650->SetBinError(19,0.01944025);
   data_mc_ratio__650->SetBinError(20,0.02081243);
   data_mc_ratio__650->SetBinError(21,0.01877404);
   data_mc_ratio__650->SetBinError(22,0.01841418);
   data_mc_ratio__650->SetBinError(23,0.01933561);
   data_mc_ratio__650->SetBinError(24,0.01849411);
   data_mc_ratio__650->SetBinError(25,0.01789204);
   data_mc_ratio__650->SetBinError(26,0.01864354);
   data_mc_ratio__650->SetBinError(27,0.01854642);
   data_mc_ratio__650->SetBinError(28,0.01792242);
   data_mc_ratio__650->SetBinError(29,0.01796509);
   data_mc_ratio__650->SetBinError(30,0.01908452);
   data_mc_ratio__650->SetMinimum(0.4);
   data_mc_ratio__650->SetMaximum(1.6);
   data_mc_ratio__650->SetEntries(5847.168);
   data_mc_ratio__650->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__650->SetLineColor(ci);
   data_mc_ratio__650->SetLineWidth(2);
   data_mc_ratio__650->SetMarkerStyle(20);
   data_mc_ratio__650->SetMarkerSize(1.2);
   data_mc_ratio__650->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__650->GetXaxis()->SetRange(1,31);
   data_mc_ratio__650->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__650->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__650->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__650->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__650->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__650->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__650->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__650->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__650->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__650->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__650->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__650->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__650->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__650->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1650[30] = {
   0.03218425,
   0.03266031,
   0.03324173,
   0.0326853,
   0.03243187,
   0.03220672,
   0.03226453,
   0.03191543,
   0.03133826,
   0.03088788,
   0.02987279,
   0.02861481,
   0.02852507,
   0.02803716,
   0.02656351,
   0.02552912,
   0.02549843,
   0.02441984,
   0.02396325,
   0.02353038,
   0.02315363,
   0.0223935,
   0.02227677,
   0.02204667,
   0.02173408,
   0.02188776,
   0.02218636,
   0.02185179,
   0.02180296,
   0.02277489};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1650,Graph_from_mc_statistical_error_fy1650,Graph_from_mc_statistical_error_fex1650,Graph_from_mc_statistical_error_fey1650);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1650 = new TH1F("Graph_Graph_from_mc_statistical_error1650","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1650->SetMinimum(0.9601099);
   Graph_Graph_from_mc_statistical_error1650->SetMaximum(1.03989);
   Graph_Graph_from_mc_statistical_error1650->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1650->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1650->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1650);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo);
}
