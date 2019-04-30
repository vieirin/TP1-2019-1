#include <entities/Presentation.hpp>
#include <gtest/gtest.h>

TEST(PresentationTest, validPresentation) {
    auto a = Presentation(50, "1234", 1000, 5, "22/03/98", "16:15");
}

TEST(PresentationTest, invalidAviability) {
    ASSERT_THROW(Presentation(500, "1234", 1000, 5, "22/03/18", "22:15"),
                 std::invalid_argument);
}

TEST(PresentationTest, invalidDate) {
    ASSERT_THROW(Presentation(50, "1234", 1000, 5, "22/03/18", "16:36"),
                 std::invalid_argument);
}
