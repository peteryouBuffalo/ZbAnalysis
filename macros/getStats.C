void getStats(std::string file)
{
  //--- Get the file --------------------------------------------------------//

  TFile *f = new TFile(file.c_str(), "UPDATE");
  
  //--- Get the main signal histograms & output their contents --------------//

  TH1D* hEE = (TH1D*)f->Get("Zee_ZmassFull_2bjet");
  TH1D* hMM = (TH1D*)f->Get("Zmm_ZmassFull_2bjet");
 
  std::cout << "Statistics from " << file << std::endl;
  std::cout << "--> N_ee = " << hEE->GetEntries() << std::endl;
  std::cout << "--> N_mm = " << hMM->GetEntries() << std::endl;

  //--- Get the background histograms & output their contents ---------------//

  TH1D* hEMU_elec = (TH1D*)f->Get("Zem_2bjet_elecTrig_ZMass");
  TH1D* hEMU_muon = (TH1D*)f->Get("Zem_2bjet_muonTrig_ZMass");

  std::cout << "--> N_emu_elecTrig = " << hEMU_elec->GetEntries() << "\n";
  std::cout << "--> N_emu_muonTrig = " << hEMU_muon->GetEntries() << "\n";
}
