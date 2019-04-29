#ifndef _Availability_H_
#define _Availability_H_

/* Availability is a domain which defines how much people are allowed in an
 * Event, amount in ctor must be between 0 and 250
 */
class Availability {
  private:
    int availability;

  public:
    Availability(int amount);
    void setAvailability(int amount);
    int getAvailability();
};

#endif