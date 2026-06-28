#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Arrays to store student details
    int rollnumber[n];
    string name[100];
    float marks[n];

    // Input student records
    for(int i = 0; i < n; i++) {

        // Input roll number
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> rollnumber[i];

        // Remove newline left by cin
        cin.ignore();

        // Input student name
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name[i]);

        // Input student marks
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\nStudent Record System\n";

    for(int i = 0; i < n; i++) {

        // Display roll number
        cout << "Roll Number of student " << i + 1 << ": " << rollnumber[i] << endl;

        // Display student name
        cout << "Name of student " << i + 1 << ": " << name[i] << endl;

        // Display student marks
        cout << "Marks of student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}