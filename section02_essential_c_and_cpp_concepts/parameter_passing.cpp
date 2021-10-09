//
// Created by sal on 08.10.21.
//

#include <iostream>

using namespace std;

// one function cant access values of other function
// using pointers a function can access the variables from other function indirectly
void swap_by_address(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// reference does not take extra memory
void swap_by_reference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    // call by address
    swap_by_address(&a, &b);
    printf("a: %d b:%d \n", a, b);

    swap_by_reference(a, b);
    printf("a: %d b:%d \n", a, b);
}

