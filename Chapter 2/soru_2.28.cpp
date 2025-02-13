#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the side of the square (1-20): ";
    std::cin >> size;

    if (size < 1 || size > 20) {
        std::cout << "Size must be between 1 and 20." << std::endl;
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}