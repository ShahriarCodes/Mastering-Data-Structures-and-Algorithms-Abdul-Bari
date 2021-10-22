//
// Created by sal on 21.10.21.
//

#include <iostream>

using namespace std;

int main() {
    int A[][3] = {1, 2, 3, 4, 5, 6};
    cout << *A[1] << endl;

    // array of pointers
    int *B[3];

    // dynamic allocation of pointers inside B to different sized array
    B[0] = new int[4];
    B[1] = new int[5];
    B[2] = new int[7];

    // for clang
    B[0] = (int *) malloc(4 * sizeof(int));
    B[1] = (int *) malloc(4 * sizeof(int));
    B[2] = (int *) malloc(4 * sizeof(int));


    // method 3 of creating array
    int **C;
    // array of pointers created in heap and C is pointing to the array
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    // for clang
    C = (int **) malloc(3 * sizeof(int *));
    C[0] = (int *) malloc(4 * sizeof(int));
    C[1] = (int *) malloc(4 * sizeof(int));
    C[2] = (int *) malloc(4 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

