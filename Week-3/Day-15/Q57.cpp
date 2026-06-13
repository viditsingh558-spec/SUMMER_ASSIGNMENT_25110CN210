#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int m=n;
    int revarr[n];
    cout<<"Enter "<<n<<" elements in array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        revarr[m-1]=arr[i];
        m--;
    }
    cout<<"Your reversed value of array is ";
    for (int j=0;j<n;j++){
        cout<<revarr[j]<<" ";
    }
    return 0;

}