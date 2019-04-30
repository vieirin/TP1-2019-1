#ifndef _CREDITCARD_H_
#define _CREDITCARD_H_

#include <domains/CardNumber.hpp>
#include <domains/SecurityCode.hpp>
#include <domains/ValidDate.hpp>

class CreditCard {
  private:
    CardNumber *cardnum;
    SecurityCode *code;
    ValidDate *expirationDate;

  public:
    CreditCard(std::string num, std::string code, std::string expiration);
};

#endif