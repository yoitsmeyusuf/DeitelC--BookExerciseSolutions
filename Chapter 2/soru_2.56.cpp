#include <iostream>
using namespace std;

int main() {
    int payCode;
    double weeklyPay;

    while (true) {
        cout << "Enter employee pay code (1 for Manager, 2 for Hourly Worker, 3 for Commission Worker, 4 for Pieceworker, -1 to end): ";
        cin >> payCode;

        if (payCode == -1) {
            break;
        }

        switch (payCode) {
            case 1: {
                double fixedSalary;
                cout << "Enter the fixed weekly salary for the manager: ";
                cin >> fixedSalary;
                weeklyPay = fixedSalary;
                break;
            }
            case 2: {
                double hourlyWage;
                int hoursWorked;
                cout << "Enter the hourly wage for the hourly worker: ";
                cin >> hourlyWage;
                cout << "Enter the number of hours worked: ";
                cin >> hoursWorked;
                if (hoursWorked <= 40) {
                    weeklyPay = hourlyWage * hoursWorked;
                } else {
                    weeklyPay = (hourlyWage * 40) + ((hoursWorked - 40) * hourlyWage * 1.5);
                }
                break;
            }
            case 3: {
                double grossSales;
                cout << "Enter the gross weekly sales for the commission worker: ";
                cin >> grossSales;
                weeklyPay = 250 + (0.057 * grossSales);
                break;
            }
            case 4: {
                double payPerItem;
                int itemsProduced;
                cout << "Enter the pay per item for the pieceworker: ";
                cin >> payPerItem;
                cout << "Enter the number of items produced: ";
                cin >> itemsProduced;
                weeklyPay = payPerItem * itemsProduced;
                break;
            }
            default:
                cout << "Invalid pay code entered. Please try again." << endl;
                continue;
        }

        cout << "The weekly pay for the employee is: $" << weeklyPay << endl;
    }

    return 0;
}