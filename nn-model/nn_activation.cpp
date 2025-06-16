#include <iostream>
#include <string>

#include "nn_activation.hpp"

Eigen::VectorXf relu(const Eigen::VectorXf& inputs) {
    return inputs.array().cwiseMax(0.0f);
}