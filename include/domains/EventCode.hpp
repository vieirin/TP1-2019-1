#ifndef _EVENTCODE_H_
#define _EVENTCODE_H_

#include <regex>
#include <stdexcept>
#include <string>

/* EventCode is a domain class that defines a code for an Event, code given in
 * ctor must be in format XXX*/
class EventCode {
  private:
    std::string code;

  public:
    EventCode(std::string code);
    void setCode(std::string code);
};

#endif