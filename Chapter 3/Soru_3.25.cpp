#include <iostream>
using namespace std;


int calculateQuotient(int a, int b) {
    return a / b;
}


int calculateRemainder(int a, int b) {
    return a % b;
}

void printSeparatedDigits(int number) {
    if (number < 1 || number > 32767) {
        cout << "Number out of range!" << endl;
        return;
    }

    string numberStr = to_string(number);
    for (size_t i = 0; i < numberStr.length(); ++i) {
        cout << numberStr[i];
        if (i != numberStr.length() - 1) {
            cout << "  ";
        }
    }
    cout << endl;
}

int main() {
    int a = 10, b = 3;
    cout << "Quotient: " << calculateQuotient(a, b) << endl;
    cout << "Remainder: " << calculateRemainder(a, b) << endl;

    int number;
    cout << "Enter an integer between 1 and 32767: ";
    cin >> number;
    printSeparatedDigits(number);

    return 0;
}