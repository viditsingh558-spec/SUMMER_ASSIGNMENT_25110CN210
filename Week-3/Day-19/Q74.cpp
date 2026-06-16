#include <iostream>
using namespace std;
int main(){
    int a,b;

    // taking number of rows and columns
    cout<<"Enter number of row and column: ";
    cin>>a>>b;

    // declaring matrices and result matrix
    int arr1[a][b];
    int arr2[a][b];
    int diff[a][b];

    // taking elements of first matrix
    cout<<"Enter the elements of first matrix: ";
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }

    // taking elements of second matrix
    cout<<"Enter the elements of second matrix: ";
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin>>arr2[i][j];
        }
    }

    // subtracting corresponding elements of both matrices
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            diff[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    // displaying the resultant matrix
    cout<<"The subtraction of the matrices is "<<endl;
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<diff[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}