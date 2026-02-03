cmake_minimum_required(VERSION 3.29)
project(conan-sqlcipher-nmake LANGUAGES C CXX)

find_package(sqlcipher REQUIRED)

add_executable(test main.cxx)
target_link_libraries(test PRIVATE sqlcipher::sqlcipher)
