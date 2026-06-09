#include <iostream>
using namespace std;

//function to perform sum operation
void  sum(int a,int b){
    int sum=a+b;

    //to print the results
    cout<<"The sum of numbers is "<<sum;
}
int main(){
    int a,b;

    //to take two input values
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    //calling the sum function
    sum(a,b);
    
    return 0;

}