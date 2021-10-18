#define ZbSelection_cxx

#include <math.h>

#include "TList.h"
#include "TParameter.h"
#include "TLorentzVector.h"

#include "ZbSelection.h"
#include "Global.h"
#include "Obj.cxx"

#include <iostream>
#include "TH1.h"

//#include "BTagCalibrationStandalone.h"
//#include "BTagCalibrationStandalone.cpp"

using namespace std;
float PI = M_PI;

//ZbSelection::ZbSelection(bool isData, std::string year) : Selector(isData, year), h_zee_jet(0), h_zmm_jet(0) {}

ZbSelection::~ZbSelection() {
  //if (h_zee_jet) delete h_zee_jet;
  //if (h_zmm_jet) delete h_zmm_jet;
} 

void ZbSelection::SlaveBegin(Reader* r) {
  h_evt = new TH1D("Nevt","",3,-1.5,1.5) ;
  h_zee_jet = new ZbPlots("Zee_jet") ;
  h_zee_bjet = new ZbPlots("Zee_bjet") ;
  h_zee_2bjet = new Z2bPlots("Zee_2bjet") ;
  h_zee_bjet_deepJet = new ZbPlots("Zee_bjetDeepJet") ;
  h_zee_2bjet_deepJet = new Z2bPlots("Zee_2bjetDeepJet") ;
  
  h_zmm_jet = new ZbPlots("Zmm_jet") ;
  h_zmm_bjet = new ZbPlots("Zmm_bjet") ;
  h_zmm_2bjet = new Z2bPlots("Zmm_2bjet") ;
  h_zmm_bjet_deepJet = new ZbPlots("Zmm_bjetDeepJet") ;
  h_zmm_2bjet_deepJet = new Z2bPlots("Zmm_2bjetDeepJet") ;
 
  h_zem_jet = new ZbPlots("Zem_jet");
  h_zem_2bjet_elec = new Z2bPlots("Zem_2bjet_elecTrig");
  h_zem_2bjet_muon = new Z2bPlots("Zem_2bjet_muonTrig");

  h_zee_2bjet_noMassCut = new Z2bPlots("Zee_2bjet_noMassCut");
  h_zmm_2bjet_noMassCut = new Z2bPlots("Zmm_2bjet_noMassCut");
  h_zem_2bjet_elec_noMassCut = new Z2bPlots("Zem_2bjet_elecTrig_noMassCut");
  h_zem_2bjet_muon_noMassCut = new Z2bPlots("Zem_2bjet_muonTrig_noMassCut");

  unsigned nBins = 9 ;
  float bins[10] = {20, 30, 50, 70, 100, 140, 200, 300, 600, 1000} ;
  h_eff_b = new EffPlots("b", nBins, bins) ;
  h_eff_c = new EffPlots("c", nBins, bins) ;
  h_eff_l = new EffPlots("l", nBins, bins) ;
  h_eff_bdj = new EffPlots("bdj", nBins, bins) ;
  h_eff_cdj = new EffPlots("cdj", nBins, bins) ;
  h_eff_ldj = new EffPlots("ldj", nBins, bins) ;

  h_dR_je = new TH1D("h_dR_je","",500,0,5) ;
  h_dR_jm = new TH1D("h_dR_jm","",500,0,5) ;

  h_nMuon = new TH1D("h_nMuon","",10,-0.5,9.5) ;
  h_nEle = new TH1D("h_nEle","",10,-0.5,9.5) ;
  h_nJet = new TH1D("h_nJet","",10,-0.5,9.5) ;

  h_ele_cutflow = new TH1D("ele_cutflow","",10,-0.5,9.5) ;
  h_muon_cutflow = new TH1D("muon_cutflow","",10,-0.5,9.5) ;
  h_Jet_cutflow = new TH1D("Jet_cutflow","",10,-0.5,9.5) ;
  h_zee_cutflow = new TH1D("zee_cutflow","",10,-0.5,9.5) ;
  h_zmm_cutflow = new TH1D("zmm_cutflow","",10,-0.5,9.5) ;

  h_pt_jet_after_ele_rem = new TH1D("jet_pt_after_ele_rem","",200,0.0,200) ;
  
  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;

  std::vector<TH1*> tmp = h_zee_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
 
  tmp = h_zem_jet->returnHisto();
  for(size_t i=0;i<tmp.size();++i) r->GetOutputList()->Add(tmp[i]); 

  tmp = h_zee_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zem_2bjet_elec->returnHisto() ;
  for(size_t i=0;i<tmp.size();++i) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zem_2bjet_muon->returnHisto() ;
  for(size_t i=0; i<tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet_noMassCut->returnHisto() ;
  for (size_t i=0; i < tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_zmm_2bjet_noMassCut->returnHisto() ;
  for (size_t i=0; i < tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_zem_2bjet_elec_noMassCut->returnHisto() ;
  for (size_t i=0; i < tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_zem_2bjet_muon_noMassCut->returnHisto() ;
  for (size_t i=0; i < tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_eff_b->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_c->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_l->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_bdj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_cdj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_ldj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  r->GetOutputList()->Add(h_dR_je) ;
  r->GetOutputList()->Add(h_dR_jm) ;
  //r->GetOutputList()->Add(h_nMuon) ;
  //r->GetOutputList()->Add(h_nEle) ;
  //r->GetOutputList()->Add(h_nJet) ;
  r->GetOutputList()->Add(h_ele_cutflow) ;
  r->GetOutputList()->Add(h_muon_cutflow) ;
  r->GetOutputList()->Add(h_Jet_cutflow) ;
  r->GetOutputList()->Add(h_zee_cutflow) ;
  r->GetOutputList()->Add(h_zmm_cutflow) ;
  r->GetOutputList()->Add(h_pt_jet_after_ele_rem) ;
  
  const Int_t nx = 3, nx1 = 4, yx= 5, nzee=7, nzmm=7;
  const char *ele_cut[nx] = {"all","kine","ID"};
  const char *muon_cut[nx1] = {"all","kine","loose muon ID", "iso"};
  const char *jet_cut[yx] = {"all", "kine", "ele overlap removal","muon overlap removal","loose jet ID"};
  const char *zee_cut[nzee] = {"all event (not cut)","trigger","pass electron  cuts","pass Z mass cuts`", "pass jet cuts", "pass b-jet", "pass 2 b-jets"};
  const char *zmm_cut[nzmm] = {"all event (not cut)","trigger","pass muon  cuts", "pass Z mass cuts", "pass jet cuts", "pass b-jet", "pass 2 b-jets"};
  for (int i=1;i<=nx;i++) h_ele_cutflow->GetXaxis()->SetBinLabel(i+1.5,ele_cut[i-1]);
  for (int i=1;i<=nx1;i++) h_muon_cutflow->GetXaxis()->SetBinLabel(i+1.5,muon_cut[i-1]);
  for (int i=1;i<=yx;i++) h_Jet_cutflow->GetXaxis()->SetBinLabel(i+1.5,jet_cut[i-1]);
  for (int i=1;i<=nzee;i++) h_zee_cutflow->GetXaxis()->SetBinLabel(i+1.5,zee_cut[i-1]);
  for (int i=1;i<=nzmm;i++) h_zmm_cutflow->GetXaxis()->SetBinLabel(i+1.5,zmm_cut[i-1]);

}

void ZbSelection::Process(Reader* r) {
  //Weights
  float genWeight = 1. ;
  float l1preW = 1. ;

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  if (*(r->genWeight) < 0) genWeight = -1. ;
  if (*(r->genWeight) == 0) h_evt->Fill(0) ; 
  if (*(r->genWeight) < 0) h_evt->Fill(-1) ; 
  if (*(r->genWeight) > 0) h_evt->Fill(1) ; 
#endif

#if defined(MC_2016) || defined(MC_2017)
 l1preW = *(r->L1PreFiringWeight_Nom);
#endif

  float evtW = 1. ;
  
  if (!m_isData) evtW *= genWeight*l1preW ;
  
  //=============Get objects============= 
  //electrons
  std::vector<LepObj> eles ;
  std::vector<LepObj> eles_jetOverlap ;
  for (unsigned int i = 0 ; i < *(r->nElectron) ; ++i) {
    
    h_ele_cutflow->Fill(1) ;
    
    LepObj ele((r->Electron_pt)[i],(r->Electron_eta)[i],(r->Electron_phi)[i],(r->Electron_mass)[i],0) ;

    //electron for electron jet overlap removal
    if (ele.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt") && fabs(ele.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta")) {
      int eleId = r->Electron_cutBased[i] ; 
      if (eleId >= 2) {
        eles_jetOverlap.push_back(ele) ;
      }
    }

    if (ele.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || fabs(ele.m_lvec.Eta()) > CUTS.Get<float>("lep_eta")) continue ; //use lower pt threshold to select both leading and subleading lepton
    float etaSC = ele.m_lvec.Eta()-(r->Electron_deltaEtaSC[i]) ;
    if (fabs(etaSC) < 1.566 && fabs(etaSC) > 1.442) continue ;

    h_ele_cutflow->Fill(2)  ;

    int eleId = r->Electron_cutBased[i] ; 
    //if (r-> Electron_mvaFall17V1Iso_WP90[i] <= 0) continue;
    if (eleId < 2) continue; //loose electron id
    h_ele_cutflow->Fill(3)  ;

	  eles.push_back(ele) ;
    //h_nEle->Fill(eles.size()) ;
  }
  
  //muons
  std::vector<LepObj> muons ;
  std::vector<LepObj> muons_jetOverlap ;
  for (unsigned int i = 0 ; i < *(r->nMuon) ; ++i) {

    h_muon_cutflow->Fill(1) ;
    
    LepObj muon((r->Muon_pt)[i],(r->Muon_eta)[i],(r->Muon_phi)[i],(r->Muon_mass)[i],(r->Muon_pfRelIso04_all)[i]) ;
    
    //muon for muon jet overlap removal
    if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt") && fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta")) {
      if (r-> Muon_looseId[i] > 0 && r->Muon_pfRelIso04_all[i] < CUTS.Get<float>("muon_iso")) {
        muons_jetOverlap.push_back(muon) ;
      }
    }
    
    if (muon.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || fabs(muon.m_lvec.Eta()) > CUTS.Get<float>("lep_eta")) continue ; 
    h_muon_cutflow->Fill(2) ;
    
    if (r-> Muon_looseId[i] <= 0) continue;
    h_muon_cutflow->Fill(3) ;
	  
    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue ; 
    h_muon_cutflow->Fill(4) ;

    muons.push_back(muon) ;
    //h_nMuon->Fill(muons.size()) ;
  }
  
  //sv
  std::vector<TLorentzVector> lvec_SVs ;
  for (unsigned i = 0 ; i < *(r->nSV) ; ++i) {
    TLorentzVector tmp ;
    tmp.SetPtEtaPhiM((r->SV_pt)[i], (r->SV_eta)[i], (r->SV_phi)[i], (r->SV_mass)[i]) ;
    lvec_SVs.push_back(tmp);
  }
  
  /////////////////////////////////
  //jets
  /////////////////////////////////
  std::vector<JetObj> jets ;
  std::vector<JetObj> jets_ele_removal ;
  std::vector<JetObj> bjets ;
  std::vector<JetObj> bjets_deepJet ;
  
  float btagM_cut = CUTS.Get<float>("jet_deepCSVM_"+m_year) ;
  float btagDeepJetM_cut = CUTS.Get<float>("jet_deepJetM_"+m_year) ;

  for (unsigned int i = 0 ; i < *(r->nJet) ; ++i) {
    
    h_Jet_cutflow->Fill(1) ;
    
    int jetFlav = -1 ;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jetFlav = (r->Jet_hadronFlavour)[i];
#endif 
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],jetFlav,(r->Jet_btagDeepB)[i],(r->Jet_btagDeepFlavB)[i]) ;
    jet.SetSV(lvec_SVs);

    if (jet.m_lvec.Pt() < CUTS.Get<float>("jet_pt") || fabs(jet.m_lvec.Eta()) > CUTS.Get<float>("jet_eta")) continue ;
    h_Jet_cutflow->Fill(2) ;
    
    if (jet.IsLepton(eles_jetOverlap)) continue ;
    jets_ele_removal.push_back(jet) ;
    h_Jet_cutflow->Fill(3) ;
      
    if (jet.IsLepton(muons_jetOverlap)) continue ;
    h_Jet_cutflow->Fill(4) ;
    
    if (r->Jet_jetId[i] <= 0 ) continue ;
    h_Jet_cutflow->Fill(5) ;
	  
    jets.push_back(jet) ;

    if (jet.m_deepCSV >= btagM_cut) bjets.push_back(jet) ;
    if (jet.m_deepJet >= btagDeepJetM_cut) bjets_deepJet.push_back(jet) ;

  }


  //calculate SF for eletron, muon and btagging
  float eleSF_w(1.);
  float muonSF_w(1.);
  float btag_w(1.);
  if (!m_isData) {
    btag_w = CalBtagWeight(jets) ;
    if (eles.size()>=2) eleSF_w = CalEleSF(eles[0],eles[1]) ;
    if (muons.size()>=2) muonSF_w = CalMuonSF_id_iso(muons[0],muons[1]);
  }
  //if (bjets.size()>=1) std::cout << "\n btagWeight: " << btagWeight ;

  
  bool eleTrig(false) ;
  bool muonTrig(false) ;

#if defined(MC_2016) || defined(DATA_2016) 
  if (*(r->HLT_Ele27_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24) || *(r->HLT_IsoTkMu24)) muonTrig = true ;
#endif

#if defined(MC_2017) || defined(DATA_2017) 
  if (*(r->HLT_Ele35_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu27)) muonTrig = true ;
#endif

#if defined(MC_2018) || defined(DATA_2018) 
  if (*(r->HLT_Ele32_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24)) muonTrig = true ;
#endif

  //TEMP
  //eleTrig = true ;
  ////////////////////////////////////////////////////////////////////////////
  // Zee + jets
  ////////////////////////////////////////////////////////////////////////////
  h_zee_cutflow->Fill(1); //all events (not cut)
  
  //=== Make sure we pass the electron trigger ===
  if (eleTrig) {
    
    //=== Make sure we pass the pT requirements of the leptons ===
    if (eles.size() >= 2 && eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0")
        && eles[1].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1")) {

      // Event weights
      float zee_w = evtW*eleSF_w ;
      float zeeb_w = zee_w*btag_w;
      
      // Reconstruct the Z boson
      ZObj Z(eles[0],eles[1]) ;
    
      //=== Make sure we have at least 2 b-jets ===
      if (bjets.size() >= 2)
      { 
        //=== Enrich tt sample with MET cut ===
        if (*(r->MET_pt) > 80.0) {
          h_zee_2bjet_noMassCut->Fill(Z, bjets[0], bjets[1], zeeb_w);
          h_zee_2bjet_noMassCut->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
          h_zee_2bjet_noMassCut->FillMetSig(*(r->MET_significance), zeeb_w);
        }
      }//end-bjet-cut    

      //=== Make sure we pass the Z mass requirement ===
      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") && 
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) { 

        //=== Make sure we have at least 2 b-jets ===
        if (bjets.size() >=2) {
          
          //=== Enrich tt sample with MET cut ===
          if (*(r->MET_pt) > 80.0) {
            h_zee_2bjet->Fill(Z, bjets[0], bjets[1], zeeb_w);
            h_zee_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
            h_zee_2bjet->FillMetSig(*(r->MET_significance), zeeb_w);
          }
        }//end-bjet-cut

      }//end Z mass
    } //end two electrons
  } //end ele. trigger
  

  ////////////////////////////////////////////////////////////////////////////
  // Zmm + jets
  ////////////////////////////////////////////////////////////////////////////
  h_zmm_cutflow->Fill(1); //all events (not cut)
  //trigger cuts
  if (muonTrig) {
    h_zmm_cutflow->Fill(2); //trigger 

    //=== Make sure the muons pass the pT requirements ===
    if (muons.size() >= 2 && muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0") 
        && muons[1].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1")) {
	    h_zmm_cutflow->Fill(3) ; //pass muon  cuts

      // Weights
      float zmm_w = evtW*muonSF_w ;
      float zmmb_w = zmm_w*btag_w;
      
      // Reconstruct Z boson
      ZObj Z(muons[0],muons[1]) ;
      
      //=== Make sure we have at least 2 b-jets ===
      if (bjets.size() >= 2)
      {
        if (*(r->MET_pt) > 80.0) {
          h_zee_2bjet_noMassCut->Fill(Z, bjets[0], bjets[1], zmmb_w);
          h_zee_2bjet_noMassCut->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
          h_zee_2bjet_noMassCut->FillMetSig(*(r->MET_significance), zmmb_w);
        }
      }//end-bjet-cut
     
      //=== Make sure we meet the Z mass requirement ===
      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") &&
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) { 

        //=== Make sure we have at least 2 b-jets ===
        if (bjets.size() >=2) {

          //=== Enrich tt sample with MET cut ===
          if (*(r->MET_pt) > 80.0) {
            h_zee_2bjet->Fill(Z, bjets[0], bjets[1], zmmb_w);
            h_zee_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
            h_zee_2bjet->FillMetSig(*(r->MET_significance), zmmb_w);
          }
         }//end-bjet-cut

      } //end Z mass cut

    } //end two muons
  } //end trigger

  ////////////////////////////////////////////////////////////////////////////
  // Zem + 2b-jets (electron trigger)
  ////////////////////////////////////////////////////////////////////////////
  
  // We want to be able to have the background estimation for the Z->ee
  // case and we need to use the electron trigger.
  if (eleTrig) {

    // make sure we have at least one of each lepton
    if (eles.size() >= 1 && muons.size() >= 1)
    {
      // make sure the masses meet our cuts
      if (eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0") &&
          muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1"))
      {
        // get the Z mass and store it appropriately
        ZObj Z(eles[0], muons[0]);
        if (bjets.size() >= 2)// && *(r->MET_pt) > 80.0)
        {
          if (*(r->MET_pt) > 80.0) {
            h_zem_2bjet_elec_noMassCut->Fill(Z,bjets[0],bjets[1], 1.);
            h_zem_2bjet_elec_noMassCut->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), 1.);
            h_zem_2bjet_elec_noMassCut->FillMetSig(*(r->MET_significance), 1.);
          }
        }

        if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") &&
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) {

          //=== Make sure we have at least 2 b-jets ===
          if (bjets.size() >=2) {
            if(*(r->MET_pt) > 80.0) {
              h_zem_2bjet_elec->Fill(Z,bjets[0],bjets[1], 1.);
              h_zem_2bjet_elec->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), 1.);
              h_zem_2bjet_elec->FillMetSig(*(r->MET_significance), 1.);
            }
          }
        }//end-zmass
        
      }//end-pt-cut

    }//end-size
  }//end-trig
  
  //////////////////////////////////////////////
  // Zem + 2-bjets (muon trigger)
  //////////////////////////////////////////////

  // We want to be able to have the background estimation for the Z->mm
  // case and we need to use the muon trigger.
  if (muonTrig) {
    // make sure we have at least one of each lepton
    if (eles.size() >= 1 && muons.size() >= 1)
    {
      // make sure the masses meet our cuts
      if (eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1") &&
          muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0"))
      {
        // get the Z mass and store it appropriately
        ZObj Z(eles[0], muons[0]);
        if (bjets.size() >= 2)
        {
          if (*(r->MET_pt) > 80.0) {
          h_zem_2bjet_muon_noMassCut->Fill(Z, bjets[0], bjets[1], 1.0);
          h_zem_2bjet_muon_noMassCut->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), 1.);
          h_zem_2bjet_muon_noMassCut->FillMetSig(*(r->MET_significance), 1.);
          }
          
        }

        if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") &&
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) {
          if (bjets.size() >= 2)
          {
	    if (*(r->MET_pt) > 80.0) {
	      h_zem_2bjet_muon->Fill(Z, bjets[0], bjets[1], 1.0);
	      h_zem_2bjet_muon->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), 1.);
	      h_zem_2bjet_muon->FillMetSig(*(r->MET_significance), 1.);
	    }
          }

        }//end-zMass

      }//end-pt-cut

    }//end-size
  }//end-trig

} //end Process



