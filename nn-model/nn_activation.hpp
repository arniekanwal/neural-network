#ifndef _NN_ACTIVATION_HPP_
#define _NN_ACTIVATION_HPP_

#include <Eigen/Core>

/**
 * @brief ReLU(x) = max(0, x)
 * @return modified Eigen Vector
 */
Eigen::VectorXf relu(const Eigen::VectorXf& inputs);


#endif /* _NN_ACTIVATION_HPP_ */