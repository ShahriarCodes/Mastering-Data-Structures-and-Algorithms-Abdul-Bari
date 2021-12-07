//
// Created by sal on 06.12.21.
//

#include <iostream>

using namespace std;

void find_duplicates(int A[], int n) {
    int lastDuplicate = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == A[i + 1] && A[i] != lastDuplicate) {
            cout << A[i] << " ";
            lastDuplicate = A[i];
        }
    }
}


void find_duplicates_count(int A[], int n) {
    int total = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == A[i + 1]) {
            j = i + 1;
            total++;
            while (A[j] == A[i]) j++;
            cout << "---- " << A[i] << " is appearing " << j - i << " times; " << "----";
            i = j - 1;
        }
    }
}


void find_duplicates_count_hashTable(int A[], int n, int high) {
    int B[high + 1];
    // initialize the array(hashtable) with zeros
    for (int i = 0; i <= high; i++) {
        B[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        B[A[i]]++;
    };

    for (int i = 1; i <= high; i++) {
        if (B[i] > 1) {
            cout << "---- " << i << " is appearing " << B[i] << " times; " << "----";
        }
    };
}

int main() {
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    cout << "Duplicate no are: ";
    find_duplicates(A, 10);
    cout << endl;

    cout << "Duplicate no are: " << endl;
    find_duplicates_count(A, 10);
    cout << endl;

    cout << "Duplicate no are: " << endl;
    find_duplicates_count_hashTable(A, 10, 20);
    cout << endl;
}

