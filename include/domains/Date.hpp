#ifndef _Date_H_
#define _Date_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** Current date is a domain class used to represent a valid time in formar
 * DD/MM/AAAA
 */
class Date {
  private:
    std::string date;
    bool leapYear;

  public:
    Date(std::string date);
    void setDate(std::string date);
    std::string getDate();
};

#endif
/*
obj while (1) try {
    obj.aset("31/20/19") break;
} catch (std::invalid_argument erro) {
    print vc fez erda erro.what()
}
*/