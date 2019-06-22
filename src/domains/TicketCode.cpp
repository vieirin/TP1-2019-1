#include <domains/TicketCode.hpp>

TicketCode::TicketCode(std::string passCode) { setCode(passCode); }

void TicketCode::setCode(std::string code) {
    std::regex code_regex("^([0-9]){5}$");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(code, match, code_regex)) {
        this->code = code;
    } else {
        throw std::invalid_argument("Ticket Code must be like XXXXX");
    }
}

std::string TicketCode::getCode() { return this->code; }
