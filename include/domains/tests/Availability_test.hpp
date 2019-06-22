#include <domains/Availability.hpp>
#include <gtest/gtest.h>

TEST(AvailabilityTest, isNegativeFail) {
    ASSERT_THROW(Availability(-15), std::invalid_argument);
}

TEST(AvailabilityTest, moreThanAllowed) {
    ASSERT_THROW(Availability(400), std::invalid_argument);
}

TEST(AvailabilityTest, allowedAmount) {
    auto available = Availability(200);
    ASSERT_EQ(available.getAvailability(), 200);
}

Availability c(200);

TEST(AvailabilityTest, TestingReturns) { EXPECT_EQ(200, c.getAvailability()); }