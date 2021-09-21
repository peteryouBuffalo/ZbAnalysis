void pt_lep1_Z_bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_bjet_Zee_16_amcnlo/pt_lep1_Z_bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:00 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_bjet_Zee_16_amcnlo = new TCanvas("pt_lep1_Z_bjet_Zee_16_amcnlo", "pt_lep1_Z_bjet_Zee_16_amcnlo",0,0,600,600);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_bjet_Zee_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-248.483,210.4839,248244.5);
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
   st->SetMaximum(212757.4);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",40,0,200);
   st_stack_85->SetMinimum(0.01);
   st_stack_85->SetMaximum(223395.2);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetRange(1,40);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetLabelSize(0.035);
   st_stack_85->GetXaxis()->SetTitleSize(0.035);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/5.0");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetLabelSize(0.05);
   st_stack_85->GetYaxis()->SetTitleSize(0.057);
   st_stack_85->GetYaxis()->SetTitleOffset(1.2);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetLabelSize(0.035);
   st_stack_85->GetZaxis()->SetTitleSize(0.035);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *Zee_bjet_pt_lep1_stack_1 = new TH1D("Zee_bjet_pt_lep1_stack_1","",40,0,200);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(8,385.5144);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(9,296.2285);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(10,193.4191);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(11,115.227);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(12,64.64023);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(13,29.84503);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(14,15.20299);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(15,9.276652);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(16,2.837938);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(17,2.754976);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(18,1.239848);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(19,0.7875354);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(20,0.5899525);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(21,0.2805453);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(22,0.3934881);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(23,0.2805453);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(26,0.6504543);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(27,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(29,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(33,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetBinError(8,8.613629);
   Zee_bjet_pt_lep1_stack_1->SetBinError(9,7.566816);
   Zee_bjet_pt_lep1_stack_1->SetBinError(10,6.139889);
   Zee_bjet_pt_lep1_stack_1->SetBinError(11,4.736287);
   Zee_bjet_pt_lep1_stack_1->SetBinError(12,3.546914);
   Zee_bjet_pt_lep1_stack_1->SetBinError(13,2.410203);
   Zee_bjet_pt_lep1_stack_1->SetBinError(14,1.713463);
   Zee_bjet_pt_lep1_stack_1->SetBinError(15,1.340917);
   Zee_bjet_pt_lep1_stack_1->SetBinError(16,0.7408724);
   Zee_bjet_pt_lep1_stack_1->SetBinError(17,0.736299);
   Zee_bjet_pt_lep1_stack_1->SetBinError(18,0.4855678);
   Zee_bjet_pt_lep1_stack_1->SetBinError(19,0.393768);
   Zee_bjet_pt_lep1_stack_1->SetBinError(20,0.3406095);
   Zee_bjet_pt_lep1_stack_1->SetBinError(21,0.2139958);
   Zee_bjet_pt_lep1_stack_1->SetBinError(22,0.2782384);
   Zee_bjet_pt_lep1_stack_1->SetBinError(23,0.2139958);
   Zee_bjet_pt_lep1_stack_1->SetBinError(26,0.3463832);
   Zee_bjet_pt_lep1_stack_1->SetBinError(27,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetBinError(29,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetBinError(33,0.1964644);
   Zee_bjet_pt_lep1_stack_1->SetEntries(5944);

   ci = TColor::GetColor("#ff6600");
   Zee_bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_2 = new TH1D("Zee_bjet_pt_lep1_stack_2","",40,0,200);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(8,336.8625);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(9,273.2409);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(10,149.8501);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(11,96.56372);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(12,59.29588);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(13,42.48132);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(14,32.04285);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(15,24.0307);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(16,19.44099);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(17,13.49515);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(18,9.592864);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(19,11.14505);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(20,6.709471);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(21,4.124125);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(22,5.441069);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(23,4.373631);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(24,2.75864);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(25,2.162545);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(26,2.335839);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(27,1.018896);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(28,3.1329);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(29,1.316944);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(30,0.5960952);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(31,1.143649);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(32,0.7208484);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(33,0.5960952);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(34,1.018896);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(35,0.4228008);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(36,0.7208484);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(38,0.5960952);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(39,0.2980476);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(40,1.018896);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(41,2.162545);
   Zee_bjet_pt_lep1_stack_2->SetBinError(8,10.66403);
   Zee_bjet_pt_lep1_stack_2->SetBinError(9,9.650749);
   Zee_bjet_pt_lep1_stack_2->SetBinError(10,7.198924);
   Zee_bjet_pt_lep1_stack_2->SetBinError(11,5.765888);
   Zee_bjet_pt_lep1_stack_2->SetBinError(12,4.50163);
   Zee_bjet_pt_lep1_stack_2->SetBinError(13,3.859629);
   Zee_bjet_pt_lep1_stack_2->SetBinError(14,3.339555);
   Zee_bjet_pt_lep1_stack_2->SetBinError(15,2.894036);
   Zee_bjet_pt_lep1_stack_2->SetBinError(16,2.628524);
   Zee_bjet_pt_lep1_stack_2->SetBinError(17,2.193943);
   Zee_bjet_pt_lep1_stack_2->SetBinError(18,1.840268);
   Zee_bjet_pt_lep1_stack_2->SetBinError(19,2.006841);
   Zee_bjet_pt_lep1_stack_2->SetBinError(20,1.521912);
   Zee_bjet_pt_lep1_stack_2->SetBinError(21,1.155282);
   Zee_bjet_pt_lep1_stack_2->SetBinError(22,1.334142);
   Zee_bjet_pt_lep1_stack_2->SetBinError(23,1.230664);
   Zee_bjet_pt_lep1_stack_2->SetBinError(24,0.9901734);
   Zee_bjet_pt_lep1_stack_2->SetBinError(25,0.8959791);
   Zee_bjet_pt_lep1_stack_2->SetBinError(26,0.8953674);
   Zee_bjet_pt_lep1_stack_2->SetBinError(27,0.5970136);
   Zee_bjet_pt_lep1_stack_2->SetBinError(28,1.118136);
   Zee_bjet_pt_lep1_stack_2->SetBinError(29,0.6672762);
   Zee_bjet_pt_lep1_stack_2->SetBinError(30,0.4215029);
   Zee_bjet_pt_lep1_stack_2->SetBinError(31,0.6680968);
   Zee_bjet_pt_lep1_stack_2->SetBinError(32,0.5172938);
   Zee_bjet_pt_lep1_stack_2->SetBinError(33,0.4215029);
   Zee_bjet_pt_lep1_stack_2->SetBinError(34,0.5970136);
   Zee_bjet_pt_lep1_stack_2->SetBinError(35,0.4228008);
   Zee_bjet_pt_lep1_stack_2->SetBinError(36,0.5172938);
   Zee_bjet_pt_lep1_stack_2->SetBinError(38,0.4215029);
   Zee_bjet_pt_lep1_stack_2->SetBinError(39,0.2980476);
   Zee_bjet_pt_lep1_stack_2->SetBinError(40,0.5970136);
   Zee_bjet_pt_lep1_stack_2->SetBinError(41,0.8959791);
   Zee_bjet_pt_lep1_stack_2->SetEntries(3343);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_3 = new TH1D("Zee_bjet_pt_lep1_stack_3","",40,0,200);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(8,5102.976);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(9,3728.109);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(10,2458.013);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(11,1412.452);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(12,738.6501);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(13,377.6015);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(14,197.272);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(15,93.67011);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(16,52.96937);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(17,29.60053);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(18,22.58988);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(19,10.51598);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(20,7.400133);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(21,7.010653);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(22,3.894807);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(23,3.700067);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(24,3.115846);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(25,1.168442);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(26,1.363182);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(27,0.3894807);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(29,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(30,0.584221);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(32,0.3894807);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(33,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(36,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(37,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinError(8,31.52389);
   Zee_bjet_pt_lep1_stack_3->SetBinError(9,26.94463);
   Zee_bjet_pt_lep1_stack_3->SetBinError(10,21.87863);
   Zee_bjet_pt_lep1_stack_3->SetBinError(11,16.58497);
   Zee_bjet_pt_lep1_stack_3->SetBinError(12,11.99354);
   Zee_bjet_pt_lep1_stack_3->SetBinError(13,8.575212);
   Zee_bjet_pt_lep1_stack_3->SetBinError(14,6.19813);
   Zee_bjet_pt_lep1_stack_3->SetBinError(15,4.270989);
   Zee_bjet_pt_lep1_stack_3->SetBinError(16,3.21174);
   Zee_bjet_pt_lep1_stack_3->SetBinError(17,2.40092);
   Zee_bjet_pt_lep1_stack_3->SetBinError(18,2.097418);
   Zee_bjet_pt_lep1_stack_3->SetBinError(19,1.431043);
   Zee_bjet_pt_lep1_stack_3->SetBinError(20,1.20046);
   Zee_bjet_pt_lep1_stack_3->SetBinError(21,1.168442);
   Zee_bjet_pt_lep1_stack_3->SetBinError(22,0.8709053);
   Zee_bjet_pt_lep1_stack_3->SetBinError(23,0.8488535);
   Zee_bjet_pt_lep1_stack_3->SetBinError(24,0.7789614);
   Zee_bjet_pt_lep1_stack_3->SetBinError(25,0.4770145);
   Zee_bjet_pt_lep1_stack_3->SetBinError(26,0.5152345);
   Zee_bjet_pt_lep1_stack_3->SetBinError(27,0.2754044);
   Zee_bjet_pt_lep1_stack_3->SetBinError(29,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinError(30,0.3373002);
   Zee_bjet_pt_lep1_stack_3->SetBinError(32,0.2754044);
   Zee_bjet_pt_lep1_stack_3->SetBinError(33,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinError(36,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetBinError(37,0.1947403);
   Zee_bjet_pt_lep1_stack_3->SetEntries(73196);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_4 = new TH1D("Zee_bjet_pt_lep1_stack_4","",40,0,200);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(8,29.90058);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(9,25.32711);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(10,18.17682);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(11,13.24516);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(12,10.32118);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(13,8.07762);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(14,6.338297);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(15,5.080027);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(16,4.006643);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(17,3.29202);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(18,2.588408);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(19,2.215158);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(20,1.822782);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(21,1.486625);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(22,1.266964);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(23,1.017165);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(24,0.8774855);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(25,0.730272);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(26,0.5992867);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(27,0.5308961);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(28,0.468881);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(29,0.4074454);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(30,0.3320999);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(31,0.3025412);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(32,0.2758805);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(33,0.2457423);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(34,0.1866251);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(35,0.1866251);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(36,0.1553277);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(37,0.1182345);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(38,0.114757);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(39,0.09041463);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(40,0.09273295);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(41,0.5088721);
   Zee_bjet_pt_lep1_stack_4->SetBinError(8,0.1316427);
   Zee_bjet_pt_lep1_stack_4->SetBinError(9,0.1211574);
   Zee_bjet_pt_lep1_stack_4->SetBinError(10,0.1026398);
   Zee_bjet_pt_lep1_stack_4->SetBinError(11,0.08761646);
   Zee_bjet_pt_lep1_stack_4->SetBinError(12,0.07734312);
   Zee_bjet_pt_lep1_stack_4->SetBinError(13,0.06842247);
   Zee_bjet_pt_lep1_stack_4->SetBinError(14,0.06060987);
   Zee_bjet_pt_lep1_stack_4->SetBinError(15,0.05426128);
   Zee_bjet_pt_lep1_stack_4->SetBinError(16,0.04818894);
   Zee_bjet_pt_lep1_stack_4->SetBinError(17,0.04368057);
   Zee_bjet_pt_lep1_stack_4->SetBinError(18,0.03873231);
   Zee_bjet_pt_lep1_stack_4->SetBinError(19,0.03583104);
   Zee_bjet_pt_lep1_stack_4->SetBinError(20,0.03250307);
   Zee_bjet_pt_lep1_stack_4->SetBinError(21,0.02935336);
   Zee_bjet_pt_lep1_stack_4->SetBinError(22,0.02709812);
   Zee_bjet_pt_lep1_stack_4->SetBinError(23,0.02428022);
   Zee_bjet_pt_lep1_stack_4->SetBinError(24,0.02255158);
   Zee_bjet_pt_lep1_stack_4->SetBinError(25,0.02057308);
   Zee_bjet_pt_lep1_stack_4->SetBinError(26,0.01863693);
   Zee_bjet_pt_lep1_stack_4->SetBinError(27,0.0175413);
   Zee_bjet_pt_lep1_stack_4->SetBinError(28,0.01648498);
   Zee_bjet_pt_lep1_stack_4->SetBinError(29,0.01536709);
   Zee_bjet_pt_lep1_stack_4->SetBinError(30,0.01387367);
   Zee_bjet_pt_lep1_stack_4->SetBinError(31,0.01324187);
   Zee_bjet_pt_lep1_stack_4->SetBinError(32,0.01264496);
   Zee_bjet_pt_lep1_stack_4->SetBinError(33,0.0119343);
   Zee_bjet_pt_lep1_stack_4->SetBinError(34,0.01040021);
   Zee_bjet_pt_lep1_stack_4->SetBinError(35,0.01040021);
   Zee_bjet_pt_lep1_stack_4->SetBinError(36,0.009488149);
   Zee_bjet_pt_lep1_stack_4->SetBinError(37,0.008278072);
   Zee_bjet_pt_lep1_stack_4->SetBinError(38,0.008155427);
   Zee_bjet_pt_lep1_stack_4->SetBinError(39,0.007238964);
   Zee_bjet_pt_lep1_stack_4->SetBinError(40,0.007331183);
   Zee_bjet_pt_lep1_stack_4->SetBinError(41,0.0171736);
   Zee_bjet_pt_lep1_stack_4->SetEntries(242221);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_4,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_5 = new TH1D("Zee_bjet_pt_lep1_stack_5","",40,0,200);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(8,111161.3);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(9,82337.21);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(10,42203.05);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(11,20756.76);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(12,12091.99);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(13,7374.522);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(14,4990.94);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(15,3528.496);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(16,2547.626);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(17,1847.909);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(18,1354.207);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(19,1036.139);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(20,783.4302);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(21,637.5598);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(22,488.4425);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(23,432.5841);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(24,327.741);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(25,250.2093);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(26,203.8838);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(27,172.7697);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(28,136.601);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(29,127.3719);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(30,102.0399);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(31,87.58046);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(32,65.05154);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(33,59.78518);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(34,56.01836);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(35,46.75327);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(36,34.52514);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(37,27.25942);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(38,30.25847);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(39,26.02782);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(40,23.3327);
   Zee_bjet_pt_lep1_stack_5->SetBinContent(41,114.304);
   Zee_bjet_pt_lep1_stack_5->SetBinError(8,284.287);
   Zee_bjet_pt_lep1_stack_5->SetBinError(9,244.8251);
   Zee_bjet_pt_lep1_stack_5->SetBinError(10,166.4372);
   Zee_bjet_pt_lep1_stack_5->SetBinError(11,111.2001);
   Zee_bjet_pt_lep1_stack_5->SetBinError(12,83.08669);
   Zee_bjet_pt_lep1_stack_5->SetBinError(13,64.04072);
   Zee_bjet_pt_lep1_stack_5->SetBinError(14,52.22229);
   Zee_bjet_pt_lep1_stack_5->SetBinError(15,43.67707);
   Zee_bjet_pt_lep1_stack_5->SetBinError(16,37.00922);
   Zee_bjet_pt_lep1_stack_5->SetBinError(17,31.36118);
   Zee_bjet_pt_lep1_stack_5->SetBinError(18,26.69612);
   Zee_bjet_pt_lep1_stack_5->SetBinError(19,23.30682);
   Zee_bjet_pt_lep1_stack_5->SetBinError(20,20.33721);
   Zee_bjet_pt_lep1_stack_5->SetBinError(21,18.25045);
   Zee_bjet_pt_lep1_stack_5->SetBinError(22,15.93149);
   Zee_bjet_pt_lep1_stack_5->SetBinError(23,14.98173);
   Zee_bjet_pt_lep1_stack_5->SetBinError(24,13.06167);
   Zee_bjet_pt_lep1_stack_5->SetBinError(25,11.32945);
   Zee_bjet_pt_lep1_stack_5->SetBinError(26,10.2065);
   Zee_bjet_pt_lep1_stack_5->SetBinError(27,9.490013);
   Zee_bjet_pt_lep1_stack_5->SetBinError(28,8.362095);
   Zee_bjet_pt_lep1_stack_5->SetBinError(29,8.094273);
   Zee_bjet_pt_lep1_stack_5->SetBinError(30,7.199075);
   Zee_bjet_pt_lep1_stack_5->SetBinError(31,6.708999);
   Zee_bjet_pt_lep1_stack_5->SetBinError(32,5.773936);
   Zee_bjet_pt_lep1_stack_5->SetBinError(33,5.522707);
   Zee_bjet_pt_lep1_stack_5->SetBinError(34,5.330269);
   Zee_bjet_pt_lep1_stack_5->SetBinError(35,4.855407);
   Zee_bjet_pt_lep1_stack_5->SetBinError(36,4.203396);
   Zee_bjet_pt_lep1_stack_5->SetBinError(37,3.719021);
   Zee_bjet_pt_lep1_stack_5->SetBinError(38,3.915376);
   Zee_bjet_pt_lep1_stack_5->SetBinError(39,3.663498);
   Zee_bjet_pt_lep1_stack_5->SetBinError(40,3.562472);
   Zee_bjet_pt_lep1_stack_5->SetBinError(41,7.626436);
   Zee_bjet_pt_lep1_stack_5->SetEntries(491873);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_pt_lep1__169 = new TH1D("Zee_bjet_pt_lep1__169","",40,0,200);
   Zee_bjet_pt_lep1__169->SetBinContent(8,40754);
   Zee_bjet_pt_lep1__169->SetBinContent(9,30793);
   Zee_bjet_pt_lep1__169->SetBinContent(10,15799);
   Zee_bjet_pt_lep1__169->SetBinContent(11,7842);
   Zee_bjet_pt_lep1__169->SetBinContent(12,4664);
   Zee_bjet_pt_lep1__169->SetBinContent(13,2799);
   Zee_bjet_pt_lep1__169->SetBinContent(14,1871);
   Zee_bjet_pt_lep1__169->SetBinContent(15,1246);
   Zee_bjet_pt_lep1__169->SetBinContent(16,945);
   Zee_bjet_pt_lep1__169->SetBinContent(17,732);
   Zee_bjet_pt_lep1__169->SetBinContent(18,529);
   Zee_bjet_pt_lep1__169->SetBinContent(19,335);
   Zee_bjet_pt_lep1__169->SetBinContent(20,322);
   Zee_bjet_pt_lep1__169->SetBinContent(21,226);
   Zee_bjet_pt_lep1__169->SetBinContent(22,176);
   Zee_bjet_pt_lep1__169->SetBinContent(23,140);
   Zee_bjet_pt_lep1__169->SetBinContent(24,116);
   Zee_bjet_pt_lep1__169->SetBinContent(25,81);
   Zee_bjet_pt_lep1__169->SetBinContent(26,99);
   Zee_bjet_pt_lep1__169->SetBinContent(27,78);
   Zee_bjet_pt_lep1__169->SetBinContent(28,50);
   Zee_bjet_pt_lep1__169->SetBinContent(29,44);
   Zee_bjet_pt_lep1__169->SetBinContent(30,40);
   Zee_bjet_pt_lep1__169->SetBinContent(31,23);
   Zee_bjet_pt_lep1__169->SetBinContent(32,31);
   Zee_bjet_pt_lep1__169->SetBinContent(33,19);
   Zee_bjet_pt_lep1__169->SetBinContent(34,25);
   Zee_bjet_pt_lep1__169->SetBinContent(35,20);
   Zee_bjet_pt_lep1__169->SetBinContent(36,20);
   Zee_bjet_pt_lep1__169->SetBinContent(37,13);
   Zee_bjet_pt_lep1__169->SetBinContent(38,11);
   Zee_bjet_pt_lep1__169->SetBinContent(39,13);
   Zee_bjet_pt_lep1__169->SetBinContent(40,8);
   Zee_bjet_pt_lep1__169->SetBinContent(41,39);
   Zee_bjet_pt_lep1__169->SetBinError(8,201.8762);
   Zee_bjet_pt_lep1__169->SetBinError(9,175.4793);
   Zee_bjet_pt_lep1__169->SetBinError(10,125.6941);
   Zee_bjet_pt_lep1__169->SetBinError(11,88.55507);
   Zee_bjet_pt_lep1__169->SetBinError(12,68.29348);
   Zee_bjet_pt_lep1__169->SetBinError(13,52.90558);
   Zee_bjet_pt_lep1__169->SetBinError(14,43.25506);
   Zee_bjet_pt_lep1__169->SetBinError(15,35.29873);
   Zee_bjet_pt_lep1__169->SetBinError(16,30.74085);
   Zee_bjet_pt_lep1__169->SetBinError(17,27.0555);
   Zee_bjet_pt_lep1__169->SetBinError(18,23);
   Zee_bjet_pt_lep1__169->SetBinError(19,18.30301);
   Zee_bjet_pt_lep1__169->SetBinError(20,17.94436);
   Zee_bjet_pt_lep1__169->SetBinError(21,15.0333);
   Zee_bjet_pt_lep1__169->SetBinError(22,13.2665);
   Zee_bjet_pt_lep1__169->SetBinError(23,11.83216);
   Zee_bjet_pt_lep1__169->SetBinError(24,10.77033);
   Zee_bjet_pt_lep1__169->SetBinError(25,9);
   Zee_bjet_pt_lep1__169->SetBinError(26,9.949874);
   Zee_bjet_pt_lep1__169->SetBinError(27,8.831761);
   Zee_bjet_pt_lep1__169->SetBinError(28,7.071068);
   Zee_bjet_pt_lep1__169->SetBinError(29,6.63325);
   Zee_bjet_pt_lep1__169->SetBinError(30,6.324555);
   Zee_bjet_pt_lep1__169->SetBinError(31,4.795832);
   Zee_bjet_pt_lep1__169->SetBinError(32,5.567764);
   Zee_bjet_pt_lep1__169->SetBinError(33,4.358899);
   Zee_bjet_pt_lep1__169->SetBinError(34,5);
   Zee_bjet_pt_lep1__169->SetBinError(35,4.472136);
   Zee_bjet_pt_lep1__169->SetBinError(36,4.472136);
   Zee_bjet_pt_lep1__169->SetBinError(37,3.605551);
   Zee_bjet_pt_lep1__169->SetBinError(38,3.316625);
   Zee_bjet_pt_lep1__169->SetBinError(39,3.605551);
   Zee_bjet_pt_lep1__169->SetBinError(40,2.828427);
   Zee_bjet_pt_lep1__169->SetBinError(41,6.244998);
   Zee_bjet_pt_lep1__169->SetEntries(109903);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1__169->SetLineColor(ci);
   Zee_bjet_pt_lep1__169->SetLineWidth(2);
   Zee_bjet_pt_lep1__169->SetMarkerStyle(20);
   Zee_bjet_pt_lep1__169->SetMarkerSize(1.2);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_pt_lep1_fx1169[40] = {
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
   Double_t Graph_from_Zee_bjet_pt_lep1_fy1169[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   117016.5,
   86660.11,
   45022.51,
   22394.24,
   12964.9,
   7832.528,
   5241.796,
   3660.553,
   2626.881,
   1897.051,
   1390.218,
   1060.802,
   799.9526,
   650.4617,
   499.4389,
   441.9555,
   334.493,
   254.2706,
   208.8326,
   174.9055,
   140.2028,
   129.4875,
   103.5523,
   89.02665,
   66.43775,
   61.01823,
   57.22388,
   47.3627,
   35.59605,
   27.57239,
   30.96932,
   26.41628,
   24.44433};
   Double_t Graph_from_Zee_bjet_pt_lep1_fex1169[40] = {
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
   Double_t Graph_from_Zee_bjet_pt_lep1_fey1169[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   286.3578,
   246.6085,
   168.1355,
   112.6774,
   84.1433,
   64.77236,
   52.72264,
   44.00118,
   37.24859,
   31.538,
   26.84597,
   23.44013,
   20.43224,
   18.32554,
   16.0134,
   15.05768,
   13.12231,
   11.37485,
   10.2645,
   9.514806,
   8.436536,
   8.126455,
   7.219301,
   6.742195,
   5.803614,
   5.545685,
   5.363609,
   4.873791,
   4.239593,
   3.724126,
   3.938008,
   3.675609,
   3.612158};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_bjet_pt_lep1_fx1169,Graph_from_Zee_bjet_pt_lep1_fy1169,Graph_from_Zee_bjet_pt_lep1_fex1169,Graph_from_Zee_bjet_pt_lep1_fey1169);
   gre->SetName("Graph_from_Zee_bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_pt_lep11169 = new TH1F("Graph_Graph_from_Zee_bjet_pt_lep11169","",100,0,220);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetMaximum(129033.2);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_pt_lep11169);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_pt_lep1","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__170 = new TH1D("data_mc_ratio__170","",40,0,200);
   data_mc_ratio__170->SetBinContent(8,0.3482755);
   data_mc_ratio__170->SetBinContent(9,0.3553307);
   data_mc_ratio__170->SetBinContent(10,0.3509134);
   data_mc_ratio__170->SetBinContent(11,0.3501793);
   data_mc_ratio__170->SetBinContent(12,0.3597405);
   data_mc_ratio__170->SetBinContent(13,0.3573559);
   data_mc_ratio__170->SetBinContent(14,0.3569387);
   data_mc_ratio__170->SetBinContent(15,0.3403857);
   data_mc_ratio__170->SetBinContent(16,0.3597422);
   data_mc_ratio__170->SetBinContent(17,0.385862);
   data_mc_ratio__170->SetBinContent(18,0.3805159);
   data_mc_ratio__170->SetBinContent(19,0.3157987);
   data_mc_ratio__170->SetBinContent(20,0.4025239);
   data_mc_ratio__170->SetBinContent(21,0.3474455);
   data_mc_ratio__170->SetBinContent(22,0.3523955);
   data_mc_ratio__170->SetBinContent(23,0.316774);
   data_mc_ratio__170->SetBinContent(24,0.3467935);
   data_mc_ratio__170->SetBinContent(25,0.3185583);
   data_mc_ratio__170->SetBinContent(26,0.4740639);
   data_mc_ratio__170->SetBinContent(27,0.4459552);
   data_mc_ratio__170->SetBinContent(28,0.3566263);
   data_mc_ratio__170->SetBinContent(29,0.339801);
   data_mc_ratio__170->SetBinContent(30,0.3862783);
   data_mc_ratio__170->SetBinContent(31,0.2583496);
   data_mc_ratio__170->SetBinContent(32,0.4666022);
   data_mc_ratio__170->SetBinContent(33,0.3113824);
   data_mc_ratio__170->SetBinContent(34,0.4368805);
   data_mc_ratio__170->SetBinContent(35,0.4222733);
   data_mc_ratio__170->SetBinContent(36,0.56186);
   data_mc_ratio__170->SetBinContent(37,0.4714861);
   data_mc_ratio__170->SetBinContent(38,0.3551902);
   data_mc_ratio__170->SetBinContent(39,0.4921208);
   data_mc_ratio__170->SetBinContent(40,0.3272743);
   data_mc_ratio__170->SetBinContent(41,0.3334033);
   data_mc_ratio__170->SetBinError(8,0.001725194);
   data_mc_ratio__170->SetBinError(9,0.002024915);
   data_mc_ratio__170->SetBinError(10,0.002791805);
   data_mc_ratio__170->SetBinError(11,0.003954368);
   data_mc_ratio__170->SetBinError(12,0.005267567);
   data_mc_ratio__170->SetBinError(13,0.006754598);
   data_mc_ratio__170->SetBinError(14,0.008251954);
   data_mc_ratio__170->SetBinError(15,0.009643003);
   data_mc_ratio__170->SetBinError(16,0.01170241);
   data_mc_ratio__170->SetBinError(17,0.01426187);
   data_mc_ratio__170->SetBinError(18,0.01654417);
   data_mc_ratio__170->SetBinError(19,0.01725392);
   data_mc_ratio__170->SetBinError(20,0.02243178);
   data_mc_ratio__170->SetBinError(21,0.02311173);
   data_mc_ratio__170->SetBinError(22,0.02656281);
   data_mc_ratio__170->SetBinError(23,0.02677229);
   data_mc_ratio__170->SetBinError(24,0.03219897);
   data_mc_ratio__170->SetBinError(25,0.03539537);
   data_mc_ratio__170->SetBinError(26,0.04764521);
   data_mc_ratio__170->SetBinError(27,0.05049448);
   data_mc_ratio__170->SetBinError(28,0.05043457);
   data_mc_ratio__170->SetBinError(29,0.05122693);
   data_mc_ratio__170->SetBinError(30,0.06107596);
   data_mc_ratio__170->SetBinError(31,0.05386962);
   data_mc_ratio__170->SetBinError(32,0.08380423);
   data_mc_ratio__170->SetBinError(33,0.07143601);
   data_mc_ratio__170->SetBinError(34,0.08737611);
   data_mc_ratio__170->SetBinError(35,0.09442317);
   data_mc_ratio__170->SetBinError(36,0.1256357);
   data_mc_ratio__170->SetBinError(37,0.1307667);
   data_mc_ratio__170->SetBinError(38,0.1070939);
   data_mc_ratio__170->SetBinError(39,0.1364897);
   data_mc_ratio__170->SetBinError(40,0.1157089);
   data_mc_ratio__170->SetBinError(41,0.05769935);
   data_mc_ratio__170->SetMinimum(0.4);
   data_mc_ratio__170->SetMaximum(1.6);
   data_mc_ratio__170->SetEntries(997.511);
   data_mc_ratio__170->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__170->SetLineColor(ci);
   data_mc_ratio__170->SetLineWidth(2);
   data_mc_ratio__170->SetMarkerStyle(20);
   data_mc_ratio__170->SetMarkerSize(1.2);
   data_mc_ratio__170->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__170->GetXaxis()->SetRange(1,40);
   data_mc_ratio__170->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__170->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__170->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__170->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__170->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__170->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1170[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002447156,
   0.002845698,
   0.003734477,
   0.005031535,
   0.006490085,
   0.008269663,
   0.01005813,
   0.01202036,
   0.01417978,
   0.01662475,
   0.01931062,
   0.0220966,
   0.02554182,
   0.02817313,
   0.03206279,
   0.03407057,
   0.03923043,
   0.04473523,
   0.04915183,
   0.0543997,
   0.0601738,
   0.06275859,
   0.06971648,
   0.07573232,
   0.08735418,
   0.09088571,
   0.09373025,
   0.1029036,
   0.1191029,
   0.1350672,
   0.1271583,
   0.1391418,
   0.1477708};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1170,Graph_from_mc_statistical_error_fy1170,Graph_from_mc_statistical_error_fex1170,Graph_from_mc_statistical_error_fey1170);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1170 = new TH1F("Graph_Graph_from_mc_statistical_error1170","",100,0,220);
   Graph_Graph_from_mc_statistical_error1170->SetMinimum(0.8226751);
   Graph_Graph_from_mc_statistical_error1170->SetMaximum(1.177325);
   Graph_Graph_from_mc_statistical_error1170->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1170->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1170);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_16_amcnlo->Modified();
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetSelected(pt_lep1_Z_bjet_Zee_16_amcnlo);
}
