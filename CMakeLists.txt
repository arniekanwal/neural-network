cmake_minimum_required(VERSION 3.20)

project(NeuralNetwork VERSION 1.0
    DESCRIPTION "Self Implemented Neural Network"
    LANGUAGES CXX
)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch Eigen for LinAlg support
include(FetchContent)

FetchContent_Declare(
    Eigen3
    GIT_REPOSITORY  https://gitlab.com/libeigen/eigen.git
    GIT_TAG         3.4.0 # release 3.4.0
    GIT_SHALLOW     TRUE
)
FetchContent_MakeAvailable(Eigen3)

# Fetch Catch2 for test driven development
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
    GIT_TAG         v3.8.1 # or a later release
    GIT_SHALLOW     TRUE 
)
FetchContent_MakeAvailable(Catch2)

# Add our subdirectories
add_subdirectory(appl)
add_subdirectory(nn-model)
add_subdirectory(tests)