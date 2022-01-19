#include "arithmetic.hpp"
#include "supa.hpp"

#include <string>

namespace supa {

    std::string add_string(long a, long b) {
        long c = arithmetic::add_integers(a, b);
        long d = arithmetic::add_pointers(&a, &b);

        std::string str = "Sum out of function: ";
        str += std::to_string(c);
        str += ", ";
        str += std::to_string(d);
        str += ".\n";

        arithmetic::add_integers(a, b, &c);
        arithmetic::add_pointers(&a, &b, d);

        str += "Sum inside function: ";
        str += std::to_string(c);
        str += ", ";
        str += std::to_string(d);
        str += ".";

        return str;
    }
}
