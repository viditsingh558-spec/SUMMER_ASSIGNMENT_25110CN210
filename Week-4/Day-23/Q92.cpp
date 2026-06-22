#include <iostream>
using namespace std;

int main() {

    // Input string
    char str[100];
    cout << "Enter the string: ";
    cin.getline(str, 100);

    // Find length of string
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    // Store maximum frequency and corresponding character
    int maxfreq = 0;
    char element;

    // Traverse each character
    for(int i = 0; i < length; i++) {

        int count = 0;

        // Count occurrences of str[i] in the entire string
        for(int j = 0; j < length; j++) {

            if(str[i] == str[j]) {
                count++;
            }

        }

        // Update maximum frequency if current count is larger
        if(count > maxfreq) {
            maxfreq = count;
            element = str[i];
        }

    }

    // Display result
    cout << "The max occurring element is " << element << endl;
    cout << "And the frequency is " << maxfreq << endl;

    return 0;
}