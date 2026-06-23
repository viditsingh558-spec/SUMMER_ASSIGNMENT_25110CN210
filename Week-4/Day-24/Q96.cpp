#include<iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter the string ";
    cin.getline(str, 100);

    // Find length of string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Check each character
    for (int i = 0; i < len; i++) {

        // Assume character is unique
        bool duplicate = false;

        // Check all previous characters
        for (int j = 0; j < i; j++) {

            // If same character found before
            if (str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        // Print only if character appeared
        // for the first time
        if (duplicate == false) {
            cout << str[i];
        }
    }

    return 0;
}