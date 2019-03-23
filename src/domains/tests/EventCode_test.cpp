#include <gtest/gtest.h>
#include <domains/EventCode.hpp>
#include <stdexcept>
#include <string>

TEST(EventCodeTest, OneDigitFail) {
  ASSERT_THROW(EventCode("1"), std::invalid_argument);
}

TEST(EventCodeTest, TwoDigitsFail) {
  ASSERT_THROW(EventCode("10"), std::invalid_argument);
}

TEST(EventCodeTest, ThreeDigitsPass) {
  ASSERT_THROW(EventCode("100"), std::invalid_argument);
}

TEST(EventCodeTest, FourDigitsFail) {
  ASSERT_THROW(EventCode("1001"), std::invalid_argument);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}