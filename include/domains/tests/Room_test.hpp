#include <domains/Room.hpp>
#include <gtest/gtest.h>
/*
TEST(RoomTest, isInRange) {
    Room zeta(5);
    ASSERT_EQ(room.getRoom(), 5);
}
*/

Room k(10);

TEST(RoomCodeTestTest, TestingReturns) { EXPECT_EQ(10, k.getRoom()); }
