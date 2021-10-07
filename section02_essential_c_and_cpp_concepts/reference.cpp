//
// Created by sal on 07.10.21.
//

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int &r = a;

    cout << "a " << a <<endl;
    cout << "r " << r <<endl;
    r++;
    cout << "a " << a <<endl;
    cout << "r " << r <<endl;
}

