#include <iostream>
#include <string>
#include <vector>

#include "nn_layer.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    /**
     * TODO: 
     * Would be nice to show C++ STD, compiler used, OS, and other
     * version info (i.e library versions) at the beginning of the 
     * program runtime
     */
    nnDenseLayer nn;
    nn.feed_forward();

    return 0;
}