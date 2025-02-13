#include <iostream>

int main() {
    std::cout << "A: " << static_cast<int>('A') << std::endl;
    std::cout << "B: " << static_cast<int>('B') << std::endl;
    std::cout << "C: " << static_cast<int>('C') << std::endl;
    std::cout << "a: " << static_cast<int>('a') << std::endl;
    std::cout << "b: " << static_cast<int>('b') << std::endl;
    std::cout << "c: " << static_cast<int>('c') << std::endl;
    std::cout << "0: " << static_cast<int>('0') << std::endl;
    std::cout << "1: " << static_cast<int>('1') << std::endl;
    std::cout << "2: " << static_cast<int>('2') << std::endl;
    std::cout << "5: " << static_cast<int>('5') << std::endl;
    std::cout << "+: " << static_cast<int>('+') << std::endl;
    std::cout << "*: " << static_cast<int>('*') << std::endl;
    std::cout << "/: " << static_cast<int>('/') << std::endl;
    std::cout << "Bosluk: " << static_cast<int>(' ') << std::endl;

    return 0;
}
