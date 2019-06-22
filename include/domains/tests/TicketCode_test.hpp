#include <domains/TicketCode.hpp>
#include <gtest/gtest.h>

TEST(TicketCodeTest, validTicket) { ASSERT_NO_THROW(TicketCode("03245")); }
TEST(TicketCodeTest, invalidTicket) {
    ASSERT_THROW(TicketCode("0324"), std::invalid_argument);
}

TicketCode o("12345");

TEST(TicketCodeTest, TestingReturns) { EXPECT_EQ("12345", o.getCode()); }
