#include <domains/AgeGroup.hpp>
#include <gtest/gtest.h>
#include <vector>

TEST(AgeGroupTest, notAGroup) {
    ASSERT_THROW(AgeGroup("15"), std::invalid_argument);
}

TEST(AgeGroupTest, freeGroup) {
    auto allowedGroups =
        std::vector<std::string>{"L", "10", "12", "14", "16", "18"};
    for (auto allowed : allowedGroups) {
        auto group = AgeGroup(allowed);
        ASSERT_EQ(group.getGroup(), allowed);
    }
}

AgeGroup b("L");

TEST(AgeGroupTest, TestingReturns) { EXPECT_EQ("L", b.getGroup()); }
