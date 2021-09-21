#ifndef Plots_cxx
#define Plots_cxx

#include "Obj.cxx"
#include "TString.h"
#include "TH1.h"
#include "TH1D.h"
#include "TMath.h"
#include "TLorentzVector.h"

const unsigned NBIN_PT_JET = 300; 
const float X_PT_JET[2] = {0,300};
const unsigned NBIN_PT_Z = 300;
const float X_PT_Z[2] = {0,300};
const unsigned NBIN_DR_2B = 100;
const float X_DR_2B[2] = {0,10};
const unsigned NBIN_ETA = 300;
const float X_ETA[2] = {-3,3};
const unsigned NBIN_PHI = 120;
const float X_PHI[2] = {-TMath::Pi(),TMath::Pi()};
const unsigned NBIN_DRMIN_Z2B = 100;
const float X_DRMIN_Z2B[2] = {0,10};
const unsigned NBIN_A_Z2B = 100;
const float X_A_Z2B[2] = {0,1};
const unsigned NBIN_M_2B = 500;
const float X_M_2B[2] = {0,500};
const unsigned NBIN_M_Z2B = 600;
const float X_M_Z2B[2] = {0,600};
const unsigned NBIN_DPHI_2B(31);
const float X_DPHI_2B[NBIN_DPHI_2B+1] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,
                                           1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0,
                                           2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,3.0,TMath::Pi()};

class ZbPlots 
{
  
  float DR(float x, float y){return (sqrt(pow(x,2.0) + pow(y,2.0)));}
  float Deta(float x, float y){return (x-y);}
  float Dphi(float x, float y){return (x-y);}
  Double_t const  kPI        = TMath::Pi();
  Double_t const  kTWOPI     = 2.*kPI;
  double DphiC(double x){
    if ((x<=kPI && x>=0) or (x<0 && x> -kPI)) return x;
    else if (x >= kPI) return DphiC (x-kTWOPI);
    else if (x < -kPI) return DphiC(x + kTWOPI);
    return 0;
  }


