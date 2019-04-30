#ifndef _TICKET_H_
#define _TICKET_H_
#include <domains/TicketCode.hpp>
#include <string>

/*Ticket refers to the tickets instances for an Event */
class Ticket {
  private:
    TicketCode *code;

  public:
    /** Presentation Constructor takes 1 parameter*/

    Ticket(std::string ticketCode);
};

#endif