//
// Created by sal on 19.10.21.
//

#include <iostream>

using namespace std;

// time O(2^(n+1) -1)
void TOH(int n, int A, int B, int C) {
    if (n > 0) {
        TOH(n - 1, A, C, B);
        printf("from %d to %d \n", A, C);
        TOH(n - 1, B, A, C);
    }
}

int main() {
    TOH(3, 1, 2, 3);
}