  public:
    ZbPlots(TString name) : m_name(name) {
      h_pt_lep0 = new TH1D(name + "_pt_lep0","",200,0,200) ;
      h_phi_lep0 = new TH1D(name + "_phi_lep0","",400,-4.0,4.0) ;
      h_eta_lep0 = new TH1D(name + "_eta_lep0","",300,-3.0,3.0) ;
      h_deltaRroot_lep0 = new TH1D(name + "_deltaRroot_lep0","",10000,-0.5,9.5) ;
      h_deltaPhiRoot_lep0 = new TH1D(name + "_deltaPhiRoot_lep0","",800,-4.0,4.0) ;
      h_deltaEtaRoot_lep0 = new TH1D(name + "_deltaEtaRoot_lep0","",800,-4.0,4.0) ;
      h_deltaRAlgo_lep0 = new TH1D(name + "_deltaRAlgo_lep0","",10000,-0.5,9.5) ;
      h_deltaPhiAlgo_lep0 = new TH1D(name + "_deltaPhiAlgo_lep0","",800,-4.0,4.0) ;
      h_deltaEtaAlgo_lep0 = new TH1D(name + "_deltaEtaAlgo_lep0","",800,-4.0,4.0) ;
      h_pt_lep0->Sumw2() ;
      h_phi_lep0->Sumw2() ;
      h_eta_lep0->Sumw2() ;
      h_deltaRroot_lep0->Sumw2() ;
      h_deltaPhiRoot_lep0->Sumw2() ;
      h_deltaEtaRoot_lep0->Sumw2() ;
      h_deltaRAlgo_lep0->Sumw2() ;
      h_deltaPhiAlgo_lep0->Sumw2() ;
      h_deltaEtaAlgo_lep0->Sumw2() ;

      h_pt_lep1 = new TH1D(name + "_pt_lep1","",200,0,200) ;
      h_phi_lep1 = new TH1D(name + "_phi_lep1","",400,-4.0,4.0) ;
      h_eta_lep1 = new TH1D(name + "_eta_lep1","",300,-3.0,3.0) ;
      h_ZMass = new TH1D(name + "_ZMass","",300,0,300) ;
      h_deltaRroot_lep1 = new TH1D(name + "_deltaRroot_lep1","",10000,-0.5,9.5) ;
      h_deltaPhiRoot_lep1 = new TH1D(name + "_deltaPhiRoot_lep1","",800,-4.0,4.0) ;
      h_deltaEtaRoot_lep1 = new TH1D(name + "_deltaEtaRoot_lep1","",800,-4.0,4.0) ;
      h_deltaRAlgo_lep1 = new TH1D(name + "_deltaRAlgo_lep1","",10000,-0.5,9.5) ;
      h_deltaPhiAlgo_lep1 = new TH1D(name + "_deltaPhiAlgo_lep1","",800,-4.0,4.0) ;
      h_deltaEtaAlgo_lep1 = new TH1D(name + "_deltaEtaAlgo_lep1","",800,-4.0,4.0) ;
      
      h_pt_lep1->Sumw2() ;
      h_phi_lep1->Sumw2() ;
      h_eta_lep1->Sumw2() ;
      h_ZMass->Sumw2() ;
      h_deltaRroot_lep1->Sumw2() ;
      h_deltaPhiRoot_lep1->Sumw2() ;
      h_deltaEtaRoot_lep1->Sumw2() ;
      h_deltaRAlgo_lep1->Sumw2() ;
      h_deltaPhiAlgo_lep1->Sumw2() ;
      h_deltaEtaAlgo_lep1->Sumw2() ;

      h_pt_jet = new TH1D(name + "_pt_jet","",300,0,300) ;
      h_phi_jet = new TH1D(name + "_phi_jet","",400,-4.0,4.0) ;
      h_eta_jet = new TH1D(name + "_eta_jet","",300,-3.0,3.0) ;
      h_mSV_jet = new TH1D(name + "_mSV_jet","",100,0,10) ;
      h_Njet = new TH1D(name + "_Njet","",15,0,15) ;
      h_pt_jet->Sumw2() ;
      h_phi_jet->Sumw2() ;
      h_eta_jet->Sumw2() ;
      h_Njet->Sumw2() ;
      h_mSV_jet->Sumw2();

      h_pt_dilepton = new TH1D(name + "_pt_dilepton","",300,0,300) ;
      h_phi_dilepton = new TH1D(name + "_phi_dilepton","",400,-4.0,4.0) ;
      h_eta_dilepton = new TH1D(name + "_eta_dilepton","",300,-3.0,3.0) ;
      h_pt_dilepton->Sumw2() ;
      h_phi_dilepton->Sumw2() ;
      h_eta_dilepton->Sumw2() ;

      h_met = new TH1D(name + "_met","",500,0,500);
      h_met->Sumw2();
      h_met_puppi = new TH1D(name + "_met_puppi","",500,0,500);
      h_met_puppi->Sumw2();
      h_metSig = new TH1D(name + "_metSig", "", 500, 0, 500);
      h_metSig->Sumw2();

    } ;
    
    void Fill(ZObj& Z, JetObj& J, float w=1) {
  
      h_pt_lep0->Fill(Z.m_lep0.m_lvec.Pt(), w) ;
      h_phi_lep0->Fill(Z.m_lep0.m_lvec.Phi(), w) ;
      h_eta_lep0->Fill(Z.m_lep0.m_lvec.Eta(), w) ;
      h_deltaRroot_lep0->Fill(Z.m_lep0.m_lvec.DeltaR(J.m_lvec), w) ;
      h_deltaPhiRoot_lep0 ->Fill(Z.m_lep0.m_lvec.DeltaPhi(J.m_lvec), w) ;
      h_deltaEtaRoot_lep0 ->Fill(Z.m_lep0.m_lvec.Eta()-J.m_lvec.Eta(), w) ;
      h_deltaRAlgo_lep0->Fill(DR(DphiC(Dphi(Z.m_lep0.m_lvec.Phi(), J.m_lvec.Phi())), Deta(Z.m_lep0.m_lvec.Eta(), J.m_lvec.Eta())), w) ;
      h_deltaPhiAlgo_lep0 ->Fill(DphiC(Dphi(Z.m_lep0.m_lvec.Phi(), J.m_lvec.Phi())), w) ;
      h_deltaEtaAlgo_lep0 ->Fill(Deta(Z.m_lep0.m_lvec.Eta(), J.m_lvec.Eta()), w) ;
      
      h_pt_lep1->Fill(Z.m_lep1.m_lvec.Pt(), w) ;
      h_phi_lep1->Fill(Z.m_lep1.m_lvec.Phi(), w) ;
      h_eta_lep1->Fill(Z.m_lep1.m_lvec.Eta(), w) ;
      h_ZMass->Fill(Z.m_lvec.M(),w) ;
      h_deltaRroot_lep1->Fill(Z.m_lep1.m_lvec.DeltaR(J.m_lvec), w) ;
      h_deltaPhiRoot_lep1 ->Fill(Z.m_lep1.m_lvec.DeltaPhi(J.m_lvec), w) ;
      h_deltaEtaRoot_lep1 ->Fill(Z.m_lep1.m_lvec.Eta()-J.m_lvec.Eta(), w) ;
      h_deltaRAlgo_lep1->Fill(DR(DphiC(Dphi(Z.m_lep1.m_lvec.Phi(), J.m_lvec.Phi())), Deta(Z.m_lep0.m_lvec.Eta(), J.m_lvec.Eta())), w) ;
      h_deltaPhiAlgo_lep1 ->Fill(DphiC(Dphi(Z.m_lep1.m_lvec.Phi(), J.m_lvec.Phi())), w) ;
      h_deltaEtaAlgo_lep1 ->Fill(Deta(Z.m_lep1.m_lvec.Eta(), J.m_lvec.Eta()), w) ;
  
      h_pt_jet->Fill(J.m_lvec.Pt(), w) ;
      h_phi_jet->Fill(J.m_lvec.Phi(), w) ;
      h_eta_jet->Fill(J.m_lvec.Eta(), w) ;

      h_pt_dilepton->Fill((Z.m_lep0.m_lvec + Z.m_lep1.m_lvec).Pt(), w);
      h_phi_dilepton->Fill((Z.m_lep0.m_lvec + Z.m_lep1.m_lvec).Phi(), w);
      h_eta_dilepton->Fill((Z.m_lep0.m_lvec + Z.m_lep1.m_lvec).Eta(), w);

      h_mSV_jet->Fill(J.m_mSV, w);

    } ;

