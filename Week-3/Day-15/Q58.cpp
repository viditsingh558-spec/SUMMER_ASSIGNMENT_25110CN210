#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // store first element
    int first=arr[0];

    // shift all elements one position left
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    // place first element at the end
    arr[n-1]=first;

    // display rotated array
    cout<<"Array after left rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}