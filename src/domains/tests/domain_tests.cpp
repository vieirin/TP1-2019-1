#include <gtest/gtest.h>
#include <domains/tests/PresentationCode_test.hpp>
#include <domains/tests/EventCode_test.hpp>

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}