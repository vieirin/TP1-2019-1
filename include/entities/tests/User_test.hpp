#include <entities/User.hpp>
#include <gtest/gtest.h>

TEST(UserTest, validUser) {
    auto a = User("284.338.630-61", "Aler12");
    ASSERT_NO_THROW(User("284.338.630-61", "Aler12"));
}

TEST(UserTest, invalidCPF) {
    ASSERT_THROW(User("284.338.630-54", "Aler12"), std::invalid_argument);
}

TEST(UserTest, invalidPass) {
    ASSERT_THROW(User("284.338.630-54", "Aler1332"), std::invalid_argument);
}
