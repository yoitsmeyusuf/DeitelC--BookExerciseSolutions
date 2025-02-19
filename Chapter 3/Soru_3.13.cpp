#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Enter numbers to round (type 'q' to quit):" << std::endl;

    while (std::cin >> x) {
        double y = floor(x + 0.5);
        std::cout << "Original number: " << x << ", Rounded number: " << y << std::endl;
    }

    return 0;
}