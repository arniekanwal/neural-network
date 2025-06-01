cmake_minimum_required(VERSION 3.20)

project(NeuralNetwork VERSION 1.0
        DESCRIPTION "Self Implemented Neural Network"
        LANGUAGES CXX)
    

# Add our subdirectories
add_subdirectory(appl)
add_subdirectory(lib)