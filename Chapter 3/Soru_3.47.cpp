#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int difficulty, problemType, num1, num2, answer, correctAnswer;
    
    cout << "Enter the difficulty level (1: 1-Digit, 2: 2-Digit): ";
    cin >> difficulty;

    cout << "Choose Question Type (1: Addition, 2: Substraction, 3: Multiplication, 4: Division, 5: Mix): ";
    cin >> problemType;

    num1 = (difficulty == 1) ? rand() % 10 : rand() % 100;
    num2 = (difficulty == 1) ? rand() % 10 : rand() % 100;

    switch (problemType) {
        case 1:
            cout << num1 << " + " << num2 << " = ";
            correctAnswer = num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = ";
            correctAnswer = num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = ";
            correctAnswer = num1 * num2;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = ";
            correctAnswer = num1 / num2;
            break;
        default:
            cout << "Invalid Option";
            return 0;
    }

    cin >> answer;
    cout << ((answer == correctAnswer) ? "True!" : "False!") << endl;

    return 0;
}
