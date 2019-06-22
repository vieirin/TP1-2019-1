#include <domains/EventName.hpp>
#include <gtest/gtest.h>

TEST(EventNameTest, isNameSetNoSpaces) {
    auto eventName = EventName("lolla");
    auto name      = eventName.getName();
    ASSERT_EQ(name, "lolla");
}

TEST(EventNameTest, isNameSetSpaces) {
    auto eventName = EventName("lolla lollapalooza");
    auto name      = eventName.getName();
    ASSERT_EQ(name, "lolla lollapalooza");
}

TEST(EventNameTest, isNameSetSpacesRepeated) {
    auto eventName = EventName("lolla   lollapalooza");
    auto name      = eventName.getName();
    ASSERT_EQ(name, "lolla lollapalooza");
}

EventName g("lolla");

TEST(EventNameTest, TestingReturns) { EXPECT_EQ("lolla", g.getName()); }
