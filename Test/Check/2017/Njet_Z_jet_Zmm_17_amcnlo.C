void Njet_Z_jet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_17_amcnlo/Njet_Z_jet_Zmm_17_amcnlo
//=========  (Thu Jan 21 10:45:58 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_17_amcnlo = new TCanvas("Njet_Z_jet_Zmm_17_amcnlo", "Njet_Z_jet_Zmm_17_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_17_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_17_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_17_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_17_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_17_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_17_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-35958.61,10.52419,3.592266e+07);
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
   st->SetMaximum(3.078742e+07);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",15,0,15);
   st_stack_74->SetMinimum(0.01);
   st_stack_74->SetMaximum(3.232679e+07);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetRange(1,10);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetLabelSize(0.035);
   st_stack_74->GetXaxis()->SetTitleSize(0.035);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/1.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetLabelSize(0.05);
   st_stack_74->GetYaxis()->SetTitleSize(0.057);
   st_stack_74->GetYaxis()->SetTitleOffset(1.2);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetLabelSize(0.035);
   st_stack_74->GetZaxis()->SetTitleSize(0.035);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,449.7549);
   Zmm_jet_Njet_stack_1->SetBinContent(2,1507.005);
   Zmm_jet_Njet_stack_1->SetBinContent(3,816.8983);
   Zmm_jet_Njet_stack_1->SetBinContent(4,305.8573);
   Zmm_jet_Njet_stack_1->SetBinContent(5,88.22595);
   Zmm_jet_Njet_stack_1->SetBinContent(6,21.0234);
   Zmm_jet_Njet_stack_1->SetBinContent(7,6.111393);
   Zmm_jet_Njet_stack_1->SetBinContent(8,2.031086);
   Zmm_jet_Njet_stack_1->SetBinContent(9,0.599436);
   Zmm_jet_Njet_stack_1->SetBinError(1,11.8404);
   Zmm_jet_Njet_stack_1->SetBinError(2,19.27016);
   Zmm_jet_Njet_stack_1->SetBinError(3,13.76143);
   Zmm_jet_Njet_stack_1->SetBinError(4,8.53465);
   Zmm_jet_Njet_stack_1->SetBinError(5,4.524472);
   Zmm_jet_Njet_stack_1->SetBinError(6,2.367535);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.60914);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.6423222);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.3460845);
   Zmm_jet_Njet_stack_1->SetEntries(15570);

   ci = TColor::GetColor("#ff6600");
   Zmm_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_1->SetLineColor(ci);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_1,"");
   
   TH1D *Zmm_jet_Njet_stack_2 = new TH1D("Zmm_jet_Njet_stack_2","",15,0,15);
   Zmm_jet_Njet_stack_2->SetBinContent(1,10889.44);
   Zmm_jet_Njet_stack_2->SetBinContent(2,9229.057);
   Zmm_jet_Njet_stack_2->SetBinContent(3,5757.384);
   Zmm_jet_Njet_stack_2->SetBinContent(4,1723.688);
   Zmm_jet_Njet_stack_2->SetBinContent(5,413.7662);
   Zmm_jet_Njet_stack_2->SetBinContent(6,85.1246);
   Zmm_jet_Njet_stack_2->SetBinContent(7,12.52805);
   Zmm_jet_Njet_stack_2->SetBinContent(8,3.629533);
   Zmm_jet_Njet_stack_2->SetBinContent(9,0.3519309);
   Zmm_jet_Njet_stack_2->SetBinError(1,64.23526);
   Zmm_jet_Njet_stack_2->SetBinError(2,54.29791);
   Zmm_jet_Njet_stack_2->SetBinError(3,41.92335);
   Zmm_jet_Njet_stack_2->SetBinError(4,22.85422);
   Zmm_jet_Njet_stack_2->SetBinError(5,11.10685);
   Zmm_jet_Njet_stack_2->SetBinError(6,5.070638);
   Zmm_jet_Njet_stack_2->SetBinError(7,1.866244);
   Zmm_jet_Njet_stack_2->SetBinError(8,1.061678);
   Zmm_jet_Njet_stack_2->SetBinError(9,0.3519309);
   Zmm_jet_Njet_stack_2->SetEntries(91326);

   ci = TColor::GetColor("#cccc00");
   Zmm_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_2->SetLineColor(ci);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_2,"");
   
   TH1D *Zmm_jet_Njet_stack_3 = new TH1D("Zmm_jet_Njet_stack_3","",15,0,15);
   Zmm_jet_Njet_stack_3->SetBinContent(1,1047.965);
   Zmm_jet_Njet_stack_3->SetBinContent(2,6647.903);
   Zmm_jet_Njet_stack_3->SetBinContent(3,12120.95);
   Zmm_jet_Njet_stack_3->SetBinContent(4,6727.329);
   Zmm_jet_Njet_stack_3->SetBinContent(5,2664.687);
   Zmm_jet_Njet_stack_3->SetBinContent(6,819.3992);
   Zmm_jet_Njet_stack_3->SetBinContent(7,228.1652);
   Zmm_jet_Njet_stack_3->SetBinContent(8,71.40795);
   Zmm_jet_Njet_stack_3->SetBinContent(9,7.438301);
   Zmm_jet_Njet_stack_3->SetBinContent(10,2.342663);
   Zmm_jet_Njet_stack_3->SetBinContent(11,1.054429);
   Zmm_jet_Njet_stack_3->SetBinContent(12,0.566182);
   Zmm_jet_Njet_stack_3->SetBinError(1,20.36443);
   Zmm_jet_Njet_stack_3->SetBinError(2,51.49382);
   Zmm_jet_Njet_stack_3->SetBinError(3,69.39173);
   Zmm_jet_Njet_stack_3->SetBinError(4,51.11821);
   Zmm_jet_Njet_stack_3->SetBinError(5,31.89597);
   Zmm_jet_Njet_stack_3->SetBinError(6,17.51818);
   Zmm_jet_Njet_stack_3->SetBinError(7,9.138742);
   Zmm_jet_Njet_stack_3->SetBinError(8,5.12784);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.533828);
   Zmm_jet_Njet_stack_3->SetBinError(10,0.853282);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.5957637);
   Zmm_jet_Njet_stack_3->SetBinError(12,0.4248578);
   Zmm_jet_Njet_stack_3->SetEntries(90087);

   ci = TColor::GetColor("#0000cc");
   Zmm_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_3->SetLineColor(ci);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_3,"");
   
   TH1D *Zmm_jet_Njet_stack_4 = new TH1D("Zmm_jet_Njet_stack_4","",15,0,15);
   Zmm_jet_Njet_stack_4->SetBinContent(1,16.05326);
   Zmm_jet_Njet_stack_4->SetBinContent(2,88.43777);
   Zmm_jet_Njet_stack_4->SetBinContent(3,126.1581);
   Zmm_jet_Njet_stack_4->SetBinContent(4,47.74771);
   Zmm_jet_Njet_stack_4->SetBinContent(5,15.38808);
   Zmm_jet_Njet_stack_4->SetBinContent(6,4.594183);
   Zmm_jet_Njet_stack_4->SetBinContent(7,1.231736);
   Zmm_jet_Njet_stack_4->SetBinContent(8,0.3151755);
   Zmm_jet_Njet_stack_4->SetBinContent(9,0.08655258);
   Zmm_jet_Njet_stack_4->SetBinContent(10,0.02172435);
   Zmm_jet_Njet_stack_4->SetBinContent(11,0.003793141);
   Zmm_jet_Njet_stack_4->SetBinContent(12,0.001379324);
   Zmm_jet_Njet_stack_4->SetBinError(1,0.07440203);
   Zmm_jet_Njet_stack_4->SetBinError(2,0.1746313);
   Zmm_jet_Njet_stack_4->SetBinError(3,0.2085743);
   Zmm_jet_Njet_stack_4->SetBinError(4,0.1283156);
   Zmm_jet_Njet_stack_4->SetBinError(5,0.07284427);
   Zmm_jet_Njet_stack_4->SetBinError(6,0.03980222);
   Zmm_jet_Njet_stack_4->SetBinError(7,0.02060924);
   Zmm_jet_Njet_stack_4->SetBinError(8,0.01042508);
   Zmm_jet_Njet_stack_4->SetBinError(9,0.00546315);
   Zmm_jet_Njet_stack_4->SetBinError(10,0.002737011);
   Zmm_jet_Njet_stack_4->SetBinError(11,0.001143675);
   Zmm_jet_Njet_stack_4->SetBinError(12,0.000689662);
   Zmm_jet_Njet_stack_4->SetEntries(870106);

   ci = TColor::GetColor("#cc0000");
   Zmm_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_4->SetLineColor(ci);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_4,"");
   
   TH1D *Zmm_jet_Njet_stack_5 = new TH1D("Zmm_jet_Njet_stack_5","",15,0,15);
   Zmm_jet_Njet_stack_5->SetBinContent(1,1.692068e+07);
   Zmm_jet_Njet_stack_5->SetBinContent(2,4400219);
   Zmm_jet_Njet_stack_5->SetBinContent(3,1441855);
   Zmm_jet_Njet_stack_5->SetBinContent(4,313374.4);
   Zmm_jet_Njet_stack_5->SetBinContent(5,60288.12);
   Zmm_jet_Njet_stack_5->SetBinContent(6,11625.62);
   Zmm_jet_Njet_stack_5->SetBinContent(7,2232.94);
   Zmm_jet_Njet_stack_5->SetBinContent(8,465.5473);
   Zmm_jet_Njet_stack_5->SetBinContent(9,78.02816);
   Zmm_jet_Njet_stack_5->SetBinContent(10,8.95259);
   Zmm_jet_Njet_stack_5->SetBinContent(11,3.581036);
   Zmm_jet_Njet_stack_5->SetBinError(1,6696.383);
   Zmm_jet_Njet_stack_5->SetBinError(2,2287.632);
   Zmm_jet_Njet_stack_5->SetBinError(3,1196.642);
   Zmm_jet_Njet_stack_5->SetBinError(4,547.2334);
   Zmm_jet_Njet_stack_5->SetBinError(5,239.093);
   Zmm_jet_Njet_stack_5->SetBinError(6,105.1542);
   Zmm_jet_Njet_stack_5->SetBinError(7,46.3207);
   Zmm_jet_Njet_stack_5->SetBinError(8,20.54586);
   Zmm_jet_Njet_stack_5->SetBinError(9,8.678342);
   Zmm_jet_Njet_stack_5->SetBinError(10,2.831058);
   Zmm_jet_Njet_stack_5->SetBinError(11,1.790518);
   Zmm_jet_Njet_stack_5->SetEntries(1.36425e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_jet_Njet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_5->SetLineColor(ci);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_jet_Njet__147 = new TH1D("Zmm_jet_Njet__147","",15,0,15);
   Zmm_jet_Njet__147->SetBinContent(1,1.397528e+07);
   Zmm_jet_Njet__147->SetBinContent(2,2235250);
   Zmm_jet_Njet__147->SetBinContent(3,579291);
   Zmm_jet_Njet__147->SetBinContent(4,144261);
   Zmm_jet_Njet__147->SetBinContent(5,36083);
   Zmm_jet_Njet__147->SetBinContent(6,9054);
   Zmm_jet_Njet__147->SetBinContent(7,2290);
   Zmm_jet_Njet__147->SetBinContent(8,508);
   Zmm_jet_Njet__147->SetBinContent(9,117);
   Zmm_jet_Njet__147->SetBinContent(10,25);
   Zmm_jet_Njet__147->SetBinContent(11,12);
   Zmm_jet_Njet__147->SetBinContent(12,2);
   Zmm_jet_Njet__147->SetBinContent(13,1);
   Zmm_jet_Njet__147->SetBinError(1,3738.353);
   Zmm_jet_Njet__147->SetBinError(2,1495.075);
   Zmm_jet_Njet__147->SetBinError(3,761.1117);
   Zmm_jet_Njet__147->SetBinError(4,379.8171);
   Zmm_jet_Njet__147->SetBinError(5,189.9553);
   Zmm_jet_Njet__147->SetBinError(6,95.15251);
   Zmm_jet_Njet__147->SetBinError(7,47.85394);
   Zmm_jet_Njet__147->SetBinError(8,22.53886);
   Zmm_jet_Njet__147->SetBinError(9,10.81665);
   Zmm_jet_Njet__147->SetBinError(10,5);
   Zmm_jet_Njet__147->SetBinError(11,3.464102);
   Zmm_jet_Njet__147->SetBinError(12,1.414214);
   Zmm_jet_Njet__147->SetBinError(13,1);
   Zmm_jet_Njet__147->SetEntries(1.698218e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__147->SetLineColor(ci);
   Zmm_jet_Njet__147->SetLineWidth(2);
   Zmm_jet_Njet__147->SetMarkerStyle(20);
   Zmm_jet_Njet__147->SetMarkerSize(1.2);
   Zmm_jet_Njet__147->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__147->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1147[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_Zmm_jet_Njet_fy1147[15] = {
   1.693308e+07,
   4417691,
   1460677,
   322179,
   63470.18,
   12555.76,
   2480.976,
   542.931,
   86.50438,
   11.31698,
   4.639259,
   0.5675614,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1147[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_Zmm_jet_Njet_fey1147[15] = {
   6696.732,
   2288.937,
   1199.464,
   550.1569,
   241.5091,
   106.7502,
   47.27786,
   21.21242,
   8.826659,
   2.956854,
   1.887032,
   0.4248583,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1147,Graph_from_Zmm_jet_Njet_fy1147,Graph_from_Zmm_jet_Njet_fex1147,Graph_from_Zmm_jet_Njet_fey1147);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1147 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1147","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1147->SetMinimum(0);
   Graph_Graph_from_Zmm_jet_Njet1147->SetMaximum(1.863376e+07);
   Graph_Graph_from_Zmm_jet_Njet1147->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1147->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1147);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_jet_Njet","Data (Z(#mu#mu) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_jet_Njet_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_jet_Njet","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__148 = new TH1D("data_mc_ratio__148","",15,0,15);
   data_mc_ratio__148->SetBinContent(1,0.8253243);
   data_mc_ratio__148->SetBinContent(2,0.5059769);
   data_mc_ratio__148->SetBinContent(3,0.3965908);
   data_mc_ratio__148->SetBinContent(4,0.4477666);
   data_mc_ratio__148->SetBinContent(5,0.5685032);
   data_mc_ratio__148->SetBinContent(6,0.7211035);
   data_mc_ratio__148->SetBinContent(7,0.9230238);
   data_mc_ratio__148->SetBinContent(8,0.9356621);
   data_mc_ratio__148->SetBinContent(9,1.352533);
   data_mc_ratio__148->SetBinContent(10,2.20907);
   data_mc_ratio__148->SetBinContent(11,2.58662);
   data_mc_ratio__148->SetBinContent(12,3.523848);
   data_mc_ratio__148->SetBinError(1,0.0002207722);
   data_mc_ratio__148->SetBinError(2,0.0003384291);
   data_mc_ratio__148->SetBinError(3,0.0005210679);
   data_mc_ratio__148->SetBinError(4,0.001178901);
   data_mc_ratio__148->SetBinError(5,0.002992827);
   data_mc_ratio__148->SetBinError(6,0.007578397);
   data_mc_ratio__148->SetBinError(7,0.01928835);
   data_mc_ratio__148->SetBinError(8,0.04151329);
   data_mc_ratio__148->SetBinError(9,0.1250417);
   data_mc_ratio__148->SetBinError(10,0.4418141);
   data_mc_ratio__148->SetBinError(11,0.7466929);
   data_mc_ratio__148->SetBinError(12,2.491737);
   data_mc_ratio__148->SetMinimum(0.4);
   data_mc_ratio__148->SetMaximum(1.6);
   data_mc_ratio__148->SetEntries(14.60424);
   data_mc_ratio__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__148->SetLineColor(ci);
   data_mc_ratio__148->SetLineWidth(2);
   data_mc_ratio__148->SetMarkerStyle(20);
   data_mc_ratio__148->SetMarkerSize(1.2);
   data_mc_ratio__148->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__148->GetXaxis()->SetRange(1,10);
   data_mc_ratio__148->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__148->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__148->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__148->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__148->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__148->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1148[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_mc_statistical_error_fy1148[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1148[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1148[15] = {
   0.0003954822,
   0.0005181296,
   0.0008211702,
   0.001707612,
   0.00380508,
   0.008502091,
   0.01905615,
   0.0390702,
   0.1020371,
   0.2612759,
   0.406753,
   0.7485681,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1148,Graph_from_mc_statistical_error_fy1148,Graph_from_mc_statistical_error_fex1148,Graph_from_mc_statistical_error_fey1148);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1148 = new TH1F("Graph_Graph_from_mc_statistical_error1148","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1148->SetMinimum(0.1017183);
   Graph_Graph_from_mc_statistical_error1148->SetMaximum(1.898282);
   Graph_Graph_from_mc_statistical_error1148->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1148->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1148->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1148);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
   Njet_Z_jet_Zmm_17_amcnlo->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
   Njet_Z_jet_Zmm_17_amcnlo->SetSelected(Njet_Z_jet_Zmm_17_amcnlo);
}
