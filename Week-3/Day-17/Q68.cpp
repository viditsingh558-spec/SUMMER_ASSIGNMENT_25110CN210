#include <iostream>
using namespace std;
int main(){
    int a;

    // taking size of first array
    cout<<"Enter size of 1st array: ";
    cin>>a;

    int arr[a];

    // taking elements of first array
    cout<<"Enter "<<a<<" elements: ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    int b;

    // taking size of second array
    cout<<"Enter size of 2nd array: ";
    cin>>b;

    int arr2[b];

    // taking elements of second array
    cout<<"Enter "<<b<<" elements: ";
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }

    // finding common elements
    cout<<"Common elements are: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}