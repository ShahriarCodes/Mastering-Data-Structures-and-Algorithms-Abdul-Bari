//
// Created by sal on 16.12.21.
//

#include <iostream>

using namespace std;

int findLength(char string[]) {
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}

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
        if (!(((int) string[i] >= 65 && (int) string[i] <= 90)
              || ((int) string[i] >= 97 && (int) string[i] <= 122)
              || ((int) string[i] >= 48 && (int) string[i] <= 57)
              || (int) string[i] == 32)) {
            return false;
        }
    }
    return true;
}

char *reverseString(char string[], int n) {
    char *a = (char *) malloc(sizeof(char) * n);
    for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++) {
        a[j] = string[i];
    }
    return a;
}

void reverseString2(char string[], int n) {
    for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++) {
        char temp = string[j];
        string[j] = string[i];
        string[i] = temp;
    }
}

void compareStrings(char A[], char B[]) {
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[i] != '\0'; i++, j++) {
        if (A[i] != B[j]) break;
    }
    if (A[i] == B[j]) cout << A << " == " << B << endl;
    else if (A[i] < B[j]) cout << A << " is  smaller than " << B << endl;
    if (A[i] > B[j]) cout << A << " is  greater than " << B << endl;
}

int checkPalindrome(char string[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < n / 2; i++, j--) {
        if (string[i] != string[j]) {
            cout << string << " is not palindrome" << endl;
            return 0;
        }
    }
    cout << string << " is palindrome";
    return 1;
}

void findDuplicates(char string[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (string[i] == string[j]) {
                cout << string[i];
            }
        }
    }
}

void findDuplicatesHashTable(char string[], int n) {
    int B[128];
    // initialize the array(hashtable) with zeros
    for (int i = 0; i < 128; i++) {
        B[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        B[(unsigned int) ((unsigned char) (string[i]))]++;
    };

    for (int i = 0; i < 128; i++) {
        if (B[i] > 1) {
            cout << "---- " << (unsigned char) i << " is appearing " << B[i] << " times; " << "----";
        }
    };
}

void findDuplicatesBitwise(char string[], int n) {
    long int H = 0, x = 0;
    for (int i = 0; i < n; i++) {
        x = 1;
        x = x << (string[i] - 97);
        // masking
        if ((x & H) > 0) printf("%c is duplcate ", string[i]);
            // merging
        else H = x | H;
    }
}

void permutation(char string[], int k) {
    static int A[10] = {0};
    static char Res[10] = {0};
    int i;

    if (string[k] == '\0') {
        Res[k] = '\0';
        printf("%s ", Res);
    } else {
        for (i = 0; string[i] != '\0'; i++) {
            if (A[i] == 0) {
                Res[k] = string[i];
                A[i] = 1;
                permutation(string, k + 1);
                A[i] = 0;
            }
        }
    }
}

int checkAnagram(char string1[], char string2[]) {
    int len1 = findLength(string1);
    int len2 = findLength(string2);
    if (len1 != len2) {
        cout << "Not Anagram";
        return 0;
    }

    int B[128];
    // initialize the array(hashtable) with zeros
    for (int i = 0; i < 128; i++) {
        B[i] = 0;
    }

    for (int i = 0; i < len1; i++) {
        B[(unsigned int) ((unsigned char) (string1[i]))]++;
    }

    for (int i = 0; i < len1; i++) {
        B[(unsigned int) ((unsigned char) (string2[i]))]--;
    }

    for (int i : B) {
        if (i > 0) {
            cout << "Not anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 1;
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

    cout << endl << "valid string: " << validString(q, 11) << endl;

    cout << reverseString(r, 7) << endl;
    reverseString2(r, 7);
    cout << r << endl;

    compareStrings("HelloW", "HelloW");
    checkPalindrome("madame", 6);

    findDuplicates("Fginding", 8);
    cout << endl;
    findDuplicatesHashTable("Fginding", 8);
    cout << endl;

    findDuplicatesBitwise("fginding", 8);
    cout << endl;

    checkAnagram("dhaka", "akahd");
    cout << endl;
    checkAnagram("Dhaka", "akahd");
    cout << endl;

    permutation("ABCD", 0);
}

