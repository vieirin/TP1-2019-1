#include <entities/Presentation.hpp>

Presentation::Presentation(int amount, std::string code, float price, int room,
                           std::string date, std::string time) {
    this->amount = new Availability(amount);
    this->code   = new PresentationCode(code);
    this->price  = new Price(price);
    this->room   = new Room(room);
    this->date   = new ActualDate(date);
    this->time   = new StartTime(time);
}
