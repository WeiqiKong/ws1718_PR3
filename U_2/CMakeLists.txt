cmake_minimum_required(VERSION 3.7)
project(Ueb_2)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES differenz.c differenz.h input.c input.h math.c summe.c summe.h)
add_executable(Ueb_2 ${SOURCE_FILES})