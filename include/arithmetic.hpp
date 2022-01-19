#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include <stdint.h>

namespace arithmetic {

    long add_integers(long a, long b);

    long add_pointers(long* a, long* b);

    void add_integers(long a, long b, long* c);

    void add_pointers(long* a, long* b, long& c);
}

#endif
