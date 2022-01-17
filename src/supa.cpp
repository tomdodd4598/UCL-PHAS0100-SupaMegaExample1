#include "arithmetic.hpp"
#include "supa.hpp"

namespace supa {

    std::string add_string(isize a, isize b) {
        isize c = arithmetic::add_integers(a, b);
        isize d = arithmetic::add_pointers(&a, &b);

        std::string str = std::string("Out of function: ").append(std::to_string(c)).append(", ").append(std::to_string(d)).append(",\n");

        arithmetic::add_integers(a, b, &c);
        arithmetic::add_pointers(&a, &b, d);

        str.append("Inside function: ").append(std::to_string(c)).append(", ").append(std::to_string(d)).append(".");

        return str;
    }
}
