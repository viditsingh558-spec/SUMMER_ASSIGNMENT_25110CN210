#include <iostream>
using namespace std;
int main(){

    //take the input number for row and columns
    int n;
    cout<<"Enter the number";
    cin >>n;

    //for the rows
    for (int i=n;i>=1;i--){

        //for the columns
        for (int j=1;j<=i;j++){
            cout<<j;
        }

        //to change lines
        cout<<endl;
    }
    return 0;
}