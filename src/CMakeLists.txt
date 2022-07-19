cmake_minimum_required(VERSION 3.21)

add_executable(module_25_2 main.cpp kbd.cpp ram.cpp cpu.cpp gpu.cpp hdd.cpp ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/hdd.h)