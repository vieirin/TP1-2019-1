#include <domains/CPF.hpp>
#include <entities/User.hpp>

User::User(std::string cpfNumber, std::string pwd) {
    cpf    = new CPF(cpfNumber);
    passwd = new Password(pwd);
}
