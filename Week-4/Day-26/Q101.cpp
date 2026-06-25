#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {

    // Seed the random number generator using current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int number = rand() % 100 + 1;

    int guess = 0;     // Stores user's guess
    int attempt = 0;   // Counts number of attempts

    // Repeat until the correct number is guessed
    do {

        cout << "Enter Guess (1-100): ";
        cin >> guess;

        // Increase attempt count
        attempt++;

        // Check whether the guess is too high
        if (guess > number) {
            cout << "Too high! Try a smaller number." << endl;
        }

        // Check whether the guess is too low
        else if (guess < number) {
            cout << "Too low! Try a larger number." << endl;
        }

        // Correct guess
        else {
            cout << "You won!" << endl;
        }

    } while (guess != number);

    // Display total attempts
    cout << "You guessed the number in "
         << attempt
         << " attempts.";

    return 0;
}