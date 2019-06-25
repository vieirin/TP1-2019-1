#include <domains/CPF.hpp>
#include <entities/User.hpp>

User::User(std::string cpfNumber, std::string pwd) {
    this->cpf    = new CPF(cpfNumber);
    this->passwd = new Password(pwd);
}

bool User::checkPassword(std::string password) {
    return password == this->passwd->getPassword();
}

std::string User::getCPFNumber() { return cpf->getCPF(); }
