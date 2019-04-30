#ifndef _SecurityCode_H_
#define _SecurityCode_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** Security code defines a type for card's security code, checking its validity
 * */
class SecurityCode {
  private:
    std::string code;
    // bool leapYear;

  public:
    SecurityCode(std::string code);
    void setSecurityCode(std::string code);
    std::string getSecurityCode();
};

#endif