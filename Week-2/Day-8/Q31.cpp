#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for alphabet triangle: ";

    //to take the number
    cin>>n;
    
    for (int i=1;i<=n;i++){

        //assigning alpha=A(65);
        char alpha='A';

        //for loop for printing
        for(int j=1;j<=i;j++){
            cout<<alpha;
            
            //increasing alpha by1;
            alpha++;
            
        }

        //to change line
        cout<<endl;
        
    }
    return 0;
}