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

int main() {
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    cout << "Duplicate no are: ";
    find_duplicates(A, 10);
    cout << endl;
}

