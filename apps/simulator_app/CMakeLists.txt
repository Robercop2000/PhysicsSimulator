add_executable(simulator_app
    main.cpp
)

target_link_libraries(simulator_app
    PRIVATE physics_engine
)

set_target_properties(simulator_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/apps/simulator
)
