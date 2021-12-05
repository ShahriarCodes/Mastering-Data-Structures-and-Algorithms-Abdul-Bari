//
// Created by sal on 02.12.21.
//

#include <iostream>

using namespace std;

// array should be sorted
int find_missing(int A[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) sum += A[i];
    int s = n * (n + 1) / 2;
    return s - sum;
}

int find_missing2(int A[], int n) {
    int low = A[0], high, diff;
    for (int i = 0; i < n; i++) {
        high = A[i];
        diff = high - i;
        if (diff != low) return high - 1;
    }
    return -1;
}

void find_multiple_missing(int A[], int n) {
    int diff = A[0] - 0;
    for (int i = 0; i < n; i++) {
        if (A[i] - i != diff) {
            while (diff < A[i] - i) {
                cout << i + diff << " ";
                diff++;
            }
        };
    }
}

void find_multiple_missing2(int A[], int n, int low, int high) {
    int B[high];
    // initialize the array(hashtable) with zeros
    for (int i = 0; i <= high; i++) {
        B[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        B[A[i]]++;
    };

    for (int i = 1; i <=high; i++) {
        if(B[i] == 0) {
            cout << i << " ";
        }
    };
}




int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    cout << "Missing no is: " << find_missing(A, 12) << endl;

    int A2[6] = {6, 7, 8, 9, 11, 12};
    cout << "Missing no is: " << find_missing2(A2, 6) << endl;

    int A3[6] = {6, 9, 12, 18, 20, 21};
    cout << "Missing no are: ";
    find_multiple_missing(A3, 6);
    cout << endl;

    int A4[10] = {3,7,4,9,12,6,1,11,2,10};
    cout << "Missing no are: ";
    find_multiple_missing2(A4, 10, 1, 12);
    cout << endl;
}

