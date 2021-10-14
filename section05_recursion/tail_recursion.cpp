//
// Created by sal on 14.10.21.
//

#include <iostream>

using namespace std;

void tailRec(int n) {
    if (n > 0) {
        cout << n << " ";
        tailRec(n - 1);
    }
}

// tail recursion can be written as a loop
void tailRecToLoop(int n) {
    while (n > 0) {
        cout << n << endl;
        n--;
    }
}

int main() {

}

