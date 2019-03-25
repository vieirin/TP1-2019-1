#include <gtest/gtest.h>
#include <domains/EventCode.hpp>
#include <stdexcept>
#include <string>

/* 
  EventCode receives a XXX code at constructor, all must be digits
  so letters are not allowed, these tests check if is a letter or 
  if has wrong lenght. In any of those cases, then class should throw an
  invalid argument
*/

TEST(EventCodeTest, LessDigitFail) {
  ASSERT_THROW(EventCode("1"), std::invalid_argument);
  ASSERT_THROW(EventCode("10"), std::invalid_argument);
}

TEST(EventCodeTest, MoreDigitsFail) {
  ASSERT_THROW(EventCode("1001"), std::invalid_argument);
  ASSERT_THROW(EventCode("10010"), std::invalid_argument);
}

TEST(EventCodeTest, CharDigitFail) {
  ASSERT_THROW(EventCode("a"), std::invalid_argument);
  ASSERT_THROW(EventCode("aa"), std::invalid_argument);
  ASSERT_THROW(EventCode("aaa"), std::invalid_argument);
  ASSERT_THROW(EventCode("aaaaa"), std::invalid_argument);
}