void ZbSelection::Terminate(TList* mergedList, std::string outFileName) {
  
  TList* aList = new TList() ;
  TParameter<double>* a = new TParameter<double>("lep_eta",CUTS.Get<float>("lep_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt0",CUTS.Get<float>("lep_pt0")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt1",CUTS.Get<float>("lep_pt1")) ;
  aList->Add(a) ;
  a = new TParameter<double>("ZMassL",CUTS.Get<float>("ZMassL")) ;
  aList->Add(a) ;
  a = new TParameter<double>("ZMassH",CUTS.Get<float>("ZMassH")) ;
  aList->Add(a) ;
  a = new TParameter<double>("muon_iso",CUTS.Get<float>("muon_iso")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_jetOverlap_pt",CUTS.Get<float>("lep_jetOverlap_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_jetOverlap_eta",CUTS.Get<float>("lep_jetOverlap_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_pt",CUTS.Get<float>("jet_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_eta",CUTS.Get<float>("jet_eta")) ;
  aList->Add(a) ;
  std::string name = "jet_deepCSVM_" + m_year ;
  a = new TParameter<double>(name.c_str(),CUTS.Get<float>(name)) ;
  aList->Add(a) ;
  name = "jet_deepJetM_" + m_year ;
  a = new TParameter<double>(name.c_str(),CUTS.Get<float>(name)) ;
  aList->Add(a) ;

  
  TFile* f = new TFile(outFileName.c_str(), "UPDATE") ;
  aList->Write("ZbSelectionCuts",TObject::kSingleKey) ;

  f->Close() ;

}

void ZbSelection::Fill_btagEffi(std::vector<JetObj> jets, float w) {

}     
