#include <cctype>
#include <domains/ActualDate.hpp>

ActualDate::ActualDate(std::string date) { setActualDate(date); }
void ActualDate::setActualDate(std::string date) {
    std::regex code_regex("^([0123]{1}[0-9]{1}/[01]{1}[0-9]{1}/[0-9]{2})");
    std::smatch match;
    int mes, year, day;
    day  = std::stoi(date.substr(0, 2));
    mes  = std::stoi(date.substr(3, 2));
    year = std::stoi(date.substr(6, 2));
    // verify if code inputed matches the regex
    if (std::regex_match(date, match, code_regex)) {

        // modulus of 100)

        // month = string(MM);
        // verify if the month is febrary
        // verify if is a leapYear
        if (mes == 2) {
            if (year % 4 == 0) {
                leapYear = 1;
            } else {
                leapYear = 0;
            }
            if (leapYear == 1 && day <= 29) {
                this->date = date;
            } else if (leapYear == 0 && day <= 28) {
                this->date = date;
            } else {
                throw std::invalid_argument("Invalid Day Bissext");
            }
        } else if (mes != 2 && day <= 31) {
            this->date = date;
        } else {
            throw std::invalid_argument("Invalid Day");
        }
    } else {
        throw std::invalid_argument("Invalid Format (ActualDate");
    }
}