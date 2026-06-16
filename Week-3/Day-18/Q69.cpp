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

    // bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){

            // swapping if current element is greater
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    // displaying sorted array
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}