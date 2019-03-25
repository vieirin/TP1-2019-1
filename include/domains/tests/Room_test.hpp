#include <gtest/gtest.h>
#include <domains/Room.hpp>

TEST(RoomTest, isInRange)
{
    auto room = Room(5);
    ASSERT_EQ(room.getRoom(), 5);
}

TEST(RoomTest, outOfRangeNegative)
{
    ASSERT_THROW(Room(-5), std::invalid_argument);
}

TEST(RoomTest, outOfRangePositive)
{
    ASSERT_THROW(Room(-11), std::invalid_argument);
}