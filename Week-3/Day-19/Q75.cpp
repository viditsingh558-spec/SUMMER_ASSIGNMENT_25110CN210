#include <iostream>
using namespace std;
int main(){
    int a,b;

    // taking number of rows and columns
    cout<<"Enter number of row and column: ";
    cin>>a>>b;

    int arr[a][b];

    // taking elements of matrix
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    // displaying transpose of matrix
    cout<<"The transpose of matrix is "<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}