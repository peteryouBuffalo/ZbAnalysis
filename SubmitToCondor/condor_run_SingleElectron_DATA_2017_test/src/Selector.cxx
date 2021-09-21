#include "Selector.h"
#include "Global.h"
#include "math.h"

void Selector::Process(Reader* r) { 
} 

void Selector::SetBtagCalib(std::string csvFileName, std::string taggerName, std::string effFileName) {
  m_btagCal = BTagCalibration(taggerName, csvFileName) ;
  m_btagReader = BTagCalibrationReader(BTagEntry::OP_MEDIUM,  // operating point
                                       "central",            //central sys type
                                       {"up","down"});       //other sys type
  
  m_btagReader.load(m_btagCal,     // calibration instance
            BTagEntry::FLAV_B,    // btag flavour
            "comb") ;             // measurement type
  m_btagReader.load(m_btagCal,  
            BTagEntry::FLAV_C,    
            "comb") ;            
  m_btagReader.load(m_btagCal, 
            BTagEntry::FLAV_UDSG,
            "incl") ;           
  
  m_btagEffFile = new TFile(effFileName.c_str(),"READ") ;

}

void Selector::SetEleEffCorr(std::string fName_recSF, std::string fName_IDSF) {
  TFile* fRec = new TFile(fName_recSF.c_str(),"READ") ;
  TFile* fID = new TFile(fName_IDSF.c_str(),"READ") ;
  m_hSF_eleRec = (TH2F*)fRec->Get("EGamma_SF2D") ;
  m_hSF_eleID = (TH2F*)fID->Get("EGamma_SF2D") ;
}

//multiple inputs to deal with different SFs for different run periods 
void Selector::SetMuonEffCorr(std::vector<std::string> fName_trig, std::vector<std::string> fName_ID, std::vector<std::string> fName_iso, std::vector<float> w_trig, std::vector<float> w_ID, std::vector<float> w_iso) {
  std::string trigN("IsoMu24_OR_IsoTkMu24_PtEtaBins/abseta_pt_ratio");
  std::string idN("NUM_LooseID_DEN_genTracks_eta_pt_syst");
  std::string isoN("NUM_LooseRelIso_DEN_LooseID_eta_pt_syst");
  std::string isoN1("NUM_LooseRelIso_DEN_LooseID_eta_pt");//FIXME: only stat available for GH for 2016 legacy
#if defined(MC_2017)
  trigN = "IsoMu27_PtEtaBins/abseta_pt_ratio";
  idN = "NUM_LooseID_DEN_genTracks_pt_abseta_syst";
  isoN = "NUM_LooseRelIso_DEN_LooseID_pt_abseta_syst";
#endif
#if defined(MC_2018)
  trigN = "IsoMu24_PtEtaBins/abseta_pt_ratio";
  idN = "NUM_LooseID_DEN_TrackerMuons_pt_abseta_syst";
  isoN = "NUM_LooseRelIso_DEN_LooseID_pt_abseta_syst";
#endif
  for(std::string fN : fName_trig) {
    TFile* f = new TFile(fN.c_str(),"READ");
    m_hSF_muonTrig.push_back((TH2F*)f->Get(trigN.c_str()));
    m_hSF_muonTrig.back()->SetDirectory(0);
  }
  for(std::string fN : fName_ID) {
    TFile* f = new TFile(fN.c_str(),"READ");
    m_hSF_muonID.push_back((TH2F*)f->Get(idN.c_str()));
    m_hSF_muonID.back()->SetDirectory(0);
  }
  for(std::string fN : fName_iso) {
    TFile* f = new TFile(fN.c_str(),"READ");
    if (fN.find("RunGH") != std::string::npos) {
      m_hSF_muonIso.push_back((TH2F*)f->Get(isoN1.c_str()));
    }
    else {
      m_hSF_muonIso.push_back((TH2F*)f->Get(isoN.c_str()));
    }
    m_hSF_muonIso.back()->SetDirectory(0);
  }
  for(float w : w_trig) m_muonTrig_w.push_back(w) ;
  for(float w : w_iso) m_muonIso_w.push_back(w) ;
  for(float w : w_ID) m_muonID_w.push_back(w) ;
}

