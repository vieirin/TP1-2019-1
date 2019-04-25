#include <entities/User.hpp>

User::User(std::string cpf, std::string pwd) {
    this->cpf = CPF(cpf);
    passwd    = Password(pwd)
}
