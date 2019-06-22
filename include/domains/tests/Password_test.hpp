#include <domains/Password.hpp>
#include <gtest/gtest.h>

TEST(PasswordTest, tooSmall) {
    ASSERT_THROW(Password("abc"), std::invalid_argument);
}

TEST(PasswordTest, noCapital) {
    ASSERT_THROW(Password("abc123"), std::invalid_argument);
}

TEST(PasswordTest, noNumber) {
    ASSERT_THROW(Password("Abclije"), std::invalid_argument);
}

TEST(PasswordTest, strongPassword) {
    auto pass = Password("Aler12");
    ASSERT_EQ(pass.getPassword(), "Aler12");
}

Password q("Alert12");

TEST(PasswordTest, TestingReturns) { EXPECT_EQ("Alert12", q.getPassword()); }
