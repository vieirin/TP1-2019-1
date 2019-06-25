#include "domains/StartTime.hpp"
#include <gtest/gtest.h>
#include <stdexcept>

StartTime m("12:45");

TEST(StartTimeTestTest, TestingReturns) {
    EXPECT_EQ("12:45", m.getStartTime());
}
