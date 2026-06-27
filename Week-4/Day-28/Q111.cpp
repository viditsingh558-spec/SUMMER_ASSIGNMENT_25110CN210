#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of passengers
    cout << "Enter number of customers: ";
    cin >> n;

    // Arrays to store ticket details
    int ticketid[n];
    char passengername[100][50];
    char source[100][50];
    char destination[100][50];
    float ticketprice[n];

    // Input passenger records
    for(int i = 0; i < n; i++) {

        // Input ticket ID
        cout << "Enter " << i + 1 << " passenger ticket id: ";
        cin >> ticketid[i];

        // Remove newline left by cin
        cin.ignore();

        // Input passenger name
        cout << "Enter " << i + 1 << " passenger name: ";
        cin.getline(passengername[i], 50);

        // Input source city
        cout << "Enter " << i + 1 << " passenger source: ";
        cin.getline(source[i], 50);

        // Input destination city
        cout << "Enter " << i + 1 << " passenger destination: ";
        cin.getline(destination[i], 50);

        // Input ticket price
        cout << "Enter ticket price for " << i + 1 << " passenger: ";
        cin >> ticketprice[i];
    }

    // Display ticket records
    cout << "\nTicket Management System\n";

    for(int i = 0; i < n; i++) {

        cout << "\nPassenger " << i + 1 << " Details\n";

        // Display ticket ID
        cout << "Ticket ID: " << ticketid[i] << endl;

        // Display passenger name
        cout << "Passenger Name: " << passengername[i] << endl;

        // Display source
        cout << "Source: " << source[i] << endl;

        // Display destination
        cout << "Destination: " << destination[i] << endl;

        // Display ticket price
        cout << "Ticket Price: " << ticketprice[i] << endl;
    }

    return 0;
}