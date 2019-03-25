#ifndef _PassportCode_H_
#define _PassportCode_H_

#include <string>

class PassportCode
{
private:
    std::string code;
public:
    PassportCode(std::string passCode);
    ~PassportCode();
};


#endif