    void FillNjet(size_t nJet, float w) {
      h_Njet->Fill(nJet,w) ;
    } ;

    void FillMet(float met, float met_puppi, float w) { 
      h_met->Fill(met,w);
      h_met_puppi->Fill(met_puppi,w);
    };

    void FillMetSig(float metSig, float w) {
      h_metSig->Fill(metSig, w);
    };
    
    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist ;
      
      histolist.push_back(h_pt_lep0) ;
      histolist.push_back(h_phi_lep0) ;
      histolist.push_back(h_eta_lep0) ; 
      histolist.push_back(h_deltaRroot_lep0) ;
      histolist.push_back(h_deltaPhiRoot_lep0) ;
      histolist.push_back(h_deltaEtaRoot_lep0 ) ;
      histolist.push_back(h_deltaRAlgo_lep0) ;
      histolist.push_back(h_deltaPhiAlgo_lep0) ;
      histolist.push_back(h_deltaEtaAlgo_lep0 ) ;
      histolist.push_back(h_pt_lep1) ;
      histolist.push_back(h_phi_lep1) ;
      histolist.push_back(h_eta_lep1) ;
      histolist.push_back(h_ZMass) ;
      histolist.push_back(h_deltaRroot_lep1) ;
      histolist.push_back(h_deltaPhiRoot_lep1) ;
      histolist.push_back(h_deltaEtaRoot_lep1 ) ;
      histolist.push_back(h_deltaRAlgo_lep1) ;
      histolist.push_back(h_deltaPhiAlgo_lep1) ;
      histolist.push_back(h_deltaEtaAlgo_lep1 ) ;
      histolist.push_back(h_pt_jet) ;
      histolist.push_back(h_phi_jet) ;
      histolist.push_back(h_eta_jet) ;   
      histolist.push_back(h_mSV_jet) ;
      histolist.push_back(h_Njet) ;
      histolist.push_back(h_pt_dilepton) ;
      histolist.push_back(h_phi_dilepton) ;
      histolist.push_back(h_eta_dilepton) ;
      histolist.push_back(h_met);
      histolist.push_back(h_met_puppi);
      histolist.push_back(h_metSig);     
 
