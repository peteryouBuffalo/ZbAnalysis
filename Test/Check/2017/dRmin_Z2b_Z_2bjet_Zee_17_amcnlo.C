void dRmin_Z2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_17_amcnlo/dRmin_Z2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 21 10:46:26 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_17_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-7.678953,6.314516,7681.274);
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
   st->SetMaximum(6583.218);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",25,0,10);
   st_stack_242->SetMinimum(0.01);
   st_stack_242->SetMaximum(6912.379);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,15);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.4");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.608855);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,2.421291);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,4.466506);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,7.881322);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,9.099566);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,11.39883);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,11.05316);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,8.422635);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.412812);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.2045215);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.4724101);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(12,0.4043335);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.3515436);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.6990129);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.9523179);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.511364);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.346287);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.515768);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.488833);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.297795);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.5340285);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2045215);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.2939189);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(12,0.2859263);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(289);

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
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,1.055793);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,3.772301);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,5.883886);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,15.18814);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,18.65234);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,25.99906);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,39.51251);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,23.55141);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,10.16217);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,1.759655);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,2.111586);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.7038619);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(16,0.7038619);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.6095623);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.141297);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.430276);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,2.295666);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.562096);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,3.00828);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,3.722893);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.915022);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.864473);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.7869415);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.8620512);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.4977055);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(16,0.4977055);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(429);

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
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,44.23121);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,138.4999);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,215.1871);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,362.4022);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,507.8361);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,511.7055);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,337.6802);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,151.7812);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,20.78609);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,9.006239);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,2.851549);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(15,0.4103127);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,4.198875);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,7.460737);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,9.32037);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,12.09179);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,14.29896);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,14.35707);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,11.63701);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,7.779221);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,2.857647);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.888347);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,1.020053);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.07793469);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(15,0.4103127);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(6204);

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
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(1,0.5331087);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(2,1.501394);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(3,2.65244);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(4,4.593838);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(5,7.792491);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(6,11.20149);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(7,11.08942);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(8,6.780757);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(9,0.6289717);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(10,0.120346);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(11,0.05206948);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(12,0.02103469);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(13,0.008620775);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(14,0.005862127);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(15,0.001379324);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(16,0.000689662);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(17,0.000344831);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinContent(18,0.001379324);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(1,0.01355848);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(2,0.02275362);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(3,0.03024307);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(4,0.03980073);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(5,0.05183717);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(6,0.06214999);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(7,0.0618383);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(8,0.04835509);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(9,0.01472715);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(10,0.006441974);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(11,0.004237354);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(12,0.002693216);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(13,0.001724155);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(14,0.001421775);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(15,0.000689662);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(16,0.0004876647);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(17,0.000344831);
   Zee_2bjet_dRmin_Z2b_stack_4->SetBinError(18,0.000689662);
   Zee_2bjet_dRmin_Z2b_stack_4->SetEntries(136257);

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
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(1,202.2005);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(2,599.4008);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(3,994.0941);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(4,1582.727);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(5,2338.759);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(6,3060.465);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(7,3216.864);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(8,2456.916);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(9,646.0424);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(10,249.5847);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(11,120.8849);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(12,77.31146);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(13,40.93858);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(14,21.99751);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(15,8.172351);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(16,8.338588);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(17,4.616924);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(18,4.591315);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(19,0.895259);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinContent(20,2.826406);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(1,13.4503);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(2,23.27203);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(3,30.18024);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(4,37.8431);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(5,46.03494);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(6,52.58004);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(7,54.13265);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(8,47.53943);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(9,24.91529);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(10,16.16804);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(11,12.31709);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(12,10.87626);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(13,7.993567);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(14,6.440632);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(15,3.571037);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(16,4.287377);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(17,3.097022);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(18,3.089717);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(19,0.895259);
   Zee_2bjet_dRmin_Z2b_stack_5->SetBinError(20,2.826406);
   Zee_2bjet_dRmin_Z2b_stack_5->SetEntries(17303);

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
   
   TH1D *Zee_2bjet_dRmin_Z2b__483 = new TH1D("Zee_2bjet_dRmin_Z2b__483","",25,0,10);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(1,97);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(2,283);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(3,455);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(4,695);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(5,1009);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(6,1130);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(7,1147);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(8,866);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(9,224);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(10,101);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(11,42);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(12,27);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(13,21);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(14,7);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(15,4);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(16,1);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(17,2);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(1,9.848858);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(2,16.8226);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(3,21.33073);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(4,26.36285);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(5,31.76476);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(6,33.61547);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(7,33.86739);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(8,29.42788);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(9,14.96663);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(10,10.04988);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(11,6.480741);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(12,5.196152);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(13,4.582576);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(14,2.645751);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(15,2);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(16,1);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(17,1.414214);
   Zee_2bjet_dRmin_Z2b__483->SetEntries(6111);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__483->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__483->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__483->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__483->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fx1483[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fy1483[25] = {
   248.6295,
   745.5957,
   1222.284,
   1972.792,
   2882.14,
   3620.77,
   3616.2,
   2647.452,
   679.0324,
   260.6755,
   126.3725,
   77.81476,
   41.729,
   22.08131,
   8.584043,
   9.04314,
   4.617268,
   4.592695,
   0.895259,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fex1483[25] = {
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
   Double_t Graph_from_Zee_2bjet_dRmin_Z2b_fey1483[25] = {
   14.10802,
   24.47532,
   31.63336,
   39.82295,
   48.29136,
   54.60895,
   55.51436,
   48.27729,
   25.15351,
   16.29823,
   12.39277,
   10.8803,
   8.009426,
   6.441104,
   3.594532,
   4.316169,
   3.097022,
   3.089717,
   0.895259,
   2.826406,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_dRmin_Z2b_fx1483,Graph_from_Zee_2bjet_dRmin_Z2b_fy1483,Graph_from_Zee_2bjet_dRmin_Z2b_fex1483,Graph_from_Zee_2bjet_dRmin_Z2b_fey1483);
   gre->SetName("Graph_from_Zee_2bjet_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483 = new TH1F("Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483","",100,0,11);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->SetMaximum(4042.917);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_dRmin_Z2b1483);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__484 = new TH1D("data_mc_ratio__484","",25,0,10);
   data_mc_ratio__484->SetBinContent(1,0.3901388);
   data_mc_ratio__484->SetBinContent(2,0.3795623);
   data_mc_ratio__484->SetBinContent(3,0.3722539);
   data_mc_ratio__484->SetBinContent(4,0.3522926);
   data_mc_ratio__484->SetBinContent(5,0.3500871);
   data_mc_ratio__484->SetBinContent(6,0.3120883);
   data_mc_ratio__484->SetBinContent(7,0.3171838);
   data_mc_ratio__484->SetBinContent(8,0.327107);
   data_mc_ratio__484->SetBinContent(9,0.3298812);
   data_mc_ratio__484->SetBinContent(10,0.3874549);
   data_mc_ratio__484->SetBinContent(11,0.3323508);
   data_mc_ratio__484->SetBinContent(12,0.3469779);
   data_mc_ratio__484->SetBinContent(13,0.5032472);
   data_mc_ratio__484->SetBinContent(14,0.3170102);
   data_mc_ratio__484->SetBinContent(15,0.4659809);
   data_mc_ratio__484->SetBinContent(16,0.1105811);
   data_mc_ratio__484->SetBinContent(17,0.4331565);
   data_mc_ratio__484->SetBinError(1,0.03961259);
   data_mc_ratio__484->SetBinError(2,0.02256264);
   data_mc_ratio__484->SetBinError(3,0.01745153);
   data_mc_ratio__484->SetBinError(4,0.01336322);
   data_mc_ratio__484->SetBinError(5,0.01102124);
   data_mc_ratio__484->SetBinError(6,0.009284068);
   data_mc_ratio__484->SetBinError(7,0.009365465);
   data_mc_ratio__484->SetBinError(8,0.01111555);
   data_mc_ratio__484->SetBinError(9,0.02204111);
   data_mc_ratio__484->SetBinError(10,0.03855321);
   data_mc_ratio__484->SetBinError(11,0.05128285);
   data_mc_ratio__484->SetBinError(12,0.06677592);
   data_mc_ratio__484->SetBinError(13,0.1098175);
   data_mc_ratio__484->SetBinError(14,0.1198186);
   data_mc_ratio__484->SetBinError(15,0.2329904);
   data_mc_ratio__484->SetBinError(16,0.1105811);
   data_mc_ratio__484->SetBinError(17,0.3062879);
   data_mc_ratio__484->SetMinimum(0.4);
   data_mc_ratio__484->SetMaximum(1.6);
   data_mc_ratio__484->SetEntries(104.6964);
   data_mc_ratio__484->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__484->SetLineColor(ci);
   data_mc_ratio__484->SetLineWidth(2);
   data_mc_ratio__484->SetMarkerStyle(20);
   data_mc_ratio__484->SetMarkerSize(1.2);
   data_mc_ratio__484->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__484->GetXaxis()->SetRange(1,15);
   data_mc_ratio__484->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__484->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__484->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__484->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__484->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__484->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1484[25] = {
   0.05674317,
   0.03282654,
   0.02588053,
   0.02018609,
   0.01675538,
   0.01508214,
   0.01535158,
   0.01823538,
   0.03704317,
   0.06252308,
   0.09806542,
   0.1398231,
   0.1919391,
   0.2916994,
   0.4187458,
   0.4772865,
   0.6707477,
   0.672746,
   1,
   1,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,11);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_17_amcnlo);
}
