#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool playCraps();
int rollDice();

int main() {
    srand(time(0)); 

    int bankBalance = 1000; 
    int wager;
    
    while (bankBalance > 0) {
        cout << "You have $" << bankBalance << " in your account." << endl;
        cout << "Enter your wager: $";
        cin >> wager;

        while (wager <= 0 || wager > bankBalance) {
            cout << "Invalid wager. Please enter a wager less than or equal to your balance: $";
            cin >> wager;
        }

        if (wager == bankBalance) {
            cout << "Whoa, you're going for broke, huh?" << endl;
        } else if (wager > 500) {
            cout << "Aw c'mon, take a chance!" << endl;
        } else if (wager < 100) {
            cout << "You're playing it safe today, huh?" << endl;
        } else {
            cout << "You sure you're ready for this?" << endl;
        }

        bool playerWon = playCraps();

        if (playerWon) {
            bankBalance += wager;
            cout << "You won! Your new balance is $" << bankBalance << endl;
        } else {
            bankBalance -= wager;
            cout << "You lost! Your new balance is $" << bankBalance << endl;
        }

        if (bankBalance == 0) {
            cout << "Sorry. You busted!" << endl;
            break;
        }
    }

    return 0;
}

bool playCraps() {
    int sum = rollDice();
    
    if (sum == 7 || sum == 11) {
        return true; 
    } else if (sum == 2 || sum == 3 || sum == 12) {
        return false; 
    } else {
        int point = sum;
        cout << "Your point is " << point << endl;

        while (true) {
            sum = rollDice();
            
            if (sum == point) {
                return true;
            } else if (sum == 7) {
                return false;
            }
        }
    }
}

int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}
