#ifndef _EVENTCODE_H_
#define _EVENTCODE_H_

#include <string>
#include <stdexcept>
#include <regex>

class EventCode
{
  private:
    std::string code;
  public:
    EventCode(std::string code);
    void setCode(std::string code);
};




#endif