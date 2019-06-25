#include <domains/CPF.hpp>
#include <entities/User.hpp>

User::User(std::string cpfNumber, std::string pwd, std::shared_ptr<CreditCard> creditcard) {
    this->cpf    = new CPF(cpfNumber);
    this->passwd = new Password(pwd);
    this->credit_card = creditcard;
}

bool User::checkPassword(std::string password) {
    return password == this->passwd->getPassword();
}

std::string User::getCPFNumber() { return cpf->getCPF(); }
