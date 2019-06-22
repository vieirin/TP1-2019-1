#ifndef TicketCode_H_
#define TicketCode_H_

#include <regex>
#include <stdexcept>
#include <string>

/** TicketCode defines a code for a Ticket code must in form DDDD */
class TicketCode {
  private:
    std::string code;

  public:
    TicketCode(std::string passCode);
    void setCode(std::string passCode);
    std::string getCode();
};

#endif