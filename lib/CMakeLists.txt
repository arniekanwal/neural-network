# Set the project name
project(lib)

# Add a library with the above sources
add_library(${PROJECT_NAME} libNeuralNet.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
)

# TODO: if we were to split this into include/ and src/ paths
# target_include_directories(${PROJECT_NAME}
#     PUBLIC ${PROJECT_SOURCE_DIR}/include
# )