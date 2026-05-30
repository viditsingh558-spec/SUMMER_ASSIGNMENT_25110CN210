#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting range";
    cin >>start;
    cout<<"Enter the ending range";
    cin >>end;
    for (int n=start;n<=end;n++){
        int temp=n;
        int count=0;
        int sum=0;

        while(temp>0){
            count++;
            temp/=10;
        }
        temp =n;
        while(temp>0){
            int digit=temp%10;
            sum+=(int)pow(digit,count);
            temp/=10;
        }
        if(sum==n){
            cout<<n<<" ";
        }
    }
    return 0;
    

}