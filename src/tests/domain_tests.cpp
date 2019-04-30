#include <domains/tests/AgeGroup_test.hpp>
#include <domains/tests/Availability_test.hpp>
#include <domains/tests/EventCode_test.hpp>
#include <domains/tests/EventName_test.hpp>
#include <domains/tests/PassportCode_test.hpp>
#include <domains/tests/PresentationCode_test.hpp>
#include <domains/tests/Price_test.hpp>
#include <domains/tests/Room_test.hpp>
#include <domains/tests/Ticket_test.hpp>
#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    auto tests_results = RUN_ALL_TESTS();
    if (tests_results != 0) {
        std::cout << "Could not run all unitary tests" << std::endl;
    }
    return 0;
}