#include <iostream>
using namespace std;

int main() {

    srand(time(0));

   
    int secretNumber = rand()%10 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to  Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
