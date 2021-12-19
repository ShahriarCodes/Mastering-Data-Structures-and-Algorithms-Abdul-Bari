//
// Created by sal on 16.12.21.
//

#include <iostream>

using namespace std;

char *lowerToUppercase(const char lower[], int n) {
    char *a = (char *) malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++) {
        if ((int) lower[i] >= 90) {
            a[i] = lower[i] - 32;
        } else a[i] = lower[i];
    }
    return a;
}

char *toggleCases(const char string[], int n) {
    char *a = (char *) malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++) {
        if ((int) string[i] >= 90) {
            a[i] = string[i] - 32;
        } else a[i] = string[i] + 32;
    }
    return a;
}

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
//    scanf("%s", name);
//    printf("%s\n", name);

    char s[] = "welcome";
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("\nlength of string %d", i);

    printf("\n%s to %s ", s, lowerToUppercase(s, i));

    char r[] = "wElCoMe";
    printf("\n%s to %s ", r, toggleCases(r, i));
}

