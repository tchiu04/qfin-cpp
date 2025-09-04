#include <iostream>
#include <vector>
#include "qfin/util.hpp"


int main() {
    std::vector<int> v{10, 20, 30};
    int s = sum_vec(v); //call helper
    std::cout << "sum = " << s <<"\n";
}