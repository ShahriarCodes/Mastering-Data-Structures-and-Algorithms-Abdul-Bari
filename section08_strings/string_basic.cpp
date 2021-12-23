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

int countVowels(const char string[], int n) {
    char vowel[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int count = 0;
    for (int i = 0; i < n; i++)
        for (char j : vowel) if (string[i] == j) count++;
    return count;
}

int countConsonents(const char string[], int n) {
    char vowel[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (char j : vowel) if (string[i] == j) count--;
        if ((string[i] >= 65 && string[i] <= 90)
            || (string[i] >= 97 && string[i] <= 122))
            count++;
    }
    return count;
}

int countWords(char string[], int n) {
    int word = 1;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' && string[i - 1] != ' ') word++;
    }
    return word;
}

bool validString(const char string[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        cout << (int) string[i] << (int) string[i] << " ";
        if (!((int) string[i] >= 65 && (int) string[i] <= 90)
            || !((int) string[i] >= 97 && (int) string[i] <= 122)
            || !((int) string[i] >= 48 && (int) string[i] <= 57)
            || (int) string[i] != 32) {
            return false;
        }
    }
    return true;
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
    cout << endl << "vowels in wElCoMe: " << countVowels(r, i);
    cout << endl << "consonents in wElCoMe: " << countConsonents(r, i);

    char q[] = "How are you";
    printf("\ntotal words: %d ", countWords(q, 11));

    cout << validString(q, 11);
}

