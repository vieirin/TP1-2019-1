#ifndef _USER_H_
#define _USER_H_
#include <domains/CPF.hpp>
#include <domains/Password.hpp>
#include <string>

/*User defines system's main entity*/
class User {
  private:
    CPF *cpf;
    Password *passwd;

  public:
    User(std::string cpfNumber, std::string pwd);
};

#endif