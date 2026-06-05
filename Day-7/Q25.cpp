#include <iostream>
using namespace std;
int factorial(int n){

    //for condition of 0 and 1
    if(n==0 || n==1){
        return 1;
    }
    //finding factorial
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number for factorial";
    cin>>n;

    //printing the result
    cout<<"factorial value is "<<factorial(n);
    return 0;

}