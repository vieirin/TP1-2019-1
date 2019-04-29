#ifndef _CurrentDate_H_
#define _CurrentDate_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class CurrentDate {
  private:
    std::string date;
    bool leapYear;

  public:
    CurrentDate(std::string date);
    void setCurrentDate(std::string date);
    std::string getCurrentDate();
};

#endif
/*
obj while (1) try {
    obj.aset("31/20/19") break;
} catch (std::invalid_argument erro) {
    print vc fez erda erro.what()
}
*/