void dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 21 10:46:41 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-14.73794,6.314516,14733.21);
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
   st->SetMaximum(12627.06);
   
   TH1F *st_stack_331 = new TH1F("st_stack_331","",25,0,10);
   st_stack_331->SetMinimum(0.01);
   st_stack_331->SetMaximum(13258.41);
   st_stack_331->SetDirectory(0);
   st_stack_331->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_331->SetLineColor(ci);
   st_stack_331->GetXaxis()->SetRange(1,15);
   st_stack_331->GetXaxis()->SetLabelFont(42);
   st_stack_331->GetXaxis()->SetLabelSize(0.035);
   st_stack_331->GetXaxis()->SetTitleSize(0.035);
   st_stack_331->GetXaxis()->SetTitleFont(42);
   st_stack_331->GetYaxis()->SetTitle("Events/0.4");
   st_stack_331->GetYaxis()->SetLabelFont(42);
   st_stack_331->GetYaxis()->SetLabelSize(0.05);
   st_stack_331->GetYaxis()->SetTitleSize(0.057);
   st_stack_331->GetYaxis()->SetTitleOffset(1.2);
   st_stack_331->GetYaxis()->SetTitleFont(42);
   st_stack_331->GetZaxis()->SetLabelFont(42);
   st_stack_331->GetZaxis()->SetLabelSize(0.035);
   st_stack_331->GetZaxis()->SetTitleSize(0.035);
   st_stack_331->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_331);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,1.066381);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,5.44846);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,6.404985);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,13.1052);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,21.78071);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,22.37858);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,23.96969);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,12.24783);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.786201);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,1.21381);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.2380547);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(14,0.0486711);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.5143142);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,1.185777);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,1.281489);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.860452);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,2.412009);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,2.456509);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,2.514206);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.814549);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.6746504);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.5808018);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.2380547);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(14,0.0486711);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(464);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,2.991172);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,8.973517);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,12.96175);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,21.84152);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,33.85308);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,61.99652);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,55.28982);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,40.51247);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,14.95586);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,3.98823);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,2.991172);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,1.495586);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.7243584);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,1.221141);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,2.115078);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,2.542008);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,3.397492);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,4.147758);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,5.603373);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,5.281167);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,4.552504);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,2.730554);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.410052);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,1.221141);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.8634771);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.7243584);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(520);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,75.0232);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,224.7685);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,398.1764);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,664.2036);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,955.373);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,942.2443);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,671.0276);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,320.7757);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,45.01318);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,15.9198);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,5.493669);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,2.347101);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,1.219534);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.08255682);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(15,0.07314745);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(16,0.1651136);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.487188);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.302492);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,5.727661);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,7.399083);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,8.874665);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,8.813037);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,7.436917);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,5.139932);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.92183);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.140706);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.6714066);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.4362658);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.3151258);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.08255682);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(15,0.07314745);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(16,0.116753);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(52456);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.9690068);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,2.843279);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,5.095253);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,8.733267);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,15.17048);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,21.78604);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,21.29645);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,13.07718);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,1.23211);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.2868369);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.08950938);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.03797367);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.01627443);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.006102912);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.006781013);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(16,0.001356203);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(17,0.002034304);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(19,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinContent(20,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.02563367);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.04390935);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.05878008);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.07695479);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.1014255);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.1215448);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.1201713);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.09416823);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.02890494);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.01394649);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.007790791);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.005074446);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.003322005);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.002034304);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.002144345);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(16,0.0009589801);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(17,0.001174506);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(19,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetBinError(20,0.0006781013);
   Zmm_2bjet_dRmin_Z2b_stack_4->SetEntries(133684);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,376.0545);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,1125.765);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,1862.962);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,2919.654);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,4346.753);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,5679.394);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,6173.298);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,5047.937);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,1287.98);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,499.5033);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,259.9066);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,136.0053);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,66.48893);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,29.76707);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,33.01252);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,8.311344);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,8.311344);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinContent(18,1.123703);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(1,20.57863);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(2,35.75849);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(3,46.15977);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(4,57.71593);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(5,71.01483);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(6,80.71843);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(7,84.15612);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(8,76.6053);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(9,38.94868);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(10,25.43127);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(11,18.5811);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(12,13.59511);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(13,11.24096);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(14,6.622396);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(15,9.937799);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(16,4.42908);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(17,4.42908);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetBinError(18,1.123703);
   Zmm_2bjet_dRmin_Z2b_stack_5->SetEntries(26243);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__661 = new TH1D("Zmm_2bjet_dRmin_Z2b__661","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(1,222);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(2,590);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(3,1031);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(4,1660);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(5,2340);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(6,2761);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(7,2796);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(8,2103);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(9,588);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(10,231);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(11,135);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(12,72);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(13,34);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(14,27);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(15,14);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(16,7);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(17,3);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(18,3);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(20,2);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(1,14.89966);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(2,24.28992);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(3,32.10919);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(4,40.7431);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(5,48.37355);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(6,52.54522);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(7,52.87722);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(8,45.85848);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(9,24.24871);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(10,15.19868);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(11,11.61895);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(12,8.485281);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(13,5.830952);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(14,5.196152);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(15,3.741657);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(16,2.645751);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(17,1.732051);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(18,1.732051);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(20,1.414214);
   Zmm_2bjet_dRmin_Z2b__661->SetEntries(14619);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__661->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__661->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__661->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__661->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fx1661[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fy1661[25] = {
   456.1042,
   1367.798,
   2285.601,
   3627.538,
   5372.93,
   6727.799,
   6944.882,
   5434.55,
   1350.967,
   520.912,
   268.719,
   139.8859,
   68.4491,
   29.90441,
   33.09245,
   8.477814,
   8.313379,
   1.123703,
   0.0006781013,
   0.0006781013,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fex1661[25] = {
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
   Double_t Graph_from_Zmm_2bjet_dRmin_Z2b_fey1661[25] = {
   20.77072,
   36.09796,
   46.60083,
   58.31711,
   71.72794,
   81.42838,
   84.6864,
   76.93386,
   39.09738,
   25.50247,
   18.63481,
   13.62948,
   11.26868,
   6.62309,
   9.938068,
   4.430618,
   4.42908,
   1.123703,
   0.0006781013,
   0.0006781013,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_dRmin_Z2b_fx1661,Graph_from_Zmm_2bjet_dRmin_Z2b_fy1661,Graph_from_Zmm_2bjet_dRmin_Z2b_fex1661,Graph_from_Zmm_2bjet_dRmin_Z2b_fey1661);
   gre->SetName("Graph_from_Zmm_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661 = new TH1F("Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->SetMaximum(7732.525);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dRmin_Z2b1661);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__662 = new TH1D("data_mc_ratio__662","",25,0,10);
   data_mc_ratio__662->SetBinContent(1,0.4867308);
   data_mc_ratio__662->SetBinContent(2,0.4313501);
   data_mc_ratio__662->SetBinContent(3,0.4510849);
   data_mc_ratio__662->SetBinContent(4,0.4576107);
   data_mc_ratio__662->SetBinContent(5,0.4355166);
   data_mc_ratio__662->SetBinContent(6,0.4103868);
   data_mc_ratio__662->SetBinContent(7,0.4025986);
   data_mc_ratio__662->SetBinContent(8,0.3869685);
   data_mc_ratio__662->SetBinContent(9,0.4352438);
   data_mc_ratio__662->SetBinContent(10,0.443453);
   data_mc_ratio__662->SetBinContent(11,0.5023835);
   data_mc_ratio__662->SetBinContent(12,0.5147051);
   data_mc_ratio__662->SetBinContent(13,0.4967195);
   data_mc_ratio__662->SetBinContent(14,0.902877);
   data_mc_ratio__662->SetBinContent(15,0.4230573);
   data_mc_ratio__662->SetBinContent(16,0.8256845);
   data_mc_ratio__662->SetBinContent(17,0.3608641);
   data_mc_ratio__662->SetBinContent(18,2.669744);
   data_mc_ratio__662->SetBinContent(20,2949.412);
   data_mc_ratio__662->SetBinError(1,0.03266724);
   data_mc_ratio__662->SetBinError(2,0.0177584);
   data_mc_ratio__662->SetBinError(3,0.01404847);
   data_mc_ratio__662->SetBinError(4,0.01123161);
   data_mc_ratio__662->SetBinError(5,0.009003197);
   data_mc_ratio__662->SetBinError(6,0.007810164);
   data_mc_ratio__662->SetBinError(7,0.007613839);
   data_mc_ratio__662->SetBinError(8,0.008438321);
   data_mc_ratio__662->SetBinError(9,0.01794915);
   data_mc_ratio__662->SetBinError(10,0.02917707);
   data_mc_ratio__662->SetBinError(11,0.04323829);
   data_mc_ratio__662->SetBinError(12,0.06065858);
   data_mc_ratio__662->SetBinError(13,0.08518669);
   data_mc_ratio__662->SetBinError(14,0.1737588);
   data_mc_ratio__662->SetBinError(15,0.1130668);
   data_mc_ratio__662->SetBinError(16,0.3120794);
   data_mc_ratio__662->SetBinError(17,0.208345);
   data_mc_ratio__662->SetBinError(18,1.541377);
   data_mc_ratio__662->SetBinError(20,2085.549);
   data_mc_ratio__662->SetMinimum(0.4);
   data_mc_ratio__662->SetMaximum(1.6);
   data_mc_ratio__662->SetEntries(0.6716649);
   data_mc_ratio__662->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__662->SetLineColor(ci);
   data_mc_ratio__662->SetLineWidth(2);
   data_mc_ratio__662->SetMarkerStyle(20);
   data_mc_ratio__662->SetMarkerSize(1.2);
   data_mc_ratio__662->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__662->GetXaxis()->SetRange(1,15);
   data_mc_ratio__662->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__662->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__662->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__662->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__662->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__662->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1662[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1662[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1662[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1662[25] = {
   0.04553941,
   0.02639129,
   0.02038888,
   0.01607622,
   0.01334987,
   0.01210327,
   0.01219407,
   0.01415643,
   0.02894029,
   0.04895736,
   0.06934681,
   0.09743285,
   0.1646286,
   0.2214754,
   0.3003123,
   0.5226133,
   0.5327653,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1662,Graph_from_mc_statistical_error_fy1662,Graph_from_mc_statistical_error_fex1662,Graph_from_mc_statistical_error_fey1662);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1662 = new TH1F("Graph_Graph_from_mc_statistical_error1662","",100,0,11);
   Graph_Graph_from_mc_statistical_error1662->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1662->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1662->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1662->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1662->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1662);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo);
}
