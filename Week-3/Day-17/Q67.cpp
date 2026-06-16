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

    int inter[a+b];
    int size=0;

    // finding common elements
    for(int i=0;i<a;i++){

        bool found=false;

        for(int j=0;j<b;j++){
            if(arr[i]==arr2[j]){
                found=true;
                break;
            }
        }

        // checking if element is already stored
        bool duplicate=false;

        for(int j=0;j<size;j++){
            if(arr[i]==inter[j]){
                duplicate=true;
                break;
            }
        }

        // storing common unique element
        if(found==true && duplicate==false){
            inter[size]=arr[i];
            size++;
        }
    }

    // displaying intersection
    cout<<"Intersection of arrays is ";
    for(int i=0;i<size;i++){
        cout<<inter[i]<<" ";
    }

    return 0;
}