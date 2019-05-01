cmake_minimum_required (VERSION 3.10)
set (CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)
# Project name
project (PassManager)

set (SOURCE_DIR src)
set (INCLUDE_DIR include)

file (GLOB_RECURSE DOMAINS_HEADER_FILES ${INCLUDE_DIR}/domains/*.hpp)
file (GLOB_RECURSE ENTITIES_HEADER_FILES ${INCLUDE_DIR}/entities/*.hpp)
file (GLOB_RECURSE DOMAINS_SOURCE_FILES ${SOURCE_DIR}/domains/*.cpp)
file (GLOB_RECURSE ENTITIES_SOURCE_FILES ${SOURCE_DIR}/entities/*.cpp)

# Executable name
add_executable (PassManager ${SOURCE_DIR}/main.cpp
                            ${DOMAINS_SOURCE_FILES}
)
target_include_directories(PassManager PUBLIC ${INCLUDE_DIR})


enable_testing()
find_package(GTest REQUIRED)
file (GLOB_RECURSE TEST_SOURCE_FILES ${SOURCE_DIR}/tests/*.cpp)

file (GLOB_RECURSE TEST_HEADER_FILES_DOMAINS ${INCLUDE_DIR}/domains/tests/*.hpp)
file (GLOB_RECURSE TEST_HEADER_FILES_ENTITIES ${INCLUDE_DIR}/entities/tests/*.hpp)
add_executable(Test ${TEST_SOURCE_FILES}
                          ${DOMAINS_HEADER_FILES}
                          ${DOMAINS_SOURCE_FILES}
                          ${ENTITIES_HEADER_FILES}
                          ${ENTITIES_SOURCE_FILES}
                          ${TEST_HEADER_FILES_DOMAINS}
                          ${TEST_HEADER_FILES_ENTITIES}
)           
add_test(AllTestsInDomain Test)
target_include_directories(Test PUBLIC ${INCLUDE_DIR})
target_link_libraries(Test GTest::GTest GTest::Main)