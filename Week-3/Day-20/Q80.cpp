#include <iostream>
using namespace std;

int main(){
    int a,b;

    // taking number of rows and columns
    cout<<"Enter the size of row and columns: ";
    cin>>a>>b;

    // declaring matrix
    int mat[a][b];

    // taking matrix elements as input
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat[i][j];
        }
    }

    int columnsum;

    // finding and displaying column-wise sums
    cout<<"Sum of columns:"<<endl;

    // traversing each column
    for(int i=0;i<b;i++){

        // resetting sum for each column
        columnsum=0;

        // adding elements of the current column
        for(int j=0;j<a;j++){
            columnsum+=mat[j][i];
        }

        // displaying sum of current column
        cout<<"Sum of column "<<i+1<<" = "<<columnsum<<endl;
    }

    return 0;
}