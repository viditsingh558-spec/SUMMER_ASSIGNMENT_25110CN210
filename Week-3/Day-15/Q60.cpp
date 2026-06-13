#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=0;

    // place all non-zero elements at the beginning
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }

    // fill remaining positions with zeroes
    while(index<n){
        arr[index]=0;
        index++;
    }

    // display modified array
    cout<<"Array after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}