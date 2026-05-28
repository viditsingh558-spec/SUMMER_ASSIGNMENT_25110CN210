#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the number";
    cin>>n;
    while (n>0){
        n/=10;
        count++;
    }
    cout<<"The number of digits are ="<<count<<endl;
    return 0;
}