#ifndef _CREDITCARD_H_
#define _CREDITCARD_H_

#include <domains/CardNumber.hpp>
#include <domains/SecureCode.hpp>
#include <domains/ValidDate.hpp>

class CreditCard {
  private:
    CardNumber cardNumber;
    SecureCode code;
    ValidDate date;

  public:
    CreditCard(std::string cardNumber, std::string code, std::string date);
};

#endif