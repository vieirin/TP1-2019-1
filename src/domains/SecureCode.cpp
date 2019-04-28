#include <cctype>
#include <domains/SecureCode.hpp>

SecureCode::SecureCode(std::string code) { setSecureCode(code); }
void SecureCode::setSecureCode(std::string code) {
    std::regex regex_code("^[0-9]{3}");
    std::smatch match;
    if (std::regex_match(code, match, regex_code)) {
        this->code = code;
    } else {
        throw std::invalid_argument("SecureCode must be of type XXX");
    }
}
