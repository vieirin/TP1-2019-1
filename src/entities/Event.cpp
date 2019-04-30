#include <entities/Event.hpp>

Event::Event(std::string age, std::string code, std::string name,
             std::string type, std::string city, std::string state) {
    this->age   = new AgeGroup(age);
    this->code  = new EventCode(code);
    this->name  = new EventName(name);
    this->type  = new EventType(type);
    this->city  = new City(city);
    this->state = new State(state);
}