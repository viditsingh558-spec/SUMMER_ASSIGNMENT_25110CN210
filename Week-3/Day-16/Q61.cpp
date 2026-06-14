#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" "<<" elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int arrsum=0;

    // finding sum of array elements
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
    }

    // finding expected sum of numbers from 1 to n+1
    int totalsum=((n+1)*(n+2))/2;

    // calculating missing number
    int missing=totalsum-arrsum;

    // displaying missing number
    cout<<"The missing number is" <<missing;

    return 0;
}