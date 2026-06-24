#include <iostream>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    // Input strings
    cout << "Enter the first string ";
    cin.getline(str1, 100);

    cout << "Enter the second string ";
    cin.getline(str2, 100);

    // Find lengths of both strings
    int len1 = 0;
    int len2 = 0;

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    // Traverse each character of str1
    for (int i = 0; i < len1; i++) {

        // Check if this character has already appeared before
        bool alreadyprinted = false;

        for (int k = 0; k < i; k++) {
            if (str1[k] == str1[i]) {
                alreadyprinted = true;
                break;
            }
        }

        // Skip duplicate characters
        if (alreadyprinted) {
            continue;
        }

        // Check if current character exists in str2
        bool found = false;

        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        // Print character if it is common to both strings
        if (found) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}