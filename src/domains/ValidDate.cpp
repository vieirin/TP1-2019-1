#include <cctype>
#include <domains/ValidDate.hpp>

ValidDate::ValidDate(std::string date) { setValidDate(date); }
void ValidDate::setValidDate(std::string date) {
    std::regex code_regex("^(0?[1-9]|1[012])/[0-9]{2}");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(date, match, code_regex)) {
        this->date = date;
    } else {
        throw std::invalid_argument("Valid Date input must be of type MM/AA");
    }
}

std::string ValidDate::getValidDate() { return this->date; }