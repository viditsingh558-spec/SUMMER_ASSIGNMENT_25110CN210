#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter the string: ";
    cin.getline(str, 100);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; ) {
        char current = str[i];
        int count = 0;

        // Count consecutive occurrences
        while (i < len && str[i] == current) {
            count++;
            i++;
        }

        cout << current << count;
    }

    return 0;
}