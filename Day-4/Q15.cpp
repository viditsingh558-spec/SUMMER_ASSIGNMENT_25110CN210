#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int digit;
    int count=0,sum=0;
    cout <<"Enter the number to check";
    cin>>n;
    int num=n;
    while(num>0){
        num/=10;
        count++;

    }
    num=n;
    while(num>0){
        digit=num%10;
        sum+=pow(digit,count);
        num/=10;
    }

    if(sum==n){
        cout<<"This is armstrong number";
    }else{
        cout<<"This is not armstrong number";
    }
    return 0;
}