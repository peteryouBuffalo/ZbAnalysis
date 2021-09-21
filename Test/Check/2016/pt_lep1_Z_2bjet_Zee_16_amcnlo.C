void pt_lep1_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_16_amcnlo/pt_lep1_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 21 10:46:16 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_16_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_16_amcnlo", "pt_lep1_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-10.93966,210.4839,10938.72);
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
   st->SetMaximum(9375.006);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",40,0,200);
   st_stack_173->SetMinimum(0.01);
   st_stack_173->SetMaximum(9843.756);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetRange(1,40);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetLabelSize(0.035);
   st_stack_173->GetXaxis()->SetTitleSize(0.035);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Events/5.0");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetLabelSize(0.05);
   st_stack_173->GetYaxis()->SetTitleSize(0.057);
   st_stack_173->GetYaxis()->SetTitleOffset(1.2);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetLabelSize(0.035);
   st_stack_173->GetZaxis()->SetTitleSize(0.035);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,12.92838);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,8.900258);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,8.580158);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,4.917203);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,3.819701);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(13,0.9834405);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,0.3934881);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(15,0.3934881);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(16,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(17,0.1970237);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(18,0.1970237);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(20,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(29,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,1.574653);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,1.312773);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,1.293081);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,0.9834415);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,0.8611987);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(13,0.4398084);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.2782384);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(15,0.2782384);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(16,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(17,0.1970237);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(18,0.1970237);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(20,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(29,0.1964644);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(221);

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
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,27.19854);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,22.24222);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,11.32581);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,9.01764);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,6.085705);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,6.258999);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,5.316315);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,3.576571);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,2.509134);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,2.931935);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(19,1.788286);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.7208484);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(22,1.19219);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(24,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(26,0.5960952);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(31,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(34,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(36,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,2.874839);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,2.619196);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,1.837289);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,1.686986);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,1.366227);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,1.365826);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,1.300002);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,1.032467);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,0.8947553);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,0.9896199);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(19,0.7300645);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.5172938);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(22,0.5960952);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(24,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(26,0.4215029);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(31,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(34,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(36,0.2980476);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(336);

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
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,541.5729);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,427.4551);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,273.6102);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,183.4454);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,94.05959);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,47.12716);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,26.28995);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,14.02131);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,7.789614);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,2.531625);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,1.363182);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(19,1.363182);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(20,0.9737017);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(21,0.7789614);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(22,0.3894807);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(23,0.3894807);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(24,0.1947403);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(25,0.1947403);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,10.26967);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,9.123746);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,7.299517);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,5.976974);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,4.279859);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,3.029449);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,2.262678);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,1.652427);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,1.231646);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,0.7021463);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.5152345);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(19,0.5152345);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(20,0.4354527);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(21,0.3894807);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(22,0.2754044);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(23,0.2754044);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(24,0.1947403);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(25,0.1947403);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(8337);

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
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(8,7.852742);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(9,6.587517);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(10,4.706197);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(11,3.343023);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(12,2.608694);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(13,2.163576);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(14,1.7144);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(15,1.419394);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(16,1.136558);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(17,0.9296478);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(18,0.7812751);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(19,0.6589835);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(20,0.5181454);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(21,0.4178779);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(22,0.3981721);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(23,0.3158716);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(24,0.2654481);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(25,0.2161837);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(26,0.1767722);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(27,0.1553277);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(28,0.1477931);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(29,0.1275078);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(30,0.1002675);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(31,0.09679002);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(32,0.07070887);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(33,0.07766385);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(34,0.05390103);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(35,0.04810522);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(36,0.04520731);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(37,0.03303611);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(38,0.03071779);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(39,0.02550156);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(40,0.02608114);
   Zee_2bjet_pt_lep1_stack_4->SetBinContent(41,0.1263486);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(8,0.06746332);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(9,0.06178996);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(10,0.05222664);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(11,0.04401764);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(12,0.03888379);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(13,0.0354114);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(14,0.03152196);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(15,0.02868194);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(16,0.02566569);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(17,0.0232122);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(18,0.02127938);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(19,0.01954314);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(20,0.01732937);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(21,0.01556258);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(22,0.01519121);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(23,0.01353045);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(24,0.01240357);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(25,0.01119357);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(26,0.01012195);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(27,0.009488149);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(28,0.009255165);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(29,0.008596575);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(30,0.007623197);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(31,0.007489836);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(32,0.006401681);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(33,0.006709134);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(34,0.005589276);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(35,0.005280234);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(36,0.00511872);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(37,0.00437574);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(38,0.004219413);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(39,0.003844505);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(40,0.003887947);
   Zee_2bjet_pt_lep1_stack_4->SetBinError(41,0.00855741);
   Zee_2bjet_pt_lep1_stack_4->SetEntries(64487);

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
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(8,4566.701);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(9,3648.049);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(10,2030.011);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(11,1220.865);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(12,800.5199);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(13,534.0478);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(14,362.9576);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(15,285.822);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(16,214.3085);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(17,144.4545);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(18,114.232);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(19,93.73846);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(20,68.74634);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(21,45.9855);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(22,44.48597);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(23,30.99023);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(24,31.98991);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(25,17.49448);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(26,15.99496);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(27,11.99622);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(28,14.49543);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(29,8.497321);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(30,3.998739);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(31,5.498266);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(32,4.498582);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(33,3.998739);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(34,1.99937);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(35,2.499212);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(36,2.999054);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(37,0.9996848);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(38,2.999054);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(39,1.499527);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(40,1.99937);
   Zee_2bjet_pt_lep1_stack_5->SetBinContent(41,7.497636);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(8,50.24307);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(9,45.26288);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(10,32.41912);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(11,25.22436);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(12,20.15191);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(13,16.41366);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(14,13.49979);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(15,12.02985);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(16,10.41923);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(17,8.497321);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(18,7.569921);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(19,6.860041);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(20,5.879459);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(21,4.79432);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(22,4.715504);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(23,3.935763);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(24,3.998739);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(25,2.957108);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(26,2.827536);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(27,2.448718);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(28,2.691734);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(29,2.060903);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(30,1.413768);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(31,1.65779);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(32,1.499527);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(33,1.413768);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(34,0.9996848);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(35,1.117682);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(36,1.224359);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(37,0.7068839);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(38,1.224359);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(39,0.8657524);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(40,0.9996848);
   Zee_2bjet_pt_lep1_stack_5->SetBinError(41,1.935881);
   Zee_2bjet_pt_lep1_stack_5->SetEntries(27953);

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
   
   TH1D *Zee_2bjet_pt_lep1__345 = new TH1D("Zee_2bjet_pt_lep1__345","",40,0,200);
   Zee_2bjet_pt_lep1__345->SetBinContent(8,1781);
   Zee_2bjet_pt_lep1__345->SetBinContent(9,1372);
   Zee_2bjet_pt_lep1__345->SetBinContent(10,806);
   Zee_2bjet_pt_lep1__345->SetBinContent(11,490);
   Zee_2bjet_pt_lep1__345->SetBinContent(12,314);
   Zee_2bjet_pt_lep1__345->SetBinContent(13,195);
   Zee_2bjet_pt_lep1__345->SetBinContent(14,142);
   Zee_2bjet_pt_lep1__345->SetBinContent(15,101);
   Zee_2bjet_pt_lep1__345->SetBinContent(16,63);
   Zee_2bjet_pt_lep1__345->SetBinContent(17,56);
   Zee_2bjet_pt_lep1__345->SetBinContent(18,32);
   Zee_2bjet_pt_lep1__345->SetBinContent(19,25);
   Zee_2bjet_pt_lep1__345->SetBinContent(20,26);
   Zee_2bjet_pt_lep1__345->SetBinContent(21,24);
   Zee_2bjet_pt_lep1__345->SetBinContent(22,14);
   Zee_2bjet_pt_lep1__345->SetBinContent(23,9);
   Zee_2bjet_pt_lep1__345->SetBinContent(24,9);
   Zee_2bjet_pt_lep1__345->SetBinContent(25,5);
   Zee_2bjet_pt_lep1__345->SetBinContent(26,9);
   Zee_2bjet_pt_lep1__345->SetBinContent(28,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(29,2);
   Zee_2bjet_pt_lep1__345->SetBinContent(30,2);
   Zee_2bjet_pt_lep1__345->SetBinContent(31,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(32,3);
   Zee_2bjet_pt_lep1__345->SetBinContent(33,2);
   Zee_2bjet_pt_lep1__345->SetBinContent(35,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(36,3);
   Zee_2bjet_pt_lep1__345->SetBinContent(41,2);
   Zee_2bjet_pt_lep1__345->SetBinError(8,42.2019);
   Zee_2bjet_pt_lep1__345->SetBinError(9,37.04052);
   Zee_2bjet_pt_lep1__345->SetBinError(10,28.39014);
   Zee_2bjet_pt_lep1__345->SetBinError(11,22.13594);
   Zee_2bjet_pt_lep1__345->SetBinError(12,17.72005);
   Zee_2bjet_pt_lep1__345->SetBinError(13,13.96424);
   Zee_2bjet_pt_lep1__345->SetBinError(14,11.91638);
   Zee_2bjet_pt_lep1__345->SetBinError(15,10.04988);
   Zee_2bjet_pt_lep1__345->SetBinError(16,7.937254);
   Zee_2bjet_pt_lep1__345->SetBinError(17,7.483315);
   Zee_2bjet_pt_lep1__345->SetBinError(18,5.656854);
   Zee_2bjet_pt_lep1__345->SetBinError(19,5);
   Zee_2bjet_pt_lep1__345->SetBinError(20,5.09902);
   Zee_2bjet_pt_lep1__345->SetBinError(21,4.898979);
   Zee_2bjet_pt_lep1__345->SetBinError(22,3.741657);
   Zee_2bjet_pt_lep1__345->SetBinError(23,3);
   Zee_2bjet_pt_lep1__345->SetBinError(24,3);
   Zee_2bjet_pt_lep1__345->SetBinError(25,2.236068);
   Zee_2bjet_pt_lep1__345->SetBinError(26,3);
   Zee_2bjet_pt_lep1__345->SetBinError(28,1);
   Zee_2bjet_pt_lep1__345->SetBinError(29,1.414214);
   Zee_2bjet_pt_lep1__345->SetBinError(30,1.414214);
   Zee_2bjet_pt_lep1__345->SetBinError(31,1);
   Zee_2bjet_pt_lep1__345->SetBinError(32,1.732051);
   Zee_2bjet_pt_lep1__345->SetBinError(33,1.414214);
   Zee_2bjet_pt_lep1__345->SetBinError(35,1);
   Zee_2bjet_pt_lep1__345->SetBinError(36,1.732051);
   Zee_2bjet_pt_lep1__345->SetBinError(41,1.414214);
   Zee_2bjet_pt_lep1__345->SetEntries(5490);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__345->SetLineColor(ci);
   Zee_2bjet_pt_lep1__345->SetLineWidth(2);
   Zee_2bjet_pt_lep1__345->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__345->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_pt_lep1_fx1345[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fy1345[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5156.253,
   4113.234,
   2328.233,
   1421.589,
   907.0936,
   590.5809,
   396.6718,
   305.2327,
   225.9403,
   151.0447,
   116.5735,
   97.54891,
   71.1555,
   47.18234,
   46.46582,
   31.99363,
   32.74815,
   17.90541,
   16.76782,
   12.15155,
   14.64322,
   8.821293,
   4.099007,
   5.893104,
   4.56929,
   4.076403,
   2.351318,
   2.547317,
   3.342309,
   1.032721,
   3.029772,
   1.525029,
   2.025451};
   Double_t Graph_from_Zee_2bjet_pt_lep1_fex1345[40] = {
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
   Double_t Graph_from_Zee_2bjet_pt_lep1_fey1345[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   51.38658,
   46.26617,
   33.30664,
   25.9963,
   20.66461,
   16.75249,
   13.75255,
   12.18983,
   10.53172,
   8.585812,
   7.590022,
   6.91802,
   5.921499,
   4.810139,
   4.761028,
   3.956652,
   4.014577,
   2.963534,
   2.858798,
   2.448736,
   2.69175,
   2.070264,
   1.413788,
   1.684386,
   1.499541,
   1.413784,
   1.043184,
   1.117694,
   1.260124,
   0.7068974,
   1.224366,
   0.865761,
   0.9996924};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_pt_lep1_fx1345,Graph_from_Zee_2bjet_pt_lep1_fy1345,Graph_from_Zee_2bjet_pt_lep1_fex1345,Graph_from_Zee_2bjet_pt_lep1_fey1345);
   gre->SetName("Graph_from_Zee_2bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_pt_lep11345 = new TH1F("Graph_Graph_from_Zee_2bjet_pt_lep11345","",100,0,220);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->SetMaximum(5728.404);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_pt_lep11345->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_pt_lep11345->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_pt_lep11345);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__346 = new TH1D("data_mc_ratio__346","",40,0,200);
   data_mc_ratio__346->SetBinContent(8,0.3454058);
   data_mc_ratio__346->SetBinContent(9,0.3335575);
   data_mc_ratio__346->SetBinContent(10,0.3461853);
   data_mc_ratio__346->SetBinContent(11,0.3446848);
   data_mc_ratio__346->SetBinContent(12,0.3461605);
   data_mc_ratio__346->SetBinContent(13,0.3301834);
   data_mc_ratio__346->SetBinContent(14,0.3579786);
   data_mc_ratio__346->SetBinContent(15,0.330895);
   data_mc_ratio__346->SetBinContent(16,0.2788347);
   data_mc_ratio__346->SetBinContent(17,0.3707512);
   data_mc_ratio__346->SetBinContent(18,0.274505);
   data_mc_ratio__346->SetBinContent(19,0.2562817);
   data_mc_ratio__346->SetBinContent(20,0.3653969);
   data_mc_ratio__346->SetBinContent(21,0.5086649);
   data_mc_ratio__346->SetBinContent(22,0.3012968);
   data_mc_ratio__346->SetBinContent(23,0.281306);
   data_mc_ratio__346->SetBinContent(24,0.2748247);
   data_mc_ratio__346->SetBinContent(25,0.2792452);
   data_mc_ratio__346->SetBinContent(26,0.5367423);
   data_mc_ratio__346->SetBinContent(28,0.06829098);
   data_mc_ratio__346->SetBinContent(29,0.2267241);
   data_mc_ratio__346->SetBinContent(30,0.4879231);
   data_mc_ratio__346->SetBinContent(31,0.1696899);
   data_mc_ratio__346->SetBinContent(32,0.6565571);
   data_mc_ratio__346->SetBinContent(33,0.4906286);
   data_mc_ratio__346->SetBinContent(35,0.3925699);
   data_mc_ratio__346->SetBinContent(36,0.897583);
   data_mc_ratio__346->SetBinContent(41,0.26233);
   data_mc_ratio__346->SetBinError(8,0.008184605);
   data_mc_ratio__346->SetBinError(9,0.009005205);
   data_mc_ratio__346->SetBinError(10,0.01219386);
   data_mc_ratio__346->SetBinError(11,0.01557127);
   data_mc_ratio__346->SetBinError(12,0.01953497);
   data_mc_ratio__346->SetBinError(13,0.02364492);
   data_mc_ratio__346->SetBinError(14,0.0300409);
   data_mc_ratio__346->SetBinError(15,0.03292529);
   data_mc_ratio__346->SetBinError(16,0.03512988);
   data_mc_ratio__346->SetBinError(17,0.04954372);
   data_mc_ratio__346->SetBinError(18,0.04852608);
   data_mc_ratio__346->SetBinError(19,0.05125634);
   data_mc_ratio__346->SetBinError(20,0.07166023);
   data_mc_ratio__346->SetBinError(21,0.1038308);
   data_mc_ratio__346->SetBinError(22,0.08052495);
   data_mc_ratio__346->SetBinError(23,0.09376867);
   data_mc_ratio__346->SetBinError(24,0.09160823);
   data_mc_ratio__346->SetBinError(25,0.1248823);
   data_mc_ratio__346->SetBinError(26,0.1789141);
   data_mc_ratio__346->SetBinError(28,0.06829098);
   data_mc_ratio__346->SetBinError(29,0.1603182);
   data_mc_ratio__346->SetBinError(30,0.3450137);
   data_mc_ratio__346->SetBinError(31,0.1696899);
   data_mc_ratio__346->SetBinError(32,0.3790634);
   data_mc_ratio__346->SetBinError(33,0.3469268);
   data_mc_ratio__346->SetBinError(35,0.3925699);
   data_mc_ratio__346->SetBinError(36,0.5182198);
   data_mc_ratio__346->SetBinError(41,0.1970929);
   data_mc_ratio__346->SetMinimum(0.4);
   data_mc_ratio__346->SetMaximum(1.6);
   data_mc_ratio__346->SetEntries(78.49711);
   data_mc_ratio__346->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__346->SetLineColor(ci);
   data_mc_ratio__346->SetLineWidth(2);
   data_mc_ratio__346->SetMarkerStyle(20);
   data_mc_ratio__346->SetMarkerSize(1.2);
   data_mc_ratio__346->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__346->GetXaxis()->SetRange(1,40);
   data_mc_ratio__346->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__346->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__346->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__346->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__346->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__346->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__346->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__346->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__346->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__346->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__346->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__346->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__346->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__346->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1346[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009965876,
   0.01124812,
   0.01430554,
   0.0182868,
   0.02278112,
   0.02836612,
   0.03466984,
   0.03993619,
   0.04661287,
   0.05684286,
   0.06510934,
   0.07091848,
   0.08321914,
   0.1019479,
   0.102463,
   0.12367,
   0.1225894,
   0.1655106,
   0.1704931,
   0.2015164,
   0.1838222,
   0.2346894,
   0.34491,
   0.2858232,
   0.3281781,
   0.3468214,
   0.4436593,
   0.438773,
   0.377022,
   0.6845,
   0.4041116,
   0.5677014,
   0.4935654};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1346,Graph_from_mc_statistical_error_fy1346,Graph_from_mc_statistical_error_fex1346,Graph_from_mc_statistical_error_fey1346);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1346 = new TH1F("Graph_Graph_from_mc_statistical_error1346","",100,0,220);
   Graph_Graph_from_mc_statistical_error1346->SetMinimum(0.1786);
   Graph_Graph_from_mc_statistical_error1346->SetMaximum(1.8214);
   Graph_Graph_from_mc_statistical_error1346->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1346->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1346->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1346);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_16_amcnlo);
}
