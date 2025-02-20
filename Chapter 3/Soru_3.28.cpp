#include <iostream>
using namespace std;

double smallest(double a, double b, double c) {
    double min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    double num1, num2, num3;
    cout << "Enter three double-precision floating-point numbers: ";
    cin >> num1 >> num2 >> num3;

    double result = smallest(num1, num2, num3);
    cout << "The smallest number is: " << result << endl;

    return 0;
}