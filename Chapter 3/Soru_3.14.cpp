#include <iostream>
#include <cmath>

using namespace std;

double roundToInteger(double number) {
    return floor(number + 0.5);
}

double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Original number: " << number << endl;
    cout << "Rounded to nearest integer: " << roundToInteger(number) << endl;
    cout << "Rounded to nearest tenth: " << roundToTenths(number) << endl;
    cout << "Rounded to nearest hundredth: " << roundToHundredths(number) << endl;
    cout << "Rounded to nearest thousandth: " << roundToThousandths(number) << endl;

    return 0;
}