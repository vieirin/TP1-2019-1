#include <domains/EventCode.hpp>

EventCode::EventCode(std::string code) { setCode(code); }

void EventCode::setCode(std::string code) {
    std::regex code_regex("^[0-9]{3}");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXX");
    }
}