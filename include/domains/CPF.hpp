#ifndef _CPF_H_
#define _CPF_H_

#include <algorithm>
#include <regex>
#include <stdexcept>
#include <string>

class CPF {
  private:
    std::string cpf;
    bool isFirstDigitValid(std::string);
    bool isSecondDigitValid(std::string);

  public:
    CPF(std::string cpf);
    void setCPF(std::string cpf);
};

#endif