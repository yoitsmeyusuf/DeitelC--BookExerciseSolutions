#include <iostream>

using namespace std;

inline double circleArea(double radius) ;

int main() {
    double radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area = circleArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

inline double circleArea(double radius) {
    return 3.14159 * radius * radius; 
}