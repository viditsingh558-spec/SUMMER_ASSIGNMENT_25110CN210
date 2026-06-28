#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int choice;

    cout << "Choose operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cin >> choice;

    switch(choice) {

        case 1: {
            int sum = a + b;
            cout << "The sum is " << sum << endl;
            break;
        }

        case 2: {
            int diff = a - b;
            cout << "The difference is " << diff << endl;
            break;
        }

        case 3: {
            int product = a * b;
            cout << "The multiplication is " << product << endl;
            break;
        }

        case 4: {
            if(b != 0) {
                int division = a / b;
                cout << "The division is " << division << endl;
            } else {
                cout << "Division by zero is not possible." << endl;
            }
            break;
        }

        default:
            cout << "Invalid input";
    }

    return 0;
}