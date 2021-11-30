//
// Created by sal on 30.10.21.
//

#ifndef STDAFX_ARRAY_ADT
#define STDAFX_ARRAY_ADT

struct Array
 {    int A[10];
//    int *A;
    int size;
    int length;
};

void display(struct Array arr);
void append(struct Array *arr, int x);
int del(struct Array *arr, int index);
void insert(struct Array *arr, int index, int x);

void swap(int *x, int *y);
int LinearSearch(struct Array *arr, int key);
int BinarySearch(struct Array arr, int key);
int RBinarySearch(struct Array arr, int key);

int get(struct Array arr, int index);
void set(struct Array *arr, int index, int x);
int max(struct Array arr);
int min(struct Array arr);
int sum(struct Array arr);
int Rsum(struct Array arr, int length);
float avg(struct Array arr);

void reverse(struct Array *arr);
void reverse2(struct Array *arr);
void leftShift(struct Array *arr);
void rotate(struct Array *arr);

void insertSort(struct Array *arr, int x);
int isSorted(struct Array arr);
void rearrange(struct Array *arr);

struct Array *merge(struct Array *arr1, struct Array *arr2);

struct Array *Union(struct Array *arr1, struct Array *arr2);
struct Array *Intersection(struct Array *arr1, struct Array *arr2);
struct Array* Difference(struct Array *arr1,struct Array *arr2);

#endif