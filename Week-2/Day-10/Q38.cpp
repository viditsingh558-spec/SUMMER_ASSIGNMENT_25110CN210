#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    //to take the input number
    cin>>n;
    for (int i=n;i>=1;i--){

        //for printing spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        //for printing stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";

        }

        //to change the line
        cout<<endl;
    }
    return 0;
}