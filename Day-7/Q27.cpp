#include <iostream>
using namespace std;
int sumofdigit(int n){
    //condition for 0
    if(n==0){
        return 0;
    }
    
    //addition of last digit and the number left after divison with 10
    return (n%10)+sumofdigit(n/10);
}
int main(){
    int n;
    cout<<"Enter the digit; ";
    cin>>n;

    //printing the sum of digit
    cout<<"The sum of digit is: "<<sumofdigit(n);
    return 0;
}