#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of accounts
    cout << "Enter number of accounts: ";
    cin >> n;

    // Arrays to store account details
    int accountnumber[n];
    char name[100][50];
    float balance[n];

    // Input account details
    for(int i = 0; i < n; i++) {

        cout << "Enter account number of account " << i + 1 << ": ";
        cin >> accountnumber[i];

        // Remove newline left by cin
        cin.ignore();

        cout << "Enter account holder name: ";
        cin.getline(name[i], 50);

        cout << "Enter initial balance: ";
        cin >> balance[i];
    }

    // Display all account records
    cout << "\nBank Account System...\n";

    for(int i = 0; i < n; i++) {

        cout << "\nAccount " << i + 1 << " Details\n";

        // Display account number
        cout << "Account Number: " << accountnumber[i] << endl;

        // Display account holder name
        cout << "Account Holder: " << name[i] << endl;

        // Display balance
        cout << "Balance: " << balance[i] << endl;
    }

    return 0;
}