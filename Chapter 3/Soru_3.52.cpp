#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    cout << fixed << setprecision(4); 


    cout << "sqrt(x):\n";
    for (double x = 0; x <= 10; x += 2)
        cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << endl;

    cout << "exp(x):\n";
    for (double x = -2; x <= 2; x += 1)
        cout << "exp(" << x << ") = " << exp(x) << endl;
    cout << endl;

    cout << "log(x):\n";
    for (double x = 1; x <= 10; x += 2)
        cout << "log(" << x << ") = " << log(x) << endl;
    cout << endl;

    cout << "log10(x):\n";
    for (double x = 1; x <= 1000; x *= 10)
        cout << "log10(" << x << ") = " << log10(x) << endl;
    cout << endl;
    
    cout << "pow(x, y):\n";
    for (int x = 2; x <= 4; ++x)
        for (int y = 1; y <= 3; ++y)
            cout << "pow(" << x << ", " << y << ") = " << pow(x, y) << endl;
    cout << endl;

    cout << "Trigonometric Functions (sin, cos, tan):\n";
    for (double x = 0; x <= 3.14; x += 1.57) {
        cout << "sin(" << x << ") = " << sin(x) << ", ";
        cout << "cos(" << x << ") = " << cos(x) << ", ";
        cout << "tan(" << x << ") = " << tan(x) << endl;
    }
    cout << endl;

    cout << "ceil(x) and floor(x):\n";
    for (double x = 1.2; x <= 2.8; x += 0.4)
        cout << "ceil(" << x << ") = " << ceil(x) << ", floor(" << x << ") = " << floor(x) << endl;
    cout << endl;

    cout << "fabs(x):\n";
    for (double x = -3; x <= 3; x += 1)
        cout << "fabs(" << x << ") = " << fabs(x) << endl;
    cout << endl;

    cout << "fmod(x, y):\n";
    for (double x = 10.5; x <= 12.5; x += 1)
        cout << "fmod(" << x << ", 3.0) = " << fmod(x, 3.0) << endl;
    cout << endl;

    return 0;
}
