#include <iostream>

void displaySquare(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main() {
    int side;
    std::cout << "Enter the side length of the square: ";
    std::cin >> side;
    displaySquare(side);
    return 0;
}