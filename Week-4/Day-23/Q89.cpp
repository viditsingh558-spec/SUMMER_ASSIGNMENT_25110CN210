#include <iostream>
using namespace std;

int main() {
    char str[100];

    // Input the string
    cout << "Enter the string ";
    cin.getline(str, 100);

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Flag to check whether a non-repeating character is found
    bool found = false;

    // Traverse each character
    for (int i = 0; i < length; i++) {

        // Check if the character has already appeared before
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        // Skip already processed characters
        if (duplicate) {
            continue;
        }

        // Count occurrences of the current character
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // If frequency is 1, it is the first non-repeating character
        if (count == 1) {
            cout << "The first non-repeating character is " << str[i] << endl;
            found = true;   // Important!
            break;
        }
    }

    // If no non-repeating character exists
    if (found == false) {
        cout << "No non-repeating character found" << endl;
    }

    return 0;
}