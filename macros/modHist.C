void modHist(std::string file, std::string hist)
{
  TFile *f = new TFile(file.c_str(), "UPDATE");
        TH1F* h = (TH1F*)f->Get(hist.c_str());
  h->GetXaxis()->SetTitle("M_{ee}");
  h->GetYaxis()->SetTitle("Events/2 GeV");
  h->Rebin();
  h->Draw();

  TF1* func = new TF1("f1", "gaus", 0, 300);
  func->SetParameter(0, 150);
  func->SetParameter(1, 91);
  func->SetParameter(2, 4);
  //func->Draw("SAME");
}
