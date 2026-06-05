#include <iostream>
using namespace std;
int fibo(int n){

    //for the condition 0
    if(n==0){
        return 0;
    }

    //for the condition 1
    if(n==1){
        return 1;
    }

    //addition of two previous numbers
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the number to print";
    cin>>n;

    //printing result with for loop
    for (int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}