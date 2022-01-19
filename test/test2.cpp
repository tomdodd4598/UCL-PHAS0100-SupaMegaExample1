#include "catch.hpp"
#include "factors.hpp"
#include "main.hpp"

#include <iostream>
#include <vector>

TEST_CASE("Highest common factors", "[factors]") {
    
    if (test::argc < 3) {
        std::cerr << "Requires at least two arguments!" << std::endl;
        REQUIRE(false);
    }
    else {
        REQUIRE(true);

        auto vals = std::vector<long>();
        for (int i = 1; i < test::argc - 1; ++i) {
            vals.push_back(std::stol(test::argv[i]));
        }
        long hcf = std::stol(test::argv[test::argc - 1]);

        REQUIRE(factors::highest_common_factor(vals) == hcf);
    }
}
