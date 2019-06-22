#ifndef _ValidDate_H_
#define _ValidDate_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** ValidDate refers to a expiration date for a Card instance*/
class ValidDate {
  private:
    std::string date;

  public:
    ValidDate(std::string date);
    void setValidDate(std::string date);
    std::string getValidDate();
};

#endif