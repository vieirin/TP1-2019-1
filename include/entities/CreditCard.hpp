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
    /** Presentation Constructor takes 6 parameters:
     * string num: the number of the Creditcard
     * string code: SecureCode of the CreditCard
     * sting expiration: date of expiration of the card
     */

    CreditCard(std::string num, std::string code, std::string expiration);
};

#endif