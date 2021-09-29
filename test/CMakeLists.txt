set(BINARY ${CMAKE_PROJECT_NAME}_test)

add_executable(${BINARY} main.cpp)

include_directories(${PWD}../src/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
target_link_libraries(${BINARY} PRIVATE lib_${CMAKE_PROJECT_NAME})

enable_testing()