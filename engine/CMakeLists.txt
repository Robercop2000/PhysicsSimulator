add_library(physics_engine STATIC
    src/core/world.cpp
    src/core/simulation.cpp
    src/physics/rigid_body.cpp
    src/physics/integrator.cpp
    src/physics/collider.cpp
    src/math/vector3.cpp
)

target_include_directories(physics_engine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)