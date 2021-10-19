//
// Created by sal on 19.10.21.
//

#include <iostream>

using namespace std;

int main() {
    int A[5] = {2, 5, 8, 0, 5};
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << A[2] << endl;
    cout << A << endl;
    cout << *(A + 2) << endl;
}

