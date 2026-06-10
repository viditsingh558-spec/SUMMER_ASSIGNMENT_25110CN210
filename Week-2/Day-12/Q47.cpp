#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int x) {

    int a = 0, b = 1;

    // Print first two terms
    cout << "The Fibonacci series is: ";
    cout << a << " " << b << " ";

    // Loop conditions
    for (int i = 3; i <= x; i++) {

        // Calculate next term
        int c = a + b;

        // Print the term
        cout << c << " ";

        // Update values for next iteration
        a = b;
        b = c;
    }
}

int main() {
    int n;

    // Take input from the user
    cout << "Enter the number of terms: ";
    cin >> n;

    // Call the function
    fibonacci(n);

    return 0;
}