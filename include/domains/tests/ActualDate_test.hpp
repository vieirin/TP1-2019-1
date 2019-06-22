#include <domains/ActualDate.hpp>
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
// Testes
TEST(ActualDateTest, FormatInvalid) {
    ASSERT_THROW(ActualDate("30/02/1995"), std::invalid_argument);
}

TEST(ActualDateTest, ReturnFalse) {
    ASSERT_THROW(ActualDate("26/02/98"), std::invalid_argument) << "Boa1";
}

TEST(ActualDateTest, ReturnFalseLeapYear) {
    ASSERT_THROW(ActualDate("29/02/40"), std::invalid_argument) << "Boa2";
}

TEST(ActualDateTest, AAA) {
    ASSERT_THROW(ActualDate("20/02/97"), std::invalid_argument) << "Boa3";
}
ActualDate a("30/05/40");

TEST(ActualDateTest, TestingReturns) {
    EXPECT_EQ("30/05/40", a.getActualDate());
}
