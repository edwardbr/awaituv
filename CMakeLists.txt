cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

include(HunterGate)

huntergate(
  URL "https://github.com/cpp-pm/hunter/archive/v0.23.245.tar.gz" SHA1
  "36e7f44ee4b3f8e25683e9d700f05a27ecb0a848" FILEPATH
  "${CMAKE_CURRENT_LIST_DIR}/cmake/Hunter/config.cmake")

project (awaituv)

hunter_add_package(libuv)
find_package(libuv CONFIG REQUIRED)
hunter_add_package(CURL)
find_package(CURL CONFIG REQUIRED)
hunter_add_package(OpenSSL)
find_package(OpenSSL REQUIRED)
#hunter_add_package(Libssh2)
#find_package(Libssh2 CONFIG REQUIRED)
hunter_add_package(RapidJSON)
find_package(RapidJSON CONFIG REQUIRED)
hunter_add_package(ZLIB)
find_package(ZLIB CONFIG REQUIRED)


 if (MSVC)
SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -await /std:c++lastest")
link_libraries (libuv libcurl)
endif ()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcoroutines-ts -std=c++2a -stdlib=libc++")
find_package (CURL REQUIRED)
link_libraries (libuv::uv curl)
endif ()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcoroutines -std=c++20")
find_package (CURL REQUIRED)
link_libraries (libuv::uv curl)
endif ()

include_directories (inc)
add_subdirectory (samples)
