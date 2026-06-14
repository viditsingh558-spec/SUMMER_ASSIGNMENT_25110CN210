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

    int target;

    // taking target sum from user
    cout<<"Enter the sum you want to search the pair: ";
    cin>>target;

    // variable to check whether pair is found
    bool found=false;

    // checking all possible pairs
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){

            // checking if pair sum equals target
            if((arr[i]+arr[j])==target){

                // displaying the pair
                cout<<"The pair of numbers are "<<arr[i]<<" and "<<arr[j];

                found=true;
            }
        }
    }

    // if no pair is found
    if(found==false){
        cout<<"No pair found";
    }

    return 0;
}