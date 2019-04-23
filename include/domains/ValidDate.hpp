#ifndef _ValidDate_H_
#define _ValidDate_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class ValidDate {
  private:
    std::string ValidDate;
    // bool leapYear;

  public:
    ValidDate(std::string ValidDate);
    void setValidDate(std::string ValidDate);
    std::string getValidDate();
};

#endif