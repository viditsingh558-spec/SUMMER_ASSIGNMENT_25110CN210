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

    // variable to store frequency of target element
    int freq=0;

    // taking the element whose frequency is to be found
    cout<<"Enter the element to find frequency: ";
    cin>>target;

    // traversing the array and counting occurrences
    for (int i=0;i<n;i++){

        // if target matches current element, increment frequency
        if(target==arr[i]){
            freq++;
        }
    }

    // displaying the frequency of occurrence
    cout<<"The frequecy of occurance is "<<freq;

    return 0;
}