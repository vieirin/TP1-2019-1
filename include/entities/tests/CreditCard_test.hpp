#include <entities/CreditCard.hpp>
#include <gtest/gtest.h>

TEST(CreditCardTest, validCard) {
    ASSERT_NO_THROW(CreditCard("4904839822485959", "296", "08/23"));
}

TEST(CreditCardTest, invalidCard) {
    ASSERT_THROW(CreditCard("453944083721548", "296", "08/23"),
                 std::invalid_argument);
}

TEST(CreditCardTest, invalidCode) {
    ASSERT_THROW(CreditCard("4904839822485959", "29", "08/23"),
                 std::invalid_argument);
}

TEST(CreditCardTest, invalidExpiration) {
    ASSERT_THROW(CreditCard("4904839822485959", "296", "08/2023"),
                 std::invalid_argument);
}
