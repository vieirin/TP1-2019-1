#include <entities/Ticket.hpp>
#include <gtest/gtest.h>

TEST(TicketTest, validticket) { ASSERT_NO_THROW(Ticket("04440")); }
TEST(TicketTest, invalidticket) {
    ASSERT_THROW(Ticket("4440"), std::invalid_argument);
}
