#ifndef _Availability_H_
#define _Availability_H_

class Availability
{
  private:
    int availability;

  public:
    Availability(int amount);
    void setAvailability(int amount);
    int getAvailability();
};

#endif