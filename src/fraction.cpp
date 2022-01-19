#include "fraction.hpp"

#include <string>

namespace fraction {

    std::string Fraction::to_string() {
        return std::to_string(num) + " / " + std::to_string(den);
    }
}
