#include <iostream>
using namespace std;

int main() {
    int n;          // Stores user's answer
    int score = 0; // Stores quiz score

    // Question 1
    cout << "Question 1: What is the capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. New Delhi" << endl;
    cout << "3. Kolkata" << endl;
    cout << "4. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> n;

    // Check answer for Question 1
    if(n == 2) {
        cout << "This is correct" << endl;
        score++; // Increase score for correct answer
    }
    else {
        cout << "This is wrong" << endl;
    }

    // Question 2
    cout << "\nQuestion 2: How many days are there in a week?" << endl;
    cout << "1. 5" << endl;
    cout << "2. 6" << endl;
    cout << "3. 7" << endl;
    cout << "4. 8" << endl;
    cout << "Enter your answer: ";
    cin >> n;

    // Check answer for Question 2
    if(n == 3) {
        cout << "This is correct" << endl;
        score++;
    }
    else {
        cout << "This is wrong" << endl;
    }

    // Question 3
    cout << "\nQuestion 3: Which language is commonly used for Object-Oriented Programming?" << endl;
    cout << "1. C++" << endl;
    cout << "2. HTML" << endl;
    cout << "3. SQL" << endl;
    cout << "4. CSS" << endl;
    cout << "Enter your answer: ";
    cin >> n;

    // Check answer for Question 3
    if(n == 1) {
        cout << "This is correct" << endl;
        score++;
    }
    else {
        cout << "This is wrong" << endl;
    }

    // Display final score
    cout << "\nYour score is " << score << "/3" << endl;

    return 0;
}