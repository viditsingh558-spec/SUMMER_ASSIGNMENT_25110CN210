#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int digit;
    int decimal=0,i=0;

    //input numbers
    cout<<"Enter the number in binary";
    cin>>n;

    //to get the decimal value
    while(n>0){
        digit=n%10;
        decimal+=digit*pow(2,i);
        n=n/10;
        i++;


    }
    //to print the result
    cout<<"The decimal no is "<<decimal;
    return 0;
}