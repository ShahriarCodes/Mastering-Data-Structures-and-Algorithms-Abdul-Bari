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
        if (diff = high - i != low) return high - 1;
    }
    return -1;
}

int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    cout << "Missing no is: " << find_missing(A, 12) << endl;

    int A2[6] = {6, 7, 8, 9, 11, 12};
    cout << "Missing no is: " << find_missing2(A2, 6) << endl;
}

