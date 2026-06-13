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

    // store last element
    int last=arr[n-1];

    // shift all elements one position right
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }

    // place last element at the beginning
    arr[0]=last;

    // display rotated array
    cout<<"Array after right rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}