//
// Created by sal on 05.10.21.
//
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
};

struct ComplexNum {
    int real;
    int imag;
};

struct Student {
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

struct Card {
    int face;
    int shape;
    int color;
};

int main() {
    struct Rectangle r; // declare
    Rectangle rect = {5, 2}; // initialization
    printf("Rect length %d, breadth %d \n", rect.length, rect.breadth);
    cout << "sizeof rect : " << sizeof(rect) << " bytes" << endl;
    cout<< "Char will take only 1 byte. But the system allocates 4 bytes to be used. It is called padding" << endl;

    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;

    struct Card c2 = {1, 0, 0}; // declaration + initialization

    // deck of cards
    struct Card deck[52] = {{1, 0, 0},
                            {0, 1, 0},
                            {1, 1, 1}};
    printf("deck first card's face %d, shape %d color %d \n", deck[0].face, deck[0].shape, deck[0].color);
    cout << "sizeof deck : " << sizeof(deck) << " bytes" << endl;
}
