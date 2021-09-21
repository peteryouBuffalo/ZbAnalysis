void chain(){
TChain chain("Events") ;
std::string filename = "SingleMuon_DATA_2016.txt";
std::ifstream inputfilenamestream( filename.c_str() );
if (!inputfilenamestream.is_open()) {
     std::cout<<"Sorry, inputfilenamestream could not be opened!" << std::endl;
      exit(1);
}else{

      std::string rootfile;
      while (getline(inputfilenamestream,rootfile)){
        TString rootfile2(rootfile);
        chain.Add(rootfile2);
      }
   }

 int u = chain.GetEntries();
std::cout<< " # of events = "<< u <<std::endl;
return ;

}
