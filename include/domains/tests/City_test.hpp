#include "domains/City.hpp"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(CityTest, CityWithNumbers) {
    ASSERT_THROW(City("Roosevelt22"), std::invalid_argument);
    ASSERT_THROW(City("9293922"), std::invalid_argument);
}

TEST(CityTest, CityWithOnlyLetters) {
    ASSERT_THROW(City("Brasília"), std::invalid_argument)
        << "Didnt passed because didnt throw invalid_Argument->Correct input!";
}
TEST(CityTest, CityWithSpaces) {
    ASSERT_THROW(City("Espírito Santo"), std::invalid_argument)
        << "Didnt passed because didnt throw invalid_Argument->Correct input!";
}

TEST(CityTest, CityWithDoubleSpaces) {
    ASSERT_THROW(City("São  Paulo"), std::invalid_argument);
}