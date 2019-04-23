#ifndef _SecureCode_H_
#define _SecureCode_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class SecureCode {
  private:
    std::string SecureCode;
    // bool leapYear;

  public:
    SecureCode(std::string SecureCode);
    void setSecureCode(std::string SecureCode);
    std::string getSecureCode();
};

#endif