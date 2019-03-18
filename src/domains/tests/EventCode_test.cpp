#include <gtest/gtest.h>
#include <domains/EventCode.hpp>
#include <stdexcept>
#include <string>

TEST(EventCodeTest, OneDigit) {
  ASSERT_THROW(EventCode("abc"), std::invalid_argument);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}