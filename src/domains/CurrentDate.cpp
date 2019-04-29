#include <cctype>
#include <domains/CurrentDate.hpp>

CurrentDate::CurrentDate(std::string date) { setCurrentDate(date); }
void CurrentDate::setCurrentDate(std::string date) {
    std::regex code_regex("^([0123]{2}/[01]{1}[0-9]{1}/[0-9]{2})");
    std::smatch match;
    int mes, year, dia;
    mes  = std::stoi(date.substr(3, 2));
    year = std::stoi(date.substr(6, 2));
    // verify if code inputed matches the regex
    if (std::regex_match(date, match, code_regex)) {
        // verify if year is a leap year(modulos of 400 and modulos of 4 and not
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
            if (leapYear == 1) {
                if (dia <= 29 && dia > 0) {
                    this->date = date;

                } else {
                    throw std::invalid_argument("Day has to be in [1,29]");
                }
            } else {

                if (dia <= 28 && dia > 0) {
                    this->date = date;
                } else {
                    throw std::invalid_argument(
                        "Not a leapYear-> day has to be in [1,28]");
                }
            }
        }
        if (mes == 1 && mes == 3 && mes == 5 && mes == 7 && mes == 8 &&
            mes == 10 && mes == 12) {
            if (dia <= 31 && dia > 0) {
                this->date = date;
            } else {
                throw std::invalid_argument("Day field invalid!");
            }
        } else {
            if (dia <= 30 && dia > 0) {
                this->date = date;
            } else {
                throw std::invalid_argument("Day field invalid!");
            }
        }
    } else {
        throw std::invalid_argument("Wrong input format -> DD/MM/AA");
    }
}
