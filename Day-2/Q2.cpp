#include <iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int reversenumber=0;
    cout<<"Enter the number to reverse";
    cin>>n;
    while(n>0){
        digit=n%10;
        reversenumber=reversenumber*10+digit;
        n/=10;
    }
    cout<<"The reversed number is = "<< reversenumber<<endl;
    return 0;
}