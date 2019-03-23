#include <domains/EventCode.hpp>

EventCode::EventCode(std::string code)
{
    std::regex code_regex("([0-9])\\w{2}");
    std::smatch match;

    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXX");
    }

}
