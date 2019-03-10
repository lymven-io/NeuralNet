cmake_minimum_required(VERSION 3.0)
project(NeuralNet)

set(CMAKE_BUILD_TYPE    Debug)
set(CMAKE_CXX_FLAGS     "${CMAKE_CXX_FLAGS} -std=c++14")

# main cpp
add_executable(
    NeuralNet
    src/main.cpp
    src/Neuron.cpp
    src/Matrix.cpp
    src/Layer.cpp
    src/NeuralNetwork.cpp
)
