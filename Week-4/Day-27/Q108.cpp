#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Arrays to store student details
    int rollnumber[n];
    char name[100][50];
    float maths[n];
    float physics[n];
    float chemistry[n];
    float total[n];
    float percentage[n];

    // Input student details
    for(int i = 0; i < n; i++) {

        // Input roll number
        cout << "Enter the roll number of " << i + 1 << " student: ";
        cin >> rollnumber[i];

        // Remove newline left by cin before getline
        cin.ignore();

        // Input student name
        cout << "Enter the name of " << i + 1 << " student: ";
        cin.getline(name[i], 50);

        // Input Maths marks
        cout << "Enter the maths marks of " << i + 1 << " student: ";
        cin >> maths[i];

        // Input Physics marks
        cout << "Enter the physics marks of " << i + 1 << " student: ";
        cin >> physics[i];

        // Input Chemistry marks
        cout << "Enter the chemistry marks of " << i + 1 << " student: ";
        cin >> chemistry[i];

        // Calculate total marks
        total[i] = maths[i] + physics[i] + chemistry[i];

        // Calculate percentage
        percentage[i] = total[i] / 3;
    }

    // Display student marksheet
    cout << "\nStudent Marksheet Records\n";

    for(int i = 0; i < n; i++) {

        cout << "\nStudent " << i + 1 << " Details" << endl;

        // Display student name
        cout << "Name: " << name[i] << endl;

        // Display roll number
        cout << "Roll Number: " << rollnumber[i] << endl;

        // Display subject marks
        cout << "Maths Marks: " << maths[i] << endl;
        cout << "Physics Marks: " << physics[i] << endl;
        cout << "Chemistry Marks: " << chemistry[i] << endl;

        // Display total marks
        cout << "Total Marks: " << total[i] << endl;

        // Display percentage
        cout << "Percentage: " << percentage[i] << "%" << endl;
    }

    return 0;
}