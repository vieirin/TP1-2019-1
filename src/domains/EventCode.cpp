#include <domains/EventCode.hpp>

EventCode::EventCode(std::string code)
{
    std::regex code_regex("([0-9])\\w{2}");

    if (code.length() > 0 && code.length() < 4 && std::regex_match(code, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXX");
    }

}
