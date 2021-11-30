//
// Created by sal on 24.10.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

//struct Array {
//    int A[10];
////    int *A;
//    int size;
//    int length;
//
//};

void display(struct Array arr) {
    int i;
    printf("\nElements are: ");
    for (i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
}

// pass by address
void append(struct Array *arr, int x) {
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x) {
    if (index >= 0 && index <= arr->length) {
        for (int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int del(struct Array *arr, int index) {
    int deleter = arr->A[index];
    if (index >= 0 && index <= arr->length) {
        // no need to go to the last index in shifting sor length - 1
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
    return deleter;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key) {
    for (int i = 0; i < (*arr).length; i++) {
        if (key == (*arr).A[i]) {

            // bring the value at one index forward
            // swap(&(*arr).A[i], &(*arr).A[i]);

            // bring it at the first index
            // swap(&(*arr).A[i], &(*arr).A[0]);

            return i;
        }
    }
    return -1;
}

//O(log(n))
int BinarySearch(struct Array arr, int key) {
    int h = arr.length - 1, l = 0, mid;

    while (l <= h) {
        mid = (h + l) / 2;
        if (arr.A[mid] == key) return mid;
        else if (arr.A[mid] > key) {
            h = mid - 1;
        } else if (arr.A[mid] < key) {
            l = mid + 1;
        }
    }
    return -1;
}

// Recursive binary search
int RBinarySearch(struct Array arr, int key) {
    static int l = 0, h = arr.length - 1;
    if (l <= h) {
        int mid = (h + l) / 2;
        if (arr.A[mid] == key) return mid;
        else if (arr.A[mid] > key) {
            h = mid - 1;
            return RBinarySearch(arr, key);
        } else if (arr.A[mid] < key) {
            l = mid + 1;
            return RBinarySearch(arr, key);
        }
    }
    return -1;
}
