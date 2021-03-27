cmake_minimum_required(VERSION 3.17)
project(Venus)

set(CMAKE_CXX_STANDARD 20)

add_executable(Venus main.cpp)

find_package(CAF REQUIRED COMPONENTS core io)
find_package(glog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE glog::glog)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
target_include_directories(${PROJECT_NAME} PRIVATE ${CAF_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${CAF_LIBRARIES})