#include <iostream>

int main() {
    int sayi1, sayi2;

    std::cout << "Iki tam sayı girin: ";
    std::cin >> sayi1 >> sayi2;

    if (sayi1 > sayi2) {
        std::cout << sayi1 << " daha buyuktur." << std::endl;
    }
    else if (sayi2 > sayi1) {
        std::cout << sayi2 << " daha buyuktur." << std::endl;
    }
    else {
        std::cout << "Bu sayılar esittir." << std::endl;
    }

    return 0;
}
