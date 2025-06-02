#include <iostream>
#include <string>
#include <vector>

#include <Eigen/Dense>

#include "libNeuralNet.h"

using namespace Eigen;

int do_something() {
    // Create matrices
    MatrixXd weights = MatrixXd::Random(3, 4);
    VectorXd input(4);
    input << 1.0, 2.0, 3.0, 4.0;
    
    // Forward pass
    VectorXd output = weights * input;
    
    // Element-wise operations
    VectorXd activated = output.array().tanh(); // activation function
    
    std::cout << "Output: " << activated.transpose() << std::endl;
    return 0;
}