      return histolist ; 
    }

  protected:
    TString m_name ;
    TH1D* h_pt_lep0 ;
    TH1D* h_phi_lep0 ;
    TH1D* h_eta_lep0 ;
    TH1D* h_deltaRroot_lep0 ;
    TH1D* h_deltaPhiRoot_lep0 ;
    TH1D* h_deltaEtaRoot_lep0 ;
    TH1D* h_deltaRAlgo_lep0 ;
    TH1D* h_deltaPhiAlgo_lep0 ;
    TH1D* h_deltaEtaAlgo_lep0 ;
    TH1D* h_pt_lep1 ;
    TH1D* h_phi_lep1 ;
    TH1D* h_eta_lep1 ;
    TH1D* h_deltaRroot_lep1 ;
    TH1D* h_deltaPhiRoot_lep1 ;
    TH1D* h_deltaEtaRoot_lep1 ;
    TH1D* h_deltaRAlgo_lep1 ;
    TH1D* h_deltaPhiAlgo_lep1 ;
    TH1D* h_deltaEtaAlgo_lep1 ;
    TH1D* h_ZMass ;
    TH1D* h_pt_jet ;
    TH1D* h_phi_jet ;
    TH1D* h_eta_jet ;
    TH1D* h_Njet ;
    TH1D* h_pt_dilepton ;
    TH1D* h_phi_dilepton;
    TH1D* h_eta_dilepton ;
    TH1D* h_mSV_jet;
    TH1D* h_met;
    TH1D* h_metSig;
    TH1D* h_met_puppi;
} ;

class Z2bPlots : public ZbPlots{
  
  public: 
    Z2bPlots(TString name) : ZbPlots(name) {
      h_pt_jet1 = new TH1D(name + "_pt_jet1","",300,0,300) ;
      h_phi_jet1 = new TH1D(name + "_phi_jet1","",400,-4.0,4.0) ;
      h_eta_jet1 = new TH1D(name + "_eta_jet1","",300,-3.0,3.0) ;
      h_mSV_jet1 = new TH1D(name + "_mSV_jet1","",100,0,10) ;
      h_m_2b = new TH1D(name + "_m_2b","",500,0,500) ;
      h_m_Z2b = new TH1D(name + "_m_Z2b","",500,0,500) ;
      h_dR_2b = new TH1D(name + "_dR_2b","",100,0,10) ;
      h_dPhi_2b = new TH1D(name + "_dPhi_2b","",60,0,TMath::Pi()) ;
      h_dR_Zb = new TH1D(name + "_dR_Zb","",100,0,10) ;
      h_dPhi_Zb = new TH1D(name + "_dPhi_Zb","",60,0,TMath::Pi()) ;
      h_dR_Zb1 = new TH1D(name + "_dR_Zb1","",100,0,10) ;
      h_dPhi_Zb1 = new TH1D(name + "_dPhi_Zb1","",60,0,TMath::Pi()) ;
      h_dRmin_Z2b = new TH1D(name + "_dRmin_Z2b","",100,0,10) ;
      h_dRmax_Z2b = new TH1D(name + "_dRmax_Z2b","",100,0,10) ;
      h_A_Z2b = new TH1D(name + "_A_Z2b","",100,0,1) ;
      h_pt_Z2b = new TH1D(name + "_pt_Z2b","",300,0,300) ;

      h_pt_jet1->Sumw2() ;
      h_phi_jet1->Sumw2() ;
      h_eta_jet1->Sumw2() ;
      h_mSV_jet1->Sumw2();
      h_m_2b->Sumw2() ;
      h_m_Z2b->Sumw2() ;
      h_dR_2b->Sumw2() ;
      h_dPhi_2b->Sumw2() ;
      h_dR_Zb->Sumw2() ;
      h_dPhi_Zb->Sumw2() ;
      h_dR_Zb1->Sumw2() ;
      h_dPhi_Zb1->Sumw2() ;
      h_dRmin_Z2b->Sumw2() ;
      h_dRmax_Z2b->Sumw2() ;
      h_A_Z2b->Sumw2() ;
      h_pt_Z2b->Sumw2() ;
    } ;

