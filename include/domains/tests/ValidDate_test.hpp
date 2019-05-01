#include "domains/ValidDate.hpp"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(ValidDateTest, ValidDateWithNumbers) {
    ASSERT_THROW(ValidDate("2199"), std::invalid_argument);
}

TEST(ValidDateTest, ValidDateWithMoreLetters) {
    ASSERT_THROW(ValidDate("DF/BB"), std::invalid_argument);
}
TEST(ValidDateTest, ValidDateWithWrongDate) {
    ASSERT_THROW(ValidDate("21/07/1998"), std::invalid_argument);
}
TEST(ValidDateTest, ValidDateDontExist) {
    ASSERT_THROW(ValidDate("15/92"), std::invalid_argument);
}

TEST(ValidDateTest, CorrectScenario) { ASSERT_NO_THROW(ValidDate("07/98")); }

// Ludum Dare