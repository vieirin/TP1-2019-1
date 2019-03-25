#include <gtest/gtest.h>
#include <domains/Price.hpp>

TEST(PriceTest, isInRange)
{
    auto price = Price(500);
    ASSERT_EQ(price.getPrice(), 500);
}

TEST(PriceTest, lessThanZero)
{
    ASSERT_THROW(Price(-14), std::invalid_argument);
}

TEST(PriceTest, moreThanThousand)
{
    ASSERT_THROW(Price(1000.01), std::invalid_argument);
}