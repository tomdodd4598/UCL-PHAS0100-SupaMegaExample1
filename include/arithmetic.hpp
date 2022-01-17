#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include <stdint.h>

namespace arithmetic {

    typedef intmax_t isize;

    isize add_integers(isize a, isize b);

    isize add_pointers(isize* a, isize* b);

    void add_integers(isize a, isize b, isize* c);

    void add_pointers(isize* a, isize* b, isize& c);
}

#endif
