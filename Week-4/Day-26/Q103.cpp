#include<iostream>
using namespace std;

int main() {
    // Variable to store user's menu choice
    int choice;

    // Display ATM menu
    cout << "Enter the number to choose operation: " << endl;
    cout << "\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit" << endl;

    // Take user choice
    cin >> choice;

    // Initial account balance
    int balance = 10000;

    // Variables for deposit and withdrawal amounts
    int deposit=0;
    int withdraw=0;

    // Perform operation based on user's choice
    switch(choice) {

        // Check Balance
        case 1:
            cout << "Your balance is " << balance << endl;
            break;

        // Deposit Money
        case 2:
            cout << "Enter the value you want to deposit: ";
            cin >> deposit;

            balance += deposit; // Add deposit amount to balance

            cout << "Your balance is now " << balance << endl;
            break;

        // Withdraw Money
        case 3:
            cout << "Enter the money you want to withdraw: ";
            cin >> withdraw;

            // Check if sufficient balance is available
            if(withdraw <= balance) {
                balance -= withdraw; // Deduct amount from balance
                cout << "Your balance is now " << balance << endl;
            }
            else {
                cout << "Insufficient Balance." << endl;
            }
            break;

        // Exit ATM
        case 4:
            cout << "Thank you for using the ATM." << endl;
            break;

        // Invalid Choice
        default:
            cout << "Invalid Input" << endl;
            break;
    }

    return 0;
}