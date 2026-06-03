#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check";
    cin>>n;
    int count=0;
    
    //for counting the bits
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }

    //for printing the result
    cout<<"the set of bits are "<<count;
    return 0;
}