#include <iostream>
using namespace std;
int main(){
    int n;

    //defining size of array
    cout<<"Enter the size of array ";
    cin>>n;

    //making array of n size
    int arr[n];
    int sum=0;
    int average;

    //saving the elements in array by user 
    cout<<"Enter "<<n<<" elements for sum and average ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //performing addition of elements
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    //printing the sum and the average of array
    cout<<"The sum of array is "<<sum<<endl;
    average=sum/n;
    cout<<"The average of array is "<<average;
    return 0;
    
}