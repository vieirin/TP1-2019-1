#ifndef _Password_H_
#define _Password_H_

#include <regex>
#include <stdexcept>
#include <string>

/** Password is a domain class that defines rules for a User password, it must
 * be an string with length 6 contaning non-repeated letters, Capital letters,
 * lowercase letters and a digit
 */
class Password {
  private:
    std::string password;

  public:
    Password(std::string passwd);
    void setPassword(std::string passwd);
    std::string getPassword();
};

#endif