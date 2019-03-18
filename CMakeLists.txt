cmake_minimum_required (VERSION 3.13)
set (CMAKE_CXX_STANDARD 14)

# Project name
project (PassManager)

set (SOURCE_DIR src)
set (INCLUDE_DIR include)

set (DOMAINS_HEADER_FILES ${INCLUDE_DIR}/domains/EventCode.hpp)
file (GLOB_RECURSE DOMAINS_SOURCE_FILES ${SOURCE_DIR}/domains/*.cpp)

# Executable name
add_executable (PassManager ${SOURCE_DIR}/main.cpp
                            ${SOURCE_DIR}/domains/EventCode.cpp)
target_include_directories(PassManager PUBLIC ${INCLUDE_DIR})


enable_testing()
find_package(GTest REQUIRED)

add_executable(DomainTest ${SOURCE_DIR}/domains/tests/EventCode_test.cpp
                          ${DOMAINS_HEADER_FILES}
                          ${DOMAINS_SOURCE_FILES}
)
target_include_directories(DomainTest PUBLIC ${INCLUDE_DIR})
target_link_libraries(DomainTest GTest::GTest GTest::Main)
add_test(AllTestsInDomain DomainTest)