#include <iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int reverse=0;
    cout<<"Enter the number to check";
    cin>>n;
    int p=n;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(p==reverse){
        cout<<"It is palindrome number";
    }else {
        cout<< "It is not palindrome number";
    }
    return 0;
}