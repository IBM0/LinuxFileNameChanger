cmake_minimum_required(VERSION 3.10.2)

#project name
project(LinuxFileNameChanger)

set(EXEC code)

#flags
set(EX_Flag "-lstdc++fs")

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES src/*.cpp)

include_directories(include)

add_executable(${EXEC} ${SOURCES})

#add flags
target_link_libraries(code PRIVATE -lstdc++fs)

