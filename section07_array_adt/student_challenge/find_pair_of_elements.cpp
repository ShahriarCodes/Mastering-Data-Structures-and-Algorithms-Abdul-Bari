//
// Created by sal on 11.12.21.
//

#include <iostream>

using namespace std;

void find_pair_with_sum_k(int A[], int n, int k) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] + A[j] == k) printf("%d + %d = %d --- ", A[i], A[j], k);
        }
    }
}


void find_pair_with_sum_k_hashTable(int A[], int n, int high, int k) {
    int B[high + 1];
    // initialize the array(hashtable) with zeros
    for (int i = 0; i <= high; i++) {
        B[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int diff = k - A[i];
        if (diff > 0 && B[diff] > 0) printf("%d + %d = %d --- ", A[i], diff, k);
        B[A[i]] = B[A[i]] + 1;

    };
}


void find_pair_with_sum_k_sorted(int A[], int n, int k) {
    int i = 0, j = n - 1;
    while (i < j) {
        if (A[i] + A[j] == k) {
            printf("%d + %d = %d --- ", A[i], A[j], k);
            i++;
            j--;
        } else if (A[i] + A[j] < k) i++;
        else j--;
    }
}

void find_pair_with_sum_k_sorted2(int A[], int n, int k) {
    int i = 0, j = n - 1;
    for (i, j; i < j;) {
        if (A[i] + A[j] == k) {
            printf("%d + %d = %d --- ", A[i], A[j], k);
            i++;
            j--;
        } else if (A[i] + A[j] < k) i++;
        else j--;
    }
}

int main() {
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    find_pair_with_sum_k(A, 10, 10);

    cout << endl;
    find_pair_with_sum_k_hashTable(A, 10, 16, 10);

    cout << endl;
    int A2[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    find_pair_with_sum_k_sorted(A2, 10, 10);
}

