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

    int uni[a+b];
    int size=0;

    for (int i=0;i<a;i++){
        bool duplicate=false;
        for(int j=0;j<size;j++){
            if(arr[i]==uni[j]){
                duplicate=true;
                break;
            }

        }
        if(duplicate==false){
            uni[size]=arr[i];
            size++;
        }
        
    }
    for(int i=0;i<b;i++){
        bool duplicate=false;
        for(int j=0;j<size;j++){
            if(arr2[i]==uni[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate==false){
            uni[size]=arr2[i];
            size++;
        }
    }
    cout<<"the union of arrays is ";
    for(int i=0;i<size;i++){
        cout<<uni[i]<<" ";
    }
    return 0;
}