//
// Created by sal on 02.12.21.
//

#include <iostream>

using namespace std;

int find_missing(int A[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) sum += A[i];
    int s = n * (n + 1) / 2;
    return s - sum;
}

int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    cout << "Missing no is: " << find_missing(A, 12);
}

