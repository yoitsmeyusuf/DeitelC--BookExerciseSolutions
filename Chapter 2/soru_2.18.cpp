#include <iostream>
using namespace std;

int main() {
    double grossSales;
    const double basePay = 200.0;
    const double commissionRate = 0.09;

    while (true) {
        cout << "Enter gross sales in dollars (-1 to end): ";
        cin >> grossSales;

        if (grossSales == -1) {
            break;
        }

        double earnings = basePay + (commissionRate * grossSales);
        cout << "Salesperson's earnings: $" << earnings << endl;
    }

    return 0;
}