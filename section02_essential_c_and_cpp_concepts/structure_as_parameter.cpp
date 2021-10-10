//
// Created by sal on 09.10.21.
//

#include <iostream>

using namespace std;

struct Rectangle {
    int height;
    int breadth;
};

struct Test {
    int A[5];
    int n;
};

// passed by value;
int area(struct Rectangle r1) {
//    new variable will be created
    return r1.height * r1.breadth;
}

// passed by reference;
int area2(struct Rectangle &r1) {
//    new variable will be created
    r1.height++;
    return r1.height * r1.breadth;
}

void changeHeight(struct Rectangle *p, int h) {
    (*p).height = h;
    // p->height = h // will also work
}

// array cant be passed by value but only by pointers
// but an array within a structure can be passed by value
void fun(struct Test t1) {
    t1.A[0] = 10;
    t1.A[2] = 20;
    t1.A[3] = 40;
    t1.n = 100;
}

int main() {
    struct Rectangle r = {10, 5};
    printf("area: %d \n", area(r));

    printf("area: %d \n", area2(r));
    printf("height: %d \n", r.height);

    changeHeight(&r, 20);
    printf("changed height: %d \n", r.height);

    struct Test t = {{2, 4, 1, 5, 6}, 5};
    fun(t);
    for (int it: t.A) {
        cout << it << " ";
    }
    cout << endl;


}

