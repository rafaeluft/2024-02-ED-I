cmake_minimum_required(VERSION 3.29)
project(InsertBegin C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(InsertBegin
    main.c
    TLinkedList.c
    TLinkedList.h)
