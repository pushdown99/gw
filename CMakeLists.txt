cmake_minimum_required(VERSION 2.8.12)
project(kaa-application C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99 -g -Wall -Wextra")

add_subdirectory(kaa)
add_executable(kaa-app main.c)

include_directories(include)

target_link_libraries(kaa-app kaac paho-mqtt3a pthread curl json-c popup)

