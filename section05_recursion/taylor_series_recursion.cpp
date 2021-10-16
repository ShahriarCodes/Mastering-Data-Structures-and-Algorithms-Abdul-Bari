//
// Created by sal on 16.10.21.
//

#include <iostream>

using namespace std;

// e^x = 1 + x / 1 + x^2 / 2! + x^3 / 3! + .... n times
// taylor(x, n) = 1 + x / 1 + x^2 / 2! + x^3 / 3! + .... + x^(n-1) / (n-1)! + x^(n) / (n)!
// taylor(x, n) = taylor(x, n-1) + x^(n) / (n)!
// combination of sum(n-1) + n, fact(n-1) * n and pow(x, n-1) * x

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

double powFast(int m, int n) {
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

double e(int x, int n) {
    static double p = 1, f = 1;
    double r;

    if (n == 0) return 1;
//    return e(x, n - 1) + powFast(x, n) / factorial(n);
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}


int main() {
    cout << e(4, 10);
}

