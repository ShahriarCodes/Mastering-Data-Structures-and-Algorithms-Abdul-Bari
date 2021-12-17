//
// Created by sal on 16.12.21.
//

#include <iostream>

using namespace std;

int main() {
    // char
    char a = 'a'; // only single quote is acceptable
    char b = 65;
    cout << a << " " << b;

    // array of char
    char X[5] = {'H', 'e', 'l', 'l', 'o'};
    char Y[] = {'H', 'e', 'l', 'l', 'o'};
    char Z[] = {65, 66, 67, 68, 69};

    // string
    char name[5] = {'J', 'o', 'h', 'n', '\0'};
    char name2[] = {'J', 'o', 'h', 'n', '\0'};
    char name3[] = "John";

    printf("%s\n", name);
    scanf("%s", name);
    printf("%s\n", name);

    char s[] = "welcome";
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("\nlength of string %d", i);

}

