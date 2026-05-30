#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number to check lcm";
    cin>>a>>b;
    int x,y;
    x=a;
    y=b;
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    int gcd=x;
    int lcm=(a*b)/gcd;

    cout<<"LCM is "<<lcm;
    return 0;
}