#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of employees
    cout << "Enter number of employees ";
    cin >> n;

    // Arrays to store employee details
    int empid[n];
    char name[100][50];
    float salary[n];
    float bonus[n];
    float deduction[n];
    float netsalary[n];

    // Input employee records
    for(int i = 0; i < n; i++) {

        // Input employee ID
        cout << "Enter " << i + 1 << " employee id: ";
        cin >> empid[i];

        // Remove newline left by cin before getline
        cin.ignore();

        // Input employee name
        cout << "Enter " << i + 1 << " employee name: ";
        cin.getline(name[i], 50);

        // Input basic salary
        cout << "Enter " << i + 1 << " employee basic salary: ";
        cin >> salary[i];

        // Input bonus
        cout << "Enter " << i + 1 << " employee bonus: ";
        cin >> bonus[i];

        // Input deduction
        cout << "Enter " << i + 1 << " employee deduction: ";
        cin >> deduction[i];

        // Calculate net salary
        netsalary[i] = salary[i] + bonus[i] - deduction[i];
    }

    // Display employee records
    cout << "\nSalary Management System..." << endl;

    for(int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << " Details" << endl;

        // Display employee ID
        cout << "Employee ID: " << empid[i] << endl;

        // Display employee name
        cout << "Employee Name: " << name[i] << endl;

        // Display basic salary
        cout << "Basic Salary: " << salary[i] << endl;

        // Display bonus
        cout << "Bonus: " << bonus[i] << endl;

        // Display deduction
        cout << "Deduction: " << deduction[i] << endl;

        // Display net salary
        cout << "Net Salary: " << netsalary[i] << endl;
    }

    return 0;
}