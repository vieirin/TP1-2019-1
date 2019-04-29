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
    std::string code;
    // bool leapYear;

  public:
    SecureCode(std::string code);
    void setSecureCode(std::string code);
    std::string getSecureCode();
};

#endif