#include <gtest/gtest.h>
#include <domains/Availability.hpp>

TEST(AvailabilityTest, isNegativeFail)
{
    ASSERT_THROW(Availability(-15), std::invalid_argument);
}

TEST(AvailabilityTest, moreThanAllowed)
{
    ASSERT_THROW(Availability(400), std::invalid_argument);
}

TEST(AvailabilityTest, allowedAmount)
{
    auto available = Availability(200);
    ASSERT_EQ(available.getAvailability(), 200);
}