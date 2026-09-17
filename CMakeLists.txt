cmake_minimum_required(VERSION 3.22.1)

project("zalith_native")

add_library(
    zalith_native
    SHARED
    native_bridge.cpp
)

find_library(
    log-lib
    log
)

target_link_libraries(
    zalith_native
    ${log-lib}
    EGL
    GLESv3
)
