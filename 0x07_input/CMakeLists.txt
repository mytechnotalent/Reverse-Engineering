cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
pico_sdk_init()

add_executable(main
  main.c
  print.c
  input.c
)

pico_enable_stdio_usb(main 1)
pico_enable_stdio_uart(main 0)
pico_add_extra_outputs(main)

target_link_libraries(main pico_stdlib hardware_i2c)

add_custom_target(flash
    COMMAND cp main.uf2 /Volumes/RPI-RP2/
    DEPENDS main
)

