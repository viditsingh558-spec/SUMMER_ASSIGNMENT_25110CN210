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

    // variable to store element with maximum frequency
    int maxelement=arr[0];

    // variable to store maximum frequency
    int maxfreq=0;

    // traversing the array
    for (int i=0;i<n;i++){

        // variable to count frequency of current element
        int count=0;

        // counting frequency of arr[i]
        for (int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        // updating maximum frequency and element
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
    }

    // displaying element with maximum frequency
    cout<<"The element with max frequency is "<<maxelement<<endl;

    // displaying maximum frequency
    cout<<"Its max frequency is "<<maxfreq;

    return 0;
}