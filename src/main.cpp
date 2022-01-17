#include "supa.hpp"

#include <iostream>
#include <string>

int main(int argc, char** argv) {

    typedef supa::isize isize;

    isize a = 0, b = 0;

    if (argc > 1) {
        a = std::stoi(argv[1]);
    }
    if (argc > 2) {
        b = std::stoi(argv[2]);
    }

    std::cout << "a = " << std::to_string(a) << ", b = " << std::to_string(b) << ".\n" << supa::add_string(a, b) << std::endl;

    return 0;
}
