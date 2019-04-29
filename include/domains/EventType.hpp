#ifndef _EventType_H_
#define _EventType_H_

#include <string>
#include <unordered_map>

/*EventType defines basically a map from a event type name to its value
 * associated
 *
 * Teatro: 1
 * Esporte: 2
 * Show Nacional: 3
 * Show Internacional: 4
 *
 * If string is not in this map this function throws an  (TODO decide
 * expection) __  Exception
 */
class EventType {
  private:
    std::unordered_map<std::string, int> evType;
    int type;

  public:
    EventType(std::string type);
};

#endif
