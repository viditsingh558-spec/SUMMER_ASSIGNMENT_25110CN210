#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    // taking sorted array elements as input
    cout<<"Enter "<<n<<" sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;

    // taking element to search
    cout<<"Enter element to search: ";
    cin>>target;

    int start=0;
    int end=n-1;
    bool found=false;

    // binary search
    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==target){
            cout<<"Element found at index "<<mid;
            found=true;
            break;
        }

        else if(target>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    // if element is not present
    if(found==false){
        cout<<"Element not found";
    }

    return 0;
}