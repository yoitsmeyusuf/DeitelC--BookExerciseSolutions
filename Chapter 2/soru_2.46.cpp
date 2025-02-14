#include <iostream>
#include <cmath>

int main() {
    double principal = 1000.0; // initial amount before interest
    int years = 10; // number of years for interest

    // loop through interest rates from 5% to 10%
    for (int rate = 5; rate <= 10; ++rate) {
        double rate_decimal = rate / 100.0;
        std::cout << "Interest rate: " << rate << "%" << std::endl;
        std::cout << "Year\tAmount on deposit" << std::endl;

        // calculate amount on deposit for each year
        for (int year = 1; year <= years; ++year) {
            double amount = principal * std::pow(1.0 + rate_decimal, year);
            std::cout << year << "\t" << amount << std::endl;
        }

        std::cout << std::endl; // blank line between interest rates
    }

    return 0;
}
