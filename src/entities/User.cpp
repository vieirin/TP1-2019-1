#include <entities/User.hpp>

User::User(std::string cpfNumber, std::string pwd) {
    cpf    = CPF(cpfNumber);
    passwd = Password(pwd)
}
