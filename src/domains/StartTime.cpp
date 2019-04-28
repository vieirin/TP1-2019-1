#include <cctype>
#include <domains/StartTime.hpp>

StartTime::time(std::string time) { setStartTime(time); }
void StartTime::setStartTime(std::string time) {
    std::regex regex_time("^[012]{1}[0-9]{1}:[134]{1}[05]{1}");
    std::smatch match;
    if (std::regex_match(time, match, regex_time)) {

    } else {
        throw std::invalid_argument(
            "Time has to be of type HH:MM following the 24h rule");
    }