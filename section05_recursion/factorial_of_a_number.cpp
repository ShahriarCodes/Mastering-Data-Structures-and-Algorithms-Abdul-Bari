//
// Created by sal on 16.10.21.
//

#include <iostream>

using namespace std;

// n! = 1 * 2 * 3 * 4 * 5 * .... * n
// n! = 1 * 2 * 3 * 4 * 5 * .... * (n-1) * n
// fact(n) = 1 * 2 * 3 * 4 * 5 * .... * (n-1) * n
// fact(n) = fact(n-1) * n

// recursive definition:
// fact(n) = { 1                -> n = 0
//           { fact(n-1) * n    -> n > 0

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

int main() {
    cout << factorial(5) << endl;
}

