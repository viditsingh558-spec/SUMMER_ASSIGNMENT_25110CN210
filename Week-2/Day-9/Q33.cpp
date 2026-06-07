#include <iostream>
using namespace std;
int main(){

    //take the input number for row and columns
    int n;
    cout<<"Enter the number";
    cin >>n;

    //for the rows
    for (int i=1;i<=n;i++){

        //for the columns
        for (int j=n;j>=i;j--){
            cout<<"*";
        }

        //to change lines
        cout<<endl;
    }
    return 0;
}