#include <iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int product=1;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        digit=n%10;
        product*=digit;
        n=n/10;
    }
    cout<< "product of digits = "<<product<<endl;
    return 0;
}