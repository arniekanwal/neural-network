# Set the project name
project(unittest)

# Add a testing executable
add_executable(${PROJECT_NAME} 
    test_main.cpp
    test_activation.cpp
)

# Link Catch2 dependency and neural-network library
target_link_libraries(${PROJECT_NAME} PRIVATE
    neural-network
    Catch2::Catch2
)

# Include files in source directory
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
)

# enable CTest and register
enable_testing()
add_test(NAME test COMMAND ${PROJECT_NAME})
