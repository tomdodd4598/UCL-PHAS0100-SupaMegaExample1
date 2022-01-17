#include "arithmetic.hpp"

namespace arithmetic {

    isize add(isize a, isize b) {
        return a + b;
    }

    isize add(isize* a, isize* b) {
        return *a + *b;
    }

    void add(isize a, isize b, isize* c) {
        *c = a + b;
    }

    void add(isize* a, isize* b, isize& c) {
        c = *a + *b;
    }
}
