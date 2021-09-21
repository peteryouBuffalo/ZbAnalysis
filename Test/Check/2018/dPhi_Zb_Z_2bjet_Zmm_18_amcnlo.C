void dPhi_Zb_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_18_amcnlo/dPhi_Zb_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_18_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-7.354356,3.416482,7357.001);
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
   st->SetMaximum(6305.301);
   
   TH1F *st_stack_323 = new TH1F("st_stack_323","",30,0,3.141593);
   st_stack_323->SetMinimum(0.01);
   st_stack_323->SetMaximum(6620.566);
   st_stack_323->SetDirectory(0);
   st_stack_323->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_323->SetLineColor(ci);
   st_stack_323->GetXaxis()->SetRange(1,31);
   st_stack_323->GetXaxis()->SetLabelFont(42);
   st_stack_323->GetXaxis()->SetLabelSize(0.035);
   st_stack_323->GetXaxis()->SetTitleSize(0.035);
   st_stack_323->GetXaxis()->SetTitleFont(42);
   st_stack_323->GetYaxis()->SetTitle("Events/0.105");
   st_stack_323->GetYaxis()->SetLabelFont(42);
   st_stack_323->GetYaxis()->SetLabelSize(0.05);
   st_stack_323->GetYaxis()->SetTitleSize(0.057);
   st_stack_323->GetYaxis()->SetTitleOffset(1.2);
   st_stack_323->GetYaxis()->SetTitleFont(42);
   st_stack_323->GetZaxis()->SetLabelFont(42);
   st_stack_323->GetZaxis()->SetLabelSize(0.035);
   st_stack_323->GetZaxis()->SetTitleSize(0.035);
   st_stack_323->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_323);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.6630826);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.7705281);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,1.386747);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.9522189);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,1.205056);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.8356462);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,1.738591);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,1.679816);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.6953068);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,1.148692);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(12,1.235473);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.7141642);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,1.690293);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,2.377076);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,2.985602);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,2.149209);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,4.092713);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,3.24682);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,4.201823);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,2.501799);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,5.168824);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,7.425106);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,7.330779);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,7.571932);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,8.957245);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,6.309824);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,11.08292);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,10.03984);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,9.531443);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.3952561);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.4161575);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.6243079);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.4761095);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.5798855);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.4212213);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.6730822);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.6621548);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.3958848);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.5771398);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.5234977);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.4123229);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.6941905);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.7450042);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.8779502);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.7286355);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,1.07407);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.9220723);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,1.058084);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.8103385);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,1.182852);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,1.384116);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,1.415196);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,1.428247);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.548601);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,1.315835);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,1.695611);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.657434);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.605834);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,0.9970574);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,2.492644);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.994115);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,2.991172);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,2.492644);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,3.98823);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,2.991172);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,1.994115);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,3.489701);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.4985287);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.721416);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,3.217002);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.718473);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,4.214059);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,3.489701);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.492644);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,7.477931);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,4.985287);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,10.96763);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,9.697875);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,12.96175);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,14.63629);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,22.43379);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,25.42496);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,17.67433);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,20.12011);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,26.42202);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,26.64785);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,21.34255);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.7050261);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,1.114744);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.9970574);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,1.221141);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,1.114744);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,1.410052);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,1.221141);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.9970574);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,1.318983);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.4985287);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,1.01082);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,1.329417);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,1.232404);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,1.504796);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.318983);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,1.114744);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,1.930793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.576486);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,2.338307);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,2.235677);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,2.542008);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,2.790584);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,3.344232);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,3.560207);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.995788);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,3.243639);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,3.629344);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,3.667193);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,3.317371);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,55.63176);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,50.39304);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,56.81366);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,52.42873);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,52.14343);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,53.80397);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,51.89788);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,57.73119);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,57.20762);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,59.86826);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,75.61051);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,73.40758);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,84.9373);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,93.35597);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,107.9779);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,118.6654);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,134.8089);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,154.0519);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,169.7471);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,192.9362);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,206.6145);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,222.0056);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,236.779);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,257.9041);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,266.07);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,269.9596);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,274.2504);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,275.6235);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,282.2563);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,277.0248);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.141471);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,2.037315);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,2.163179);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,2.077655);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,2.071314);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,2.10431);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.067913);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,2.180775);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.170366);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.220703);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.497054);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.459529);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.645577);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.772706);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,2.982571);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.127428);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.333288);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.562857);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.740372);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.987996);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,4.127648);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,4.278396);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.417231);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.610344);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.683473);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.717703);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.754447);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.765487);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.822811);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,4.776961);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(1,0.3695652);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(2,0.3804148);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(3,0.3709214);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(4,0.4007579);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(5,0.3695652);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(6,0.361428);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(7,0.4448345);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(8,0.4441564);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(9,0.4522936);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(10,0.5078979);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(11,0.5336658);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(12,0.6096131);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(13,0.6367372);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(14,0.7615078);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(15,0.8625449);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(16,1.047667);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(17,1.247028);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(18,1.505385);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(19,1.828161);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(20,2.319785);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(21,2.940247);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(22,3.751935);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(23,4.843);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(24,6.125289);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(25,7.558796);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(26,9.080455);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(27,10.41157);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(28,10.88895);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(29,10.33291);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinContent(30,9.26422);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(1,0.01583044);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(2,0.01606113);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(3,0.01585946);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(4,0.01648498);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(5,0.01583044);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(6,0.01565519);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(7,0.01736787);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(8,0.01735463);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(9,0.01751288);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(10,0.01855819);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(11,0.01902313);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(12,0.02033174);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(13,0.02077913);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(14,0.02272398);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(15,0.02418456);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(16,0.02665378);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(17,0.0290794);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(18,0.03195002);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(19,0.03520907);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(20,0.03966168);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(21,0.04465183);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(22,0.05043998);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(23,0.05730658);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(24,0.06444817);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(25,0.0715935);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(26,0.07846954);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(27,0.08402439);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(28,0.08592911);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(29,0.08370638);
   Zmm_2bjet_dPhi_Zb_stack_4->SetBinError(30,0.07925958);
   Zmm_2bjet_dPhi_Zb_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(1,245.3888);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(2,222.2364);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(3,250.4583);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(4,283.1069);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(5,228.7237);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(6,226.393);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(7,265.0425);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(8,269.9606);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(9,285.4818);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(10,279.6507);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(11,299.4098);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(12,315.6685);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(13,319.8711);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(14,440.5307);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(15,408.409);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(16,517.6429);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(17,576.0073);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(18,653.0734);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(19,764.3883);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(20,955.7711);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(21,1166.911);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(22,1365.021);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(23,1551.275);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(24,1736.945);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(25,2087.47);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(26,2371.04);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(27,2726.565);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(28,2957.453);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(29,3138.638);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinContent(30,2953.694);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(1,16.62114);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(2,16.14073);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(3,17.38174);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(4,19.50817);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(5,17.58354);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(6,16.90026);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(7,17.5714);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(8,18.58417);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(9,19.04083);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(10,18.03245);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(11,18.91848);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(12,19.41201);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(13,19.77169);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(14,23.61347);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(15,21.91784);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(16,24.76199);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(17,26.65724);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(18,27.87779);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(19,29.50235);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(20,33.43399);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(21,36.97891);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(22,39.61858);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(23,42.1896);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(24,44.81492);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(25,49.0261);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(26,51.83181);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(27,55.75659);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(28,58.34049);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(29,59.93517);
   Zmm_2bjet_dPhi_Zb_stack_5->SetBinError(30,57.85704);
   Zmm_2bjet_dPhi_Zb_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb__645 = new TH1D("Zmm_2bjet_dPhi_Zb__645","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(1,168);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(2,148);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(3,152);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(4,159);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(5,125);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(6,171);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(7,176);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(8,152);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(9,150);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(10,210);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(11,219);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(12,219);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(13,218);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(14,242);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(15,271);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(16,314);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(17,345);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(18,391);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(19,427);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(20,472);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(21,535);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(22,682);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(23,735);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(24,941);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(25,944);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(26,1045);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(27,1164);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(28,1271);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(29,1310);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(30,1263);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(1,12.96148);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(2,12.16553);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(3,12.32883);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(4,12.60952);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(5,11.18034);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(6,13.0767);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(7,13.2665);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(8,12.32883);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(9,12.24745);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(10,14.49138);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(11,14.79865);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(12,14.79865);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(13,14.76482);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(14,15.55635);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(15,16.46208);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(16,17.72005);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(17,18.57418);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(18,19.77372);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(19,20.66398);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(20,21.72556);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(21,23.13007);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(22,26.11513);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(23,27.11088);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(24,30.67572);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(25,30.72458);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(26,32.32646);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(27,34.11744);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(28,35.65109);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(29,36.19392);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(30,35.53871);
   Zmm_2bjet_dPhi_Zb__645->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__645->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__645->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__645->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__645->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fx1645[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fy1645[30] = {
   303.0503,
   275.5025,
   310.4076,
   340.3143,
   284.6815,
   285.7517,
   321.2121,
   331.8687,
   348.3112,
   341.2207,
   376.7027,
   392.6426,
   409.3763,
   539.0569,
   523.8406,
   643.8313,
   716.7051,
   820.2014,
   944.1957,
   1166.197,
   1388.666,
   1608.909,
   1814.959,
   2030.739,
   2394.096,
   2676.711,
   3037.657,
   3281.471,
   3467.915,
   3270.857};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fex1645[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb_fey1645[30] = {
   16.77801,
   16.30695,
   17.54913,
   19.66638,
   17.74657,
   17.09888,
   17.73976,
   18.75032,
   19.22088,
   18.17983,
   19.0913,
   19.6003,
   19.99641,
   23.81775,
   22.18349,
   25.00897,
   26.89784,
   28.19127,
   29.79456,
   33.76869,
   37.28451,
   39.94747,
   42.53446,
   45.1976,
   49.39852,
   52.15528,
   56.06837,
   58.67177,
   60.26348,
   58.17084};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb_fx1645,Graph_from_Zmm_2bjet_dPhi_Zb_fy1645,Graph_from_Zmm_2bjet_dPhi_Zb_fex1645,Graph_from_Zmm_2bjet_dPhi_Zb_fey1645);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->SetMinimum(233.276);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->SetMaximum(3855.077);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb1645);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__646 = new TH1D("data_mc_ratio__646","",30,0,3.141593);
   data_mc_ratio__646->SetBinContent(1,0.5543635);
   data_mc_ratio__646->SetBinContent(2,0.5372001);
   data_mc_ratio__646->SetBinContent(3,0.4896788);
   data_mc_ratio__646->SetBinContent(4,0.4672152);
   data_mc_ratio__646->SetBinContent(5,0.4390871);
   data_mc_ratio__646->SetBinContent(6,0.5984216);
   data_mc_ratio__646->SetBinContent(7,0.5479246);
   data_mc_ratio__646->SetBinContent(8,0.4580125);
   data_mc_ratio__646->SetBinContent(9,0.4306494);
   data_mc_ratio__646->SetBinContent(10,0.6154375);
   data_mc_ratio__646->SetBinContent(11,0.5813604);
   data_mc_ratio__646->SetBinContent(12,0.5577592);
   data_mc_ratio__646->SetBinContent(13,0.5325173);
   data_mc_ratio__646->SetBinContent(14,0.4489322);
   data_mc_ratio__646->SetBinContent(15,0.5173329);
   data_mc_ratio__646->SetBinContent(16,0.4877054);
   data_mc_ratio__646->SetBinContent(17,0.4813696);
   data_mc_ratio__646->SetBinContent(18,0.4767122);
   data_mc_ratio__646->SetBinContent(19,0.4522368);
   data_mc_ratio__646->SetBinContent(20,0.4047345);
   data_mc_ratio__646->SetBinContent(21,0.3852619);
   data_mc_ratio__646->SetBinContent(22,0.4238896);
   data_mc_ratio__646->SetBinContent(23,0.4049679);
   data_mc_ratio__646->SetBinContent(24,0.4633781);
   data_mc_ratio__646->SetBinContent(25,0.3943033);
   data_mc_ratio__646->SetBinContent(26,0.3904044);
   data_mc_ratio__646->SetBinContent(27,0.3831901);
   data_mc_ratio__646->SetBinContent(28,0.3873263);
   data_mc_ratio__646->SetBinContent(29,0.3777486);
   data_mc_ratio__646->SetBinContent(30,0.3861373);
   data_mc_ratio__646->SetBinError(1,0.04277007);
   data_mc_ratio__646->SetBinError(2,0.04415758);
   data_mc_ratio__646->SetBinError(3,0.0397182);
   data_mc_ratio__646->SetBinError(4,0.03705258);
   data_mc_ratio__646->SetBinError(5,0.03927315);
   data_mc_ratio__646->SetBinError(6,0.04576244);
   data_mc_ratio__646->SetBinError(7,0.04130137);
   data_mc_ratio__646->SetBinError(8,0.03714972);
   data_mc_ratio__646->SetBinError(9,0.03516238);
   data_mc_ratio__646->SetBinError(10,0.04246922);
   data_mc_ratio__646->SetBinError(11,0.03928469);
   data_mc_ratio__646->SetBinError(12,0.03768987);
   data_mc_ratio__646->SetBinError(13,0.03606663);
   data_mc_ratio__646->SetBinError(14,0.02885845);
   data_mc_ratio__646->SetBinError(15,0.03142574);
   data_mc_ratio__646->SetBinError(16,0.02752281);
   data_mc_ratio__646->SetBinError(17,0.02591607);
   data_mc_ratio__646->SetBinError(18,0.02410837);
   data_mc_ratio__646->SetBinError(19,0.02188527);
   data_mc_ratio__646->SetBinError(20,0.01862942);
   data_mc_ratio__646->SetBinError(21,0.01665633);
   data_mc_ratio__646->SetBinError(22,0.01623157);
   data_mc_ratio__646->SetBinError(23,0.01493747);
   data_mc_ratio__646->SetBinError(24,0.0151057);
   data_mc_ratio__646->SetBinError(25,0.01283348);
   data_mc_ratio__646->SetBinError(26,0.01207693);
   data_mc_ratio__646->SetBinError(27,0.0112315);
   data_mc_ratio__646->SetBinError(28,0.01086436);
   data_mc_ratio__646->SetBinError(29,0.0104368);
   data_mc_ratio__646->SetBinError(30,0.01086526);
   data_mc_ratio__646->SetMinimum(0.4);
   data_mc_ratio__646->SetMaximum(1.6);
   data_mc_ratio__646->SetEntries(4819.431);
   data_mc_ratio__646->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__646->SetLineColor(ci);
   data_mc_ratio__646->SetLineWidth(2);
   data_mc_ratio__646->SetMarkerStyle(20);
   data_mc_ratio__646->SetMarkerSize(1.2);
   data_mc_ratio__646->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__646->GetXaxis()->SetRange(1,31);
   data_mc_ratio__646->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__646->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__646->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__646->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__646->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__646->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1646[30] = {
   0.05536379,
   0.05918984,
   0.05653575,
   0.05778888,
   0.06233833,
   0.05983825,
   0.05522757,
   0.05649921,
   0.05518308,
   0.05327881,
   0.05068001,
   0.04991894,
   0.04884603,
   0.0441841,
   0.04234779,
   0.03884397,
   0.03752985,
   0.03437116,
   0.03155549,
   0.02895626,
   0.02684916,
   0.02482891,
   0.0234355,
   0.02225673,
   0.02063348,
   0.01948483,
   0.01845777,
   0.01787972,
   0.01737744,
   0.01778459};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1646,Graph_from_mc_statistical_error_fy1646,Graph_from_mc_statistical_error_fex1646,Graph_from_mc_statistical_error_fey1646);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1646 = new TH1F("Graph_Graph_from_mc_statistical_error1646","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1646->SetMinimum(0.925194);
   Graph_Graph_from_mc_statistical_error1646->SetMaximum(1.074806);
   Graph_Graph_from_mc_statistical_error1646->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1646->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1646->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1646);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_18_amcnlo);
}
