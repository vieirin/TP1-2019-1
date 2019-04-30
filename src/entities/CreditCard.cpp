#include <entities/CreditCard.hpp>

CreditCard::CreditCard(std::string num, std::string code,
                       std::string expiration) {
    cardnum              = new CardNumber(num);
    this->code           = new SecureCode(code);
    this->expirationDate = new ValidDate(expiration);
}
