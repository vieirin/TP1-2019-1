#ifndef _CreditCard_H_
#define _CreditCard_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class CreditCard {
  private:
    std::string number;
    // bool leapYear;

  public:
    CreditCard(std::string number);
    void setCreditCard(std::string number);
    std::string getCreditCard();
};

#endif