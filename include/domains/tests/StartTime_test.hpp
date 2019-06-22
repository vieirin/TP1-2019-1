#include "domains/StartTime.hpp"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(StartTimeTest, StartTimeOnlyNumbers) {
    ASSERT_THROW(StartTime("2144"), std::invalid_argument);
    ASSERT_THROW(StartTime("522"), std::invalid_argument);
}

TEST(StartTimeTest,
     StartTimeLetters){ASSERT_THROW(StartTime("HH:MM"), std::invalid_argument)

} TEST(StartTimeTest, StartTimeTimeNotValid) {
    ASSERT_THROW(StartTime("25:40"), std::invalid_argument)
        << "Didnt passed because didnt throw invalid_Argument->Correct input!";
}

TEST(StartTimeTest, StartTimeValidInput) {
    ASSERT_THROW(StartTime("12:45"), std::invalid_argument);
}

StartTime m("12:45");

TEST(StartTimeTestTest, TestingReturns) {
    EXPECT_EQ("12:45", m.getStartTime());
}
