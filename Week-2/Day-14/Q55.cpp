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

    // assuming first element is largest and second largest
    int largest=arr[0];
    int secondlargest=arr[0];

    // traversing the array to find largest and second largest elements
    for (int i=0;i<n;i++){

        // if current element is larger than largest
        if(arr[i]>largest){

            // previous largest becomes second largest
            secondlargest=largest;

            // update largest
            largest=arr[i];
        }

        // if current element is between largest and second largest
        else if (arr[i]>secondlargest && arr[i]!=largest){

            // update second largest
            secondlargest=arr[i];
        }
    }

    // display second largest element
    cout<<"The second largest element is "<<secondlargest;

    return 0;
}