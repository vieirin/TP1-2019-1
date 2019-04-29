#ifndef _Card_H_
#define _Card_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** Card defines an credit card instance, due to conflicting names with
 * CreditCard we decided to call the domain just "card" all card number must
 * follow credit card rules or constructor will throw an invalid argument
 * exception
 * */
class Card {
  private:
    std::string number;
    // bool leapYear;

  public:
    Card(std::string number);
    void setCard(std::string number);
    std::string getCard();
};

#endif