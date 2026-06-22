#include <iostream>
using namespace std;

int main() {
    char str[100];

    // taking string input
    cout << "Enter the string: ";
    cin.getline(str, 100);

    int length = 0;

    // finding length of string
    while (str[length] != '\0') {
        length++;
    }

    // finding frequency of each character
    for (int i = 0; i < length; i++) {

        bool alreadyCounted = false;

        // check if character appeared before
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                alreadyCounted = true;
                break;
            }
        }

        // skip if already processed
        if (alreadyCounted) {
            continue;
        }

        int count = 0;

        // count occurrences of current character
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        cout << "Frequency of '" << str[i] << "' = " << count << endl;
    }

    return 0;
}