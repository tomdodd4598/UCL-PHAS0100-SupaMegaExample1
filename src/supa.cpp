#include "arithmetic.hpp"
#include "supa.hpp"

#include <string>

namespace supa {

    std::string add_string(isize a, isize b) {
        isize c = arithmetic::add_integers(a, b);
        isize d = arithmetic::add_pointers(&a, &b);

        std::string str = "Out of function: ";
        str += std::to_string(c);
        str += ", ";
        str += std::to_string(d);
        str += ".\n";

        arithmetic::add_integers(a, b, &c);
        arithmetic::add_pointers(&a, &b, d);

        str += "Inside function: ";
        str += std::to_string(c);
        str += ", ";
        str += std::to_string(d);
        str += ".";

        return str;
    }
}
