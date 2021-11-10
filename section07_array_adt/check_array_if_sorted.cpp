//
// Created by sal on 09.11.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

void insertSort(struct Array *arr, int x) {
    if (arr->length == arr->size) return;

    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > x) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr) {
    int i;
    for (i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1]) return 0;
    }
    return 1;
}


