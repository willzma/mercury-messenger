cmake_minimum_required(VERSION 3.6)
project(pizza_time)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/TextMessage.cpp model/TextMessage.h model/Session.cpp model/Session.h)
add_executable(pizza_time ${SOURCE_FILES})