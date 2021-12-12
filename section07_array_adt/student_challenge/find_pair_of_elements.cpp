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


int main() {
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    find_pair_with_sum_k(A, 10, 10);
    cout << endl;

}

