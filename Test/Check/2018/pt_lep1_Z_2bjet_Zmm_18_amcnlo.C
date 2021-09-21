void pt_lep1_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_18_amcnlo/pt_lep1_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_18_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_18_amcnlo", "pt_lep1_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-23.85809,210.4839,23844.23);
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
   st->SetMaximum(20435.64);
   
   TH1F *st_stack_263 = new TH1F("st_stack_263","",40,0,200);
   st_stack_263->SetMinimum(0.01);
   st_stack_263->SetMaximum(21457.42);
   st_stack_263->SetDirectory(0);
   st_stack_263->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_263->SetLineColor(ci);
   st_stack_263->GetXaxis()->SetRange(1,40);
   st_stack_263->GetXaxis()->SetLabelFont(42);
   st_stack_263->GetXaxis()->SetLabelSize(0.035);
   st_stack_263->GetXaxis()->SetTitleSize(0.035);
   st_stack_263->GetXaxis()->SetTitleFont(42);
   st_stack_263->GetYaxis()->SetTitle("Events/5.0");
   st_stack_263->GetYaxis()->SetLabelFont(42);
   st_stack_263->GetYaxis()->SetLabelSize(0.05);
   st_stack_263->GetYaxis()->SetTitleSize(0.057);
   st_stack_263->GetYaxis()->SetTitleOffset(1.2);
   st_stack_263->GetYaxis()->SetTitleFont(42);
   st_stack_263->GetZaxis()->SetLabelFont(42);
   st_stack_263->GetZaxis()->SetLabelSize(0.035);
   st_stack_263->GetZaxis()->SetTitleSize(0.035);
   st_stack_263->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_263);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,34.89445);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,27.58803);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,21.90279);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,11.70864);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,6.375315);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,3.314349);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,1.846036);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,0.9106376);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(16,0.5416006);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.3686639);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(19,0.2380547);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,3.01858);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,2.699018);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,2.420515);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,1.776286);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,1.329244);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.9305222);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.685565);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.5257569);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(16,0.3857592);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.310452);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(19,0.2380547);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,86.42443);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,60.00241);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,34.12578);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,25.15227);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,9.970574);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,6.979402);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,7.477931);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,6.480873);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,5.615464);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,4.712588);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,1.994115);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,2.219945);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(20,2.991172);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(21,1.495586);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,2.219945);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(24,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(25,0.9970574);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(26,1.222887);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(27,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(29,0.9970574);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(34,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,6.601197);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,5.513952);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,4.144426);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,3.564086);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,2.229488);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,1.865324);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,1.930793);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,1.797471);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,1.824316);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,1.585226);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.9970574);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,1.12707);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(20,1.221141);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(21,0.8634771);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,1.12707);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(24,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(25,0.7050261);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(26,0.8793327);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(27,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(29,0.7050261);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(34,0.4985287);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,1458.537);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,1129.439);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,771.6288);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,457.1262);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,245.249);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,128.5346);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,66.38084);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,31.78225);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,15.61993);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,7.392476);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,4.493578);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,2.137068);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,1.127567);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,0.8987156);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(22,0.4859315);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(23,0.5778977);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(24,0.1651136);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(25,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(27,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(29,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(36,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,10.9606);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,9.648963);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,7.975995);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,6.138827);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,4.496757);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,3.254662);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,2.33848);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,1.617914);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,1.133452);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,0.7794525);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.606246);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.4192151);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.3017011);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.2711214);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(22,0.1985666);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(23,0.2184248);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(24,0.116753);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(25,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(27,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(29,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(36,0.08255682);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_4 = new TH1D("Zmm_2bjet_pt_lep1_stack_4","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(8,19.94635);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(9,16.48803);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(10,11.53722);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(11,8.486438);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(12,6.458237);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(13,5.163742);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(14,4.046231);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(15,3.248784);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(16,2.61069);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(17,2.038373);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(18,1.780694);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(19,1.407738);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(20,1.213801);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(21,0.9805345);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(22,0.8123654);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(23,0.6984444);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(24,0.5980854);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(25,0.4448345);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(26,0.3966893);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(27,0.3560032);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(28,0.2956522);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(29,0.2325888);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1912246);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(31,0.16071);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(32,0.140367);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(33,0.1376546);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(34,0.09222178);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(35,0.0990028);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(36,0.08815317);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(37,0.07052254);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(38,0.06984444);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(39,0.05967292);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(40,0.0515357);
   Zmm_2bjet_pt_lep1_stack_4->SetBinContent(41,0.2488632);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(8,0.1162998);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(9,0.1057382);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(10,0.08845);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(11,0.07585951);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(12,0.06617658);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(13,0.05917381);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(14,0.05238086);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(15,0.04693617);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(16,0.04207508);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(17,0.03717826);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(18,0.03474897);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(19,0.03089643);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(20,0.02868938);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(21,0.02578569);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(22,0.02347054);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(23,0.02176272);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(24,0.02013858);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(25,0.01736787);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(26,0.01640108);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(27,0.01553725);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(28,0.01415917);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(29,0.01255861);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(30,0.01138726);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(31,0.01043924);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(32,0.009756179);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(33,0.009661457);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(34,0.007907953);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(35,0.00819353);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(36,0.007731545);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(37,0.006915304);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(38,0.006881977);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(39,0.006361154);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(40,0.00591155);
   Zmm_2bjet_pt_lep1_stack_4->SetBinError(41,0.01299055);
   Zmm_2bjet_pt_lep1_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_4,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_5 = new TH1D("Zmm_2bjet_pt_lep1_stack_5","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(8,9639.798);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(9,7664.973);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(10,4447.206);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(11,2533.871);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(12,1658.166);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(13,1080.476);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(14,729.0027);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(15,551.3522);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(16,365.4143);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(17,266.5284);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(18,216.9801);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(19,157.5292);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(20,103.3807);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(21,93.26737);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(22,64.05109);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(23,56.3959);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(24,41.68239);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(25,35.9585);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(26,25.84518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(27,25.84518);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(28,13.48444);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(29,15.73185);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(30,5.618516);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(31,10.11333);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(32,6.74222);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(33,11.23703);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(34,3.37111);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(35,5.618516);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(36,4.494813);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(37,2.247407);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(38,4.494813);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(39,4.494813);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(40,1.123703);
   Zmm_2bjet_pt_lep1_stack_5->SetBinContent(41,15.73185);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(8,106.6782);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(9,95.04096);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(10,71.50808);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(11,53.56661);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(12,43.25571);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(13,34.89458);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(14,28.63946);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(15,24.90909);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(16,20.27008);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(17,17.31352);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(18,15.61892);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(19,13.31447);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(20,10.77818);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(21,10.23742);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(22,8.483774);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(23,7.976921);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(24,6.853331);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(25,6.356626);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(26,5.389092);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(27,5.389092);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(28,3.892622);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(29,4.204513);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(30,2.512677);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(31,3.37111);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(32,2.7525);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(33,3.553462);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(34,1.946311);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(35,2.512677);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(36,2.247407);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(37,1.589156);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(38,2.247407);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(39,2.247407);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(40,1.123703);
   Zmm_2bjet_pt_lep1_stack_5->SetBinError(41,4.204513);
   Zmm_2bjet_pt_lep1_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1__525 = new TH1D("Zmm_2bjet_pt_lep1__525","",40,0,200);
   Zmm_2bjet_pt_lep1__525->SetBinContent(8,4657);
   Zmm_2bjet_pt_lep1__525->SetBinContent(9,3729);
   Zmm_2bjet_pt_lep1__525->SetBinContent(10,2193);
   Zmm_2bjet_pt_lep1__525->SetBinContent(11,1338);
   Zmm_2bjet_pt_lep1__525->SetBinContent(12,827);
   Zmm_2bjet_pt_lep1__525->SetBinContent(13,541);
   Zmm_2bjet_pt_lep1__525->SetBinContent(14,377);
   Zmm_2bjet_pt_lep1__525->SetBinContent(15,211);
   Zmm_2bjet_pt_lep1__525->SetBinContent(16,165);
   Zmm_2bjet_pt_lep1__525->SetBinContent(17,115);
   Zmm_2bjet_pt_lep1__525->SetBinContent(18,102);
   Zmm_2bjet_pt_lep1__525->SetBinContent(19,72);
   Zmm_2bjet_pt_lep1__525->SetBinContent(20,54);
   Zmm_2bjet_pt_lep1__525->SetBinContent(21,35);
   Zmm_2bjet_pt_lep1__525->SetBinContent(22,36);
   Zmm_2bjet_pt_lep1__525->SetBinContent(23,43);
   Zmm_2bjet_pt_lep1__525->SetBinContent(24,17);
   Zmm_2bjet_pt_lep1__525->SetBinContent(25,18);
   Zmm_2bjet_pt_lep1__525->SetBinContent(26,17);
   Zmm_2bjet_pt_lep1__525->SetBinContent(27,17);
   Zmm_2bjet_pt_lep1__525->SetBinContent(28,7);
   Zmm_2bjet_pt_lep1__525->SetBinContent(29,7);
   Zmm_2bjet_pt_lep1__525->SetBinContent(30,4);
   Zmm_2bjet_pt_lep1__525->SetBinContent(31,9);
   Zmm_2bjet_pt_lep1__525->SetBinContent(32,4);
   Zmm_2bjet_pt_lep1__525->SetBinContent(33,4);
   Zmm_2bjet_pt_lep1__525->SetBinContent(34,4);
   Zmm_2bjet_pt_lep1__525->SetBinContent(36,2);
   Zmm_2bjet_pt_lep1__525->SetBinContent(38,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(39,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(40,2);
   Zmm_2bjet_pt_lep1__525->SetBinContent(41,10);
   Zmm_2bjet_pt_lep1__525->SetBinError(8,68.24222);
   Zmm_2bjet_pt_lep1__525->SetBinError(9,61.06554);
   Zmm_2bjet_pt_lep1__525->SetBinError(10,46.82948);
   Zmm_2bjet_pt_lep1__525->SetBinError(11,36.57868);
   Zmm_2bjet_pt_lep1__525->SetBinError(12,28.75761);
   Zmm_2bjet_pt_lep1__525->SetBinError(13,23.25941);
   Zmm_2bjet_pt_lep1__525->SetBinError(14,19.41649);
   Zmm_2bjet_pt_lep1__525->SetBinError(15,14.52584);
   Zmm_2bjet_pt_lep1__525->SetBinError(16,12.84523);
   Zmm_2bjet_pt_lep1__525->SetBinError(17,10.72381);
   Zmm_2bjet_pt_lep1__525->SetBinError(18,10.0995);
   Zmm_2bjet_pt_lep1__525->SetBinError(19,8.485281);
   Zmm_2bjet_pt_lep1__525->SetBinError(20,7.348469);
   Zmm_2bjet_pt_lep1__525->SetBinError(21,5.91608);
   Zmm_2bjet_pt_lep1__525->SetBinError(22,6);
   Zmm_2bjet_pt_lep1__525->SetBinError(23,6.557439);
   Zmm_2bjet_pt_lep1__525->SetBinError(24,4.123106);
   Zmm_2bjet_pt_lep1__525->SetBinError(25,4.242641);
   Zmm_2bjet_pt_lep1__525->SetBinError(26,4.123106);
   Zmm_2bjet_pt_lep1__525->SetBinError(27,4.123106);
   Zmm_2bjet_pt_lep1__525->SetBinError(28,2.645751);
   Zmm_2bjet_pt_lep1__525->SetBinError(29,2.645751);
   Zmm_2bjet_pt_lep1__525->SetBinError(30,2);
   Zmm_2bjet_pt_lep1__525->SetBinError(31,3);
   Zmm_2bjet_pt_lep1__525->SetBinError(32,2);
   Zmm_2bjet_pt_lep1__525->SetBinError(33,2);
   Zmm_2bjet_pt_lep1__525->SetBinError(34,2);
   Zmm_2bjet_pt_lep1__525->SetBinError(36,1.414214);
   Zmm_2bjet_pt_lep1__525->SetBinError(38,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(39,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(40,1.414214);
   Zmm_2bjet_pt_lep1__525->SetBinError(41,3.162278);
   Zmm_2bjet_pt_lep1__525->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__525->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__525->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__525->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__525->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fx1525[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fy1525[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   11239.6,
   8898.491,
   5286.4,
   3036.345,
   1926.219,
   1224.468,
   808.7537,
   593.7747,
   389.802,
   280.6719,
   225.6172,
   163.532,
   108.7132,
   96.64221,
   67.56933,
   57.67224,
   42.94412,
   37.48295,
   27.46475,
   26.78226,
   13.78009,
   17.04405,
   5.809741,
   10.27404,
   6.882587,
   11.37469,
   3.96186,
   5.717519,
   4.665523,
   2.317929,
   4.564658,
   4.554486,
   1.175239};
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fex1525[40] = {
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
   Double_t Graph_from_Zmm_2bjet_pt_lep1_fey1525[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   107.4852,
   95.72662,
   72.11147,
   54.06414,
   43.56627,
   35.10802,
   28.80778,
   25.03178,
   20.38724,
   17.40344,
   15.66557,
   13.37082,
   10.85137,
   10.27738,
   8.560647,
   7.979941,
   6.87246,
   6.39616,
   5.460385,
   5.412753,
   3.892648,
   4.264031,
   2.512703,
   3.371126,
   2.752517,
   3.553475,
   2.009159,
   2.51269,
   2.248936,
   1.589171,
   2.247417,
   2.247416,
   1.123719};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_pt_lep1_fx1525,Graph_from_Zmm_2bjet_pt_lep1_fy1525,Graph_from_Zmm_2bjet_pt_lep1_fex1525,Graph_from_Zmm_2bjet_pt_lep1_fey1525);
   gre->SetName("Graph_from_Zmm_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_pt_lep11525 = new TH1F("Graph_Graph_from_Zmm_2bjet_pt_lep11525","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->SetMaximum(12481.79);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_pt_lep11525->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_pt_lep11525);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__526 = new TH1D("data_mc_ratio__526","",40,0,200);
   data_mc_ratio__526->SetBinContent(8,0.4143386);
   data_mc_ratio__526->SetBinContent(9,0.4190598);
   data_mc_ratio__526->SetBinContent(10,0.4148381);
   data_mc_ratio__526->SetBinContent(11,0.4406614);
   data_mc_ratio__526->SetBinContent(12,0.4293385);
   data_mc_ratio__526->SetBinContent(13,0.4418244);
   data_mc_ratio__526->SetBinContent(14,0.4661493);
   data_mc_ratio__526->SetBinContent(15,0.3553536);
   data_mc_ratio__526->SetBinContent(16,0.4232918);
   data_mc_ratio__526->SetBinContent(17,0.4097312);
   data_mc_ratio__526->SetBinContent(18,0.4520933);
   data_mc_ratio__526->SetBinContent(19,0.4402808);
   data_mc_ratio__526->SetBinContent(20,0.4967196);
   data_mc_ratio__526->SetBinContent(21,0.3621606);
   data_mc_ratio__526->SetBinContent(22,0.5327861);
   data_mc_ratio__526->SetBinContent(23,0.7455926);
   data_mc_ratio__526->SetBinContent(24,0.3958633);
   data_mc_ratio__526->SetBinContent(25,0.4802183);
   data_mc_ratio__526->SetBinContent(26,0.6189752);
   data_mc_ratio__526->SetBinContent(27,0.6347484);
   data_mc_ratio__526->SetBinContent(28,0.5079792);
   data_mc_ratio__526->SetBinContent(29,0.4107005);
   data_mc_ratio__526->SetBinContent(30,0.6884989);
   data_mc_ratio__526->SetBinContent(31,0.8759943);
   data_mc_ratio__526->SetBinContent(32,0.5811768);
   data_mc_ratio__526->SetBinContent(33,0.351658);
   data_mc_ratio__526->SetBinContent(34,1.009627);
   data_mc_ratio__526->SetBinContent(36,0.4286765);
   data_mc_ratio__526->SetBinContent(38,0.2190745);
   data_mc_ratio__526->SetBinContent(39,0.2195637);
   data_mc_ratio__526->SetBinContent(40,1.701782);
   data_mc_ratio__526->SetBinContent(41,0.6257545);
   data_mc_ratio__526->SetBinError(8,0.006071588);
   data_mc_ratio__526->SetBinError(9,0.00686246);
   data_mc_ratio__526->SetBinError(10,0.008858481);
   data_mc_ratio__526->SetBinError(11,0.01204695);
   data_mc_ratio__526->SetBinError(12,0.01492956);
   data_mc_ratio__526->SetBinError(13,0.01899551);
   data_mc_ratio__526->SetBinError(14,0.02400791);
   data_mc_ratio__526->SetBinError(15,0.02446355);
   data_mc_ratio__526->SetBinError(16,0.03295323);
   data_mc_ratio__526->SetBinError(17,0.03820763);
   data_mc_ratio__526->SetBinError(18,0.04476391);
   data_mc_ratio__526->SetBinError(19,0.05188759);
   data_mc_ratio__526->SetBinError(20,0.06759498);
   data_mc_ratio__526->SetBinError(21,0.06121631);
   data_mc_ratio__526->SetBinError(22,0.08879769);
   data_mc_ratio__526->SetBinError(23,0.1137018);
   data_mc_ratio__526->SetBinError(24,0.09601095);
   data_mc_ratio__526->SetBinError(25,0.1131885);
   data_mc_ratio__526->SetBinError(26,0.1501235);
   data_mc_ratio__526->SetBinError(27,0.1539491);
   data_mc_ratio__526->SetBinError(28,0.1919981);
   data_mc_ratio__526->SetBinError(29,0.1552302);
   data_mc_ratio__526->SetBinError(30,0.3442494);
   data_mc_ratio__526->SetBinError(31,0.2919981);
   data_mc_ratio__526->SetBinError(32,0.2905884);
   data_mc_ratio__526->SetBinError(33,0.175829);
   data_mc_ratio__526->SetBinError(34,0.5048134);
   data_mc_ratio__526->SetBinError(36,0.30312);
   data_mc_ratio__526->SetBinError(38,0.2190745);
   data_mc_ratio__526->SetBinError(39,0.2195637);
   data_mc_ratio__526->SetBinError(40,1.203341);
   data_mc_ratio__526->SetBinError(41,0.257414);
   data_mc_ratio__526->SetMinimum(0.4);
   data_mc_ratio__526->SetMaximum(1.6);
   data_mc_ratio__526->SetEntries(47.10573);
   data_mc_ratio__526->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__526->SetLineColor(ci);
   data_mc_ratio__526->SetLineWidth(2);
   data_mc_ratio__526->SetMarkerStyle(20);
   data_mc_ratio__526->SetMarkerSize(1.2);
   data_mc_ratio__526->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__526->GetXaxis()->SetRange(1,40);
   data_mc_ratio__526->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__526->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__526->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__526->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__526->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__526->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__526->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__526->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__526->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__526->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__526->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__526->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__526->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__526->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1526[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009563081,
   0.01075762,
   0.01364094,
   0.01780566,
   0.0226175,
   0.02867205,
   0.03561996,
   0.04215703,
   0.05230154,
   0.06200636,
   0.06943429,
   0.08176269,
   0.09981647,
   0.1063447,
   0.1266943,
   0.1383671,
   0.1600326,
   0.1706418,
   0.1988143,
   0.2021021,
   0.2824835,
   0.2501771,
   0.4324982,
   0.3281208,
   0.3999248,
   0.312402,
   0.5071252,
   0.4394721,
   0.4820329,
   0.6855997,
   0.4923517,
   0.493451,
   0.956162};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1526,Graph_from_mc_statistical_error_fy1526,Graph_from_mc_statistical_error_fex1526,Graph_from_mc_statistical_error_fey1526);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1526 = new TH1F("Graph_Graph_from_mc_statistical_error1526","",100,0,220);
   Graph_Graph_from_mc_statistical_error1526->SetMinimum(0.03945422);
   Graph_Graph_from_mc_statistical_error1526->SetMaximum(2.147394);
   Graph_Graph_from_mc_statistical_error1526->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1526->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1526->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1526);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_18_amcnlo);
}
