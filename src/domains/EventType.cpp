#include <domains/EventType.hpp>

EventType::EventType(std::string typeName) { setEventType(typeName); }
void EventType::setEventType(std::string typeName) {
    evType     = std::unordered_map<std::string, int>{{"TEATRO", 1},
                                                  {"ESPORTE", 2},
                                                  {"SHOW NACIONAL", 3},
                                                  {"SHOW INTERNACIONAL", 4}};
    this->type = evType.at(typeName);
}
int EventType::getEventType() { return this->type; }

std::string EventType::getEventTypeName() {
    for (auto &i : evType) {
        if (type == i.second) {
            return i.first;
        }
    }
}