float Selector::CalBtagWeight(std::vector<JetObj>& jets, std::string uncType) {
  //get calibration file
  TH1D* hEff_b = (TH1D*)m_btagEffFile->Get(("b_pt_eff_"+m_year).c_str());
  TH1D* hEff_c = (TH1D*)m_btagEffFile->Get(("c_pt_eff_"+m_year).c_str());
  TH1D* hEff_l = (TH1D*)m_btagEffFile->Get(("l_pt_eff_"+m_year).c_str());
  float pMC(1.);
  float pData(1.);
  for (std::vector<JetObj>::iterator jetIt = jets.begin() ; jetIt != jets.end() ; ++jetIt) {
    float jetPt = (jetIt->m_lvec).Pt() ;
    int iBin = hEff_b->FindFixBin(jetPt) ; //return overflow bin if jetPt > max pt range
    unsigned flav = jetIt->m_flav ;
    float eff = hEff_l->GetBinContent(iBin); //jet with pt > max pt range of efficinecy histogram will get the eff of overflow bins
    if (eff <= 0) std::cout << "\n Warning: Efficiency <=0, " << eff ; //we do not want eff = 0 
    BTagEntry::JetFlavor flavCode(BTagEntry::FLAV_UDSG) ;
    if (flav == 5) {
      eff = hEff_b->GetBinContent(iBin);
      flavCode = BTagEntry::FLAV_B;
    }
    if (flav == 4) {
      eff = hEff_c->GetBinContent(iBin);
      flavCode = BTagEntry::FLAV_C;
    }
    
    float sf = m_btagReader.eval_auto_bounds(
                 uncType, 
                 flavCode, 
                 fabs((jetIt->m_lvec).Eta()), // absolute value of eta
                 jetPt
    );
    //pass b-tagging requirement
    if (jetIt->m_deepCSV > CUTS.Get<float>("jet_deepCSVM_" + m_year)) {
      pData = pData*sf*eff ;
      pMC = pMC*eff ;
    }
    else {
      pData = pData*(1-sf*eff) ;
      pMC = pMC*(1-eff) ;
    }
  } //end loop over jet 
  return pData/pMC ;
}

std::vector<float> Selector::GetSF_2DHist(float x, float y, std::vector<TH2F*> h, std::vector<float> w) {
  std::vector<float> o{1,0};
  unsigned nX = h[0]->GetNbinsX() ;
  unsigned nY = h[0]->GetNbinsY() ;
  unsigned iX = h[0]->GetXaxis()->FindFixBin(x) ;
  unsigned iY = h[0]->GetYaxis()->FindFixBin(y) ;
  if (iX == 0 || iY == 0 || iX > nX || iY > nY) { //underflow and overflow bins
    return o ;
  }
  float sf(0) ;
  float e_sf(0) ;
  for (unsigned i = 0 ; i < h.size() ; ++i) {
    sf += w[i]*h[i]->GetBinContent(iX,iY);
    e_sf += w[i]*w[i]*h[i]->GetBinError(iX,iY)*h[i]->GetBinError(iX,iY);
  }
  e_sf = sqrt(e_sf) ;
  o.push_back(sf) ;
  o.push_back(e_sf) ;
  return o ;
}

float Selector::CalEleSF(LepObj e1, LepObj e2) {
  std::vector<TH2F*> h{m_hSF_eleRec};
  std::vector<float> w{1.0};
  float sf = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w)[0] ; 
  sf *= GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(),h,w)[0] ;
  h[0] = m_hSF_eleID;
  sf *= GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w)[0] ; 
  sf *= GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(),h,w)[0] ; 
  return sf ; 
}

float Selector::CalMuonSF_id_iso(LepObj e1, LepObj e2) {
  //id SFs
  float sf(1.0) ;
#ifdef MC_2016
  sf *= GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonID, m_muonID_w)[0];
  sf *= GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(), m_hSF_muonID, m_muonID_w)[0];
  sf *= GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonIso, m_muonIso_w)[0];
  sf *= GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(), m_hSF_muonIso, m_muonIso_w)[0];
#endif
#if defined(MC_2017) || defined(MC_2018)
  sf *= GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonID, m_muonID_w)[0];
  sf *= GetSF_2DHist(e2.m_lvec.Pt(),fabs(e2.m_lvec.Eta()), m_hSF_muonID, m_muonID_w)[0];
  sf *= GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonIso, m_muonIso_w)[0];
  sf *= GetSF_2DHist(e2.m_lvec.Pt(),fabs(e2.m_lvec.Eta()), m_hSF_muonIso, m_muonIso_w)[0];
#endif
  return sf ;

}
