#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter the sentence: ";
    cin.getline(str, 100);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int maxLen = 0;      // Length of longest word
    int maxStart = 0;    // Starting index of longest word

    int i = 0;

    while (i < len) {

        // Skip spaces
        while (i < len && str[i] == ' ') {
            i++;
        }

        int currentStart = i; // Start of current word
        int currentLen = 0;

        // Count characters in current word
        while (i < len && str[i] != ' ') {
            currentLen++;
            i++;
        }

        // Update longest word if needed
        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxStart = currentStart;
        }
    }

    cout << "Longest word: ";

    // Print the longest word
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        cout << str[i];
    }

    cout << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}