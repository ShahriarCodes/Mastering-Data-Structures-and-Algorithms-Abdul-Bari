//
// Created by sal on 17.10.21.
//

#include <iostream>

using namespace std;

//0 1 1 2 3 5 8 13

// recursive definition
// fib(n) = { 0                     n = 0
//          { 1                     n = 1
//          { fib(n-2) + fib(n-1)   n > 1

// time -> O(2^n)
int fibR(int n) {
    if (n <= 1) return n;
    return fibR(n - 2) + fibR(n - 1);
}

int fibL(int n) {
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1) return n;
    for (i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// memoization -> avoiding excessive calls by storing results
// 0(n)
int F[10];

int fibFast(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n - 2] == -1) F[n - 2] = fibFast(n - 2);
        if (F[n - 1] == -1) F[n - 1] = fibFast(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }

}


int main() {
    cout << fibR(7) << endl;

    // initializing the array with -1
    for (int &i : F) {
        i = -1;
    }
    cout << fibFast(7) << endl;
}

