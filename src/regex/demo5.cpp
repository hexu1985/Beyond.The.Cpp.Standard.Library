#include <iostream>
#include <string>
#include "boost/regex.hpp"

int main() {
  boost::regex reg("(.*)(\\d{2})");
  boost::cmatch m;
  const char* text = "Note that I'm 31 years old, not 32.";
  if(boost::regex_search(text,m, reg)) {
    if (m[1].matched)
      std::cout << "(.*) matched: " << m[1].str() << '\n';
    if (m[2].matched)
      std::cout << "Found the age: " << m[2] << '\n';
  }
}

