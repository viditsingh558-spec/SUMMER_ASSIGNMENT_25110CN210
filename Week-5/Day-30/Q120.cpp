#include <iostream>
using namespace std;

// Structure to store movie ticket details
struct MovieTicket {
    int ticketid;
    string customername;
    string moviename;
    int seatnumber;
    float ticketprice;
};

// Function to input movie ticket details
void inputMovie(MovieTicket ticket[], int n) {

    for(int i = 0; i < n; i++) {

        // Input ticket ID
        cout << "Enter ticket ID of customer " << i + 1 << ": ";
        cin >> ticket[i].ticketid;

        // Remove newline left by cin
        cin.ignore();

        // Input customer name
        cout << "Enter customer name of customer " << i + 1 << ": ";
        getline(cin, ticket[i].customername);

        // Input movie name
        cout << "Enter movie name of customer " << i + 1 << ": ";
        getline(cin, ticket[i].moviename);

        // Input seat number
        cout << "Enter seat number of customer " << i + 1 << ": ";
        cin >> ticket[i].seatnumber;

        // Input ticket price
        cout << "Enter ticket price of customer " << i + 1 << ": ";
        cin >> ticket[i].ticketprice;
    }
}

// Function to display movie ticket details
void displayMovie(MovieTicket ticket[], int n) {

    cout << "\nMovie Ticket Booking System\n";

    for(int i = 0; i < n; i++) {

        cout << "\nCustomer " << i + 1 << endl;

        // Display ticket ID
        cout << "Ticket ID: " << ticket[i].ticketid << endl;

        // Display customer name
        cout << "Customer Name: " << ticket[i].customername << endl;

        // Display movie name
        cout << "Movie Name: " << ticket[i].moviename << endl;

        // Display seat number
        cout << "Seat Number: " << ticket[i].seatnumber << endl;

        // Display ticket price
        cout << "Ticket Price: " << ticket[i].ticketprice << endl;
    }
}

int main() {
    int n;

    // Input number of customers
    cout << "Enter number of viewers: ";
    cin >> n;

    // Array of structures
    MovieTicket ticket[n];

    // Function calls
    inputMovie(ticket, n);
    displayMovie(ticket, n);

    return 0;
}