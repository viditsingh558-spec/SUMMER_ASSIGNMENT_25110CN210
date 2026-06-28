#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter the size of array: ";
    cin >> n;

    // Declare array
    int arr[n];

    // Input array elements
    cout << "Enter the " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;

    // Display menu
    cout << "\nMenu Driven Array Operations";
    cout << "\n1. Display Array";
    cout << "\n2. Find Sum";
    cout << "\n3. Find Largest Element";
    cout << "\n4. Exit";

    // Input user's choice
    cout << "\nEnter your choice: ";
    cin >> choice;

    // Variables used in operations
    int sum = 0;
    int largestelement = arr[0];

    // Perform operation based on user's choice
    switch(choice) {

        // Display all array elements
        case 1:
            cout << "The array elements are:\n";
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        // Calculate and display sum of array elements
        case 2:
            for(int i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout << "The given array sum is " << sum << endl;
            break;

        // Find and display largest element
        case 3:
            for(int i = 1; i < n; i++) {
                if(arr[i] > largestelement) {
                    largestelement = arr[i];
                }
            }
            cout << "The largest element is " << largestelement;
            break;

        // Exit option
        case 4:
            cout << "Program Ended";
            break;

        // Invalid choice
        default:
            cout << "Invalid Choice";
    }

    return 0;
}