//
// Created by sal on 09.10.21.
//

#include <iostream>

using namespace std;

// arrays are always passed by address
// passing array by address: where input parameter A is a pointer to the array
void fun(int A[], int n) {
    A[0] = 25;
}

// pass by value
// returning a pointer as an array
int *fun2(int n) {
    int *p;
    p = (int *) malloc(n * sizeof(int));
    return p;
};

// instead of A[] as parameter, int *A will also work
void fun3(int A[]) {
//    'sizeof (A)' will return the size of the pointer, not the array itself
    cout << "From fun 3: Size of Array " << sizeof(A) / sizeof(int) << endl;
    cout << "From fun 3: Size of Array int * :  " << sizeof(int *) / sizeof(int) << endl;
}

// creating dynamic array with function to be accessed from main function
int *fun4(int size) {
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = i + 1;
    }

    return p;
}

int main() {
    int A[5] = {2, 4, 6, 10, 8};
    fun(A, 5);
    cout << A[0] << endl;

    int *b;
    b = fun2(5); // retrieving the pointer to an array
    b[0] = 1;
    b[1] = 5;

    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }
    cout << endl;


    fun3(A);
    cout << "From main function: Size of Array " << sizeof(A) / sizeof(int) << endl;


    int *ptr, sz = 5;
    ptr = fun4(sz); // ptr is accessing the pointer to the array(created by fun 4)

    for (int i = 0; i < sz; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

