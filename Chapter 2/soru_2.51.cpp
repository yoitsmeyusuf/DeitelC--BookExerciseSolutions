#include <iostream>
#include <cmath>

int main() {
    int principal = 100000;
    int rate = 5;
    int amount;

    std::cout << "Year\tAmount on deposit\n";

    for (int year = 1; year <= 10; ++year) {
        amount = principal * pow(1 + rate / 100.0, year);
        int dollars = amount / 100;
        int cents = amount % 100;
        std::cout << year << "\t" << dollars << '.' << (cents < 10 ? "0" : "") << cents << '\n';
    }

    return 0;
}