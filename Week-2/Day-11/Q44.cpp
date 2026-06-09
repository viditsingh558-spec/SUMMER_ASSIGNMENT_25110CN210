#include <iostream>
using namespace std;

int factorial(int x){

    //initialising fact=1
    int fact=1;

    //loop to calculate factorial
    for (int i=1;i<=x;i++){
        fact*=i;
    }

    //returning the factorial value
    return fact;
}
int main(){
    int n;
    
    //to take the input 
    cout<<"Enter the number for factorial: ";
    cin>>n;

    //to call the function of factorial
    cout<<"The factorial of "<<n<<"is "<<factorial(n);
    return 0;
}