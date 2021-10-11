//
// Created by sal on 11.10.21.
//

#include <iostream>

using namespace std;

// followed by structure_and_function.cpp

class Rectangle {
public:
    int length;
    int breadth;

    // instead of initialize function, make it constructor
    Rectangle(int l, int b) {
        this->length = l;
        this->breadth = b;
    }

    int area() {
        return this->length * this->breadth;
    }

    void changeLength(int l) {
        this->length = l;
    }
};

int main() {
    Rectangle rect(10,5);

    cout << "Area: " << rect.area() << endl;

    rect.changeLength(20);
    cout << "changed length: " << rect.length << endl;

}


