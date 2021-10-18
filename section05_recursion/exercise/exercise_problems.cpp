//
// Created by sal on 19.10.21.
//

#include<iostream>

using namespace std;

void q2(int n, int sum) {
    int k = 0, j = 0;

    if (n == 0) return;

    k = n % 10;
    j = n / 10;
    sum = sum + k;

    q2(j, sum);

    printf("%d, ", k);
}

// as x is passed as reference x will not change at returning time
// x gets it peak value of 9 and will remain the same at returning time
int q3(int &x, int c) {
    c = c - 1;
    if (c == 0) return 1;
    x = x + 1;
    int final = q3(x, c) * x;
    return final;
}

int q4(int n) {
    int x = 1, k;

    if (n == 1) return x;

    for (k = 1; k < n; ++k)
        x = x + q4(k) * q4(n - k);

    return x;
}

void count(int n) {
    static int d = 1;

    printf("%d", n);
    printf("%d", d);

    d++;

    if (n > 1) count(n - 1);
    printf("%d", d);

}

int main() {
    int a = 2048, sum = 0;
    q2(a, sum);
    printf("%d\n", sum);

    // q3
    int p = 5;
    cout << q3(p, p) << endl;

    // q4
    cout << q4(5) << endl;

    // q5
    count(3);
}


