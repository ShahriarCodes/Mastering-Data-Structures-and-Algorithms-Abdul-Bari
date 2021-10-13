//
// Created by sal on 13.10.21.
//

#include <iostream>

using namespace std;

int fun(int n) {
    if (n > 0) {
        return fun(n - 1) + n; // add on returning time -> descending
    }
    return 0;
}

int fun2(int n) {
    // static variable will not be created every time the function is called
    // only the loading time it will be created
    static int x = 0;
    if (n > 0) {
        x++;
        return fun2(n - 1) + x; // add on returning time -> descending
    }
    return 0;
}

// global variable will also have a single copy
int xx = 0;

int fun3(int n) {
    if (n > 0) {
        xx++;
        return fun3(n - 1) + xx; // add on returning time -> descending
    }
    return 0;
}


int main() {
    int x = 5, y;

    y = fun(x);
    cout << y << endl;

    y = fun2(x);
    cout << y << endl;

    y = fun3(x);
    cout << y << endl;

}

