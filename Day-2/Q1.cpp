#include <iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int sum=0;
    cout<<"enter the number";
    cin>>n;
    while (n>0){
        digit=n%10;
        n=n/10;
        sum+=digit;

    }
    cout<<"the sum of digit is = "<<sum<<endl;
    return 0;
}