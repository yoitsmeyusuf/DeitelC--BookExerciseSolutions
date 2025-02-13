#include <iostream>

int main() {
    double PI = 3.14159;
    int yaricap;
    
    std::cout << "Cemberin yarıcapını girin: ";
    std::cin >> yaricap;

    std::cout << "Cap: " << 2 * yaricap << std::endl;
    std::cout << "Cevre: " << 2 * PI * yaricap << std::endl;
    std::cout << "Alan: " << PI * yaricap * yaricap << std::endl;

    return 0;
}
