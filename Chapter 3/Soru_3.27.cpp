#include <iostream>
#include <iomanip>

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    std::cout << std::fixed << std::setprecision(2);

    // Print Celsius to Fahrenheit chart
    std::cout << "Celsius to Fahrenheit Chart:\n";
    std::cout << "Celsius\tFahrenheit\n";
    for (int c = 0; c <= 100; ++c) {
        std::cout << c << "\t" << fahrenheit(c) << "\n";
    }

    std::cout << "\n";

    // Print Fahrenheit to Celsius chart
    std::cout << "Fahrenheit to Celsius Chart:\n";
    std::cout << "Fahrenheit\tCelsius\n";
    for (int f = 32; f <= 212; ++f) {
        std::cout << f << "\t\t" << celsius(f) << "\n";
    }

    return 0;
}