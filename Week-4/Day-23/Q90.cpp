#include <iostream>
using namespace std;

int main() {
    char str[100];

    // Input string
    cout << "Enter the string ";
    cin.getline(str, 100);

    // Calculate length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Flag to check if a repeating character is found
    bool found = false;

    // Traverse each character
    for (int i = 0; i < length; i++) {

        // Check whether the current character
        // has already appeared before
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

        // Count frequency of current character
        int count = 0;

        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // If frequency is greater than 1,
        // it is a repeating character
        if (count > 1) {
            cout << "The first repeating character is " << str[i] << endl;
            found = true;
            break;
        }
    }

    // If no repeating character exists
    if (found == false) {
        cout << "No repeating character found" << endl;
    }

    return 0;
}