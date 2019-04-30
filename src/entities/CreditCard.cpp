#include <entities/CreditCard.hpp>

CreditCard::CreditCard(std::string cardNumber, std::string code,
                       std::string date) {
    this->cardNumber = CardNumber(cardNumber);
    this->code       = SecureCode(code);
    this->date       = ValidDate(date);
}