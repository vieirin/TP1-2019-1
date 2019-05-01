#include "domains/SecureCode.hpp"
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

TEST(SecureCodeTest, CodeWithLetters) {
    ASSERT_THROW(SecureCode("ABC"), std::invalid_argument);
}

TEST(SecureCodeTest, CodeWith3MoreDigits) {
    ASSERT_THROW(SecureCode("97542"), std::invalid_argument);
}

TEST(SecureCodeTest, CodeWithLessThan3Digits) {
    ASSERT_THROW(SecureCode("11"), std::invalid_argument);
}

TEST(SecureCodeTest, CorrectScenario) { ASSERT_NO_THROW(SecureCode("422")); }