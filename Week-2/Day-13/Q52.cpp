#include <iostream>
using namespace std;

int main()
{
    int n;

    // defining size of array
    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    // variables to count even and odd elements
    int counteven=0;
    int countodd=0;

    // saving the elements in array by user
    cout<<"Enter "<<n<<" elements for counting ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // checking each element and counting even and odd numbers
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){

            // increment even counter
            counteven++;
        }else {

            // increment odd counter
            countodd++;
        }
    }

    // display the count of even elements
    cout<<"The number of even elements are "<<counteven<<endl;

    // display the count of odd elements
    cout<<"The number of odd elements are "<<countodd<<endl;

    return 0;
}