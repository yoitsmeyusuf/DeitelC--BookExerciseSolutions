#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    // Read five numbers from the user
    cout << "Enter five numbers (each between 1 and 30): ";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    // Print the corresponding number of asterisks for each number
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < numbers[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}