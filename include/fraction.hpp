#ifndef FRACTION_H
#define FRACTION_H

#include "factors.hpp"

#include <stdint.h>
#include <string>
#include <utility>

namespace fraction {

    struct Fraction {

        long num, den;

        template <typename T>
        Fraction(T&& numerator, T&& denominator) : num{ std::forward<T>(numerator) }, den{ std::forward<T>(denominator) } {
            factors::factorize(num, den);
        }

        template <typename T>
        Fraction(T&& num) : Fraction(std::forward<T>(num), 1) {}

        std::string to_string();
    };
}

#endif
