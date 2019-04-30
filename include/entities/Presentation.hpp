#ifndef _PRESENTATION_H_
#define _PRESENTATION_H_
#include <domains/Availability.hpp>
#include <domains/Date.hpp>
#include <domains/PresentationCode.hpp>
#include <domains/Price.hpp>
#include <domains/Room.hpp>
#include <domains/StartTime.hpp>
#include <string>

/*Presentation is a presentation in system */
class Presentation {
  private:
    Availability *avail;
    PresentationCode *code;
    Price *price;
    Room *room;
    Date *date;
    StartTime *time;

  public:
    Presentation(int avail, std::string code, float price, int Room,
                 std::string date, std::string time);
};

#endif