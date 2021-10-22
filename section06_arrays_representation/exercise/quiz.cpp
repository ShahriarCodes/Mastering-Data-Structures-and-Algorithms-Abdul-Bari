//
// Created by sal on 22.10.21.
//

#include <iostream>

using namespace std;

int main() {
    // Assume that the address of x is 2000
    unsigned int x[4][3] = {{1,  2,  3},
                            {4,  5,  6},
                            {7,  8,  9},
                            {10, 11, 12}};

    printf("%u, %u,%u, %u", x, x + 3, *(x + 3), *(x + 2) + 3);

};

