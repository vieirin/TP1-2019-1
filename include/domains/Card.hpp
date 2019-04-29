#ifndef _Card_H_
#define _Card_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

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