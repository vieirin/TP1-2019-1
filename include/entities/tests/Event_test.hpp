#include <entities/Event.hpp>
#include <gtest/gtest.h>

TEST(EventTest, valid_event) {
    ASSERT_NO_THROW(Event("14", "123", "Forró da Torre", "SHOW NACIONAL",
                          "Brasilia", "DF"));
}

TEST(EventTest, invalid_age) {
    ASSERT_THROW(
        Event("13", "123", "Forró da Torre", "SHOW NACIONAL", "Brasilia", "DF"),
        std::invalid_argument);
}

TEST(EventTest, invalid_cod) {
    ASSERT_THROW(Event("14", "1234", "Forró da Torre", "SHOW NACIONAL",
                       "Brasilia", "DF"),
                 std::invalid_argument);
}
TEST(EventTest, invalid_type) {
    ASSERT_THROW(
        Event("14", "123", "Forró da Torre", "ShowNacional", "Brasilia", "DF"),
        std::out_of_range);
}

TEST(EventTest, invalid_city) {
    ASSERT_THROW(Event("14", "123", "Forró da Torre", "SHOW NACIONAL",
                       "Brasilia  a", "DF"),
                 std::invalid_argument);
}