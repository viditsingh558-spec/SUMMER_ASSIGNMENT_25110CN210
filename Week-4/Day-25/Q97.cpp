#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the size of first array: ";
    cin >> m;

    int arr1[m];
    cout << "Enter " << m << " sorted elements: ";
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n;

    int arr2[n];
    cout << "Enter " << n << " sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int mergedarr[m + n];

    int i = 0; // arr1 pointer
    int j = 0; // arr2 pointer
    int k = 0; // mergedarr pointer

    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            mergedarr[k] = arr1[i];
            i++;
        }
        else {
            mergedarr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1
    while(i < m) {
        mergedarr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while(j < n) {
        mergedarr[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array is:\n";
    for(int i = 0; i < m + n; i++) {
        cout << mergedarr[i] << " ";
    }

    return 0;
}