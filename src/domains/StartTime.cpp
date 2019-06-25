#include <cctype>
#include <domains/StartTime.hpp>

StartTime::StartTime(std::string startTime) { setStartTime(startTime); }
void StartTime::setStartTime(std::string startTime) {
    std::regex regex_time("^(0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(startTime, match, regex_time)) {
        time = startTime;
    } else {
        throw std::invalid_argument(
            "Time has to be of type HH:MM following the 24h rule");
    }
}
std::string StartTime::getStartTime() { return this->time; }
