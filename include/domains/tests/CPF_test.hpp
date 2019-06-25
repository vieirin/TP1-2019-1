#include <domains/CPF.hpp>
#include <gtest/gtest.h>

CPF e("045.026.261-80");

TEST(CPFTest, TestingReturns) { EXPECT_EQ("045.026.261-80", e.getCPF()); }
