#include <domains/PassportCode.hpp>

PassportCode::PassportCode(std::string passCode)
{
    setCode(passCode);
}

PassportCode::setCode(std::string code) {
    std::regex code_regex("([0-9])\\w{4}");
    std::smatch match;

    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXX");
    }
}

