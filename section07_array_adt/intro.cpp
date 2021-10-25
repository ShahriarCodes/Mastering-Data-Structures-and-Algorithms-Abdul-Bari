//
// Created by sal on 24.10.21.
//

#include <iostream>

using namespace std;

struct Array {
    int A[10];
    int size;
    int length;

};

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

void del(struct Array *arr, int index) {
    if (index >= 0 && index <= arr->length) {
        // no need to go to the last index in shifting sor length - 1
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

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
//    append(&arr, 10);

    // // insert
//    insert(&arr, 5, 20);

    // // delete
    del(&arr, 3);

    display(arr);
}

