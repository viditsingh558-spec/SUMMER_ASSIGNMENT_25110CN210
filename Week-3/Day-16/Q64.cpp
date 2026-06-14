#include <iostream>
using namespace std;

int main()
{

    int n;

    // taking size of array
    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    // taking array elements as input
    cout << "Enter " << n << " " << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int unique[n];

    // variable to store number of unique elements
    int size = 0;

    // traversing the original array
    for (int i = 0; i < n; i++)
    {

        // assume current element is not duplicate
        bool duplicate = false;

        // checking if current element already exists in unique array
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == unique[j])
            {
                duplicate = true;
                break;
            }
        }

        // storing element if it is not a duplicate
        if (duplicate == false)
        {
            unique[size] = arr[i];
            size++;
        }
    }

    // displaying array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++)
    {
        cout << unique[i] << " ";
    }

    return 0;
}