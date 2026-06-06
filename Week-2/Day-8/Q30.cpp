#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";

    //to take the input number
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){

            //to print the value of j
            cout<<j;
        }

        //to change the line
        cout<<endl;
    }
    return 0;
}