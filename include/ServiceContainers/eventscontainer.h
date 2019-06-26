#ifndef EVENTSCONTAINER_H
#define EVENTSCONTAINER_H

#include <ServiceInterface.h>
#include <entities/Presentation.hpp>
#include <entities/Event.hpp>
#include <memory>

class EventContainer : ServiceInterface::IEvent
{
private:
    std::map<std::string, std::shared_ptr<Event>> event_pool;

public:
    EventContainer();
    bool CreateEvent(std::string code, std::string age, std::string name, std::string type,
                     std::string city, std::string state, std::list<std::shared_ptr<Presentation>> NumberofPresentations);
    std::list<std::shared_ptr<Event>> GetEventsFromTime(std::string inicio, std::string fim, std::string city, std::string state);
    bool ModifyEvent(std::string code){}
    bool DeleteEvent(std::string code){}
    bool showMyEvents(){}
};

#endif // EVENTSCONTAINER_H
