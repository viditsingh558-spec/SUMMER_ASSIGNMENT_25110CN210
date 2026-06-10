#include <iostream>
using namespace std;
void palindrome(int x){
    //initialising the values
    int num=x;
    int digit;
    int rev=0;

    //to reverse a number 
    while(x>0){
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }

    //to check the condition and print the result
    if(num==rev){
        cout<< "Number is palindrome";
    }else {
        cout<< "number is not palindrome";
    }
}
int main(){
    int n;
    cout<<"Enter the number to check: ";
    cin>>n;

    //to call the palindrome function
    palindrome(n);
    return 0;
}