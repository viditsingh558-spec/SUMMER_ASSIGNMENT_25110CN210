#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of employees
    cout << "Enter number of employees ";
    cin >> n;

    // Arrays to store employee details
    int empid[n];
    string name[50];
    float salary[n];

    // Input employee records
    for(int i = 0; i < n; i++) {

        cout << "Enter " << i + 1 << " employee id: ";
        cin >> empid[i];

        cout << "Enter " << i + 1 << " employee name: ";
        cin >> name[i];

        cout << "Enter " << i + 1 << " employee salary: ";
        cin >> salary[i];
    }

    // Display employee records
    cout << "Employees record..." << endl;

    for(int i = 0; i < n; i++) {

        cout << i + 1 << " employee id is " << empid[i] << endl;

        cout << i + 1 << " employee name is " << name[i] << endl;

        cout << i + 1 << " employee salary is " << salary[i] << endl;
    }

    return 0;
}