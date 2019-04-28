#ifndef _State_H_
#define _State_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

class State {
  private:
    std::string state;
    // bool leapYear;

  public:
    State(std::string state);
    void setState(std::string state);
    std::string getState();
};

#endif