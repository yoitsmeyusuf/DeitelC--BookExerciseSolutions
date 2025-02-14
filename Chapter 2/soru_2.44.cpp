#include <iostream>

int main() {
    int product = 1;

    for (int i = 1; i <= 15; i += 2) {
        product *= i;
    }

    std::cout << "The product of the odd integers from 1 to 15 is: " << product << std::endl;

    return 0;
}