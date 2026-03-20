add_library(engine)

target_sources(engine
    PRIVATE

    src/physics/core/physics_world.cpp

    src/physics/integration/verlet_integrator.cpp
    src/physics/integration/euler_integrator.cpp

    src/physics/forces/gravity_force.cpp
    src/physics/forces/spring_force.cpp

    src/physics/registry/force_registry.cpp
)

target_include_directories(engine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(engine
    PUBLIC
        cxx_std_20
)