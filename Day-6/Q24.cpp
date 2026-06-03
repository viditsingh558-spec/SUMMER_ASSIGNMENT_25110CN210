#include <iostream>
using namespace std;
int main(){
    int x,n;
    int number=1;

    //taking input base and power
    cout<<"Enter the base: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;

    //for multiplication
    for (int i=1;i<=n;i++){
        number=number*x;
    }

    //for printing result
    cout<<x<<"^" <<n<< " = "<<number;
    return 0;
}