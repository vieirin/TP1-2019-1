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

    /** Regex Format verification*/
    if (std::regex_match(date, match, code_regex)) {

        /**Verify if month of date is february */
        if (mes == 2) {
            /** Verify if year is a leapYear or not */
            if (year % 4 == 0) {
                leapYear = 1;
            } else {
                leapYear = 0;
            }
            /** Day validation */
            if (leapYear == 1 && day <= 29) {
                this->date = date;
            } else if (leapYear == 0 && day <= 28) {
                this->date = date;
            } else {
                throw std::invalid_argument("Invalid Day Bissext");
            }
            /**Verify if month is different from febrary*/
            /**Day can reach 31 days */

        } else if (mes != 2 && day <= 31) {
            this->date = date;
        } else {
            throw std::invalid_argument("Invalid Day");
        }
        /**invalid format*/
    } else {
        throw std::invalid_argument("Invalid Format (ActualDate");
    }
}