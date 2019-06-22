#ifndef _State_H_
#define _State_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/** State defines all possible districts where a Presentation will occur
 */
class State {
  private:
    std::string state;

  public:
    State(std::string state);
    void setState(std::string state);
    std::string getState();
};

#endif