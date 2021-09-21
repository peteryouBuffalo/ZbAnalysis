void dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 21 10:46:40 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-7.940989,3.416482,7943.048);
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
   st->SetMaximum(6807.57);
   
   TH1F *st_stack_328 = new TH1F("st_stack_328","",30,0,3.141593);
   st_stack_328->SetMinimum(0.01);
   st_stack_328->SetMaximum(7147.949);
   st_stack_328->SetDirectory(0);
   st_stack_328->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_328->SetLineColor(ci);
   st_stack_328->GetXaxis()->SetRange(1,31);
   st_stack_328->GetXaxis()->SetLabelFont(42);
   st_stack_328->GetXaxis()->SetLabelSize(0.035);
   st_stack_328->GetXaxis()->SetTitleSize(0.035);
   st_stack_328->GetXaxis()->SetTitleFont(42);
   st_stack_328->GetYaxis()->SetTitle("Events/0.105");
   st_stack_328->GetYaxis()->SetLabelFont(42);
   st_stack_328->GetYaxis()->SetLabelSize(0.05);
   st_stack_328->GetYaxis()->SetTitleSize(0.057);
   st_stack_328->GetYaxis()->SetTitleOffset(1.2);
   st_stack_328->GetYaxis()->SetTitleFont(42);
   st_stack_328->GetZaxis()->SetLabelFont(42);
   st_stack_328->GetZaxis()->SetLabelSize(0.035);
   st_stack_328->GetZaxis()->SetTitleSize(0.035);
   st_stack_328->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_328);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(1,3.704422);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(2,4.94344);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(3,6.998831);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(4,4.372156);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(5,5.1568);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(6,5.075765);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(7,4.642175);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(8,4.924373);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(9,5.114693);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(10,7.325863);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(11,5.022125);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(12,6.242829);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(13,8.204344);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(14,6.033242);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(15,8.570263);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(16,7.281825);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(17,9.466629);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(18,8.507168);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(19,8.645386);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(20,9.7871);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(21,11.75878);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(22,11.65954);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(23,12.50611);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(24,11.44413);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(25,12.23621);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(26,11.90034);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(27,13.75223);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(28,13.41208);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(29,10.36204);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(30,8.230558);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(1,0.8847472);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(2,1.034765);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(3,1.294345);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(4,0.9729909);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(5,1.072734);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(6,1.079419);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(7,1.005857);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(8,1.01301);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(9,1.059353);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(10,1.359876);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(11,1.066084);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(12,1.176139);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(13,1.598536);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(14,1.172781);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(15,1.400876);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(16,1.26513);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(17,1.478611);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(18,1.37576);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(19,1.392779);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(20,1.49783);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(21,1.638391);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(22,1.616728);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(23,1.711366);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(24,1.608133);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(25,1.655018);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(26,1.706891);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(27,1.79971);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(28,1.712568);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(29,1.526559);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(30,1.36561);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetEntries(1176);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(1,15.15552);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(2,4.900904);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(3,12.1302);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(4,8.440513);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(5,6.512416);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(6,7.753638);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(7,10.59978);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(8,8.159452);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(9,10.70899);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(10,8.660994);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(11,11.04578);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(12,10.37211);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(13,15.04584);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(14,16.96373);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(15,16.44802);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(16,19.30959);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(17,20.82718);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(18,28.26716);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(19,31.55581);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(20,30.96768);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(21,23.57372);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(22,31.16772);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(23,32.64024);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(24,33.39992);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(25,33.12613);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(26,32.75933);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(27,30.1497);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(28,27.38322);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(29,21.95609);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(30,17.16422);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(1,2.460671);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(2,1.394239);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(3,2.232799);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(4,1.883594);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(5,1.6641);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(6,1.822114);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(7,2.174589);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(8,1.865202);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(9,2.133497);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(10,1.876875);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(11,2.167974);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(12,2.099606);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(13,2.513627);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(14,2.603982);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(15,2.569202);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(16,2.857022);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(17,2.882029);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(18,3.412945);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(19,3.645705);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(20,3.54911);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(21,3.107164);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(22,3.553557);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(23,3.664606);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(24,3.728092);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(25,3.610473);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(26,3.692319);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(27,3.429975);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(28,3.472212);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(29,2.890789);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(30,2.667547);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetEntries(1482);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(1,180.3019);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(2,178.027);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(3,169.2825);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(4,173.2217);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(5,163.0117);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(6,175.6867);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(7,184.2059);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(8,195.5341);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(9,194.2255);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(10,213.3684);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(11,236.2515);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(12,260.1764);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(13,275.5717);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(14,304.4404);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(15,324.397);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(16,354.3735);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(17,372.3442);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(18,385.3891);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(19,411.0221);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(20,406.2378);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(21,434.0307);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(22,439.664);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(23,434.9735);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(24,426.8493);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(25,409.7124);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(26,415.1388);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(27,414.0364);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(28,409.496);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(29,389.4008);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(30,396.3519);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(1,6.125604);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(2,6.148466);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(3,5.944797);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(4,6.055978);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(5,5.605936);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(6,6.023654);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(7,6.124631);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(8,6.456087);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(9,6.234833);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(10,6.614813);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(11,7.157266);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(12,7.368269);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(13,7.592781);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(14,8.072619);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(15,8.23709);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(16,8.589757);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(17,8.71231);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(18,8.867905);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(19,9.213806);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(20,9.172241);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(21,9.581568);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(22,9.688137);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(23,9.563794);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(24,9.379277);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(25,9.177443);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(26,9.243737);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(27,9.201443);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(28,9.279581);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(29,8.934898);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(30,9.005582);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetEntries(70872);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_3,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_4 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_4","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(1,2.6513);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(2,2.712293);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(3,2.693054);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(4,2.662053);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(5,2.591983);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(6,2.697902);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(7,2.751527);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(8,2.870235);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(9,3.021826);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(10,3.299192);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(11,3.670625);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(12,4.045898);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(13,4.62214);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(14,5.196762);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(15,6.013153);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(16,6.843446);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(17,7.725017);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(18,8.643952);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(19,9.610984);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(20,10.60041);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(21,11.33192);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(22,11.9946);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(23,12.16127);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(24,12.15515);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(25,11.77287);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(26,11.118);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(27,10.08448);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(28,9.213595);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(29,8.340824);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinContent(30,7.920587);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(1,0.03835152);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(2,0.03875175);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(3,0.03862595);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(4,0.03837385);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(5,0.03791361);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(6,0.03861225);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(7,0.03914111);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(8,0.0397719);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(9,0.04097554);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(10,0.04274218);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(11,0.04509098);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(12,0.04725863);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(13,0.05062741);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(14,0.05358953);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(15,0.05776202);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(16,0.06154273);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(17,0.06542753);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(18,0.06925655);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(19,0.07291996);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(20,0.07672615);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(21,0.07923101);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(22,0.08160863);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(23,0.08214137);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(24,0.08210663);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(25,0.08071677);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(26,0.07860913);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(27,0.07478843);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(28,0.07144823);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(29,0.06796431);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetBinError(30,0.06638009);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetEntries(394158);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_4,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_5 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_5","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(1,1512.974);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(2,1573.049);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(3,1425.41);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(4,1486.005);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(5,1505.012);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(6,1537.185);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(7,1545.065);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(8,1539.917);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(9,1628.024);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(10,1653.271);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(11,1718.249);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(12,1859.231);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(13,1924.684);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(14,2038.423);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(15,2175.346);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(16,2260.185);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(17,2563.141);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(18,2617.068);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(19,2661.534);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(20,2939.123);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(21,2844.407);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(22,3108.892);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(23,3130.864);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(24,3219.445);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(25,3277.316);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(26,3233.424);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(27,3071.549);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(28,3161.537);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(29,3108.013);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinContent(30,3030.899);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(1,37.32019);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(2,38.14395);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(3,36.35258);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(4,37.00519);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(5,37.21162);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(6,37.82918);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(7,37.86588);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(8,37.37025);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(9,38.47071);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(10,39.00476);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(11,39.68754);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(12,41.14206);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(13,42.49156);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(14,43.21258);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(15,44.57424);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(16,45.12873);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(17,48.64935);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(18,49.31389);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(19,49.31617);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(20,51.63399);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(21,50.48721);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(22,53.10989);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(23,53.28707);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(24,54.07773);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(25,54.82805);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(26,54.00349);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(27,52.75947);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(28,53.82287);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(29,52.60978);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetBinError(30,52.55473);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetEntries(86646);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_5,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all__655 = new TH1D("Zmm_2bjet_dPhi_Zb1_all__655","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(1,628);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(2,679);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(3,646);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(4,612);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(5,640);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(6,636);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(7,676);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(8,625);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(9,663);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(10,750);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(11,778);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(12,809);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(13,837);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(14,925);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(15,1032);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(16,1000);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(17,1096);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(18,1125);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(19,1200);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(20,1290);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(21,1320);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(22,1352);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(23,1367);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(24,1379);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(25,1419);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(26,1453);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(27,1478);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(28,1494);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(29,1452);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(30,1466);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(1,25.05993);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(2,26.05763);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(3,25.41653);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(4,24.73863);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(5,25.29822);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(6,25.21904);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(7,26);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(8,25);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(9,25.74879);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(10,27.38613);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(11,27.89265);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(12,28.44293);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(13,28.93095);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(14,30.41381);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(15,32.12476);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(16,31.62278);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(17,33.10589);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(18,33.54102);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(19,34.64102);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(20,35.91657);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(21,36.3318);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(22,36.76955);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(23,36.97296);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(24,37.13489);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(25,37.66962);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(26,38.11824);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(27,38.44477);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(28,38.6523);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(29,38.10512);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(30,38.28838);
   Zmm_2bjet_dPhi_Zb1_all__655->SetEntries(30827);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all__655->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all__655->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1_all__655->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1_all__655->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_all_fx1655[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_all_fy1655[30] = {
   1714.787,
   1763.632,
   1616.515,
   1674.701,
   1682.285,
   1728.399,
   1747.264,
   1751.405,
   1841.095,
   1885.925,
   1974.239,
   2140.068,
   2228.128,
   2371.057,
   2530.774,
   2647.993,
   2973.504,
   3047.875,
   3122.369,
   3396.716,
   3325.102,
   3603.378,
   3623.145,
   3703.293,
   3744.164,
   3704.341,
   3539.572,
   3621.042,
   3538.072,
   3460.566};
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_all_fex1655[30] = {
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
   Double_t Graph_from_Zmm_2bjet_dPhi_Zb1_all_fey1655[30] = {
   37.90988,
   38.67532,
   36.92577,
   37.55736,
   37.68359,
   38.36428,
   38.43278,
   37.9832,
   39.04542,
   39.62954,
   40.40007,
   41.86591,
   43.2673,
   44.05285,
   45.42334,
   46.04512,
   49.52938,
   50.23988,
   50.32112,
   52.58369,
   51.50835,
   54.12734,
   54.28944,
   55.03511,
   55.73259,
   54.93975,
   53.69579,
   54.75405,
   53.46319,
   53.40492};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_dPhi_Zb1_all_fx1655,Graph_from_Zmm_2bjet_dPhi_Zb1_all_fy1655,Graph_from_Zmm_2bjet_dPhi_Zb1_all_fex1655,Graph_from_Zmm_2bjet_dPhi_Zb1_all_fey1655);
   gre->SetName("Graph_from_Zmm_2bjet_dPhi_Zb1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655 = new TH1F("Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->SetMinimum(1357.558);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->SetMaximum(4021.927);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_dPhi_Zb1_all1655);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_5","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_4","ZH","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_dPhi_Zb1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__656 = new TH1D("data_mc_ratio__656","",30,0,3.141593);
   data_mc_ratio__656->SetBinContent(1,0.3662263);
   data_mc_ratio__656->SetBinContent(2,0.3850009);
   data_mc_ratio__656->SetBinContent(3,0.3996251);
   data_mc_ratio__656->SetBinContent(4,0.3654383);
   data_mc_ratio__656->SetBinContent(5,0.380435);
   data_mc_ratio__656->SetBinContent(6,0.3679707);
   data_mc_ratio__656->SetBinContent(7,0.3868906);
   data_mc_ratio__656->SetBinContent(8,0.3568563);
   data_mc_ratio__656->SetBinContent(9,0.3601119);
   data_mc_ratio__656->SetBinContent(10,0.3976828);
   data_mc_ratio__656->SetBinContent(11,0.3940759);
   data_mc_ratio__656->SetBinContent(12,0.3780254);
   data_mc_ratio__656->SetBinContent(13,0.3756516);
   data_mc_ratio__656->SetBinContent(14,0.3901213);
   data_mc_ratio__656->SetBinContent(15,0.4077803);
   data_mc_ratio__656->SetBinContent(16,0.3776445);
   data_mc_ratio__656->SetBinContent(17,0.3685887);
   data_mc_ratio__656->SetBinContent(18,0.3691096);
   data_mc_ratio__656->SetBinContent(19,0.3843236);
   data_mc_ratio__656->SetBinContent(20,0.3797786);
   data_mc_ratio__656->SetBinContent(21,0.3969802);
   data_mc_ratio__656->SetBinContent(22,0.3752035);
   data_mc_ratio__656->SetBinContent(23,0.3772966);
   data_mc_ratio__656->SetBinContent(24,0.3723713);
   data_mc_ratio__656->SetBinContent(25,0.3789898);
   data_mc_ratio__656->SetBinContent(26,0.3922425);
   data_mc_ratio__656->SetBinContent(27,0.4175646);
   data_mc_ratio__656->SetBinContent(28,0.4125884);
   data_mc_ratio__656->SetBinContent(29,0.410393);
   data_mc_ratio__656->SetBinContent(30,0.4236301);
   data_mc_ratio__656->SetBinError(1,0.01461402);
   data_mc_ratio__656->SetBinError(2,0.01477498);
   data_mc_ratio__656->SetBinError(3,0.01572304);
   data_mc_ratio__656->SetBinError(4,0.01477197);
   data_mc_ratio__656->SetBinError(5,0.01503801);
   data_mc_ratio__656->SetBinError(6,0.01459099);
   data_mc_ratio__656->SetBinError(7,0.01488041);
   data_mc_ratio__656->SetBinError(8,0.01427425);
   data_mc_ratio__656->SetBinError(9,0.01398559);
   data_mc_ratio__656->SetBinError(10,0.01452132);
   data_mc_ratio__656->SetBinError(11,0.0141283);
   data_mc_ratio__656->SetBinError(12,0.01329067);
   data_mc_ratio__656->SetBinError(13,0.01298442);
   data_mc_ratio__656->SetBinError(14,0.01282711);
   data_mc_ratio__656->SetBinError(15,0.01269365);
   data_mc_ratio__656->SetBinError(16,0.01194217);
   data_mc_ratio__656->SetBinError(17,0.01113363);
   data_mc_ratio__656->SetBinError(18,0.01100472);
   data_mc_ratio__656->SetBinError(19,0.01109447);
   data_mc_ratio__656->SetBinError(20,0.01057391);
   data_mc_ratio__656->SetBinError(21,0.01092652);
   data_mc_ratio__656->SetBinError(22,0.01020419);
   data_mc_ratio__656->SetBinError(23,0.01020466);
   data_mc_ratio__656->SetBinError(24,0.01002753);
   data_mc_ratio__656->SetBinError(25,0.01006089);
   data_mc_ratio__656->SetBinError(26,0.01029015);
   data_mc_ratio__656->SetBinError(27,0.01086142);
   data_mc_ratio__656->SetBinError(28,0.01067436);
   data_mc_ratio__656->SetBinError(29,0.01077002);
   data_mc_ratio__656->SetBinError(30,0.0110642);
   data_mc_ratio__656->SetMinimum(0.4);
   data_mc_ratio__656->SetMaximum(1.6);
   data_mc_ratio__656->SetEntries(21231.49);
   data_mc_ratio__656->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__656->SetLineColor(ci);
   data_mc_ratio__656->SetLineWidth(2);
   data_mc_ratio__656->SetMarkerStyle(20);
   data_mc_ratio__656->SetMarkerSize(1.2);
   data_mc_ratio__656->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__656->GetXaxis()->SetRange(1,31);
   data_mc_ratio__656->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__656->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__656->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__656->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__656->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__656->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__656->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__656->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__656->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__656->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__656->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__656->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__656->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__656->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1656[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1656[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1656[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1656[30] = {
   0.02210763,
   0.02192935,
   0.02284283,
   0.0224263,
   0.02240024,
   0.02219643,
   0.02199598,
   0.02168727,
   0.02120772,
   0.02101331,
   0.02046362,
   0.01956289,
   0.01941867,
   0.01857941,
   0.01794839,
   0.01738868,
   0.01665691,
   0.01648357,
   0.01611633,
   0.01548074,
   0.01549076,
   0.01502128,
   0.01498407,
   0.01486113,
   0.01488519,
   0.01483118,
   0.01517014,
   0.01512108,
   0.01511082,
   0.01543242};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1656,Graph_from_mc_statistical_error_fy1656,Graph_from_mc_statistical_error_fex1656,Graph_from_mc_statistical_error_fey1656);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1656 = new TH1F("Graph_Graph_from_mc_statistical_error1656","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1656->SetMinimum(0.9725886);
   Graph_Graph_from_mc_statistical_error1656->SetMaximum(1.027411);
   Graph_Graph_from_mc_statistical_error1656->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1656->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1656->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1656);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo);
}
