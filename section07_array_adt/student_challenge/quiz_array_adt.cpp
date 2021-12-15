//
// Created by sal on 15.12.21.
//
#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 5;
    int i = 0;
    int j = 1;

    while (j < n) {
        if (a[j] - a[i] < s) j++;
        else if (a[j] - a[i] == s) break;
        else i++;
    }

    if (j < n) printf("yes");
}
