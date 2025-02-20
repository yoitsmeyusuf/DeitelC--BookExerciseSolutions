#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame();


int main() {
    playGame();
    return 0;
}

void playGame() {
    srand(time(0)); 
    int number = rand() % 1000 + 1; 
    int guess, attempts = 0;  

    cout << "I have a number between 1 and 1000.\n"
         << "Can you guess my number?\n"
         << "Please type your first guess." << endl;

    do {
        cin >> guess;
        attempts++;  

        if (guess < number) {
            cout << "Too low. Try again." << endl;
        } else if (guess > number) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Excellent! You guessed the number!" << endl;

            if (attempts == 10) {
                cout << "Ahah! You know the secret!" << endl;
            } else if (attempts < 10) {
                cout << "Either you know the secret or you got lucky!" << endl;
            } else {
                cout << "You should be able to do better! Why should it take no more than 10 guesses?" << endl;
            }
            break;
        }
    } while (true);

    char choice;
    cout << "Would you like to play again (y or n)? ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        playGame();
    }
}

