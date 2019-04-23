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
    std::string CreditCard;
    // bool leapYear;

  public:
    CreditCard(std::string CreditCard);
    void setCreditCard(std::string CreditCard);
    std::string getCreditCard();
};

#endif