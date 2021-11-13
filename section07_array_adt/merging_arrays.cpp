//
// Created by sal on 13.11.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

struct Array *merge(struct Array *arr1, struct Array *arr2) {
    int i = 0, j = 0, k = 0;

    struct Array *arr3 = (struct Array *) malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}
