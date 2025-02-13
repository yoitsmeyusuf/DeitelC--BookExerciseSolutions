#include <iostream>

int main() {
    double sayi1, sayi2;

    std::cout << "Iki sayı girin: ";
    std::cin >> sayi1 >> sayi2;

    std::cout << "Toplam: " << sayi1 + sayi2 << std::endl;
    std::cout << "Çarpım: " << sayi1 * sayi2 << std::endl;
    std::cout << "Fark: " << sayi1 - sayi2 << std::endl;

    if (sayi2 != 0) {
        std::cout << "Bolum: " << sayi1 / sayi2 << std::endl;
    }
    else {
        std::cout << "Bolm islemi tanımsız (0'a bolme hatası)" << std::endl;
    }

    return 0;
}