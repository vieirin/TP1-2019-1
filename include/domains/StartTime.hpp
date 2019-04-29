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
    std::string time;
    // bool leapYear;

  public:
    StartTime(std::string time);
    void setStartTime(std::string startTime);
    std::string getStartTime();
};

#endif