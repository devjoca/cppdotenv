cmake_minimum_required(VERSION 3.3)
project(cppdotenv)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES include/Dotenv.h src/Dotenv.cpp include/Parser.h src/Parser.cpp include/helpers.h src/helpers.cpp)

