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

    // sorting array in descending order
    for(int i=0;i<n-1;i++){

        // assuming current index has largest element
        int maxindex=i;

        // finding index of largest element
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxindex]){
                maxindex=j;
            }
        }

        // swapping largest element with current position
        int temp=arr[i];
        arr[i]=arr[maxindex];
        arr[maxindex]=temp;
    }

    // displaying sorted array
    cout<<"Array in descending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}