//
// Created by sal on 14.10.21.
//

#include <iostream>

using namespace std;

// time complexity -> O(2^(n+1) - 1)
//space complexity O(n)
// a total of 15 calls are made for n = 3
void treeRec(int n) {
    if(n>0) {
        cout << n << " ";
        treeRec(n-1);
        treeRec(n-1);
    }
}

int main() {
    treeRec(3);
}

