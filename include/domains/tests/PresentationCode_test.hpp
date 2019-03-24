#include <domains/PresentationCode.hpp>
#include <stdexcept>
#include <string>

/* 
  PresentationCode receives a XXXX code at constructor, all must be digits
  so letters are not allowed, these tests check if is a letter or 
  if has wrong lenght. In any of those cases, then class should throw an
  invalid argument
*/

TEST(PresentationCodeTest, LessDigitFail) {
  ASSERT_THROW(PresentationCode("1"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("10"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("100"), std::invalid_argument);
}

TEST(PresentationCodeTest, MoreDigitsFail) {
  ASSERT_THROW(PresentationCode("10010"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("100010"), std::invalid_argument);
}

TEST(PresentationCodeTest, CharDigitFail) {
  ASSERT_THROW(PresentationCode("a"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aa"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aaa"), std::invalid_argument);
  ASSERT_THROW(PresentationCode("aaaaa"), std::invalid_argument);
}
