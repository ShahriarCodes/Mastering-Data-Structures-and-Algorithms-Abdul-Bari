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

    Array arr1 = {{2, 4, 6, 11, 12}, 10, 5};
    Array arr2 = {{1, 3, 5, 7, 9, 9}, 10, 5};
    Array *arr3 = merge(&arr1, &arr2);
    cout << endl << "After merging arr4 and arr2: ";
    for (int acc = 0; acc < arr3->length - 1; acc++) {
        cout << arr3->A[acc] << " ";
    }
    cout << endl;

    arr3 = Union(&arr1, &arr2);
    cout << endl << "After union arr1 and arr2: ";
    for (int acc = 0; acc < arr3->length - 1; acc++) {
        cout << arr3->A[acc] << " ";
    }
    cout << endl;


    // driver code
    struct Array arr4;
    int ch;
    int x, index;

//    printf("Enter Size of Array");
//    scanf("%d",&arr4.size);
//    arr4.A=(int *)malloc(arr4.size*sizeof(int));
    arr4.length = 0;
    do {
        printf("\n\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6.Exit\n");

        printf("enter you choice ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter an element and index");
                scanf("%d%d", &x, &index);
                insert(&arr4, index, x);
                break;
            case 2:
                printf("Enter index ");
                scanf("%d", &index);
                x = del(&arr4, index);
                printf("Deleted Element is %d\n", x);
                break;
            case 3:
                printf("Enter element to search ");
                scanf("%d", &x);
                index = LinearSearch(&arr4, x);
                printf("Element index %d", index);
                break;
            case 4:
                printf("Sum is %d\n", sum(arr4));
                break;
            case 5:
                display(arr4);

        }
    } while (ch < 6);
}



