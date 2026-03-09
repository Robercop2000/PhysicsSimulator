enable_testing()

add_executable(physics_tests
    physics_tests.cpp
)

target_link_libraries(physics_tests
    PRIVATE physics_engine
)

# Salida clara
set_target_properties(physics_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests
)

# Registrar test con CTest
add_test(NAME physics_tests COMMAND physics_tests)
