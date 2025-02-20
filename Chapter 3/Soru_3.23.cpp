#include <iostream>

void printSquare(int side, char fillCharacter) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            std::cout << fillCharacter;
        }
        std::cout << std::endl;
    }
}

int main() {
    int side;
    char fillCharacter;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    std::cout << "Enter the fill character: ";
    std::cin >> fillCharacter;

    printSquare(side, fillCharacter);

    return 0;
}