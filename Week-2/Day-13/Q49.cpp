#include <iostream>
using namespace std;
int main(){
    int n;

    //to specify the size of array
    cout<<"Enter the size of array ";
    cin>>n;
    
    //to make specific size of array
    int arr[n];

    //to save elements in array
    cout<<"Enter "<<n<<" elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //to print the entered array values
    cout<<"Your entered array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}