#include "mp_adding.h"
#include "mp_printing.h"

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Hello!" << std::endl;
    
    int a = 4;
    int b = 6;
    int c = mp::add(a, b);
    
    mp::print_two_integers(a, b);
    std::cout << "Product: " << c << std::endl;
    mp::print_product(a, b);
    
    return 0;
}
