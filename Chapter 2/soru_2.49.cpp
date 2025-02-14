#include <iostream>

int main() {
    int productNumber;
    int quantitySold;
    double totalRetailValue = 0.0;

    std::cout << "Enter product number (1-5) and quantity sold (0 to end): ";

    while (std::cin >> productNumber >> quantitySold && productNumber != 0) {
        double price = 0.0;

        switch (productNumber) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                std::cout << "Invalid product number. Please enter a number between 1 and 5." << std::endl;
                continue;
        }

        totalRetailValue += price * quantitySold;
        std::cout << "Enter product number (1-5) and quantity sold (0 to end): ";
    }

    std::cout << "Total retail value of all products sold: $" << totalRetailValue << std::endl;

    return 0;
}
