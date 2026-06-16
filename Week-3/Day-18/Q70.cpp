#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // selection sort
    for(int i=0;i<n-1;i++){

        // assuming current index has minimum element
        int minindex=i;

        // finding index of smallest element
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }

        // swapping smallest element with current position
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    // displaying sorted array
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}