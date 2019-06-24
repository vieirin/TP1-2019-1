#ifndef _PresentationInterface_H_
#define _PresentationInterface_H_

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

#include <ServiceInterface.h>
#include <entities/CreditCard.hpp>
#include <entities/Event.hpp>
#include <entities/Presentation.hpp>
#include <entities/Ticket.hpp>
#include <entities/User.hpp>

class ISAuthenticate {
  public:
    virtual void execute(CPF cpf);
    virtual void setModelAuthenticate(ISAuthenticate model);
}

class ISUser {
  public:
    virtual void execute(CPF cpf);
    virtual void setModelUser(ISAuthenticate model);
}
// Classe Evento dependento
class ISEvent {
  public:
    virtual void execute(CPF cpf);
    virtual void setModelEvent(ISEvent model);
}

class ISSells {
  public:
    virtual void execute(CPF cpf);
    virtual void setModelSells(ISSells model);
}

#endif _PresentationInterface_H_