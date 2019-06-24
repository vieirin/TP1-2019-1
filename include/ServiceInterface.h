#ifndef _ServiceInterface_H_
#define _ServiceInterface_H_

#include <domains/ActualDate.hpp>
#include <domains/AgeGroup.hpp>
#include <domains/Availability.hpp>
#include <domains/CPF.hpp>
#include <domains/CardNumber.hpp>
#include <domains/EventCode.hpp>
#include <domains/EventName.hpp>
#include <domains/PassportCode.hpp>
#include <domains/Password.hpp>
#include <domains/PresentationCode.hpp>
#include <domains/Price.hpp>
#include <domains/Room.hpp>
#include <domains/SecureCode.hpp>
#include <domains/State.hpp>
#include <domains/TicketCode.hpp>
#include <domains/ValidDate.hpp>

#include <entities/CreditCard.hpp>
#include <entities/Event.hpp>
#include <entities/Presentation.hpp>
#include <entities/Ticket.hpp>
#include <entities/User.hpp>

class ISAuthenticate {
  public:
    virtual bool Authenticate(User user) = 0;
}

class ISUser {
  public:
    virtual bool Delete(User user)                  = 0;
    virtual bool SignUp(User user, CreditCard card) = 0;
    virtual bool Search(CPF cpf)                    = 0;
    virtual bool SignIn(User user)                  = 0;
}
// Classe Evento dependento
class ISEvent {
  public:
    virtual bool CreateEvent(Event event,
                             list<Presentation> NumberofPresentations)    = 0;
    virtual bool GetEventsFromTime(lista<Event> event, StartTime inicio,
                                   StartTime fim, City city, State state) = 0;
    virtual bool ModifyEvent(EventCode code)                              = 0;
    virtual bool DeleteEvent(EventCode code)                              = 0;
    virtual bool showMyEvents(list<EventCode> code)                       = 0;
}

class ISSells {
  public:
    virtual bool buyTickets(PresentationCode code, int numTickets) = 0;
    virtual bool
    sellsbyCPF(PresentationCode code,
               list<pair<PresentationCode, int>> user_qty_Tickets) = 0;
}

#endif _ServiceInterface_H_