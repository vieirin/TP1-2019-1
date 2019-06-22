#ifndef _CPF_H_
#define _CPF_H_

#include <algorithm>
#include <regex>
#include <stdexcept>
#include <string>

/** CPF is used to User identification. It must follow CPF rules, such as format
 * ("XXX.XXX.XXX-XX") and verification digits rules
 */
class CPF {
  private:
    std::string cpf;
    bool isFirstDigitValid(std::string);
    bool isSecondDigitValid(std::string);

  public:
    CPF(std::string cpf);
    void setCPF(std::string cpf);
    std::string getCPF();
};

#endif