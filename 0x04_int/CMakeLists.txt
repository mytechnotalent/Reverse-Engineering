cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(0x04_int
  0x04_int.c
)

pico_enable_stdio_usb(0x04_int 1)

pico_add_extra_outputs(0x04_int)

target_link_libraries(0x04_int pico_stdlib)