    void Fill(ZObj& Z, JetObj& J, JetObj& J1, float w=1) {
      ZbPlots::Fill(Z, J, w) ;
      h_pt_jet1->Fill(J1.m_lvec.Pt(), w) ;
      h_eta_jet1->Fill(J1.m_lvec.Eta(), w) ;
      h_phi_jet1->Fill(J1.m_lvec.Phi(), w) ;
      h_mSV_jet1->Fill(J1.m_mSV, w);
      TLorentzVector lv_2b = J.m_lvec + J1.m_lvec ;
      h_m_2b->Fill(lv_2b.M(),w) ;
      TLorentzVector lv_Z2b = lv_2b + Z.m_lvec ;
      h_m_Z2b->Fill(lv_Z2b.M(),w) ;
      h_pt_Z2b->Fill(lv_Z2b.Pt(),w);
      h_dR_2b->Fill(J.m_lvec.DeltaR(J1.m_lvec),w) ;
      h_dPhi_2b->Fill(fabs(J.m_lvec.DeltaPhi(J1.m_lvec)),w) ;
      h_dR_Zb->Fill(Z.m_lvec.DeltaR(J.m_lvec),w) ;
      h_dPhi_Zb->Fill(fabs(Z.m_lvec.DeltaPhi(J.m_lvec)),w) ;
      h_dR_Zb1->Fill(Z.m_lvec.DeltaR(J1.m_lvec),w) ;
      h_dPhi_Zb1->Fill(fabs(Z.m_lvec.DeltaPhi(J1.m_lvec)),w) ;
      float dR = Z.m_lvec.DeltaR(J.m_lvec) ;
      float dR1 = Z.m_lvec.DeltaR(J1.m_lvec) ;
      float dRmin = (dR < dR1) ? dR : dR1 ;
      float dRmax = (dR > dR1) ? dR : dR1 ;
      float A_Z2b = (dRmax - dRmin)/(dRmax + dRmin) ;
      h_dRmin_Z2b->Fill(dRmin, w) ;
      h_dRmax_Z2b->Fill(dRmax, w) ;
      h_A_Z2b->Fill(A_Z2b, w) ;
    } ;

    void FillMet(float met, float met_puppi, float w) { 
      h_met->Fill(met,w);
      h_met_puppi->Fill(met_puppi,w);
    };

    void FillMetSig(float metSig, float w) {
      h_metSig->Fill(metSig, w);
    };

    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist = ZbPlots::returnHisto() ;
      histolist.push_back(h_pt_jet1) ;
      histolist.push_back(h_eta_jet1) ;
      histolist.push_back(h_phi_jet1) ;
      histolist.push_back(h_mSV_jet1) ;
      histolist.push_back(h_m_2b) ;
      histolist.push_back(h_m_Z2b) ;
      histolist.push_back(h_dR_2b) ;
      histolist.push_back(h_dPhi_2b) ;
      histolist.push_back(h_dPhi_Zb) ;
      histolist.push_back(h_dPhi_Zb1) ;
      histolist.push_back(h_dR_Zb) ;
      histolist.push_back(h_dR_Zb1) ;
      histolist.push_back(h_dRmin_Z2b) ;
      histolist.push_back(h_dRmax_Z2b) ;
      histolist.push_back(h_A_Z2b) ;
      histolist.push_back(h_pt_Z2b);
      return histolist ;
    }

  protected:
    TH1D* h_pt_jet1 ;
    TH1D* h_phi_jet1 ;
    TH1D* h_eta_jet1 ;
    TH1D* h_mSV_jet1 ;
    TH1D* h_m_2b ;
    TH1D* h_m_Z2b ;
    TH1D* h_dR_2b ;
    TH1D* h_dPhi_2b ;
    TH1D* h_dPhi_Zb ;
    TH1D* h_dPhi_Zb1 ;
    TH1D* h_dR_Zb ;
    TH1D* h_dR_Zb1 ;
    TH1D* h_dRmin_Z2b ;
    TH1D* h_dRmax_Z2b ;
    TH1D* h_A_Z2b ;
    TH1D* h_pt_Z2b ;
} ;

class ElMu2bPlots {
  
  public: 
    ElMu2bPlots(TString name) {

      h_pt_ele = new TH1D(name + "_pt_ele","",200,0,200) ;
      h_phi_ele = new TH1D(name + "_phi_ele","",NBIN_PHI,X_PHI[0],X_PHI[1]) ;
      h_eta_ele = new TH1D(name + "_eta_ele","",NBIN_ETA,X_ETA[0],X_ETA[1]) ;
      h_pt_muon = new TH1D(name + "_pt_muon","",200,0,200) ;
      h_phi_muon = new TH1D(name + "_phi_muon","",NBIN_PHI,X_PHI[0],X_PHI[1]) ;
      h_eta_muon = new TH1D(name + "_eta_muon","",NBIN_ETA,X_ETA[0],X_ETA[1]) ;
      
      h_Zmass = new TH1D(name + "_ZMass","",300,0,300) ;
    
      h_pt_jet = new TH1D(name + "_pt_jet","",NBIN_PT_JET,X_PT_JET[0],X_PT_JET[1]) ;
      h_phi_jet = new TH1D(name + "_phi_jet","",NBIN_PHI,X_PHI[0],X_PHI[1]) ;
      h_eta_jet = new TH1D(name + "_eta_jet","",NBIN_ETA,X_ETA[0],X_ETA[1]) ;

      h_pt_jet1 = new TH1D(name + "_pt_jet1","",NBIN_PT_JET,X_PT_JET[0],X_PT_JET[1]) ;
      h_phi_jet1 = new TH1D(name + "_phi_jet1","",NBIN_PHI,X_PHI[0],X_PHI[1]) ;
      h_eta_jet1 = new TH1D(name + "_eta_jet1","",NBIN_ETA,X_ETA[0],X_ETA[1]) ;
      
      h_met = new TH1D(name + "_met","",500,0,500);
      
      h_pt_ele->Sumw2();
      h_phi_ele->Sumw2();
      h_eta_ele->Sumw2();
      h_pt_muon->Sumw2();
      h_phi_muon->Sumw2();
      h_eta_muon->Sumw2();
      h_Zmass->Sumw2();
      h_pt_jet->Sumw2() ;
      h_phi_jet->Sumw2() ;
      h_eta_jet->Sumw2() ;
      h_pt_jet1->Sumw2() ;
      h_phi_jet1->Sumw2() ;
      h_eta_jet1->Sumw2() ;
      h_met->Sumw2();
    } ;

