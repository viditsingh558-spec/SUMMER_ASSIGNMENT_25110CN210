#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of products
    cout << "Enter number of products: ";
    cin >> n;

    // Arrays to store product details
    int productid[n];
    char productname[100][50];
    int quantity[n];
    float price[n];

    // Input product records
    for(int i = 0; i < n; i++) {

        // Input product ID
        cout << "Enter " << i + 1 << " product id: ";
        cin >> productid[i];

        // Remove newline left by cin
        cin.ignore();

        // Input product name
        cout << "Enter " << i + 1 << " product name: ";
        cin.getline(productname[i], 50);

        // Input quantity
        cout << "Enter " << i + 1 << " product quantity: ";
        cin >> quantity[i];

        // Input product price
        cout << "Enter " << i + 1 << " product price: ";
        cin >> price[i];
    }

    // Display inventory records
    cout << "\nInventory Management System\n";

    for(int i = 0; i < n; i++) {

        // Display product ID
        cout << "Product ID of product " << i + 1 << ": " << productid[i] << endl;

        // Display product name
        cout << "Product Name of product " << i + 1 << ": " << productname[i] << endl;

        // Display product quantity
        cout << "Product Quantity of product " << i + 1 << ": " << quantity[i] << endl;

        // Display product price
        cout << "Product Price of product " << i + 1 << ": " << price[i] << endl;
    }

    return 0;
}