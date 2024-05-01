//Task 01 - Number Guessing Game
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool guessed = false;

    cout << "Welcome to the Number Guessing Game!" << endl<<"\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Start the guessing loop
    while (!guessed) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        // Compare the guess with the secret number
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            guessed = true;
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly in " << attempts << " attempts!" << endl;
        }
    }

    return 0;
}
