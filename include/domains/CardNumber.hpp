#ifndef _CardNumber_H_
#define _CardNumber_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** CardNumber defines an credit CardNumber instance, due to conflicting names
 * with CreditCardNumber we decided to call the domain just "CardNumber" all
 * CardNumber number must follow credit CardNumber rules or constructor will
 * throw an invalid argument exception
 * */
class CardNumber {
  private:
    std::string number;
    // bool leapYear;

  public:
    CardNumber(std::string number);
    void setCardNumber(std::string number);
    std::string getCardNumber();
};

#endif