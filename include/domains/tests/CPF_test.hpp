#include <domains/CPF.hpp>
#include <gtest/gtest.h>

TEST(CPFTest, validCPF) { ASSERT_NO_THROW(CPF("284.338.630-61")); }

TEST(CPFTest, invalidCPF) {
    ASSERT_THROW(CPF("448.375.73002"), std::invalid_argument);
}

CPF e("473.218.141-49");

TEST(CPFTest, TestingReturns) { EXPECT_EQ("473.218.141-49", e.getCPF()); }
