#include <iostream>
using namespace std;

int main() {
    char str[50];

    // Input string
    cout << "Enter a string: ";
    cin.getline(str, 50);

    char str2[50];

    // Find length of string
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    int choice;

    // Display menu
    cout << "\nMenu Driven String Operation System";
    cout << "\n1. Display the String";
    cout << "\n2. Find the Length of the String";
    cout << "\n3. Convert to Uppercase";
    cout << "\n4. Convert to Lowercase";
    cout << "\n5. Reverse the String";
    cout << "\n6. Exit";

    cout << "\nChoose the option to perform: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "The string is: ";
            for(int i = 0; i < length; i++) {
                cout << str[i];
            }
            break;

        case 2:
            cout << "The length of string is " << length;
            break;

        case 3:
            cout << "Uppercase string: ";
            for(int i = 0; i < length; i++) {
                if(str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
                cout << str[i];
            }
            break;

        case 4:
            cout << "Lowercase string: ";
            for(int i = 0; i < length; i++) {
                if(str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32;
                }
                cout << str[i];
            }
            break;

        case 5:
            for(int i = 0; i < length; i++) {
                str2[i] = str[length - 1 - i];
            }

            str2[length] = '\0';

            cout << "The reversed string is: " << str2;
            break;

        case 6:
            cout << "Operation Ended";
            break;

        default:
            cout << "Invalid Input";
    }

    return 0;
}