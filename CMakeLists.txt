cmake_minimum_required(VERSION 3.0.0)
project(mariadb VERSION 1.0.0)

include(CTest)
enable_testing()

include_directories(simplex-toolkit/include)
include_directories(mariadb-connector-c)
include_directories(build/mariadb-connector-c/include)

set(INSTALL_PLUGINDIR ../build)
add_subdirectory(mariadb-connector-c)
add_subdirectory(simplex-toolkit)
add_subdirectory(cpp-wrapper)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)