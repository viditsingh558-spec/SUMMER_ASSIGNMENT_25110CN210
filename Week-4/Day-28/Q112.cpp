#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    int contactid[n];
    char name[100][50];
    char phone[100][20];
    char email[100][50];

    for(int i = 0; i < n; i++) {

        cout << "Enter contact id for contact " << i + 1 << ": ";
        cin >> contactid[i];

        cin.ignore();

        cout << "Enter contact name: ";
        cin.getline(name[i], 50);

        cout << "Enter phone number: ";
        cin.getline(phone[i], 20);

        cout << "Enter email address: ";
        cin.getline(email[i], 50);
    }

    cout << "\nContact Management System\n";

    for(int i = 0; i < n; i++) {

        cout << "\nContact " << i + 1 << endl;
        cout << "Contact ID: " << contactid[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Phone Number: " << phone[i] << endl;
        cout << "Email Address: " << email[i] << endl;
    }

    return 0;
}