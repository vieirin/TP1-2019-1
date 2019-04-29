#ifndef _AgeGroup_H_
#define _AgeGroup_H_

#include <stdexcept>
#include <string>

/** Age Group is a class which determines the allowed age group, this domain is
 * used by Event and Presentation classes
 *
 */
class AgeGroup {
  private:
    std::string group;

  public:
    AgeGroup(std::string group);
    void setGroup(std::string group);
    std::string getGroup();
};

#endif