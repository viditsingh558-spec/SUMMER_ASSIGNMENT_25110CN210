#include <iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int sum=0;
    cout<<"Enter the number to check";
    cin>>n;
    int num=n;
    while(num>0){
        digit=num%10;
        int fact=1;
        for (int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        num/=10;

    }
    if(sum==n){
        cout<<"it is strong number";
    }else {
        cout<<"it is not strong number ";
    }
        
    
    return 0;
}