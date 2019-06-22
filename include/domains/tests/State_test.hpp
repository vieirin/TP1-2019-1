#include "domains/State.hpp"
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

TEST(StateTest, StateWithNumbers) {
    ASSERT_THROW(State("14"), std::invalid_argument);
    ASSERT_THROW(State("154"), std::invalid_argument);
}

TEST(StateTest, StateWithMoreLetters) {
    ASSERT_THROW(State("DFT"), std::invalid_argument);
}
// Ludum Dare

TEST(StateTest, StateWith1digit) {
    ASSERT_THROW(State("D"), std::invalid_argument);
}
TEST(StateTest, StateDontExist) {
    ASSERT_THROW(State("AB"), std::invalid_argument)
        << "Correct Format but dont exist that State!";
}

TEST(StateTest, CorrectScenario) {
    ASSERT_NO_THROW(State("DF"))
        << "didnt throw invalid_Argument->Correct input!";
}

State n("DF");

TEST(StateTestTest, TestingReturns) { EXPECT_EQ("DF", n.getState()); }
