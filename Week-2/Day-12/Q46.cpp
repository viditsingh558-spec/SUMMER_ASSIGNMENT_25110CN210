#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n) {
    int num = n;
    int temp = n;
    int count = 0, sum = 0;
    int digit;

    // Count digits
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    // Calculate Armstrong sum
    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    //check the condition to show result
    if (sum == num) {
        cout << "This is Armstrong number";
    } else {
        cout << "This is not Armstrong number";
    }
}

int main() {
    int n;

    //to take input
    cout << "Enter the number to check: ";
    cin >> n;

    //to call the function
    armstrong(n);

    return 0;
}