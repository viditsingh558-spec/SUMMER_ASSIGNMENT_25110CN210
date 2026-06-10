#include <iostream>
using namespace std;

// Function to check whether a number is perfect or not
void perfectnumber(int n){
    int sum = 0;
    
    // Loop to perform operation
    for (int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    // check the conditions to print the result
    if(sum == n){
        cout << "The number is perfect number ";
    }else{
        cout << "The number is not perfect number ";
    }
}

int main(){

    int n;

    // Take input from the user
    cout << "Enter the number: ";
    cin >> n;

    // Call the function
    perfectnumber(n);

    return 0;
}