#ifndef _EVENT_H_
#define _EVENT_H_
#include <domains/AgeGroup.hpp>
#include <domains/City.hpp>
#include <domains/EventCode.hpp>
#include <domains/EventName.hpp>
#include <domains/EventType.hpp>
#include <domains/State.hpp>
#include <entities/Presentation.hpp>
#include <string>
#include <list>

/** Event defines an event in thetfg system */
class Event {
  private:
    AgeGroup *age;
    EventCode *code;
    EventName *name;
    EventType *type;
    City *city;
    State *state;
    std::list<std::shared_ptr<Presentation>> presentation_list;
  public:
    Event(std::string code, std::string age, std::string name, std::string type,
          std::string city, std::string state, std::list<std::shared_ptr<Presentation>> presentation_list);
    bool isOnRange(std::string startDate, std::string endDate, std::string city, std::string st);
    std::string getName() { return name->getName();}
    std::string getType() {return type->getEventTypeName();}
    std::string getAgeGroup() {return age->getGroup();}
    std::list<std::shared_ptr<Presentation>> getPresentations() {return presentation_list;}

};

#endif
