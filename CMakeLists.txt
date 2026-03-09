cmake_minimum_required(VERSION 3.16)

project(PhysicsSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    set(CMAKE_GENERATOR_PLATFORM x64)
endif()

add_subdirectory(engine)
add_subdirectory(apps)
add_subdirectory(tests)
