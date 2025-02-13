#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to encrypt a number or 2 to decrypt a number: ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice." << endl;
        return 1;
    }

    if (choice == 1) {
        int number;
        cout << "Enter a four-digit integer: ";
        cin >> number;

        int d1 = (number / 1000) % 10;
        int d2 = (number / 100) % 10;
        int d3 = (number / 10) % 10;
        int d4 = number % 10;

        d1 = (d1 + 7) % 10;
        d2 = (d2 + 7) % 10;
        d3 = (d3 + 7) % 10;
        d4 = (d4 + 7) % 10;

        cout << "Encrypted number: " << d1 << d2 << d3 << d4 << endl;
    } else {
        int number;
        cout << "Enter a four-digit integer: ";
        cin >> number;

        int d1 = (number / 1000) % 10;
        int d2 = (number / 100) % 10;
        int d3 = (number / 10) % 10;
        int d4 = number % 10;

        d1 = (d1 + 3) % 10;
        d2 = (d2 + 3) % 10;
        d3 = (d3 + 3) % 10;
        d4 = (d4 + 3) % 10;

        cout << "Decrypted number: " << d1 << d2 << d3 << d4 << endl;
    }

    return 0;
}
