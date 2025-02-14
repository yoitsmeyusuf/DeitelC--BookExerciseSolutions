#include <iostream>

int main() {
    int counter = 10;
    char grade;
    int totalPoints = 0;
    int points;

    for (int i = 0; i < counter; i++) {
        std::cout << "Enter grade (A, B, C, D, F): ";
        std::cin >> grade;

        switch (grade) {
            case 'A':
            case 'a':
                points = 4;
                break;
            case 'B':
            case 'b':
                points = 3;
                break;
            case 'C':
            case 'c':
                points = 2;
                break;
            case 'D':
            case 'd':
                points = 1;
                break;
            case 'F':
            case 'f':
                points = 0;
                break;
            default:
                std::cout << "Invalid grade entered. Please enter a valid grade." << std::endl;
                i--; 
                continue;
        }

        totalPoints += points;
    }

    double gpa = static_cast<double>(totalPoints) / counter;
    std::cout << "The grade-point average (GPA) is: " << gpa << std::endl;

    return 0;
}