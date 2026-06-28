#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of employees
    cout << "Enter number of employees: ";
    cin >> n;

    // Arrays to store employee details
    int empid[n];
    string name[n];
    float salary[n];

    // Input employee records
    for(int i = 0; i < n; i++) {

        // Input employee ID
        cout << "Enter employee ID of employee " << i + 1 << ": ";
        cin >> empid[i];

        // Remove newline left by cin
        cin.ignore();

        // Input employee name
        cout << "Enter employee name of employee " << i + 1 << ": ";
        getline(cin, name[i]);

        // Input employee salary
        cout << "Enter employee salary of employee " << i + 1 << ": ";
        cin >> salary[i];
    }

    // Display employee records
    cout << "\nMini Employee Management System\n";

    for(int i = 0; i < n; i++) {

        // Display employee ID
        cout << "Employee ID: " << empid[i] << endl;

        // Display employee name
        cout << "Employee Name: " << name[i] << endl;

        // Display employee salary
        cout << "Employee Salary: " << salary[i] << endl;

        cout << "-----------------------------" << endl;
    }

    return 0;
}