#include <ServiceContainers/eventscontainer.h>

EventContainer::EventContainer() {

}

bool EventContainer::CreateEvent(std::string code, std::string age, std::string name, std::string type,
                 std::string city, std::string state, std::list<std::shared_ptr<Presentation>> NumberofPresentations){
    try {
        auto event = std::make_shared<Event>(code, age, name, type, city, state, NumberofPresentations);
        event_pool[code] = event;
    } catch (std::exception &e) {
        std::cerr << e.what();
        return false;
    }

    return true;
}

std::list<std::shared_ptr<Event>> EventContainer::GetEventsFromTime(std::string inicio, std::string fim, std::string city, std::string state) {
    std::list<std::shared_ptr<Event>> events_found;
    for (auto event : event_pool) {
        if (event.second->isOnRange(inicio, fim, city, state)){
            events_found.push_back(event.second);
        }
    }
    return events_found;
}
