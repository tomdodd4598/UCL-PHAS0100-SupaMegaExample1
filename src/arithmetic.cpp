#include "arithmetic.hpp"

namespace arithmetic {

    long add_integers(long a, long b) {
        return a + b;
    }

    long add_pointers(long* a, long* b) {
        return *a + *b;
    }

    void add_integers(long a, long b, long* c) {
        *c = a + b;
    }

    void add_pointers(long* a, long* b, long& c) {
        c = *a + *b;
    }
}
