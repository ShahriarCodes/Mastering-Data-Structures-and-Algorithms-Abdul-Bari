//
// Created by sal on 28.10.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

int get(struct Array arr, int index) {
    if (index >= 0 && index < arr.length) return arr.A[index];
    return -1;
}

void set(struct Array *arr, int index, int x) {
    if (index >= 0 && index < (*arr).length) (*arr).A[index] = x;
}

int max(struct Array arr) {
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] > max) max = arr.A[i];
    }
    return max;
}

int min(struct Array arr) {
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] < min) min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr) {
    int s = 0;
    for (int i = 0; i < arr.length; i++) s += arr.A[i];
    return s;
}


// recursive definition
// sum(A,n) = { 0                       n < 0
//            { sum(A, n-1) + A[n]      n >= 0

// length = arr.length - 1
int Rsum(struct Array arr, int length) {
//    static int length = arr.length - 1;
    if (length <= 0) return 0;
    return (arr, length - 1) + arr.A[length - 1];
}


float avg(struct Array arr) {
    return  (float) sum(arr) / arr.length;
}

