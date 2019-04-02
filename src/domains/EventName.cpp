#include <domains/EventName.hpp>
#include <iostream>
#include <iterator>
#include <regex>

EventName::EventName(std::string eventName) { setName(eventName); }

void EventName::setName(std::string name) {
    std::regex expression("\\s\\s+");
    std::string nameNoSpaces;
    // substitute by regex all spaces for a single space
    std::regex_replace(std::back_inserter(nameNoSpaces), name.begin(),
                       name.end(), expression, " ");
    this->name = nameNoSpaces;
}

std::string EventName::getName() { return name; }