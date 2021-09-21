using namespace std;
void entries() {
    
   TString fmcname="SingleElectron_DATA_2017.root";
   TFile* file = TFile::Open( fmcname );
   TH1D* h1 = (TH1D*) file->Get( "Nevt" );

    for (int i = 0; i<10 ;i++){
        double y = h1->GetBinContent(i);
        std::cout<<y<<std::endl;
    }
    //h1->Draw();
    return ;
  
}

