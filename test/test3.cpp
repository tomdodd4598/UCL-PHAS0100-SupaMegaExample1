#include "catch.hpp"
#include "fraction.hpp"
#include "main.hpp"

#include <iostream>
#include <string>

TEST_CASE("Fraction struct", "[fraction]") {
    
    if (test::argc != 4) {
        std::cerr << "Requires exactly three arguments!" << std::endl;
        REQUIRE(false);
    }
    else {
        REQUIRE(true);

        long num = std::stol(test::argv[1]), den = std::stol(test::argv[2]);
        long hcf = std::stol(test::argv[3]);

        auto f = fraction::Fraction(num, den);

        REQUIRE((num / f.num == hcf && den / f.den == hcf));
    }
}
