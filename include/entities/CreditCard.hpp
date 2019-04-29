#ifndef _CREDITCARD_H_
#define _CREDITCARD_H_

#include <domains/Card.hpp>

class CreditCard {
  private:
    Card card;

  public:
    CreditCard(std::string cardNumber);
};

#endif