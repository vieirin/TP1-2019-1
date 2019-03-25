#ifndef _EventName_H_
#define _EventName_H_

#include <string>

class EventName
{
  private:
    std::string name;

  public:
    EventName(std::string eventName);
    void setName(std::string name);
    std::string getName();
};

#endif