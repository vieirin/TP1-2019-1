#include <domains/AgeGroup.hpp>

AgeGroup::AgeGroup(std::string group) { setGroup(group); }

void AgeGroup::setGroup(std::string group) {
    if (!(group == "L" || group == "10" || group == "12" || group == "14" ||
          group == "16" || group == "18")) {
        throw std::invalid_argument(
            "Age group must be L, 10, 12, 14, 16 or 18");
    }
    this->group = group;
}

std::string AgeGroup::getGroup() { return group; }