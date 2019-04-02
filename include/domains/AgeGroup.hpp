#ifndef _AgeGroup_H_
#define _AgeGroup_H_

#include <stdexcept>
#include <string>

class AgeGroup {
  private:
    std::string group;

  public:
    AgeGroup(std::string group);
    void setGroup(std::string group);
    std::string getGroup();
};

#endif