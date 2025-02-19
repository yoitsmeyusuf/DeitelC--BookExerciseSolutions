#include <iostream>
#include <iomanip>

double calculateCharges(double hours) {
    if (hours <= 3.0) {
        return 2.00;
    } else if (hours <= 24.0) {
        double charge = 2.00 + 0.50 * (hours - 3.0);
        return (charge > 10.00) ? 10.00 : charge;
    }
    return 10.00; // Maximum charge for 24 hours
}

int main() {
    double hours[3];
    double charges[3];
    double totalHours = 0.0;
    double totalCharges = 0.0;

    std::cout << "Enter hours parked for each of the three customers:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "Customer " << i + 1 << ": ";
        std::cin >> hours[i];
        charges[i] = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nCar\tHours\tCharge\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << i + 1 << "\t" << hours[i] << "\t" << charges[i] << "\n";
    }
    std::cout << "TOTAL\t" << totalHours << "\t" << totalCharges << "\n";

    return 0;
}