//
// Created by sal on 28.10.21.
//

#include <iostream>
#include "stdafx.h"

using namespace std;


int main() {
    struct Array arr;
    int n, i;

//    printf("Enter the size of an array ");
//    scanf("%d", &arr.size);
//
//    arr.A = (int *) malloc(arr.size * sizeof(int));
//    arr.length = 0;
//
//    printf("Enter number of numbers ");
//    scanf("%d", &n);
//
//    // fillup values
//    printf("Enter all elements \n");
//    for (i = 0; i < n; i++) scanf("%d", &arr.A[i]);
//    arr.length = n;

    arr = {{1, 2, 4, 5, 6, 7}, 10, 6};

    /* append */
    append(&arr, 10);

    // // insert
    insert(&arr, 5, 20);

    // // delete
    del(&arr, 3);

    cout << LinearSearch(&arr, 7) << endl;
    cout << BinarySearch(arr, 2) << endl;
    cout << RBinarySearch(arr, 2) << endl;

    cout << max(arr) << endl;
    cout << min(arr) << endl;
    cout << avg(arr) << endl;
    cout << sum(arr) << endl;
    cout << Rsum(arr, arr.length) << endl;

    display(arr);
}



