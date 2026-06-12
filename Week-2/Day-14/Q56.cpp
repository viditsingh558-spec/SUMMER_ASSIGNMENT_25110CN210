#include <iostream>
using namespace std;

int main(){

    int n;

    // taking size of array
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    // taking array elements as input
    cout<<"Enter "<<n<<" elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Duplicate elements are: ";

    // checking each element
    for(int i=0;i<n;i++){

        bool alreadyPrinted=false;

        // check if this element has appeared before
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                alreadyPrinted=true;
                break;
            }
        }

        // if already printed, skip it
        if(alreadyPrinted){
            continue;
        }

        // count frequency of current element
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        // print if frequency is greater than 1
        if(count>1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}