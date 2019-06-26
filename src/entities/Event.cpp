#include <entities/Event.hpp>
#include <QDate>

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

bool Event::isOnRange(std::string startDate, std::string endDate, std::string city, std::string st) {
    if (state->getState() == st && this->city->getCity() == city) {
        auto start = QDate::fromString(startDate.data(), "dd/MM/yy");
        auto end = QDate::fromString(endDate.data(), "dd/MM/yy");
        for (auto presentation : presentation_list) {
            auto presentation_date = QDate::fromString(presentation->GetPresentationDate().data(), "dd/MM/yy");
            if (presentation_date >= start && presentation_date <= end) {
                return true;
            }
        }
        return false;
    }
}
