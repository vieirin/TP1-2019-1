#ifndef _Room_H_
#define _Room_H_

/** Room is a domain class refering to room number for a Event or Presentation
 */
class Room {
  private:
    int id;

  public:
    Room(int roomNumber);
    void setRoom(int roomNumber);
    int getRoom();
};

#endif