#ifndef Selector_h
#define Selector_h

#include "Reader.h"
#include "Obj.cxx"
#include "TLorentzVector.h"

#include "BTagCalibrationStandalone.h"
//#include "BTagCalibrationStandalone.cpp"

#include "TFile.h"
#include "TH2F.h"

//Base class for all selectors
class Selector
{
  public:
    //const member needs to be initialized in intialisation list meaning m_isData(isData)
    Selector() {} ;
    virtual ~Selector() {} ;
    // These methods are called at the corresponding stage of processing of TSelector
  virtual void SlaveBegin(Reader* r) {} ;
  virtual void Process(Reader* r) ;
  virtual void SlaveTerminate(Reader* r) {} ;
  virtual void Terminate(TList* mergedList, std::string outFileName) {} ; //outFileName is used to write parameter, like cuts, to output file
  virtual void SetDataInfo(bool isData, std::string year) {m_isData = isData ; m_year = year ; } ;
  
  virtual void SetBtagCalib(std::string csvFileName, std::string taggerName, std::string effFileName) ;
  virtual float CalBtagWeight(std::vector<JetObj>& jets, std::string uncType="central") ;
  virtual void SetEleEffCorr(std::string fName_recSF, std::string fName_IDSF) ;
  virtual void SetMuonEffCorr(std::vector<std::string> fName_trig, std::vector<std::string> fName_ID, std::vector<std::string> fName_iso, std::vector<float> w_trig, std::vector<float> w_ID, std::vector<float> w_iso) ;
  virtual std::vector<float> GetSF_2DHist(float x, float y, std::vector<TH2F*> h, std::vector<float> w);
  virtual float CalEleSF(LepObj e1, LepObj e2);
  virtual float CalMuonSF_id_iso(LepObj e1, LepObj e2);


  bool m_isData ;
  std::string m_year ;

  //for btagging SFs
  TFile* m_btagEffFile ;
  BTagCalibration m_btagCal ;
  BTagCalibrationReader m_btagReader ;

  //for electron SFs
  TH2F* m_hSF_eleRec ;
  TH2F* m_hSF_eleID ;
  
  std::vector<TH2F*> m_hSF_muonTrig ;
  std::vector<TH2F*> m_hSF_muonIso ;
  std::vector<TH2F*> m_hSF_muonID ;
  std::vector<float> m_muonTrig_w ;
  std::vector<float> m_muonIso_w ;
  std::vector<float> m_muonID_w ;

};
#endif
