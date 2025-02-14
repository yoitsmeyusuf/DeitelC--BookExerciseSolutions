#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Enter the number of terms (n) to approximate e^x: ";
    cin >> n;

    double result = 0.0;
    double term = 1.0;       // x^0 = 1
    double factorial = 1.0;  // 0! = 1
    int i = 0;

    while (i <= n) {
        // Her adımda result'a term/factorial ekliyoruz
        result += term / factorial;

        // Bir sonraki terim ve faktöriyel için hazırlık
        i++;
        term *= x;        // x^i
        factorial *= i;   // i!
    }

    cout << "Approximation of e^" << x 
         << " using " << n + 1 << " terms: " << result << endl;

    return 0;
}
