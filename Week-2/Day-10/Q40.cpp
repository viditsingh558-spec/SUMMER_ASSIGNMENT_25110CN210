#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    //to take the input number
    cin>>n;
    
    for (int i=1;i<=n;i++){
        char ch='A';

        //for printing spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        //for printing stars
        for(int k=1;k<=i;k++){
            cout<<ch;
            ch++;

        }

        //for decreasing part
        ch-=2;
        for (int l=i-1;l>=1;l--){
            cout<<ch;
            ch--;
        }

        //to change the line
        cout<<endl;
    }
    return 0;
}