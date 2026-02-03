cmake_minimum_required(VERSION 3.29)
project(conan-sqlcipher-nmake LANGUAGES C CXX)

if(HACK)
  set(CMAKE_C_COMPILER_SAVED ${CMAKE_C_COMPILER})
  string(REPLACE "/" "\\\\" CMAKE_C_COMPILER "${CMAKE_C_COMPILER}")
endif()

find_package(sqlcipher REQUIRED)

if(HACK)
  set(CMAKE_C_COMPILER ${CMAKE_C_COMPILER_SAVED})
endif()


add_executable(test main.cxx)
target_link_libraries(test PRIVATE sqlcipher::sqlcipher)
