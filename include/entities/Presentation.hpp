#ifndef _PRESENTATION_H_
#define _PRESENTATION_H_
#include <domains/Availability.hpp>
#include <domains/PresentationCode.hpp>
#include <domains/Price.hpp>
#include <domains/Room.hpp>
#include <string>

class Presentation {
  private:
    Availability avail;
    PresentationCode code;
    Price price;
    Room room;

  public:
    Presentation(int avaiability, std::string code, float price, int Room);
};

#endif