#include <domains/PresentationCode.hpp>

PresentationCode::PresentationCode(std::string presCode) {
    setPresentationCode(presCode);
}

void PresentationCode::setPresentationCode(std::string code) {
    std::regex code_regex("^[0-9]{4}");
    std::smatch match;

    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Event code must be like XXXX");
    }
}