#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three nonzero double values: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            cout << "The values represent the sides of a triangle." << endl;
        } else {
            cout << "The values do not represent the sides of a triangle." << endl;
        }
    } else {
        cout << "All values must be nonzero and positive." << endl;
    }

    return 0;
}
