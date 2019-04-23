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
    std::string State;
    // bool leapYear;

  public:
    State(std::string State);
    void setState(std::string State);
    std::string getState();
};

#endif