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



    // formula to get element by the compiler
    // Address(A[index])  = address_to_the_first_element + index * size_of_data_type

    // row major formula (element accessed row by row) // m*n matrix
    // Addr(A[i][j]) = L0 + [i * n + j] * w
    // Address(A[row][col])  = address_to_the_first_element + (row * size_of_col + col) * size_of_data_type

    // col major formula (element accessed col by col) // m*n matrix
    // Addr(A[i][j]) = L0 + [j * m + i] * w
    // Address(A[row][col])  = address_to_the_first_element + (col * size_of_row + row) * size_of_data_type

    // row major multidimensional A[d1][d2][d3][d4] ( left to right)
    // Addr(A[i1][i2][i3][i4]) = L0 + [i1 * d2 * d3 * d4 + i2 * d3 * d4 + i3 * d4 + i4 ] * w
    //   = nΣp=1(i_p * nΠq=p+1(d_q)) // O(n^2)

    // col major nD A[d1][d2][d3][d4] (right to left)
    // Addr(A[i1][i2][i3][i4]) = L0 + [i4 * d2 * d3 * d4 + i3 * d3 * d4 + i2 * d4 + i1] * w

    // row major 3d array A[l][m][n]
    // Addr(A[i][j][k]) = L0 + [i * m * n + j * n + k] * w

    // col major 3d array A[l][m][n]
    // Addr(A[i][j][k]) = L0 + [k * l * m + j * l + i] * w

    int D[5] = {3, 2, 10, 5, 6};
    cout << *(D + 2) << endl;
    cout << sizeof(*(D + 2)) << endl;
    cout << &D << endl;
    cout << D << endl;
}

