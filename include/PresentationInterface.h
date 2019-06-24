#ifndef PresentationInterface_H_
#define PresentationInterface_H_

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

#include <ServiceInterface.h>
#include <entities/CreditCard.hpp>
#include <entities/Event.hpp>
#include <entities/Presentation.hpp>
#include <entities/Ticket.hpp>
#include <entities/User.hpp>

/*
namespace PresentationInterface {
    class IAuthenticate {
      public:
        virtual void execute(CPF cpf)                        = 0;
        virtual void ModelAuthenticate(User model) = 0;
        virtual ~IAuthenticate() = 0;
    };

    class IUser {
      public:
        virtual void execute(CPF cpf)        = 0;
        virtual void ModelUser(User model) = 0;
        virtual ~IUser();
    };
    // Classe Evento dependento
    class IEvent {
      public:
        virtual void execute(CPF cpf)          = 0;
        virtual void ModelEvent(Event model) = 0;
        virtual ~IEvent() = 0;
    };

    class ISells {
      public:
        virtual void execute(CPF cpf)          = 0;
        // virtual void ModelSells(ISSells model) = 0;
        virtual ~ISells() = 0;
    };
}*/

#endif
