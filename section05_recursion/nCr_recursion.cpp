//
// Created by sal on 18.10.21.
//

#include <iostream>

using namespace std;

// nCr = n! / (r! * (n - r)!)

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

//time O(n)
int nCr(int n, int r) {
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);

    return t1 / (t2 * t3);
}


// from pascal triangle
// recursive definition
// nCr = (n-1)C(r-1) + (n-1)Cr
// nCr = { 1                        n = 0
//       { 1                        r = 0
//       { 1                        n = r
//       { (n-1)C(r-1) + (n-1)Cr    r < n
//

int nCrRecursive(int n, int r) {
    if (n == 0) return 1;
    if (n == r) return 1;
    if (r == 0) return 1;

    return nCrRecursive(n - 1, r - 1) + nCrRecursive(n - 1, r);
}


int main() {
    cout << nCr(4, 2) << endl;
    cout << nCrRecursive(4, 2) << endl;
}

