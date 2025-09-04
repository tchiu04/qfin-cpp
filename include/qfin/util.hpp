#pragma once

#include <vector>
#include <numeric>

inline int sum_vec(const std::vector<int>& v){
    return std::accumulate(v.begin(), v.end(), 0);
}