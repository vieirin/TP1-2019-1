#ifndef _PRESENTATION_H_
#define _PRESENTATION_H_
#include <domains/ActualDate.hpp>
#include <domains/Availability.hpp>
#include <domains/PresentationCode.hpp>
#include <domains/Price.hpp>
#include <domains/Room.hpp>
#include <domains/StartTime.hpp>
#include <string>

/** Presentation is a presentation in system */

class Presentation {
  private:
    Availability *amount;
    PresentationCode *code;
    Price *price;
    Room *room;
    ActualDate *date;
    StartTime *time;

  public:
    /** Presentation Constructor takes 6 parameters:
     * int amount: Amount of tickets available
     * string code: code of the event
     * float price: price of event
     * int room: number of the room of the event
     * date: Date that the event will start
     * time: Time that the event will start
     * */
    Presentation(int amount, std::string code, float price, int room,
                 std::string date, std::string time);
    std::string GetPresentationDate();
};

#endif
