//
// Created by sal on 05.10.21.
//
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    Rectangle r; // initialization
    Rectangle rect = {5,2}; // initialization
    printf("Rect length %d, breadth %d", rect.length, rect.breadth);
}
