// Round method ///////////////////////////////////////////////////////////////
std::string round(float val, int n)
{
  std::string num_text = std::to_string(val);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  return rounded;
}

// toSci method ///////////////////////////////////////////////////////////////
std::string toSci(float val, int n)
{
  int exp = (int)floor(log10(val));
  float value = val * pow(10,-1*exp);
  std::string num_text = std::to_string(value);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  std::string finalStr = rounded + "e" + std::to_string(exp);
  return finalStr;
}

