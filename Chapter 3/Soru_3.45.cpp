#include <iostream>

using namespace std;

int gcd(int x, int y);

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "GCD(" << x << ", " << y << ") = " << gcd(x, y) << endl;

    return 0;
}

int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
