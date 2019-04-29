#ifndef _EventName_H_
#define _EventName_H_

#include <string>

/** EventName receives a name for an Event and checks in its ctor if is a valid
 * event name
 */
class EventName {
  private:
    std::string name;

  public:
    EventName(std::string eventName);
    void setName(std::string name);
    std::string getName();
};

#endif