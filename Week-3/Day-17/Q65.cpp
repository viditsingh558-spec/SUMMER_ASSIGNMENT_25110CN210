#include <iostream>
using namespace std;
int main(){
    int a;

    // taking size of first array
    cout<<"Enter size of 1st array: ";
    cin>>a;

    int arr[a];

    // taking elements of first array
    cout<<"Enter "<<a<< " elements: ";
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    
    int b;

    // taking size of second array
    cout<<"Enter size of seconde array: ";
    cin>>b;

    int arr2[b];

    // taking elements of second array
    cout<<"Enter "<<b<< " elements: ";
    for (int i=0;i<b;i++){
        cin>>arr2[i];
    }

    int mergedarray[a+b];

    // copying first array into merged array
    for(int i=0;i<a;i++){
        mergedarray[i]=arr[i];
    }

    // copying second array into merged array
    for(int i=0;i<b;i++){
        mergedarray[a+i]=arr2[i];
        
    }

    // displaying merged array
    cout<<"The merged array is ";
    for (int i=0;i<(a+b);i++){
        cout<<mergedarray[i]<<" ";
    }
    return 0;
}