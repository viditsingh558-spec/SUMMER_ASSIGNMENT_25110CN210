#include <iostream>
#include <cstring>   // For strcmp() and strcpy()
using namespace std;

int main() {

    // Array to store names
    // Maximum 100 names, each up to 49 characters
    char names[100][50];

    int n;

    // Input number of names
    cout << "Enter number of names: ";
    cin >> n;

    // Remove the newline character left in the input buffer
    cin.ignore();

    // Input names
    for(int i = 0; i < n; i++) {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names[i], 50);
    }

    // Display entered names
    cout << "\nNames entered:\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    // Temporary array used for swapping names
    char temp[50];

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {

        // Compare adjacent names
        for(int j = 0; j < n - i - 1; j++) {

            // If names[j] comes after names[j+1] alphabetically
            if(strcmp(names[j], names[j + 1]) > 0) {

                // Swap the two names
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    cout << "\nNames in alphabetical order:\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}