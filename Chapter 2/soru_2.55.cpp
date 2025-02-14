#include <iostream>

int main() {
    const int limit = 500;

    for (int side1 = 1; side1 <= limit; ++side1) {
        for (int side2 = side1; side2 <= limit; ++side2) {
            for (int hypotenuse = side2; hypotenuse <= limit; ++hypotenuse) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    std::cout << "Pythagorean triple: " << side1 << ", " << side2 << ", " << hypotenuse << std::endl;
                }
            }
        }
    }

    return 0;
}