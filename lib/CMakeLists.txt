# CMakeList.txt: archivo del proyecto de CMake de nivel superior, establezca la configuración global
# e incluya los subproyectos aquí.
#
add_library(mylib
    system.cpp
)

target_include_directories(mylib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
