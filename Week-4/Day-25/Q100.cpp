#include <iostream>
#include <cstring>   // For strlen() and strcpy()
using namespace std;

int main() {

    // Array to store up to 100 words,
    // each word can have up to 49 characters
    char words[100][50];

    int n;

    // Input number of words
    cout << "Enter the number of words: ";
    cin >> n;

    // Remove newline left by cin >> n
    cin.ignore();

    // Input words
    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " word: ";
        cin.getline(words[i], 50);
    }

    // Temporary array used for swapping words
    char temp[50];

    // Bubble Sort based on word length
    for(int i = 0; i < n; i++) {

        // Compare adjacent words
        for(int j = 0; j < n - 1 - i; j++) {

            // If current word is longer than the next word
            if(strlen(words[j]) > strlen(words[j + 1])) {

                // Swap the two words
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    // Display sorted words
    cout << "The sorted words by length are:\n";

    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}