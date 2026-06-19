#include <iostream>
using namespace std;

int main(){
    int n;

    // taking size of square matrix
    cout<<"Enter size of square matrix: ";
    cin>>n;

    // declaring matrix and transpose matrix
    int arr1[n][n];
    int transposemat[n][n];

    // taking matrix elements as input
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    // creating transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transposemat[j][i]=arr1[i][j];
        }
    }

    bool symmetric=true;

    // comparing original matrix with transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]!=transposemat[i][j]){
                symmetric=false;
                break;
            }
        }

        if(symmetric==false){
            break;
        }
    }

    // displaying result
    if(symmetric==true){
        cout<<"The matrix is symmetric";
    }
    else{
        cout<<"The matrix is not symmetric";
    }

    return 0;
}