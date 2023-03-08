cmake_minimum_required(VERSION 3.20)
project(epfu21z_102_e_penguins C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(epfu21z_102_e_penguins
        src/check_if.h
        src/check_if.c
        src/dataTypes.h
        src/board.c
        src/board.h
        src/io.c
        src/io.h
        src/mainProgram.c)
