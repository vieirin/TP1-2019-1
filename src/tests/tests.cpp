
#include <domains/tests/ActualDate_test.hpp>
#include <domains/tests/AgeGroup_test.hpp>
#include <domains/tests/Availability_test.hpp>
#include <domains/tests/CPF_test.hpp>
#include <domains/tests/CardNumber_test.hpp>
#include <domains/tests/EventCode_test.hpp>
#include <domains/tests/EventName_test.hpp>
#include <domains/tests/PassportCode_test.hpp>
#include <domains/tests/Password_test.hpp>
#include <domains/tests/PresentationCode_test.hpp>
#include <domains/tests/Price_test.hpp>
#include <domains/tests/Room_test.hpp>
#include <domains/tests/SecureCode_test.hpp>
#include <domains/tests/StartTime_test.hpp>
#include <domains/tests/State_test.hpp>
#include <domains/tests/TicketCode_test.hpp>
#include <domains/tests/ValidDate_test.hpp>
#include <entities/tests/CreditCard_test.hpp>
#include <entities/tests/Event_test.hpp>
#include <entities/tests/Presentation_test.hpp>
#include <entities/tests/Ticket_test.hpp>
#include <entities/tests/User_test.hpp>
#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}