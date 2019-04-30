#ifndef _CREDITCARD_H_
#define _CREDITCARD_H_

#include <domains/CardNumber.hpp>
#include <domains/SecureCode.hpp>
#include <domains/ValidDate.hpp>

class CreditCard {
  private:
    CardNumber *cardnum;
    SecureCode *code;
    ValidDate *expirationDate;

  public:
    CreditCard(std::string num, std::string code, std::string expiration);
};

#endif