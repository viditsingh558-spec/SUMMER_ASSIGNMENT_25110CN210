#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of books
    cout << "Enter number of books: ";
    cin >> n;

    // Arrays to store book details
    int bookid[n];
    char bookname[100][50];
    char author[100][50];
    int copies[n];

    // Input book records
    for(int i = 0; i < n; i++) {

        // Input book ID
        cout << "Enter book ID of book " << i + 1 << ": ";
        cin >> bookid[i];

        // Remove newline left by cin
        cin.ignore();

        // Input book name
        cout << "Enter book name of book " << i + 1 << ": ";
        cin.getline(bookname[i], 50);

        // Input author name
        cout << "Enter author name of book " << i + 1 << ": ";
        cin.getline(author[i], 50);

        // Input number of copies
        cout << "Enter number of copies of book " << i + 1 << ": ";
        cin >> copies[i];
    }

    // Display library records
    cout << "\nMini Library System\n";

    for(int i = 0; i < n; i++) {

        // Display book ID
        cout << "Book ID of book " << i + 1 << ": " << bookid[i] << endl;

        // Display book name
        cout << "Book Name of book " << i + 1 << ": " << bookname[i] << endl;

        // Display author name
        cout << "Author Name of book " << i + 1 << ": " << author[i] << endl;

        // Display number of copies
        cout << "Number of Copies of book " << i + 1 << ": " << copies[i] << endl;
    }

    return 0;
}