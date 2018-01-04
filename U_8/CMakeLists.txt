cmake_minimum_required(VERSION 3.8)
project(U_8)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ShoppingCart.cpp ShoppingCart.h CartItem.cpp CartItem.h Person.cpp Person.h)
add_executable(U_8 ${SOURCE_FILES})

