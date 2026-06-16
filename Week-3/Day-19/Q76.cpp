#include <iostream>
using namespace std;
int main(){
    int n;

    // taking size of square matrix
    cout<<"Enter the size of matrix: ";
    cin>>n;

    int arr[n][n];

    // taking matrix elements as input
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;

    // finding sum of principal diagonal elements
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }

    // displaying diagonal sum
    cout<<"The diagonal sum is "<<sum;

    return 0;
}