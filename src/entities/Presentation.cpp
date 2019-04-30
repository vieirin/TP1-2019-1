#include <entities/Presentation.hpp>
Presentation::Presentation(int avail, std::string code, float price, int room,
                           std::string date, std::string time) {
    this->avail = Availability(avail);
    this->code  = PresentationCode(code);
    this->price = Price(price);
    this->room  = Room(room);
    this->date  = ActualDate(date);
    this->time  = StartTime(time);
}