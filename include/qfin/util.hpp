#pragma once

#include <vector>
#include <numeric>

template <typename T>

inline T sum_vec(const std::vector<T>& v){
    return std::accumulate(v.begin(), v.end(), T{0});
}

template <typename T>
T sum_loop(const std::vector<T>& v){
    T total{0};
    for(T x : v) total += x;
    return total;
}

