//
// Created by sal on 16.10.21.
//

#include <iostream>

using namespace std;

double eHL(double x, int n) {
    double s = 1;
    for (; n > 0; n--) {
        s = 1 + x / n * s;
    }
    return s;
}

//time linear -> O(n)
double eHR(double x, double n) {
    static double s = 1;
    if (n == 0) return s;
    s = 1 + x / n * s;
    return eHR(x, n - 1);
}

int main() {
    cout << eHL(6, 200) << endl;
    cout << eHR(6, 200) << endl;
}

