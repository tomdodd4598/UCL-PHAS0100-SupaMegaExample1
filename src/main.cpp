#include "factors.hpp"
#include "fraction.hpp"
#include "supa.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {

    long a = 0, b = 0;

    if (argc > 1) {
        a = std::stol(argv[1]);
    }
    if (argc > 2) {
        b = std::stol(argv[2]);
    }

    std::cout << "a = " << a << ", b = " << b << ".\n" << supa::add_string(a, b) << std::endl;

    std::cout << "HCF: ";
    auto vals = std::vector<long>();
    for (int i = 1; i < argc; ++i) {
        std::cout << argv[i];
        if (i < argc - 1) {
            std::cout << ", ";
        }
        vals.push_back(std::stol(argv[i]));
    }
    std::cout << " -> " << factors::highest_common_factor(vals) << std::endl;

    std::cout << "Fraction: " << fraction::Fraction(a, b).to_string() << std::endl;

    return 0;
}
