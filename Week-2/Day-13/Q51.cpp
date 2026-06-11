#include <iostream>
using namespace std;

int main()
{
    int n;

    // defining size of array
    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    // saving the elements in array by user
    cout<<"Enter "<<n<<" elements for sum and average ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // assume first element is the largest
    int maxnum=arr[0];

    // find the largest element in the array
    for (int i=0;i<n;i++){
        if(maxnum<arr[i]){
            maxnum=arr[i];
        }
    }

    // display the largest element
    cout<<"The largest number is "<<maxnum<<endl;

    // assume first element is the smallest
    int minnum=arr[0];

    // find the smallest element in the array
    for (int i=0;i<n;i++){
        if(minnum>arr[i]){
            minnum=arr[i];
        }
    }

    // display the smallest element
    cout<<"The smallest number is "<<minnum<<endl;

    return 0;
}