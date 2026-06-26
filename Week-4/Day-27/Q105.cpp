#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Arrays to store roll numbers, names, and marks
    int rollnumber[n];
    char name[100][50];
    float marks[n];

    // Input student details
    for(int i = 0; i < n; i++) {

        cout << "Enter the roll number of " << i + 1 << " student: ";
        cin >> rollnumber[i];

        // Remove the newline character left by cin
        cin.ignore();

        cout << "Enter the name of " << i + 1 << " student: ";
        cin.getline(name[i], 50);

        cout << "Enter the marks of " << i + 1 << " student: ";
        cin >> marks[i];
    }

    // Display student records
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " student name is " << name[i] << endl;
        cout << i + 1 << " student roll number is " << rollnumber[i] << endl;
        cout << i + 1 << " student marks is " << marks[i] << endl;
    }

    return 0;
}