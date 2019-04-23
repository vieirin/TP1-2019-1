#ifndef _StartTime_H_
#define _StartTime_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class StartTime {
  private:
    std::string StartTime;
    // bool leapYear;

  public:
    StartTime(std::string StartTime);
    void setStartTime(std::string StartTime);
    std::string getStartTime();
};

#endif