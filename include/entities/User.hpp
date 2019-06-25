#ifndef USER_H_
#define USER_H_
#include <domains/CPF.hpp>
#include <domains/Password.hpp>
#include <entities/CreditCard.hpp>
#include <string>

/*User defines system's main entity*/
class User {
  private:
    CPF *cpf;
    Password *passwd;

  public:
    /** Presentation Constructor takes 2 parameter*/
    User(std::string cpfNumber, std::string pwd);
    ~User() {}
    bool checkPassword(std::string password);
    std::string getCPFNumber();
};

#endif // USER_H_
