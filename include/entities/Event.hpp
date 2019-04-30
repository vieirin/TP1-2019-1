#ifndef _EVENT_H_
#define _EVENT_H_
#include <domains/AgeGroup.hpp>
#include <domains/City.hpp>
#include <domains/EventCode.hpp>
#include <domains/EventName.hpp>
#include <domains/EventType.hpp>
#include <domains/State.hpp>

#include <string>

/** Event defines an event in the system */
class Event {
  private:
    AgeGroup *age;
    EventCode *code;
    EventName *name;
    EventType *type;
    City *city;
    State *state;

  public:
    /** Presentation Constructor takes 5 parameters: */

 std::string code, std::string name, std::string type,
          std::string city, std::string state);
};

#endif