#include <iostream>

int main() {
    std::cout << "Iki sayi giriniz" << std::endl;

    int a, b, c;
    std::cout << "Uc tamsayi degeri giriniz: ";
    std::cin >> b >> c;

    a = b * c;

    std::cout << "Bu program, ornek bir bordro hesaplamasi yapar." << std::endl;
    std::cout << "b ve c'nin carpimi: " << a << std::endl;

    return 0;
}