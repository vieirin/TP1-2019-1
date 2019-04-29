#ifndef _ActualDate_H_
#define _ActualDate_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class ActualDate {
  private:
    std::string date;
    bool leapYear;

  public:
    ActualDate(std::string date);
    void setActualDate(std::string date);
    std::string getActualDate();
};

#endif
/*
obj while (1) try {
    obj.aset("31/20/19") break;
} catch (std::invalid_argument erro) {
    print vc fez erda erro.what()
}
*/