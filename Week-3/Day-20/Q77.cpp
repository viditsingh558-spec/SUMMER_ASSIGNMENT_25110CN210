#include <iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;

    // taking rows and columns of first matrix
    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;

    // taking rows and columns of second matrix
    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;

    // checking if matrix multiplication is possible
    if(c1!=r2){
        cout<<"Matrix multiplication is not possible.";
        return 0;
    }

    // declaring matrices and product matrix
    int arr1[r1][c1];
    int arr2[r2][c2];
    int product[r1][c2];

    // taking elements of first matrix
    cout<<"Enter elements of first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    // taking elements of second matrix
    cout<<"Enter elements of second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }

    // initializing all elements of product matrix to 0
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            product[i][j]=0;
        }
    }

    // multiplying matrices
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){

            // calculating each element of product matrix
            for(int k=0;k<c1;k++){
                product[i][j]+=arr1[i][k]*arr2[k][j];
            }

        }
    }

    // displaying the product matrix
    cout<<"Product of matrix is "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}