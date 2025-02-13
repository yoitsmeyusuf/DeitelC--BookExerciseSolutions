#include <iostream>
int main() {
    double hoursWorked, hourlyRate, salary;

    while (true) {
        std::cout << "Enter hours worked (-1 to end): ";
        std::cin >> hoursWorked;

        if (hoursWorked == -1) {
            break;
        }

        std::cout << "Enter hourly rate of the worker ($00.00): ";
        std::cin >> hourlyRate;

        if (hoursWorked <= 40) {
            salary = hoursWorked * hourlyRate;
        } else {
            salary = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
        }

        std::cout << "Salary is $" << salary << std::endl;
    }

    return 0;
}