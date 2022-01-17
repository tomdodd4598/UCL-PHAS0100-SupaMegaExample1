#include "arithmetic.hpp"
#include "catch.hpp"
#include "main.hpp"

#include <iostream>
#include <string>

#define TEST_SECTION_START \
std::cout << "Section start: a = " << a << ", b = " << b << "." << std::endl;\
a = std::stoi(test::argv[1]), b = std::stoi(test::argv[2]);\
isize d = a + b;\

TEST_CASE("Command line arguments", "[addition2]") {
    
    if (test::argc <= 2) {
        std::cerr << "Requires at least two arguments!" << std::endl;
        REQUIRE(test::argc > 2);
    }
    else {
        REQUIRE(true);

        typedef arithmetic::isize isize;

        isize a = 0, b = 0, c = 0;

        SECTION("add_integers") {
            TEST_SECTION_START
            REQUIRE(arithmetic::add_integers(a, b) == d);

            arithmetic::add_integers(a, b, &c);
            REQUIRE(c == d);
        }

        SECTION("add_pointers") {
            TEST_SECTION_START
            REQUIRE(arithmetic::add_pointers(&a, &b) == d);

            arithmetic::add_pointers(&a, &b, c);
            REQUIRE(c == d);
        }
    }
}
