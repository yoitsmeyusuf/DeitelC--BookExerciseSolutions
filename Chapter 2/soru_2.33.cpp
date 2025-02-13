#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double diameter = 2 * radius;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}