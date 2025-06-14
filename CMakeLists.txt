cmake_minimum_required(VERSION 3.20)

project(NeuralNetwork VERSION 1.0
    DESCRIPTION "Self Implemented Neural Network"
    LANGUAGES CXX
)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch outside dependencies
include(FetchContent)

FetchContent_Declare(
    Eigen3
    GIT_REPOSITORY  https://gitlab.com/libeigen/eigen.git
    GIT_TAG         3.4.0 # release 3.4.0
    GIT_SHALLOW     TRUE
)
FetchContent_MakeAvailable(Eigen3)

# Add our subdirectories
add_subdirectory(appl)
add_subdirectory(lib)