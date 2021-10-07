//
// Created by sal on 06.10.21.
//
#include <iostream>
#include <cstdlib>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    int a = 10;
    int *p; // declaration
    p = &a; // assignment or initialization
    cout << "a: " << a << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl; // dereferencing

    // dynamic memory allocation with malloc which returns a void pointer (c lang)
    int *b = (int *) malloc(5 * sizeof(int));
    cout << *b << endl;
    // for cpp:
    b = new int[5];
    cout << *b << endl;

    // creating an array in stack memory
    // pointer to an array
    int A[5] = {2, 5, 4, 67, 3};
    int *ptr;
    ptr = A; // printing A shows the address of first element of the array
    ptr = &A[0]; // this will also work

    for (int i = 0; i < 5; i++) {
        cout << " " << ptr[i];
    }
    cout << endl;

    // creating an array in heap memory
    // pointer to an array

    int *ptr2;
    ptr2 = (int *) malloc(5 * sizeof(int));
    ptr2[0] = 10;
    ptr2[1] = 15;
    ptr2[2] = 14;
    ptr2[3] = 20;
    ptr2[4] = 25;
    ptr2[5] = 22;


    for (int i = 0; i < 6; i++) {
        cout << " " << ptr2[i];
    }

    delete[] ptr2; // in cpp
    // free(ptr2); // in c
    cout << endl;

    int *p1;
    char *p2;
    float *p3;
    double *p4;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    // pointer size is independent of variable type

    // pointer to a structure
    struct Rectangle rec = {10, 5};
    struct Rectangle *ptr_rec=  &rec;
    (*ptr_rec).length = 20;
    ptr_rec->breadth = 20; // also does the job done

    // pointer to a structure - dynamic memory allocation
    struct Rectangle *ptr_rec_dynamic;
    ptr_rec_dynamic = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    ptr_rec_dynamic->length = 100;
    ptr_rec_dynamic->breadth =  200;

}