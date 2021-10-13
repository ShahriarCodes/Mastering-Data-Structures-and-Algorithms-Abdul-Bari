//
// Created by sal on 12.10.21.
//

#include <iostream>

using namespace std;

template<class T>
class Arithmetic {
private:
    T a, b;

public:
    Arithmetic(T a, T b);

    T add();

    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::sub() {
    int c;
    c = a - b;
    return c;
}

int main() {
    Arithmetic<int> arm(10, 5);
    cout << arm.add() << endl;

    Arithmetic<double> arm2(10, 5);
    cout << arm2.add() << endl;

    Arithmetic<char> arm3('A', 'B');
    cout << (int)arm3.add() << endl;
}

