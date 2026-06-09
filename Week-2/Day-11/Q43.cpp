#include <iostream>
using namespace std;

//function to check prime or not
void primenum(int n){

    //number less than 2 is not prime
    if(n<2){
        cout<<"The number is not prime";
        return;
    }

    //assume the number is prime initially
    bool isprime=true;

    // Check divisibility from 2 up to square root of n
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
        
    }

    //to print the result
    if(isprime==true){
        cout<<"The number is prime";

    }else{
        cout<<"The number is not prime";
    }
}
int main(){
    int n;

    //take input from user
    cout<<"Enter the number to check ";
    cin>>n;

    //calls the functions
    primenum(n);
    return 0;
}