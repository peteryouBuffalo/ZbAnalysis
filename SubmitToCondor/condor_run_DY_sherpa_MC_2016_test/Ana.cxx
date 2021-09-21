#include <fstream>
#include <iostream>
#include <boost/algorithm/string.hpp>

#include "StdArg.hpp"
#include "src/Reader.h" 
#include "src/Processor.h"
#include "src/Selector.h"
#include "src/ZbSelection.h"

#include "src/Global.h"

std::vector<std::string> splitNames(const std::string& files, std::string sep = ",")
{
  std::vector<std::string> fileList;
  for (size_t i=0,n; i <= files.length(); i=n+1)
  {
    n = files.find_first_of(sep,i);
    if (n == string::npos)
      n = files.length();
    std::string tmp = files.substr(i,n-i);
    std::string ttmp;
    for(unsigned int j=0; j<tmp.size(); j++)
    {
      if(tmp[j]==' ' || tmp[j]=='\n') continue;
      ttmp+=tmp[j];
    }
    fileList.push_back(ttmp);
  }
  return fileList;

}

void SetParameters(std::string fName, glob::Parameters& para) {
  std::string line;
  std::ifstream myfile (fName);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      
      //skip comment line start with "//"
      if (line.find("//") != std::string::npos) continue ;
      
      std::vector<std::string> cont ;
      std::vector<std::string> cont_no_space ;
      //cout << line << '\n';
      std::string delim(" ") ;
      boost::split(cont, line, boost::is_any_of(delim));
      //std::cout << "\nCont size: " << cont.size() ;
      for (size_t i = 0 ; i < cont.size() ; ++i) {
        //std::cout << "\n" << cont[i] << cont[i].find(" ") << " " << std::string::npos;
        if (cont[i].find_first_not_of(' ') != std::string::npos) {
          cont_no_space.push_back(cont[i]) ;
        }
      }
      //std::cout << std::endl ;
      //std::cout << "\nCont no splace size: " << cont_no_space.size() ;
      //for (size_t i = 0 ; i < cont_no_space.size() ; ++i) {
      //  std::cout << " " << cont_no_space[i] ;
      //}
      //std::cout << std::endl ;

      if (cont_no_space.size() != 3) {
        std::cout << "\n Need name, value, value type. Will skip this \"" << line << "\"" << std::endl ;
      }
      else {
        std::string name = cont_no_space[0] ;
        if (cont_no_space[2] == "int") para.Set(name, std::stoi(cont[1])) ;
        if (cont_no_space[2] == "float") para.Set(name, std::stof(cont_no_space[1])) ;
      }
    }

    myfile.close();
  }
  
  else cout << "Unable to open file"; 

}



