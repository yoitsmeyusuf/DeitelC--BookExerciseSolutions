#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRandomResponse();
void printResponse(bool correct);

int main() {
    srand(time(0));  

    int correctAnswers = 0, incorrectAnswers = 0;

    for (int i = 0; i < 10; i++) {
        int num1 = 1 + rand() % 10;  
        int num2 = 1 + rand() % 10;  
        int userAnswer;

        cout << "How much is " << num1 << " times " << num2 << "? ";
        cin >> userAnswer;

        if (userAnswer == num1 * num2) {
            correctAnswers++;
            printResponse(true);
        } else {
            incorrectAnswers++;
            printResponse(false);
        }
    }

    double percentage = (correctAnswers / 10.0) * 100;
    cout << "\nYou answered " << correctAnswers << " correctly and " << incorrectAnswers << " incorrectly.\n";
    cout << "Your score: " << percentage << "%\n";

    if (percentage < 75) {
        cout << "Please ask your instructor for extra help.\n";
    }

    return 0;
}
void printResponse(bool correct) {
    int response = getRandomResponse();

    if (correct) {
        switch (response) {
            case 1: cout << "Very good!\n"; break;
            case 2: cout << "Excellent!\n"; break;
            case 3: cout << "Nice work!\n"; break;
            case 4: cout << "Keep up the good work!\n"; break;
        }
    } else {
        switch (response) {
            case 1: cout << "No. Please try again.\n"; break;
            case 2: cout << "Wrong. Try once more.\n"; break;
            case 3: cout << "Don't give up!\n"; break;
            case 4: cout << "No. Keep trying.\n"; break;
        }
    }
}


int getRandomResponse() {
    return 1 + rand() % 4;
}
