//
// Created by sal on 15.10.21.
//

#include <iostream>

using namespace std;

// 1 + 2 + 3 + 4 + 5 + .... + n
// 1 + 2 + 3 + 4 + 5 + .... + (n-1) + n
// sum(n) = 1 + 2 + 3 + 4 + 5 + .... + (n-1) + n
// sum(n) = sum(n-1) + n

// recursive definition:
// sum(n) = { 0            -> n = 0
//          { sum(n-1)+n   -> n > 0

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n - 1) + n;
    }
}

int main() {
    cout << sum(10);
}

