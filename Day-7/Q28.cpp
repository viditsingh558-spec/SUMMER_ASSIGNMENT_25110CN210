#include <iostream>
using namespace std;
int reversenum=0;
void reverse(int n){
    //condition for 0
    if(n==0){
        return;
    }

    //storing the reversed number
    reversenum=reversenum*10+(n%10);
    reverse(n/10);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    //to call the reverse function
    reverse(n);
    
    //to print the reversed number
    cout<<"the reversed number is "<<reversenum;
    return 0; 
}