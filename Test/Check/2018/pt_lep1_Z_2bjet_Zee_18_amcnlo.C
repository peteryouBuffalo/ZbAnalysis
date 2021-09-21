void pt_lep1_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_18_amcnlo/pt_lep1_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 21 10:46:16 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_18_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_18_amcnlo", "pt_lep1_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-18.77081,210.4839,18762.03);
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
   st->SetMaximum(16079.96);
   
   TH1F *st_stack_175 = new TH1F("st_stack_175","",40,0,200);
   st_stack_175->SetMinimum(0.01);
   st_stack_175->SetMaximum(16883.95);
   st_stack_175->SetDirectory(0);
   st_stack_175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_175->SetLineColor(ci);
   st_stack_175->GetXaxis()->SetRange(1,40);
   st_stack_175->GetXaxis()->SetLabelFont(42);
   st_stack_175->GetXaxis()->SetLabelSize(0.035);
   st_stack_175->GetXaxis()->SetTitleSize(0.035);
   st_stack_175->GetXaxis()->SetTitleFont(42);
   st_stack_175->GetYaxis()->SetTitle("Events/5.0");
   st_stack_175->GetYaxis()->SetLabelFont(42);
   st_stack_175->GetYaxis()->SetLabelSize(0.05);
   st_stack_175->GetYaxis()->SetTitleSize(0.057);
   st_stack_175->GetYaxis()->SetTitleOffset(1.2);
   st_stack_175->GetYaxis()->SetTitleFont(42);
   st_stack_175->GetZaxis()->SetLabelFont(42);
   st_stack_175->GetZaxis()->SetLabelSize(0.035);
   st_stack_175->GetZaxis()->SetTitleSize(0.035);
   st_stack_175->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_175);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,30.39991);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,22.60939);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,15.36372);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,10.52531);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,6.079089);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(13,2.451694);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,3.422167);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(15,0.8934445);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(16,1.01771);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(17,0.8451465);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(18,0.3035459);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(19,0.2380547);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(21,0.0486711);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,2.845001);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,2.468012);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,2.040906);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,1.676362);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,1.282314);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(13,0.7891732);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.9560653);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(15,0.4605317);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(16,0.5120061);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(17,0.4908668);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(18,0.3035459);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(19,0.2380547);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(21,0.0486711);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(388);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_2 = new TH1D("Zee_2bjet_pt_lep1_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,60.22824);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,44.82072);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,28.8678);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,15.18169);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,10.4691);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,8.202289);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,5.982345);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,5.211117);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,4.486758);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,2.718473);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(18,1.495586);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(19,1.994115);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.9970574);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(22,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.9970574);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(25,1.495586);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(26,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(29,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(30,0.9970574);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(31,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(41,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,5.538938);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,4.761468);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,3.836481);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,2.780664);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,2.284546);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,2.062197);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,1.726954);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,1.661768);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,1.495586);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,1.232404);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(18,0.8634771);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(19,0.9970574);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.7050261);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(22,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.7050261);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(25,0.8634771);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(26,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(29,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(30,0.7050261);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(31,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(41,0.4985287);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(389);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_3 = new TH1D("Zee_2bjet_pt_lep1_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,1157.749);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,884.1604);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,595.8714);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,353.3501);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,195.1349);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,107.7209);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,53.60335);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,27.28654);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,13.68349);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,4.852034);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,3.92509);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(19,1.898807);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(20,2.10884);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(21,0.9906818);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(22,0.6604546);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(23,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(24,0.3114085);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(25,0.3208179);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(26,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(27,0.1651136);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(29,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(30,0.1651136);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(33,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(40,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,9.762804);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,8.531852);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,7.005051);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,5.395515);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,4.009659);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,2.978896);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,2.10119);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,1.497913);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,1.059289);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,0.6318164);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.5668244);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(19,0.3959286);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(20,0.4139396);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(21,0.2859852);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(22,0.2335059);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(23,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(24,0.1559883);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(25,0.1606158);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(26,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(27,0.116753);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(29,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(30,0.116753);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(33,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(40,0.08255682);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(41359);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_4 = new TH1D("Zee_2bjet_pt_lep1_stack_4","",40,0,200);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(8,15.12844);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(9,12.47774);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(10,8.719705);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(11,6.389071);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(12,4.992182);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(13,3.876027);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(14,3.1213);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(15,2.465576);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(16,2.064819);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(17,1.738652);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(18,1.373833);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(19,1.091743);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(20,0.9276426);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(21,0.7594735);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(22,0.6387715);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(23,0.5397687);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(24,0.4075389);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(25,0.3715995);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(26,0.3295572);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(27,0.2664938);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(28,0.2468289);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(29,0.1980056);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1661348);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(31,0.1376546);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(32,0.1193458);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(33,0.100359);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(34,0.09425609);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(35,0.07323494);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(36,0.06509773);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(37,0.05492621);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(38,0.0508576);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(39,0.04814519);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(40,0.03254886);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(41,0.2013961);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(8,0.1012848);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(9,0.09198464);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(10,0.07689502);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(11,0.06582125);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(12,0.05818252);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(13,0.05126733);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(14,0.04600606);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(15,0.040889);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(16,0.03741866);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(17,0.03433631);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(18,0.03052209);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(19,0.02720868);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(20,0.02508058);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(21,0.02269361);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(22,0.0208123);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(23,0.01913159);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(24,0.01662386);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(25,0.01587395);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(26,0.01494902);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(27,0.01344284);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(28,0.01293735);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(29,0.0115874);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(30,0.01061396);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(31,0.009661457);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(32,0.008996031);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(33,0.008249459);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(34,0.007994697);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(35,0.007047036);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(36,0.006644009);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(37,0.006102912);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(38,0.00587253);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(39,0.005713783);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(40,0.004698024);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(41,0.01168619);
   Zee_2bjet_pt_lep1_stack_4->SetEntries(102151);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_4,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_5 = new TH1D("Zee_2bjet_pt_lep1_stack_5","",40,0,200);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(8,7580.47);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(9,5878.295);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(10,3288.606);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(11,2000.825);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(12,1331.905);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(13,826.2033);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(14,524.8048);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(15,424.5844);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(16,332.0193);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(17,230.6753);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(18,190.3273);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(19,111.352);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(20,96.74385);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(21,67.52756);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(22,67.4222);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(23,55.16683);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(24,39.43498);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(25,24.72147);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(26,23.59777);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(27,24.72147);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(28,19.20832);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(29,11.3424);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(30,8.989626);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(31,8.989626);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(32,8.989626);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(33,5.618516);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(34,5.723885);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(35,2.247407);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(36,3.37111);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(37,2.247407);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(38,3.37111);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(41,12.36074);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(8,95.17556);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(9,83.69182);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(10,61.36434);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(11,47.5121);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(12,38.74531);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(13,30.52074);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(14,24.31356);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(15,21.86944);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(16,19.33232);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(17,16.11208);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(18,14.64204);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(19,11.19179);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(20,10.43268);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(21,8.718397);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(22,8.704168);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(23,7.881666);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(24,6.666538);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(25,5.270636);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(26,5.149455);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(27,5.270636);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(28,4.659824);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(29,3.588175);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(30,3.178313);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(31,3.178313);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(32,3.178313);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(33,2.512677);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(34,2.561533);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(35,1.589156);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(36,1.946311);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(37,1.589156);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(38,1.946311);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(41,3.726902);
   Zee_2bjet_pt_lep1_stack_5->SetEntries(20359);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_5->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1__349 = new TH1D("Zee_2bjet_pt_lep1__349","",40,0,200);
   Zee_2bjet_pt_lep1__349->SetBinContent(8,3428);
   Zee_2bjet_pt_lep1__349->SetBinContent(9,2645);
   Zee_2bjet_pt_lep1__349->SetBinContent(10,1612);
   Zee_2bjet_pt_lep1__349->SetBinContent(11,984);
   Zee_2bjet_pt_lep1__349->SetBinContent(12,605);
   Zee_2bjet_pt_lep1__349->SetBinContent(13,380);
   Zee_2bjet_pt_lep1__349->SetBinContent(14,228);
   Zee_2bjet_pt_lep1__349->SetBinContent(15,191);
   Zee_2bjet_pt_lep1__349->SetBinContent(16,124);
   Zee_2bjet_pt_lep1__349->SetBinContent(17,84);
   Zee_2bjet_pt_lep1__349->SetBinContent(18,60);
   Zee_2bjet_pt_lep1__349->SetBinContent(19,48);
   Zee_2bjet_pt_lep1__349->SetBinContent(20,53);
   Zee_2bjet_pt_lep1__349->SetBinContent(21,36);
   Zee_2bjet_pt_lep1__349->SetBinContent(22,26);
   Zee_2bjet_pt_lep1__349->SetBinContent(23,21);
   Zee_2bjet_pt_lep1__349->SetBinContent(24,21);
   Zee_2bjet_pt_lep1__349->SetBinContent(25,17);
   Zee_2bjet_pt_lep1__349->SetBinContent(26,13);
   Zee_2bjet_pt_lep1__349->SetBinContent(27,15);
   Zee_2bjet_pt_lep1__349->SetBinContent(28,7);
   Zee_2bjet_pt_lep1__349->SetBinContent(29,11);
   Zee_2bjet_pt_lep1__349->SetBinContent(30,5);
   Zee_2bjet_pt_lep1__349->SetBinContent(31,6);
   Zee_2bjet_pt_lep1__349->SetBinContent(32,8);
   Zee_2bjet_pt_lep1__349->SetBinContent(33,3);
   Zee_2bjet_pt_lep1__349->SetBinContent(34,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(35,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(36,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(37,3);
   Zee_2bjet_pt_lep1__349->SetBinContent(38,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(39,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(40,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(41,4);
   Zee_2bjet_pt_lep1__349->SetBinError(8,58.54912);
   Zee_2bjet_pt_lep1__349->SetBinError(9,51.42956);
   Zee_2bjet_pt_lep1__349->SetBinError(10,40.14972);
   Zee_2bjet_pt_lep1__349->SetBinError(11,31.36877);
   Zee_2bjet_pt_lep1__349->SetBinError(12,24.59675);
   Zee_2bjet_pt_lep1__349->SetBinError(13,19.49359);
   Zee_2bjet_pt_lep1__349->SetBinError(14,15.09967);
   Zee_2bjet_pt_lep1__349->SetBinError(15,13.82027);
   Zee_2bjet_pt_lep1__349->SetBinError(16,11.13553);
   Zee_2bjet_pt_lep1__349->SetBinError(17,9.165151);
   Zee_2bjet_pt_lep1__349->SetBinError(18,7.745967);
   Zee_2bjet_pt_lep1__349->SetBinError(19,6.928203);
   Zee_2bjet_pt_lep1__349->SetBinError(20,7.28011);
   Zee_2bjet_pt_lep1__349->SetBinError(21,6);
   Zee_2bjet_pt_lep1__349->SetBinError(22,5.09902);
   Zee_2bjet_pt_lep1__349->SetBinError(23,4.582576);
   Zee_2bjet_pt_lep1__349->SetBinError(24,4.582576);
   Zee_2bjet_pt_lep1__349->SetBinError(25,4.123106);
   Zee_2bjet_pt_lep1__349->SetBinError(26,3.605551);
   Zee_2bjet_pt_lep1__349->SetBinError(27,3.872983);
   Zee_2bjet_pt_lep1__349->SetBinError(28,2.645751);
   Zee_2bjet_pt_lep1__349->SetBinError(29,3.316625);
   Zee_2bjet_pt_lep1__349->SetBinError(30,2.236068);
   Zee_2bjet_pt_lep1__349->SetBinError(31,2.44949);
   Zee_2bjet_pt_lep1__349->SetBinError(32,2.828427);
   Zee_2bjet_pt_lep1__349->SetBinError(33,1.732051);
   Zee_2bjet_pt_lep1__349->SetBinError(34,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(35,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(36,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(37,1.732051);
   Zee_2bjet_pt_lep1__349->SetBinError(38,1);
   Zee_2bjet_pt_lep1__349->SetBinError(39,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(40,1);
   Zee_2bjet_pt_lep1__349->SetBinError(41,2);
   Zee_2bjet_pt_lep1__349->SetEntries(10648);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__349->SetLineColor(ci);
   Zee_2bjet_pt_lep1__349->SetLineWidth(2);
   Zee_2bjet_pt_lep1__349->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__349->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_pt_lep1_fx1349[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fy1349[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8843.975,
   6842.363,
   3937.428,
   2386.272,
   1548.58,
   948.4542,
   590.9339,
   460.4411,
   353.2721,
   240.8296,
   197.4254,
   116.5747,
   100.7774,
   69.32639,
   69.21995,
   56.78621,
   40.15393,
   26.90948,
   24.50841,
   25.15308,
   19.45515,
   12.12149,
   10.31793,
   9.62581,
   9.108972,
   5.801432,
   5.818141,
   2.320641,
   3.436208,
   2.302333,
   3.421967,
   0.04814519,
   0.1151057};
   Double_t Graph_from_Zee_2bjet_pt_lep1_fex1349[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fey1349[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   95.87744,
   84.2964,
   61.91561,
   47.92763,
   39.04028,
   30.7452,
   24.48393,
   21.98844,
   19.42579,
   16.17897,
   14.6816,
   11.24564,
   10.4647,
   8.723252,
   8.721584,
   7.913589,
   6.668383,
   5.343336,
   5.174211,
   5.271946,
   4.659842,
   3.6236,
   3.25768,
   3.217188,
   3.178326,
   2.514046,
   2.561546,
   1.589172,
   1.946323,
   1.589168,
   1.94632,
   0.005713783,
   0.08269039};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_pt_lep1_fx1349,Graph_from_Zee_2bjet_pt_lep1_fy1349,Graph_from_Zee_2bjet_pt_lep1_fex1349,Graph_from_Zee_2bjet_pt_lep1_fey1349);
   gre->SetName("Graph_from_Zee_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_pt_lep11349 = new TH1F("Graph_Graph_from_Zee_2bjet_pt_lep11349","",100,0,220);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->SetMaximum(9833.838);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_pt_lep11349->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11349->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_pt_lep11349);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__350 = new TH1D("data_mc_ratio__350","",40,0,200);
   data_mc_ratio__350->SetBinContent(8,0.3876085);
   data_mc_ratio__350->SetBinContent(9,0.3865624);
   data_mc_ratio__350->SetBinContent(10,0.4094043);
   data_mc_ratio__350->SetBinContent(11,0.4123588);
   data_mc_ratio__350->SetBinContent(12,0.3906804);
   data_mc_ratio__350->SetBinContent(13,0.4006519);
   data_mc_ratio__350->SetBinContent(14,0.3858299);
   data_mc_ratio__350->SetBinContent(15,0.4148196);
   data_mc_ratio__350->SetBinContent(16,0.3510042);
   data_mc_ratio__350->SetBinContent(17,0.3487944);
   data_mc_ratio__350->SetBinContent(18,0.3039123);
   data_mc_ratio__350->SetBinContent(19,0.4117531);
   data_mc_ratio__350->SetBinContent(20,0.5259116);
   data_mc_ratio__350->SetBinContent(21,0.5192828);
   data_mc_ratio__350->SetBinContent(22,0.3756142);
   data_mc_ratio__350->SetBinContent(23,0.3698081);
   data_mc_ratio__350->SetBinContent(24,0.5229874);
   data_mc_ratio__350->SetBinContent(25,0.6317477);
   data_mc_ratio__350->SetBinContent(26,0.5304301);
   data_mc_ratio__350->SetBinContent(27,0.5963484);
   data_mc_ratio__350->SetBinContent(28,0.3598019);
   data_mc_ratio__350->SetBinContent(29,0.907479);
   data_mc_ratio__350->SetBinContent(30,0.4845932);
   data_mc_ratio__350->SetBinContent(31,0.6233242);
   data_mc_ratio__350->SetBinContent(32,0.878255);
   data_mc_ratio__350->SetBinContent(33,0.5171137);
   data_mc_ratio__350->SetBinContent(34,0.3437524);
   data_mc_ratio__350->SetBinContent(35,0.8618307);
   data_mc_ratio__350->SetBinContent(36,0.582037);
   data_mc_ratio__350->SetBinContent(37,1.303026);
   data_mc_ratio__350->SetBinContent(38,0.2922295);
   data_mc_ratio__350->SetBinContent(39,41.54101);
   data_mc_ratio__350->SetBinContent(40,8.687668);
   data_mc_ratio__350->SetBinContent(41,0.3062632);
   data_mc_ratio__350->SetBinError(8,0.006620227);
   data_mc_ratio__350->SetBinError(9,0.007516346);
   data_mc_ratio__350->SetBinError(10,0.01019694);
   data_mc_ratio__350->SetBinError(11,0.01314552);
   data_mc_ratio__350->SetBinError(12,0.01588342);
   data_mc_ratio__350->SetBinError(13,0.02055301);
   data_mc_ratio__350->SetBinError(14,0.02555221);
   data_mc_ratio__350->SetBinError(15,0.03001529);
   data_mc_ratio__350->SetBinError(16,0.03152111);
   data_mc_ratio__350->SetBinError(17,0.03805658);
   data_mc_ratio__350->SetBinError(18,0.03923491);
   data_mc_ratio__350->SetBinError(19,0.05943144);
   data_mc_ratio__350->SetBinError(20,0.07223952);
   data_mc_ratio__350->SetBinError(21,0.08654713);
   data_mc_ratio__350->SetBinError(22,0.07366401);
   data_mc_ratio__350->SetBinError(23,0.08069874);
   data_mc_ratio__350->SetBinError(24,0.1141252);
   data_mc_ratio__350->SetBinError(25,0.1532213);
   data_mc_ratio__350->SetBinError(26,0.1471148);
   data_mc_ratio__350->SetBinError(27,0.1539765);
   data_mc_ratio__350->SetBinError(28,0.1359923);
   data_mc_ratio__350->SetBinError(29,0.2736152);
   data_mc_ratio__350->SetBinError(30,0.2167167);
   data_mc_ratio__350->SetBinError(31,0.254471);
   data_mc_ratio__350->SetBinError(32,0.31051);
   data_mc_ratio__350->SetBinError(33,0.2985557);
   data_mc_ratio__350->SetBinError(34,0.2430697);
   data_mc_ratio__350->SetBinError(35,0.6094063);
   data_mc_ratio__350->SetBinError(36,0.4115623);
   data_mc_ratio__350->SetBinError(37,0.7523026);
   data_mc_ratio__350->SetBinError(38,0.2922295);
   data_mc_ratio__350->SetBinError(39,29.37393);
   data_mc_ratio__350->SetBinError(40,8.687668);
   data_mc_ratio__350->SetBinError(41,0.176702);
   data_mc_ratio__350->SetMinimum(0.4);
   data_mc_ratio__350->SetMaximum(1.6);
   data_mc_ratio__350->SetEntries(4.341926);
   data_mc_ratio__350->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__350->SetLineColor(ci);
   data_mc_ratio__350->SetLineWidth(2);
   data_mc_ratio__350->SetMarkerStyle(20);
   data_mc_ratio__350->SetMarkerSize(1.2);
   data_mc_ratio__350->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__350->GetXaxis()->SetRange(1,40);
   data_mc_ratio__350->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__350->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__350->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__350->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__350->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__350->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__350->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__350->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__350->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__350->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__350->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__350->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__350->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__350->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1350[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01084099,
   0.01231978,
   0.01572488,
   0.02008473,
   0.02521036,
   0.03241612,
   0.04143261,
   0.04775516,
   0.05498817,
   0.06718018,
   0.07436532,
   0.09646723,
   0.1038397,
   0.1258287,
   0.1259981,
   0.1393576,
   0.1660705,
   0.1985671,
   0.2111198,
   0.2095944,
   0.2395171,
   0.2989401,
   0.3157299,
   0.3342252,
   0.3489225,
   0.4333493,
   0.4402688,
   0.6847986,
   0.5664159,
   0.6902426,
   0.5687722,
   0.1186782,
   0.7183866};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1350,Graph_from_mc_statistical_error_fy1350,Graph_from_mc_statistical_error_fex1350,Graph_from_mc_statistical_error_fey1350);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1350 = new TH1F("Graph_Graph_from_mc_statistical_error1350","",100,0,220);
   Graph_Graph_from_mc_statistical_error1350->SetMinimum(0.137936);
   Graph_Graph_from_mc_statistical_error1350->SetMaximum(1.862064);
   Graph_Graph_from_mc_statistical_error1350->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1350->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1350->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1350);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_18_amcnlo);
}
