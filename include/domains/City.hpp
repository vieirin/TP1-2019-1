#ifndef _City_H_
#define _City_H_
#include <algorithm>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <vector>

/* City defines a city, any bad formatted string throws an invalid argument
 * exception */
class City {
  private:
    std::string city;
    // bool leapYear;

  public:
    City(std::string city);
    void setCity(std::string city);
    std::string getCity();
};

#endif