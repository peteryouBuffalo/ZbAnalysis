void getHist(std::string file, std::string hist)
{
	TFile *f = new TFile(file.c_str(), "UPDATE");
	TH1F* h = (TH1F*)f->Get(hist.c_str());
	
	h->Draw();
}
