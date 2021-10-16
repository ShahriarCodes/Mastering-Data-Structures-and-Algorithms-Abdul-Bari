//
// Created by sal on 16.10.21.
//

#include <iostream>

using namespace std;

// m^n = m * m * m * .... for n times
// pow(m, n) = m * m * m * .... for (n -1) times * m
// pow(m, n) = pow(m, n-1) * m

// recursive definition:
// pow(m, n) = { 1                  -> n = 0
//             { pow(m, n-1) * m    -> n > 0

int pow(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return pow(m, n - 1) * m;
    }
}

// faster pow function with less operation
// 2^8 = (2^2)^4 = (2 * 2)^4
// 2^9 = 2 * (2^2)^4

int powFast(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        // even
        return powFast(m * m, n / 2);
    } else {
        // odd
        return m * powFast(m * m, (n - 1) / 2);
    }
}


int main() {
    cout << pow(3, 3) << endl;
    cout << powFast(5, 3) << endl;
}

