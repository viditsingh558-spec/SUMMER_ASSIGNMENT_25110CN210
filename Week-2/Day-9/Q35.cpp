#include <iostream>
using namespace std;
int main(){

    //take the input number for row and columns
    int n;
    cout<<"Enter the number";
    cin >>n;
    char ch='A';

    //for the rows
    for (int i=1;i<=n;i++){
        

        //for the columns
        for (int j=1;j<=i;j++){
            cout<<ch;
            
        }
        ch++;
        //to change the lines
        cout<<endl;
        
    }
    return 0;
}