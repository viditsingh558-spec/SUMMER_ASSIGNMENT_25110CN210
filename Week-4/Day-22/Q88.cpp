#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter the sentence: ";
    cin.getline(str, 100);

    int length = 0;
    int count = 0;
    char str2[100];

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Copy only non-space characters
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str2[count] = str[i];
            count++;
        }
    }

    // Add null character at the end
    str2[count] = '\0';

    cout << "The sentence without spaces is: " << str2;

    return 0;
}