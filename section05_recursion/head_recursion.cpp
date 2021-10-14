//
// Created by sal on 14.10.21.
//

#include <iostream>

using namespace std;

// head recursion has to to do operations at returning time
void headRec(int n) {
    if (n > 0) {
        headRec(n - 1);
        cout << n << " ";
    }
}

// head recursion cant be converted into loop easily
// but can be converted with additional logic
void headRecToLoop(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}


int main() {

}


