#include <catch2/catch.hpp>

#include "nn_activation.hpp"

TEST_CASE("ReLU activation", "[activation]") {
    Eigen::VectorXf input(3);
    input << -1.0f, 0.0f, 1.0f;
    
    auto result = relu(input);
    
    REQUIRE(result(0) == 0.0f);
    REQUIRE(result(1) == 0.0f);
    REQUIRE(result(2) == 1.0f);
}