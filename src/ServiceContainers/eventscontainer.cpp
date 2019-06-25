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
