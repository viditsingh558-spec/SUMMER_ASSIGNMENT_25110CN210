#include <iostream>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    // Input first string
    cout << "Enter the String : ";
    cin.getline(str1, 100);

    // Input second string
    cout << "Enter string to check for rotated string: ";
    cin.getline(str2, 100);

    // Calculate lengths of both strings
    int len1 = 0;
    int len2 = 0;

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    // Rotation is possible only if lengths are equal
    if (len1 != len2) {
        cout << "Rotated string not matched";
        return 0;
    }

    // Create a doubled string from str1
    // Example:
    // str1 = ABCD
    // doublestr = ABCDABCD
    char doublestr[200];

    for (int i = 0; i < len1; i++) {
        doublestr[i] = str1[i];
    }

    for (int i = 0; i < len1; i++) {
        doublestr[i + len1] = str1[i];
    }

    // Mark the end of the doubled string
    doublestr[len1 * 2] = '\0';

    bool rotated = false;

    // Try every possible starting position in doublestr
    for (int i = 0; i < len1; i++) {

        // Assume current position is a match
        bool matched = true;

        // Compare str2 with the substring starting at index i
        for (int j = 0; j < len1; j++) {

            // Compare corresponding characters
            if (doublestr[i + j] != str2[j]) {

                // Mismatch found
                matched = false;
                break;
            }
        }

        // If all characters matched,
        // str2 is a rotation of str1
        if (matched) {
            rotated = true;
            break;
        }
    }

    // Display result
    if (rotated) {
        cout << "Rotated string found";
    } else {
        cout << "Rotated string not found";
    }

    return 0;
}