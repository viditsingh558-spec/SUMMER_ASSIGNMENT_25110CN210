#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number to check";
    cin>>n;
    int num=n;
    for (int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        cout<<"it is perfect number";
    }else{
        cout<<"it is not perfect number";
    }
    return 0;
}