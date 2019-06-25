#include <entities/Event.hpp>

Event::Event(std::string code, std::string age, std::string name,
             std::string type, std::string city, std::string state,
             std::list<std::shared_ptr<Presentation>> presentation_list) {
    if (presentation_list.size() > 5) {
        throw std::invalid_argument("Presentation List bigger than 5");
    }
    this->presentation_list = presentation_list;
    this->age   = new AgeGroup(age);
    this->code  = new EventCode(code);
    this->name  = new EventName(name);
    this->type  = new EventType(type);
    this->city  = new City(city);
    this->state = new State(state);
}
