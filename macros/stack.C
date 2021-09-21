  //-- fit method #2 - compare the total events -----------------------------//

  float ct2 = N_ll_side / (1.0 * N_emu_side);
  std::cout << "(method #2) comparing total events: c_t = " << ct2 << "\n";

  //-- fit method #3 - compare the number of events in each region ----------//

  float ct_low = N_ll_low / (1.0 * N_emu_low);
  float ct_high = N_ll_high / (1.0 * N_emu_high);
  std::cout << "\ncomparing total low side: c_t = " << ct_low << "\n";
  std::cout << "comparing total high side: c_t = " << ct_high << "\n";
  
  float ct3 = (ct_low + ct_high)/2;
  float err3 = abs(ct_low - ct_high)/sqrt(2);
  std::cout << "(method #3) average of these: c_t = " << ct3 << " +/- " << err3 << "\n";

  //-- fit method #4 - average per bin --------------------------------------//
  int n = nHist2->GetNbinsX();
  float binRats[n];
  float sum = 0.f;

  for (int i = 0; i < n; ++i)
  {
    if (bins[i] == binH) continue;
    int size1 = nHist1->GetBinContent(i);
    int size2 = nHist2->GetBinContent(i);
    float val = size1/(size2*1.0);
    binRats[i] = val;
    sum += val;
  }

  float avg = sum/n; float temp = 0.f;
  for (int i = 0; i < n; ++i)
  {
    if (bins[i] == binH) continue;
    temp += (binRats[i]-avg)*(binRats[i]-avg);
  }
  float stdev = sqrt(temp/(n-2)); // -2 b/c empty bin in the middle ignored
  float err = stdev/sqrt(n-1);    // -1 b/c --"--

  float ct4 = avg;
  std::cout << "(method #4) averaged per bin: c_t = " << ct4 << " +/- " << err << "\n\n";

