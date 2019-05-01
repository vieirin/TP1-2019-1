#include <domains/TicketCode.hpp>
#include <gtest/gtest.h>

TEST(TicketCodeTest, validTicket) { ASSERT_NO_THROW(TicketCode("03245")); }
TEST(TicketCodeTest, invalidTicket) {
    ASSERT_THROW(TicketCode("0324"), std::invalid_argument);
}
