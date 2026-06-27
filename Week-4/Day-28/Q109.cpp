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
        cout << "Enter " << i + 1 << " book id: ";
        cin >> bookid[i];

        // Remove newline left by cin
        cin.ignore();

        // Input author name
        cout << "Enter book " << i + 1 << " author name: ";
        cin.getline(author[i], 50);

        // Input book name
        cout << "Enter book " << i + 1 << " name: ";
        cin.getline(bookname[i], 50);

        // Input number of copies
        cout << "Enter number of copies: ";
        cin >> copies[i];
    }

    // Display library records
    cout << "\nLibrary Management System\n";

    for(int i = 0; i < n; i++) {

        cout << "\nBook " << i + 1 << " Details" << endl;

        // Display book ID
        cout << "Book ID: " << bookid[i] << endl;

        // Display book name
        cout << "Book Name: " << bookname[i] << endl;

        // Display author name
        cout << "Author Name: " << author[i] << endl;

        // Display available copies
        cout << "Number of Copies: " << copies[i] << endl;
    }

    return 0;
}