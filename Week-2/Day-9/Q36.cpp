#include <iostream>
using namespace std;
int main(){

    //take the input number for row and columns
    int n;
    cout<<"Enter size of the square";
    cin >>n;

    //for taking rows
    for (int i=1;i<=n;i++){

        //for taking columns
        for(int j=1;j<=n;j++){
            
            //OR is used to check if any condition is true 
            if(i==1 || i==n ||j==1 || j==n){
                cout<<"*";
            }

            //else to print space
            else{
                cout<<" ";
            }
        }

        //to change line
        cout<<endl;
    }
    
    return 0;
}