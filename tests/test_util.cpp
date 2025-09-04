#include <catch2/catch_all.hpp>
#include "qfin/util.hpp"

TEST_CASE("sum functions match for ints and doubles"){
    std::vector<int> vi{1,2,3};
    REQUIRE(sum_loop(vi)==sum_vec(vi));

    std::vector<double> vd{1.5, 2.5, 3.5};
    REQUIRE(sum_loop(vd) == Catch::Approx(7.5));
    REQUIRE(sum_vec(vd) == Catch::Approx(7.5));
}