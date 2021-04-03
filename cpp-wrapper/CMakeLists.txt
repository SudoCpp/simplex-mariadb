cmake_minimum_required(VERSION 3.0.0)
project(simplex-mariadb VERSION 1.0.0)

include(CTest)
enable_testing()

add_library(simplex-mariadb MariaDB.cpp) #SqliteStatement.cpp
target_link_libraries(simplex-mariadb simplex-toolkit libmariadb)

add_executable(simplex-test main.cpp)
target_link_libraries(simplex-test simplex-mariadb)