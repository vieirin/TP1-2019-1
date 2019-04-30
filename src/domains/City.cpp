#include <cctype>
#include <domains/City.hpp>

City::City(std::string city) { setCity(city); }
void City::setCity(std::string city) {

    std::regex code_regex("\\b(?!.*?\\s{2})\\D{1,50}\\b$");
    std::smatch match;
    /** Regex Format verification*/
    if (std::regex_match(city, match, code_regex)) {
        this->city = city;
    } else {
        throw std::invalid_argument(
            "City input must contain only letters and only 1 space between");
    }
}
