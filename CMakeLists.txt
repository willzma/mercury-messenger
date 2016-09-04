cmake_minimum_required(VERSION 3.6)
project(mercury_messenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}/out")

set(SOURCE_FILES main.cpp model/text_message.cpp model/text_message.h model/session.cpp model/session.h configuration.cpp configuration.h)
add_executable(mercury_messenger ${SOURCE_FILES})