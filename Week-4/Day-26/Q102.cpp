#include <iostream>
using namespace std;

int main() {

    int age;  // Variable to store the user's age

    // Take age as input
    cout << "Enter your age: ";
    cin >> age;

    // Check voting eligibility
    if(age >= 18) {
        cout << "Eligible to vote";
    }
    else {
        cout << "Not eligible to vote";
    }

    return 0;  // End of program
}