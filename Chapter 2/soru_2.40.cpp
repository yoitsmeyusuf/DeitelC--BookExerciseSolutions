#include <iostream>

int main() {
    int numberOfValues, value, sum = 0;

    std::cout << "Enter the number of values to sum: ";
    std::cin >> numberOfValues;

    for (int i = 0; i < numberOfValues; ++i) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> value;
        sum += value;
    }

    std::cout << "The sum of the values is: " << sum << std::endl;

    return 0;
}