    void Fill(LepObj& ele, LepObj& muon, JetObj& J, JetObj& J1, float met, float w=1) {
      h_pt_ele->Fill(ele.m_lvec.Pt(), w) ;
      h_eta_ele->Fill(ele.m_lvec.Eta(), w) ;
      h_phi_ele->Fill(ele.m_lvec.Phi(), w) ;
      h_pt_muon->Fill(muon.m_lvec.Pt(), w) ;
      h_eta_muon->Fill(muon.m_lvec.Eta(), w) ;
      h_phi_muon->Fill(muon.m_lvec.Phi(), w) ;
      h_Zmass->Fill((ele.m_lvec+muon.m_lvec).M(), w) ;
      h_pt_jet->Fill(J.m_lvec.Pt(), w) ;
      h_eta_jet->Fill(J.m_lvec.Eta(), w) ;
      h_phi_jet->Fill(J.m_lvec.Phi(), w) ;
      h_pt_jet1->Fill(J1.m_lvec.Pt(), w) ;
      h_eta_jet1->Fill(J1.m_lvec.Eta(), w) ;
      h_phi_jet1->Fill(J1.m_lvec.Phi(), w) ;
      h_met->Fill(met,w);
    } ;

    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist;
      histolist.push_back(h_pt_ele);
      histolist.push_back(h_phi_ele);
      histolist.push_back(h_eta_ele);
      histolist.push_back(h_pt_muon);
      histolist.push_back(h_phi_muon);
      histolist.push_back(h_eta_muon);
      histolist.push_back(h_Zmass);
      histolist.push_back(h_pt_jet) ;
      histolist.push_back(h_phi_jet) ;
      histolist.push_back(h_eta_jet) ;
      histolist.push_back(h_pt_jet1) ;
      histolist.push_back(h_phi_jet1) ;
      histolist.push_back(h_eta_jet1) ;
      histolist.push_back(h_met) ;

      return histolist ;
    }

  protected:
    TH1D* h_pt_ele;
    TH1D* h_phi_ele;
    TH1D* h_eta_ele;
    TH1D* h_pt_muon;
    TH1D* h_phi_muon;
    TH1D* h_eta_muon;
    TH1D* h_Zmass;
    TH1D* h_pt_jet ;
    TH1D* h_phi_jet ;
    TH1D* h_eta_jet ;
    TH1D* h_pt_jet1 ;
    TH1D* h_phi_jet1 ;
    TH1D* h_eta_jet1 ;
    TH1D* h_met;
} ;

class EffPlots
{
  public:
    EffPlots(TString name, int nBins, float bins[]) : m_name(name) {
      h_pt_deno = new TH1D(name + "_pt_deno","", nBins, bins) ; 
      h_pt_num = new TH1D(name + "_pt_num","", nBins, bins) ;
      h_pt_deno->Sumw2() ;
      h_pt_num->Sumw2() ;
    } ;
    void Fill(float val, TString where, float w=1) {
      if (where == "deno") h_pt_deno->Fill(val, w) ;
      if (where == "num") h_pt_num->Fill(val, w) ;
    } ;
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist ;
      histolist.push_back(h_pt_deno) ;
      histolist.push_back(h_pt_num) ;
      return histolist ;
    } ;
  private:
    TString m_name ;
    TH1D* h_pt_deno ;
    TH1D* h_pt_num ;
} ;


#endif
