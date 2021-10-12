//
// Created by sal on 11.10.21.
//

#include <iostream>

using namespace std;

// followed by structure_and_function.cpp

class Rectangle {
private:
    int length;
    int breadth;

public:
    // default constructor, if no value passed set to 1
    Rectangle() { length = breadth = 1; }

    // instead of initialize function, make it constructor
    Rectangle(int l, int b) {
        this->length = l;
        this->breadth = b;
    }

    int area() {
        return this->length * this->breadth;
    }

    int perimeter();

    void setLength(int l) {
        this->length = l;
    }

    int getLength() {
        return this->length;
    }

    // using destructor to destroy any dynamic memory allocation an the created object itself when the main function finishes
    ~Rectangle();
};

// using scope resolution operator
int Rectangle::perimeter() {
    return 2 * (this->length + this->breadth);
}

Rectangle::~Rectangle() {
    cout << "Destructor" << endl;
}

int main() {
    Rectangle rect = Rectangle(10, 5);

    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    rect.setLength(20);
    cout << "changed length: " << rect.getLength() << endl;
}


