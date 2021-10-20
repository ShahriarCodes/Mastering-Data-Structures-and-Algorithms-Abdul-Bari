//
// Created by sal on 20.10.21.
//

#include <iostream>

using namespace std;

int main() {
    int A[5];
    int *p;

    // heap memory can only be accessed with pointer
    // todo: creating array in heap
    p = new int[5]; // c++
    p = (int *) malloc(5 * sizeof(int)); // c lang

    p[0] = 5;
    p[2] = 7;
    p[3] = 6;

    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }

    // avoid memory leak problem
    delete[]p;
    // free(p); // clang


    // Todo: increasing a dynamic array size with another pointer
    p = new int[5];
    int *q = new int[10];

    p[0] = 5;
    p[2] = 7;
    p[3] = 6;

    // copying the values of p to q
    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    delete[] p;
    p = q;
    q = nullptr; // removing q from pointing to array


}

