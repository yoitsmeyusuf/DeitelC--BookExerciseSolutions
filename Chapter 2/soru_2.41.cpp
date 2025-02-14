#include <iostream>

int main() {
    int sum = 0;
    int count = 0;
    int number;

    std::cout << "Enter integers (9999 to end): ";

    for (;;) {
        std::cin >> number;
        if (number == 9999) {
            break;
        }
        sum += number;
        count++;
    }

    if (count != 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "The average is: " << average << std::endl;
    } else {
        std::cout << "No numbers were entered." << std::endl;
    }

    return 0;
}