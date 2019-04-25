#include <entities/User.hpp>

Event::Event(std::string age, std::string code, std::string name,
             std::string type) {
    this->age  = AgeGroup(age);
    this->code = EventCode(code);
    this->name = EventName(name);
    this->type = EventType(type);
}