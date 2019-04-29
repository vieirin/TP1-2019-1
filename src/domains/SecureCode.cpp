#include <cctype>
#include <domains/SecurityCode.hpp>

SecurityCode::SecurityCode(std::string code) { setSecurityCode(code); }
void SecurityCode::setSecurityCode(std::string code) {
    std::regex regex_code("^[0-9]{3}");
    std::smatch match;
    if (std::regex_match(code, match, regex_code)) {
        this->code = code;
    } else {
        throw std::invalid_argument("SecurityCode must be of type XXX");
    }
}
