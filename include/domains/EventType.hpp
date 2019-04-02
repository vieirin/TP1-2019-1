#ifndef _EventType_H_
#define _EventType_H_

#include <unordered_map>
#include <string>

class EventType
{
private:
  std::unordered_map<int, std::string> evType;

public:
  EventType();
};

#endif

/* until now this class does not need tests, once there's just it's constructor
  unless for some reason you want to check if map was created properly
*/
