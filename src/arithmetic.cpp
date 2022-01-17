#include "arithmetic.hpp"

namespace arithmetic {

    isize add_integers(isize a, isize b) {
        return a + b;
    }

    isize add_pointers(isize* a, isize* b) {
        return *a + *b;
    }

    void add_integers(isize a, isize b, isize* c) {
        *c = a + b;
    }

    void add_pointers(isize* a, isize* b, isize& c) {
        c = *a + *b;
    }
}
