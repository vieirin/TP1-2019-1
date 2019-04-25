#ifndef _EVENT_H_
#define _EVENT_H_
#include <domains/AgeGroup.hpp>
#include <domains/EventCode.hpp>
#include <domains/EventName.hpp>
#include <domains/EventType.hpp>
#include <string>

class Event {
  private:
    AgeGroup age;
    EventCode code;
    EventName name;
    EventType type;

  public:
    Event(std::string age, std::string code, std::string name,
          std::string type);
};

#endif