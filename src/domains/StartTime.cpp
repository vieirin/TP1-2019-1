#include <cctype>
#include <domains/StartTime.hpp>

StartTime::StartTime(std::string startTime) { setStartTime(startTime); }
void StartTime::setStartTime(std::string startTime) {
    std::regex regex_time("^[012]{1}[0-9]{1}:[134]{1}[05]{1}");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(startTime, match, regex_time)) {

    } else {
        throw std::invalid_argument(
            "Time has to be of type HH:MM following the 24h rule");
    }
}