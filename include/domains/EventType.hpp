#ifndef _EventType_H_
#define _EventType_H_

#include <string>
#include <unordered_map>

class EventType {
  private:
    std::unordered_map<std::string, int> evType;
    int type;

  public:
    EventType(std::string type);
};

#endif

/* until now this class does not need tests, once there's just it's constructor
  unless for some reason you want to check if map was created properly
*/
