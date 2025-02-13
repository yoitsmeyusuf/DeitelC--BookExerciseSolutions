#include <iostream>
using namespace std;

int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    while (true) {
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = beginningBalance + totalCharges - totalCredits;

        cout << "Account: " << accountNumber << endl;
        cout << "Credit limit: " << creditLimit << endl;
        cout << "Balance: " << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << endl;
    }

    return 0;
}