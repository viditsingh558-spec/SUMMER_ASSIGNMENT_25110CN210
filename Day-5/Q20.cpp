#include <iostream>
using namespace std;
int main(){
    int n;
    long long largestpfactor;
    cout<<"Enter the number";
    cin>>n;
    for (int i=2;i<=n;i++){
        while(n%i==0){
            largestpfactor=i;
            n/=i;

        }
    }
    if(n>1){
        largestpfactor=n;
    }

    cout<<"Largest prime factor= "<<largestpfactor;
    return 0;
}