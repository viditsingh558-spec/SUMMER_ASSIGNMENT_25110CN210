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

    int rowsum;

    // finding and displaying row-wise sums
    cout<<"Sum of rows:"<<endl;
    for(int i=0;i<a;i++){

        // resetting sum for each row
        rowsum=0;

        // adding elements of the current row
        for(int j=0;j<b;j++){
            rowsum+=mat[i][j];
        }

        // displaying sum of current row
        cout<<"Sum of row "<<i+1<<" = "<<rowsum<<endl;
    }

    return 0;
}