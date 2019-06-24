#ifndef ServiceInterface_H_
#define ServiceInterface_H_

#include <domains/ActualDate.hpp>
#include <domains/AgeGroup.hpp>
#include <domains/Availability.hpp>
#include <domains/CPF.hpp>
#include <domains/CardNumber.hpp>
#include <domains/EventCode.hpp>
#include <domains/EventName.hpp>
#include <domains/Password.hpp>
#include <domains/PresentationCode.hpp>
#include <domains/Price.hpp>
#include <domains/Room.hpp>
#include <domains/SecureCode.hpp>
#include <domains/State.hpp>
#include <domains/TicketCode.hpp>
#include <domains/ValidDate.hpp>


#include <list>
#include <entities/CreditCard.hpp>
#include <entities/Event.hpp>
#include <entities/Presentation.hpp>
#include <entities/Ticket.hpp>
#include <entities/User.hpp>

namespace ServiceInterface {

    class IAuthenticate {
      public:
        virtual bool Authenticate(CPF user, Password pwd) = 0;
        virtual ~IAuthenticate() = 0;
    };

    class IUser {
      public:
        virtual bool Delete(std::string cpf)                  = 0;
        virtual bool SignUp(std::string cpf, std::string pwd) = 0;
        virtual std::shared_ptr<User> Search(std::string cpf) = 0;
        virtual bool SignIn(std::string cpf, std::string pwd) = 0;
        virtual std::string LoggedUser() = 0;
        virtual ~IUser() {}
    };
    // Classe Evento dependento
    class IEvent {
      public:
        virtual bool CreateEvent(Event event,
                                 std::list<Presentation> NumberofPresentations)    = 0;
        virtual bool GetEventsFromTime(std::list<Event> event, StartTime inicio,
                                       StartTime fim, City city, State state) = 0;
        virtual bool ModifyEvent(EventCode code)                              = 0;
        virtual bool DeleteEvent(EventCode code)                              = 0;
        virtual bool showMyEvents(std::list<EventCode> code)                  = 0;
        virtual ~IEvent();
    };

    class ISells {
      public:
        virtual bool buyTickets(PresentationCode code, int numTickets) = 0;
        virtual bool
        sellsbyCPF(PresentationCode code,
                       std::list<std::pair<PresentationCode, int>> user_qty_Tickets) = 0;
        virtual ~ISells();
    };

}

#endif