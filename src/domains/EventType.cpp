#include <domains/EventType.hpp>

EventType::EventType()
{
    evType = std::unordered_map<int, std::string>{
        {1, "TEATRO"},
        {2, "ESPORTE"},
        {3, "SHOW NACIONAL"},
        {4, "SHOW INTERNACIONAL"}};
}
