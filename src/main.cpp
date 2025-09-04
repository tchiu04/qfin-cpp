#include <iostream>
#include <vector>
#include "qfin/util.hpp"


int main() {
    std::vector<double> v{1.5, 2.5, 3.5};
    double s = sum_vec(v); //call helper
    std::cout << "sum = " << s <<"\n";

    std::vector<int> vi{1,2,3,4,5};

    std::cout << "Loop sum = " << sum_loop(vi) << "\n";
    std::cout << "Accumulate sum = " << sum_vec(vi) << "\n";
}