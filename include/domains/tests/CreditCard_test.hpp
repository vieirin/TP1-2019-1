#include "domains/CreditCard.hpp"
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
// Testes
TEST(CreditCardTest, FormatValid) {
    ASSERT_THROW(CreditCard("1234123123123444"), std::invalid_argument)
        << "Boa1";
}
TEST(CreditCardTest, FormatValidWrongSequence) {
    ASSERT_THROW(CreditCard("4040404044000222"), std::invalid_argument)
        << "Não eh para eu aparecer";
}

TEST(CreditCardTest, FormatInvalid) {
    ASSERT_THROW(CreditCard("12929229"), std::invalid_argument)
        << "Não eh para eu aparecer";
}

// Ludum Dare
