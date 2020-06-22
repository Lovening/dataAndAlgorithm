cmake_minimum_required(VERSION 3.15)
project(mystack)

set(CMAKE_CXX_STANDARD 14)

add_executable(mystack main.cpp myUntil.h myUntil.cpp myStack.cpp myStack.h)