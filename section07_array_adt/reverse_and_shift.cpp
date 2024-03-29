//
// Created by sal on 31.10.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

// with auxiliary array
void reverse(struct Array *arr) {
    int *B;
    int i, j;
    B = (int *) malloc(arr->length * sizeof(int));

    // reverse copy to B
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = arr->A[i];
    }

    // copy B to A
    for (i = 0; i < arr->length; i++) {
        arr->A[i] = B[i];
    }

    delete B;
}

// without auxiliary array
void reverse2(struct Array *arr) {
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--) {
        swap(arr->A[i], arr->A[j]);
    }
}

void leftShift(struct Array *arr) {
    if (arr->length > 0) {
        for (int i = 0; i < arr->length - 2; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->A[arr->length - 1] = 0;
    }
}

void rotate(struct Array *arr) {
    if (arr->length > 0) {
        int temp = arr->A[0];

        for (int i = 0; i < arr->length - 2; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->A[arr->length - 1] = temp;
    }
}
