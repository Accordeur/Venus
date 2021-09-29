set(BINARY lib_${CMAKE_PROJECT_NAME})

#add_executable(Test src/main.cpp)
add_library(${BINARY} SHARED venus.cpp include/venus/all.h)

target_link_libraries(${BINARY} PRIVATE caf_core caf_io caf_openssl)

find_package(glog CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE glog::glog)

