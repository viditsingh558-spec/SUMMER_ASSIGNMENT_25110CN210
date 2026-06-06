#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";

    //to take input value
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){

            //to print value of i
            cout<<i;
        }

        //to change the line
        cout<<endl;
    }
    return 0;
}