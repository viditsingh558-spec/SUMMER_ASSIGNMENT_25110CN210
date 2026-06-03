#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to convert";
    cin>>n;
    
    //for the case 0
    if(n==0){
        cout<<"0";
    }

    int binary[32];
    int i=0;

    //for getting the remainders
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }

    //for printing binary numbers
    cout<<"binary= ";
    for (int j=i-1;j>=0;j--){
        cout<<binary[j];

    }
    return 0;
}