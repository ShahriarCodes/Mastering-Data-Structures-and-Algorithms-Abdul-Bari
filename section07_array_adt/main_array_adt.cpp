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

    arr = {{1, 2, 4, 5, 6, 7, -1, -2, -3}, 10, 6};

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


    reverse(&arr);
    cout << "After reversing : ";
    display(arr);

    reverse2(&arr);
    cout << endl << "After reversing : ";
    display(arr);


    leftShift(&arr);
    cout << endl << "After left shift: ";
    display(arr);

    rotate(&arr);
    cout << endl << "After rotate : ";
    display(arr);

    insertSort(&arr, 20);
    display(arr);

//    cout << "is sorted" << isSorted(arr) << endl;
//    rearrange(&arr);
//    display(arr);

    Array arr1 = {{2, 4, 6, 8, 10}, 10, 5};
    Array arr2 = {{1, 3, 5, 7, 9}, 10, 5};
    Array *arr3 = merge(&arr1, &arr2);
    cout << endl << "After merging arr1 and arr2: ";
    for (int acc = 0; acc < arr3->length - 1; acc++) {
        cout << arr3->A[acc] << " ";
    }
    cout << endl;
}



