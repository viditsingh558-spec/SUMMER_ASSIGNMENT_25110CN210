#include <iostream>
using namespace std;
int maxnum(int x,int y){
    int max;

    //comparison for maximum number 
    if(x>y){
        max=x;
    }else {
        max=y;
    }

    //returning the max value
    return max;
}
int main(){
    int a,b;

    //taking input of two values
    cout<<"Enter two numbers to compare: ";
    cin>>a>>b;

    //calling the function for the result
    cout<<"The max number is "<<maxnum(a,b);
    return 0;
}