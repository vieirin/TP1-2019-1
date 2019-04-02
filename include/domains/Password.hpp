#ifndef _Password_H_
#define _Password_H_

#include <string>
#include <regex>
#include <stdexcept>

class Password
{
  private:
    std::string password;

  public:
    Password(std::string passwd);
    std::string getPassword();
};

#endif