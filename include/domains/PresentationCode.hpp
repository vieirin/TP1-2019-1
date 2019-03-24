#ifndef _PRESENTATION_CODE_H
#define _PRESENTATION_CODE_H

#include <string>
#include <regex>

class PresentationCode
{
  private:
    std::string code;
  public:
    PresentationCode(std::string presCode);
    void setPresentationCode(std::string presCode);
};



#endif