int main(int argc, char *argv[]) {
  
  StdArg arg(argc,argv);
  std::cout << "======================================================================" << std::endl;
  std::cout << "Z+b analysis call:" << std::endl;
  for (int i=0;i<argc;i++) std::cout << argv[i] << " ";
  std::cout << endl;
  std::cout << "======================================================================" << std::endl;
  arg.keys << "-in" << "-filelist" << "-cfg" << "-out" << "-data" << "-year" << "-syst" 
           << "-firstentry" << "-lastentry" ; 
  arg.Process();

  std::vector<std::string> filenames;
  if ( arg.Key("-in")) 
    { 
      string inputfilenames;
      inputfilenames  = arg.Get<string>("-in"); 
      filenames = splitNames(inputfilenames);
    }
  else 
    { 
      string inputfilename;
      if (arg.Key("-filelist"))
	{
	  inputfilename  = arg.Get<string>("-filelist");
	  std::ifstream fList(inputfilename.c_str());
	  if (!fList){
	    cerr << ">>Can't open file " << inputfilename << endl;
	    return 1;
	  }
	  char lineFromFile[10000];
	  while (fList.getline(lineFromFile,10000)){
	    if ( strlen(lineFromFile)>0 ) filenames.push_back(string(lineFromFile));
	  }
	}
    }

  std::string cfgfilename =  "Configs/inputParameters.txt";
  if (arg.Key("-cfg")) cfgfilename = arg.Get<string>("-cfg");
  else std::cout << "\nUsing default configuration " << cfgfilename << std::endl; 
  
  std::string outputfilename =  "output.root";
  if (arg.Key("-out")) outputfilename = arg.Get<string>("-out");
  
  bool isData(false) ;
  
  int intisdata=0;
  int intfirstentry=0;
  long int intlastentry=-1;
  string syst = "none";
  string year = "";

  if (arg.Key("-data")) intisdata = arg.Get<int>("-data");
  if (arg.Key("-year")) year = arg.Get<string>("-year");
  if (arg.Key("-firstentry")) intfirstentry = arg.Get<int>("-firstentry");
  if (arg.Key("-lastentry")) intlastentry = arg.Get<int>("-lastentry");
  if (arg.Key("-syst")) syst = arg.Get<string>("-syst");

  if(intisdata!=0) isData=true;
  
  std::cout << "\n=================================" << std::endl ;
  std::cout << "\nIs data:              " << isData ;
  std::cout << "\nYear:                 " << year ;
  std::cout << "\nFirst and last entry: " << intfirstentry << " " << intlastentry ;
  std::cout << "\nSystematic:           " << syst ;
  
  std::cout << std::endl ;

  SetParameters(cfgfilename,CUTS) ;
  
  std::string chainName("Events") ;
  TChain chain(chainName.c_str()) ;
  for ( std::vector<std::string>::const_iterator it = filenames.begin();
	it != filenames.end(); it++) 
    {
      cout << "reading file " << it->c_str() << endl;
      int retcode = chain.Add(it->c_str(),-1);
      if ( retcode == 0 ) {
	throw std::invalid_argument("the file "+*it+" does not exist of does not contain the tree named "+chainName);
      }
    }

  //chain.Add("/uscms/home/duong/Scratch/test/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7_18644D51-7512-5642-B506-C8B6BA051047.root") ;
  
  std::cout << "\n Number of events: " << chain.GetEntries() ;
  if (intlastentry == -1) intlastentry = chain.GetEntries() ;
  
  Processor ana ;
  ana.setOutPutFileName(outputfilename) ;
  ana.SetDataInfo(isData,year) ;
  
  //collection of all selectors
  std::vector<Selector*> sels;
  
  //Selection for Zb
  ZbSelection sel ;

  std::string fName_btagSF;
  std::string fName_eleRecSF;
  std::string fName_eleIDSF;
  std::vector<std::string> fName_muonTrig ;
  std::vector<std::string> fName_muonID ;
  std::vector<std::string> fName_muonIso ;
  std::vector<float> lw_muonTrig; //weights estimated from luminosity fraction used to calculate the scale factors from different run periods
  std::vector<float> lw_muonID;
  std::vector<float> lw_muonIso;
#ifdef MC_2016
  fName_btagSF = "CalibData/DeepJet_2016LegacySF_WP_V1.csv" ;
  fName_eleRecSF = "CalibData/EGM2D_BtoH_GT20GeV_RecoSF_Legacy2016.root" ;
  fName_eleIDSF = "CalibData/2016LegacyReReco_ElectronLoose_Fall17V2.root" ;
  fName_muonTrig.push_back("CalibData/EfficienciesAndSF_RunBtoF_trigger_2016_muon.root");
  fName_muonTrig.push_back("CalibData/EfficienciesAndSF_Period4_trigger_mu2016_muon.root");
  lw_muonTrig.push_back(0.5);//FIXME
  lw_muonTrig.push_back(0.5);//FIXME
  fName_muonID.push_back("CalibData/RunBCDEF_SF_ID_2016_muon.root");
  fName_muonID.push_back("CalibData/RunGH_SF_ID_2016_muon.root");
  lw_muonID.push_back(0.5);
  lw_muonID.push_back(0.5);
  fName_muonIso.push_back("CalibData/RunBCDEF_SF_ISO_2016_muon.root");
  fName_muonIso.push_back("CalibData/RunGH_SF_ISO_2016_muon.root");
  lw_muonIso.push_back(0.5);
  lw_muonIso.push_back(0.5);
#endif
#ifdef MC_2017
  fName_btagSF = "CalibData/DeepCSV_94XSF_WP_V4_B_F.csv";
  fName_eleRecSF = "CalibData/egammaEffi.txt_EGM2D_runBCDEF_passingRECO_2017.root";
  fName_eleIDSF = "CalibData/2017_ElectronLoose.root";
  fName_muonTrig.push_back("CalibData/EfficienciesAndSF_RunBtoF_Nov17Nov2017_trigger_muon.root");
  lw_muonTrig.push_back(1.);
  fName_muonID.push_back("CalibData/RunBCDEF_SF_ID_syst_2017_muon.root");
  lw_muonID.push_back(1.);
  fName_muonIso.push_back("CalibData/RunBCDEF_SF_ISO_syst_2017_muon.root");
  lw_muonIso.push_back(1.);
#endif
#ifdef MC_2018
  fName_btagSF = "CalibData/DeepCSV_102XSF_WP_V1.csv";
  fName_eleRecSF = "CalibData/egammaEffi.txt_EGM2D_updatedAll_2018.root";
  fName_eleIDSF = "CalibData/2018_ElectronLoose.root";
  fName_muonTrig.push_back("CalibData/EfficienciesAndSF_2018Data_BeforeMuonHLTUpdate_trigger_muon.root");
  fName_muonTrig.push_back("CalibData/EfficienciesAndSF_2018Data_AfterMuonHLTUpdate_trigger_muon.root");
  lw_muonTrig.push_back(0.5);//FIXME
  lw_muonTrig.push_back(0.5);//FIXME 
  fName_muonID.push_back("CalibData/RunABCD_SF_ID_2018_muon.root");
  lw_muonID.push_back(1.);
  fName_muonIso.push_back("CalibData/RunABCD_SF_ISO_2018_muon.root");
  lw_muonIso.push_back(1.);
#endif
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  sel.SetBtagCalib(fName_btagSF,"DeepJet","CalibData/eff.root");
  sel.SetEleEffCorr(fName_eleRecSF,fName_eleIDSF);
  sel.SetMuonEffCorr(fName_muonTrig,fName_muonID,fName_muonIso,lw_muonTrig,lw_muonID,lw_muonIso);
#endif

  sels.push_back(&sel) ;
  
  //add all selectors to processors
  for (std::vector<Selector*>::iterator it = sels.begin() ; it != sels.end() ; it++) ana.addSelector(*it) ;
  
  chain.Process(&ana,"",intlastentry,intfirstentry) ;
  
  return 0 ;
}
