#include <domains/Room.hpp>
#include <stdexcept>

Room::Room(int roomNumber) { setRoom(roomNumber); }
/ void Room::setRoom(int roomNumber) {
    /** Room's number validation */
    if (roomNumber < 0 || roomNumber > 10)
        throw std::invalid_argument("Room number must be between 0 and 10");
    id = roomNumber;
}

int Room::getRoom() { return id; }