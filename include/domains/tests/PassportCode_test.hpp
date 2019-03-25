#include <domains/PresentationCode.hpp>

#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

/* 
  PresentationCode receives a XXXX code at constructor, all must be digits
  so letters are not allowed, these tests check if is a letter or 
  if has wrong lenght. In any of those cases, then class should throw an
  invalid argument
*/

TEST(PassportCode, LessDigitFail) {
  ASSERT_THROW(PresentationCode("1"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("10"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("1000"), std::invalid_argument);
}

TEST(PassportCode, MoreDigitsFail) {
  ASSERT_THROW(PresentationCode("100010"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("10001000123"), std::invalid_argument);
}

TEST(PassportCode, CharDigitFail) {
  ASSERT_THROW(PresentationCode("a"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aa"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aaa"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aaaaa"), std::invalid_argument);
}
