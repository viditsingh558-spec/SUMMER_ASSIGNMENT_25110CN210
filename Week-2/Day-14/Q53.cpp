#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array from user
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" elements ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;

    // taking the element to search
    cout<<"Enter the element to search in array: ";
    cin>>target;

    // variable to track whether element is found
    bool found=false;

    // performing linear search
    for (int i=0;i<n;i++){

        // check if current element matches target
        if(target==arr[i]){

            // display index of found element
            cout<<"Your element is at index "<<i;

            found=true;
            break;
        }
    }

    // if element is not present in array
    if(found==false){
        cout<<"Element not found";
    }

    return 0;
}