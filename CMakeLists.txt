cmake_minimum_required (VERSION 3.13)
set (CMAKE_CXX_STANDARD 14)

# Project name
project (PassManager)

set (SOURCE_DIR src)
set (INCLUDE_DIR include)

file (GLOB_RECURSE DOMAINS_HEADER_FILES ${SOURCE_DIR}/domains/*.hpp)
set (DOMAINS_SOURCE_FILES ${SOURCE_DIR}/domains/EventCode.cpp
                          ${SOURCE_DIR}/domains/PresentationCode.cpp
                          ${SOURCE_DIR}/domains/EventName.cpp)

# Executable name
add_executable (PassManager ${SOURCE_DIR}/main.cpp
                            ${DOMAINS_SOURCE_FILES}
)
target_include_directories(PassManager PUBLIC ${INCLUDE_DIR})


enable_testing()
find_package(GTest REQUIRED)
file (GLOB_RECURSE TEST_SOURCE_FILES ${SOURCE_DIR}/domains/tests/*.cpp)
file (GLOB_RECURSE TEST_HEADER_FILES ${INCLUDE_DIR}/domains/tests/*.hpp)

add_executable(DomainTest ${TEST_SOURCE_FILES}
                          ${DOMAINS_HEADER_FILES}
                          ${DOMAINS_SOURCE_FILES}
                          ${TEST_HEADER_FILES}
)
add_test(AllTestsInDomain DomainTest)
target_include_directories(DomainTest PUBLIC ${INCLUDE_DIR})
target_link_libraries(DomainTest GTest::GTest GTest::Main)