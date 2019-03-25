#ifndef _Room_H_
#define _Room_H_

class Room
{
  private:
    int id;

  public:
    Room(int roomNumber);
    void setRoom(int roomNumber);
    int getRoom();
};

#endif