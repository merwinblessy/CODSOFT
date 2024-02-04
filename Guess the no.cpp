GUESS THE NUMBER


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;

    cout << "Welcome to Guess the number Game\n";
    cout << "Try guessing the secret number within 5 attempts to win the game\n";

    int userGuess;
    int attempts = 0;
    const int maxAttempts = 5;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;
        if (userGuess == secretNumber) {
            cout << "Congratulations! You win the game🥳"<< endl;
            break;
        } else if (attempts == maxAttempts) {
            cout << "Sorry! You've run out of live 💔😓.\n";
            cout << "The secret number was: " << secretNumber << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }

    return 0;
}

